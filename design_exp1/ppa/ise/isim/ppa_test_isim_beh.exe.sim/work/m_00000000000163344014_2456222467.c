/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {1, 0};
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {3, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {14, 0};
static int ng8[] = {13, 0};
static int ng9[] = {12, 0};
static int ng10[] = {11, 0};
static int ng11[] = {10, 0};
static int ng12[] = {9, 0};
static int ng13[] = {8, 0};
static int ng14[] = {7, 0};
static int ng15[] = {30, 0};
static int ng16[] = {29, 0};
static int ng17[] = {28, 0};
static int ng18[] = {27, 0};
static int ng19[] = {26, 0};
static int ng20[] = {25, 0};
static int ng21[] = {24, 0};
static int ng22[] = {23, 0};
static int ng23[] = {22, 0};
static int ng24[] = {21, 0};
static int ng25[] = {20, 0};
static int ng26[] = {19, 0};
static int ng27[] = {18, 0};
static int ng28[] = {17, 0};
static int ng29[] = {16, 0};
static int ng30[] = {15, 0};



static void Gate_68_0(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19048);
    xsi_driver_vfirst_trans(t27, 96, 96);
    t28 = (t0 + 18056);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_1(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19112);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19112);
    xsi_driver_vfirst_trans(t27, 66, 66);
    t28 = (t0 + 18072);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_2(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19176);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19176);
    xsi_driver_vfirst_trans(t27, 65, 65);
    t28 = (t0 + 18088);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_3(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19240);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19240);
    xsi_driver_vfirst_trans(t27, 64, 64);
    t28 = (t0 + 18104);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_4(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19304);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19304);
    xsi_driver_vfirst_trans(t27, 38, 38);
    t28 = (t0 + 18120);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_5(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19368);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19368);
    xsi_driver_vfirst_trans(t27, 37, 37);
    t28 = (t0 + 18136);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_6(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19432);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19432);
    xsi_driver_vfirst_trans(t27, 36, 36);
    t28 = (t0 + 18152);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_7(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19496);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19496);
    xsi_driver_vfirst_trans(t27, 35, 35);
    t28 = (t0 + 18168);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_8(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19560);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19560);
    xsi_driver_vfirst_trans(t27, 34, 34);
    t28 = (t0 + 18184);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_9(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19624);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19624);
    xsi_driver_vfirst_trans(t27, 33, 33);
    t28 = (t0 + 18200);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_10(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19688);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19688);
    xsi_driver_vfirst_trans(t27, 32, 32);
    t28 = (t0 + 18216);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_11(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19752);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19752);
    xsi_driver_vfirst_trans(t27, 14, 14);
    t28 = (t0 + 18232);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_12(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19816);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19816);
    xsi_driver_vfirst_trans(t27, 13, 13);
    t28 = (t0 + 18248);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_13(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19880);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19880);
    xsi_driver_vfirst_trans(t27, 12, 12);
    t28 = (t0 + 18264);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_14(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 19944);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 19944);
    xsi_driver_vfirst_trans(t27, 11, 11);
    t28 = (t0 + 18280);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_15(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20008);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20008);
    xsi_driver_vfirst_trans(t27, 10, 10);
    t28 = (t0 + 18296);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_16(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20072);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20072);
    xsi_driver_vfirst_trans(t27, 9, 9);
    t28 = (t0 + 18312);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_17(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20136);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20136);
    xsi_driver_vfirst_trans(t27, 8, 8);
    t28 = (t0 + 18328);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_18(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 8064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng14)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20200);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20200);
    xsi_driver_vfirst_trans(t27, 7, 7);
    t28 = (t0 + 18344);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_19(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 8312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20264);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20264);
    xsi_driver_vfirst_trans(t27, 6, 6);
    t28 = (t0 + 18360);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_20(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 8560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20328);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20328);
    xsi_driver_vfirst_trans(t27, 5, 5);
    t28 = (t0 + 18376);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_21(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 8808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20392);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20392);
    xsi_driver_vfirst_trans(t27, 4, 4);
    t28 = (t0 + 18392);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_22(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 9056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20456);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20456);
    xsi_driver_vfirst_trans(t27, 3, 3);
    t28 = (t0 + 18408);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_23(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 9304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20520);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20520);
    xsi_driver_vfirst_trans(t27, 2, 2);
    t28 = (t0 + 18424);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_24(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 9552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20584);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20584);
    xsi_driver_vfirst_trans(t27, 1, 1);
    t28 = (t0 + 18440);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_68_25(char *t0)
{
    char t4[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 9800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 20648);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 4);
    t22 = (t11 + 4);
    if (*((unsigned int *)t22) == 1)
        goto LAB4;

