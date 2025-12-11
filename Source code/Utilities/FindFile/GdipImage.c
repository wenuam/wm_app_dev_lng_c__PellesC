/****************************************************************************
 *																			*
 * File    : GdipImage.c7													*
 *																			*
 * Purpose : Minimum implementation of GdiPlus that allows the loading and	*
 *			 rendering of image files in the preview plane.					*
 *																			*
 ****************************************************************************/

#include "GdipImage.h"

GP_IMAGE gpimage = {0};
GP_GRAPHICS gpgraphics = {0};

GP_GRAPHICS GpGraphics_FromHDC(HDC hdc)
{
	static GP_GRAPHICS this;
	static GP_GPGRAPHICS *graphics = NULL;
	this.lastResult = GdipCreateFromHDC(hdc, &graphics);
	this.nativeGraphics = graphics;
	return this;
}

GpStatus GpGraphics_DrawImage4I(GP_GRAPHICS * this, GP_IMAGE * image, INT x, INT y, INT width, INT height)
{
	return (this->lastResult = GdipDrawImageRectI(this->nativeGraphics,
							   image->nativeImage, x, y, width, height));
}

UINT GpImage_GetHeight(GP_IMAGE * this)
{
	UINT height = 0;
	this->lastResult = GdipGetImageHeight(this->nativeImage, &height);
	return height;
}

UINT GpImage_GetWidth(GP_IMAGE * this)
{
	UINT width = 0;
	this->lastResult = GdipGetImageWidth(this->nativeImage, &width);
	return width;
}

VOID GpImage_Delete(GP_IMAGE * this)
{
	if(this->nativeImage)
	{
		GdipDisposeImage(this->nativeImage);
		this->nativeImage = 0;
	}
}

VOID GpGraphics_Delete(GP_GRAPHICS * this)
{
	if(this->nativeGraphics)
	{
		GdipDeleteGraphics(this->nativeGraphics);
		this->nativeGraphics = 0;
	}
}

GP_IMAGE GpImage_FromFile(const wchar_t * filename, BOOL useEmbeddedColorManagement)
{
	GP_IMAGE this;
	this.nativeImage = NULL;
	if (useEmbeddedColorManagement)
	{
		this.lastResult = GdipLoadImageFromFileICM(filename, &this.nativeImage);
	}
	else
	{
		this.lastResult = GdipLoadImageFromFile(filename, &this.nativeImage);
	}
	return this;
}

int GdiPlusLoadImage(const wchar_t * filename)
{
	if(filename[0] == 0)
	{
		return 1;
	}

	gpimage = GpImage_FromFile(filename, FALSE);
	if(gpimage.nativeImage != NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void GdiPlusDrawImage(HDC hdc, const RECT * rc, BOOL fit)
{
	gpgraphics = GpGraphics_FromHDC(hdc);

	long nWidth  = GpImage_GetWidth(&gpimage);
	long nHeight = GpImage_GetHeight(&gpimage);

	float ratio;

	if(fit)
	{
		if(nWidth > nHeight && nWidth > rc->right)
		{
			ratio = nWidth/(float)rc->right;
			nWidth = rc->right;
			nHeight /= (long int)ratio;
		}
		else if(nHeight > nWidth && nHeight > rc->bottom)
		{
			ratio = nHeight/(float)rc->bottom;
			nHeight = rc->bottom;
			nWidth /= (long int)ratio;
		}
		else if(nHeight == nWidth && nWidth > rc->right)
		{
			ratio = nWidth/(float)rc->right;
			nWidth = rc->right;
			nHeight /= (long int)ratio;
		}
	}

	GpGraphics_DrawImage4I(&gpgraphics, &gpimage, rc->top, rc->left, nWidth - rc->left, nHeight - rc->top);
}

void GdiPLusDelete(void)
{
	GpImage_Delete(&gpimage);
	GpGraphics_Delete(&gpgraphics);
}
