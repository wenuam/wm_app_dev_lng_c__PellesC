The POINST Wizard is a tool for quickly creating POINST scripts based on menu selections, and a drag-n-drop tree structure for organizing files into installation sections. Wizard configurations can be saved into project files and recalled later. POINST scripts can be saved as is, modified, or compiled on the fly into an installer.

**To use:**<br>
First run the installer "POINST Wizard Setup.exe", and then install it in the IDE like this:<br>
Choose **Tools** -> **Customize** and click the **New tool** button. Enter the menu text, for example "POINST Wizard". Enter the command: "<install path>Poinst Wizard.exe". Click OK.

**Author**: David MacDermot

Updated March 7, 2009<br>
1. Fixed a bug where background radiant settings erased when color picker dialog canceled.
2. Added a button to compile saved scripts (without the need to load a project.)

Updated June 17, 2009<br>
1. Reworked the code in TabCtrl.c to improve tabbing within the tab pages of the wizard. Now keyboard tabbing and arrow behavior resembles more closely the behavior found in standard Microsoft applications.
2. Fixed mouse click behavior in tabs.
3. Rewrote the help file and included a context help button to display the help file (F1 will display it too.)
4. As allways source code is included as an option in this installer.

Updated April, 2011<br>
The POINST Wizard is rewritten from the ground up, designed to be user friendly and intuitive.<br>
It features a new property grid, improved tool tips, improved file tree, and help file. It also includes script support for all of the Deployment UI pages.<br>
Source code is this time licensed under the terms of the Code Project Open License.

Updated November 24, 2013<br>
Fixed problem running on Windows 7. Also fixed a few other minor bugs. Tested successfully on Windows XP, Windows 7 and Windows 8.

**Updated December 1, 2013**<br>
Fixed a bug in the property grid of the wizard where entered text might not be updated correctly if the user re-sized the application during an edit.<br>
Improved drag-drop support should the application be run in windows Vista.