LAB5:    t23 = *((unsigned int *)t11);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;

LAB6:    t27 = (t0 + 20648);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t28 = (t0 + 18456);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB6;

}

static void Gate_76_26(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 10048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 20712);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 20712);
    xsi_driver_vfirst_trans(t31, 31, 31);
    t32 = (t0 + 18472);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_27(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 10296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng16)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 30);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 30);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 20776);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 20776);
    xsi_driver_vfirst_trans(t31, 30, 30);
    t32 = (t0 + 18488);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_28(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 10544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng17)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 29);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 29);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 20840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 20840);
    xsi_driver_vfirst_trans(t31, 29, 29);
    t32 = (t0 + 18504);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_29(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 10792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng18)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 28);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 28);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 20904);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 20904);
    xsi_driver_vfirst_trans(t31, 28, 28);
    t32 = (t0 + 18520);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_30(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 11040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng19)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 27);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 27);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 20968);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 20968);
    xsi_driver_vfirst_trans(t31, 27, 27);
    t32 = (t0 + 18536);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_31(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 11288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 26);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 26);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21032);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21032);
    xsi_driver_vfirst_trans(t31, 26, 26);
    t32 = (t0 + 18552);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_32(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 11536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng21)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 25);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 25);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21096);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21096);
    xsi_driver_vfirst_trans(t31, 25, 25);
    t32 = (t0 + 18568);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_33(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 11784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 24);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 24);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21160);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21160);
    xsi_driver_vfirst_trans(t31, 24, 24);
    t32 = (t0 + 18584);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_34(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng23)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 23);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 23);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21224);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21224);
    xsi_driver_vfirst_trans(t31, 23, 23);
    t32 = (t0 + 18600);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_35(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng24)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 22);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 22);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21288);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21288);
    xsi_driver_vfirst_trans(t31, 22, 22);
    t32 = (t0 + 18616);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_36(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng25)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 21);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 21);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21352);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21352);
    xsi_driver_vfirst_trans(t31, 21, 21);
    t32 = (t0 + 18632);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_37(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng26)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 20);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 20);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21416);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21416);
    xsi_driver_vfirst_trans(t31, 20, 20);
    t32 = (t0 + 18648);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_38(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 13024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng27)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 19);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 19);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21480);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21480);
    xsi_driver_vfirst_trans(t31, 19, 19);
    t32 = (t0 + 18664);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_39(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 13272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng28)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 18);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 18);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21544);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21544);
    xsi_driver_vfirst_trans(t31, 18, 18);
    t32 = (t0 + 18680);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_40(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 13520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng29)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 17);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 17);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21608);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21608);
    xsi_driver_vfirst_trans(t31, 17, 17);
    t32 = (t0 + 18696);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_41(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 13768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng30)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 16);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 16);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21672);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21672);
    xsi_driver_vfirst_trans(t31, 16, 16);
    t32 = (t0 + 18712);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_42(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 14016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21736);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21736);
    xsi_driver_vfirst_trans(t31, 15, 15);
    t32 = (t0 + 18728);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_43(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 14264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 14);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 14);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21800);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21800);
    xsi_driver_vfirst_trans(t31, 14, 14);
    t32 = (t0 + 18744);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_44(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 14512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 13);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 13);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21864);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21864);
    xsi_driver_vfirst_trans(t31, 13, 13);
    t32 = (t0 + 18760);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_45(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 14760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 12);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 12);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21928);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21928);
    xsi_driver_vfirst_trans(t31, 12, 12);
    t32 = (t0 + 18776);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_46(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 15008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 11);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 11);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 21992);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 21992);
    xsi_driver_vfirst_trans(t31, 11, 11);
    t32 = (t0 + 18792);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_47(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 15256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 10);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 10);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22056);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22056);
    xsi_driver_vfirst_trans(t31, 10, 10);
    t32 = (t0 + 18808);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_48(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 15504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 9);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 9);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22120);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22120);
    xsi_driver_vfirst_trans(t31, 9, 9);
    t32 = (t0 + 18824);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_49(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 15752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng14)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 8);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 8);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22184);
    xsi_driver_vfirst_trans(t31, 8, 8);
    t32 = (t0 + 18840);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_50(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 16000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22248);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22248);
    xsi_driver_vfirst_trans(t31, 7, 7);
    t32 = (t0 + 18856);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_51(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 16248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 6);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22312);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22312);
    xsi_driver_vfirst_trans(t31, 6, 6);
    t32 = (t0 + 18872);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_52(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 16496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 5);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 5);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22376);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22376);
    xsi_driver_vfirst_trans(t31, 5, 5);
    t32 = (t0 + 18888);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_53(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 16744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 4);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 4);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22440);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22440);
    xsi_driver_vfirst_trans(t31, 4, 4);
    t32 = (t0 + 18904);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_54(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 16992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 3);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22504);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22504);
    xsi_driver_vfirst_trans(t31, 3, 3);
    t32 = (t0 + 18920);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_55(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 17240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22568);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22568);
    xsi_driver_vfirst_trans(t31, 2, 2);
    t32 = (t0 + 18936);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_76_56(char *t0)
{
    char t4[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 17488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t0 + 2080U);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t14, 2, t15, 32, 1);
    t16 = (t0 + 2440U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 1);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t0 + 22632);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_XorGate(t30, 2, t11, t18);
    t31 = (t0 + 22632);
    xsi_driver_vfirst_trans(t31, 1, 1);
    t32 = (t0 + 18952);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Gate_79_57(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 17736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 2440U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 22696);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_XorGate(t17, 2, t3, t5);
    t18 = (t0 + 22696);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t19 = (t0 + 18968);
    *((int *)t19) = 1;

