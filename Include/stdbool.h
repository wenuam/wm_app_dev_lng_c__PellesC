#ifndef _STDBOOL_H
#define _STDBOOL_H

/* stdbool.h - standard header */

#if __POCC__ >= 500
#pragma once
#endif

/* macros */
#if __POCC_STDC_VERSION__ < 202311L
#define false  0
#define true  1
#define bool  _Bool
#endif /* __POCC_STDC_VERSION__ < 202311L */
#define __bool_true_false_are_defined  1

#endif /* _STDBOOL_H */