LAB1:    return;
}


extern void work_m_00000000000163344014_2456222467_init()
{
	static char *pe[] = {(void *)Gate_68_0,(void *)Gate_68_1,(void *)Gate_68_2,(void *)Gate_68_3,(void *)Gate_68_4,(void *)Gate_68_5,(void *)Gate_68_6,(void *)Gate_68_7,(void *)Gate_68_8,(void *)Gate_68_9,(void *)Gate_68_10,(void *)Gate_68_11,(void *)Gate_68_12,(void *)Gate_68_13,(void *)Gate_68_14,(void *)Gate_68_15,(void *)Gate_68_16,(void *)Gate_68_17,(void *)Gate_68_18,(void *)Gate_68_19,(void *)Gate_68_20,(void *)Gate_68_21,(void *)Gate_68_22,(void *)Gate_68_23,(void *)Gate_68_24,(void *)Gate_68_25,(void *)Gate_76_26,(void *)Gate_76_27,(void *)Gate_76_28,(void *)Gate_76_29,(void *)Gate_76_30,(void *)Gate_76_31,(void *)Gate_76_32,(void *)Gate_76_33,(void *)Gate_76_34,(void *)Gate_76_35,(void *)Gate_76_36,(void *)Gate_76_37,(void *)Gate_76_38,(void *)Gate_76_39,(void *)Gate_76_40,(void *)Gate_76_41,(void *)Gate_76_42,(void *)Gate_76_43,(void *)Gate_76_44,(void *)Gate_76_45,(void *)Gate_76_46,(void *)Gate_76_47,(void *)Gate_76_48,(void *)Gate_76_49,(void *)Gate_76_50,(void *)Gate_76_51,(void *)Gate_76_52,(void *)Gate_76_53,(void *)Gate_76_54,(void *)Gate_76_55,(void *)Gate_76_56,(void *)Gate_79_57};
	xsi_register_didat("work_m_00000000000163344014_2456222467", "isim/ppa_test_isim_beh.exe.sim/work/m_00000000000163344014_2456222467.didat");
	xsi_register_executes(pe);
}
