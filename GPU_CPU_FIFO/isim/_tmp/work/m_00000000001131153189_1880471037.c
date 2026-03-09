/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {0, 0};
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "C:/Documents and Settings/student/Desktop/processor_integration/GPU_CPU_FIFO/GPU_SIMD.v";
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {0, 0, 0, 0};
static int ng9[] = {3, 0};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {1U, 0U};



static void N19_0(char *t0)
{
    char t3[16];
    char t4[8];
    char t8[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 14012U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6820);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t6 + 4U);
    t11 = (t7 + 4U);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB4:    if (t21 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t4 + 4U);
    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4U);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 16);

LAB20:    t53 = (t0 + 17764);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    xsi_vlog_bit_copy(t57, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t53, 0, 63U);
    t58 = (t0 + 17520);
    *((int *)t58) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 7464);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t44 = (t0 + 7464);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    t47 = (t0 + 7464);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 6820);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 64, t42, t46, t49, 2, 1, t52, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 64, t35, 64, t43, 64);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

}

static void N20_1(char *t0)
{
    char t3[16];
    char t4[8];
    char t8[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 14140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6912);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t6 + 4U);
    t11 = (t7 + 4U);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB4:    if (t21 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t4 + 4U);
    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4U);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 16);

LAB20:    t53 = (t0 + 17800);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    xsi_vlog_bit_copy(t57, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t53, 0, 63U);
    t58 = (t0 + 17528);
    *((int *)t58) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 7464);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t44 = (t0 + 7464);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    t47 = (t0 + 7464);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 6912);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 64, t42, t46, t49, 2, 1, t52, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 64, t35, 64, t43, 64);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

}

static void N21_2(char *t0)
{
    char t3[16];
    char t4[8];
    char t8[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 14268U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7096);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t6 + 4U);
    t11 = (t7 + 4U);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB4:    if (t21 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t4 + 4U);
    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4U);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 16);

LAB20:    t53 = (t0 + 17836);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    xsi_vlog_bit_copy(t57, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t53, 0, 63U);
    t58 = (t0 + 17536);
    *((int *)t58) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 7464);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t44 = (t0 + 7464);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    t47 = (t0 + 7464);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 7096);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 64, t42, t46, t49, 2, 1, t52, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 64, t35, 64, t43, 64);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

}

static void N27_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 14396U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8752);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 17872);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63U);
    t10 = (t0 + 17544);
    *((int *)t10) = 1;

LAB1:    return;
}

static void N28_4(char *t0)
{
    char t3[16];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 14524U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7556);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 16);

LAB16:    t26 = (t0 + 17908);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    xsi_vlog_bit_copy(t30, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t26, 0, 63U);
    t31 = (t0 + 17552);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3292U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 8844);
    t24 = (t18 + 32U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t19, 64, t25, 64);
    goto LAB16;

LAB14:    memcpy(t3, t19, 16);
    goto LAB16;

}

static void N29_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 14652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8936);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 17944);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63U);
    t10 = (t0 + 17560);
    *((int *)t10) = 1;

LAB1:    return;
}

static void C60_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 14780U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5716);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 17980);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    t10 = (t9 + 4U);
    t11 = 511U;
    t12 = t11;
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t4);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294966784U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | t11);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294966784U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 | t12);
    xsi_driver_vfirst_trans(t5, 0, 8);
    t20 = (t0 + 17568);
    *((int *)t20) = 1;

LAB1:    return;
}

static void C61_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 14908U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6636);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 18016);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    t10 = (t9 + 4U);
    t11 = 1U;
    t12 = t11;
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t4);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967294U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | t11);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967294U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 | t12);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t20 = (t0 + 17576);
    *((int *)t20) = 1;

LAB1:    return;
}

static void N66_8(char *t0)
{
    char t5[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t74[8];
    char t86[8];
    char t95[8];
    char t103[8];
    char t135[8];
    char t143[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;

LAB0:    t1 = (t0 + 15036U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8016);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t58, 0, 8);
    t59 = (t58 + 4U);
    t60 = (t26 + 4U);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t26);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t60) != 0)
        goto LAB20;

LAB21:    t66 = (t58 + 4U);
    t67 = *((unsigned int *)t58);
    t68 = (!(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB22;

LAB23:    memcpy(t143, t58, 8);

LAB24:    t171 = (t0 + 18052);
    t172 = (t171 + 32U);
    t173 = *((char **)t172);
    t174 = (t173 + 40U);
    t175 = *((char **)t174);
    t176 = (t175 + 4U);
    t177 = 1U;
    t178 = t177;
    t179 = (t143 + 4U);
    t180 = *((unsigned int *)t143);
    t177 = (t177 & t180);
    t181 = *((unsigned int *)t179);
    t178 = (t178 & t181);
    t182 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t182 & 4294967294U);
    t183 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t183 | t177);
    t184 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t184 & 4294967294U);
    t185 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t185 | t178);
    xsi_driver_vfirst_trans(t171, 0, 0U);
    t186 = (t0 + 17584);
    *((int *)t186) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 3908U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4U);
    t20 = (t18 + 4U);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4U);
    t31 = (t19 + 4U);
    t32 = (t26 + 4U);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4U);
    t41 = (t19 + 4U);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t58) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t58) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB21;

LAB22:    t71 = (t0 + 8108);
    t72 = (t71 + 32U);
    t73 = *((char **)t72);
    memset(t74, 0, 8);
    t75 = (t74 + 4U);
    t76 = (t73 + 4U);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t73);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t76) != 0)
        goto LAB27;

LAB28:    t82 = (t74 + 4U);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB29;

LAB30:    memcpy(t103, t74, 8);

LAB31:    memset(t135, 0, 8);
    t136 = (t135 + 4U);
    t137 = (t103 + 4U);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t103);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t137) != 0)
        goto LAB45;

LAB46:    t144 = *((unsigned int *)t58);
    t145 = *((unsigned int *)t135);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = (t58 + 4U);
    t148 = (t135 + 4U);
    t149 = (t143 + 4U);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t74) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t87 = (t0 + 3908U);
    t88 = *((char **)t87);
    memset(t86, 0, 8);
    t87 = (t86 + 4U);
    t89 = (t88 + 4U);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t89) == 0)
        goto LAB32;

LAB34:    *((unsigned int *)t86) = 1;
    *((unsigned int *)t87) = 1;

LAB35:    memset(t95, 0, 8);
    t96 = (t95 + 4U);
    t97 = (t86 + 4U);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t86);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t97) != 0)
        goto LAB38;

LAB39:    t104 = *((unsigned int *)t74);
    t105 = *((unsigned int *)t95);
    t106 = (t104 & t105);
    *((unsigned int *)t103) = t106;
    t107 = (t74 + 4U);
    t108 = (t95 + 4U);
    t109 = (t103 + 4U);
    t110 = *((unsigned int *)t107);
    t111 = *((unsigned int *)t108);
    t112 = (t110 | t111);
    *((unsigned int *)t109) = t112;
    t113 = *((unsigned int *)t109);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB32:    *((unsigned int *)t86) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t95) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t95) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB39;

LAB40:    t115 = *((unsigned int *)t103);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t103) = (t115 | t116);
    t117 = (t74 + 4U);
    t118 = (t95 + 4U);
    t119 = *((unsigned int *)t74);
    t120 = (~(t119));
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t123 = *((unsigned int *)t95);
    t124 = (~(t123));
    t125 = *((unsigned int *)t118);
    t126 = (~(t125));
    t127 = (t120 & t122);
    t128 = (t124 & t126);
    t129 = (~(t127));
    t130 = (~(t128));
    t131 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t131 & t129);
    t132 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t132 & t130);
    t133 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t133 & t129);
    t134 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t134 & t130);
    goto LAB42;

LAB43:    *((unsigned int *)t135) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t135) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB46;

LAB47:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    t157 = (t58 + 4U);
    t158 = (t135 + 4U);
    t159 = *((unsigned int *)t157);
    t160 = (~(t159));
    t161 = *((unsigned int *)t58);
    t162 = (t161 & t160);
    t163 = *((unsigned int *)t158);
    t164 = (~(t163));
    t165 = *((unsigned int *)t135);
    t166 = (t165 & t164);
    t167 = (~(t162));
    t168 = (~(t166));
    t169 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t169 & t167);
    t170 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t170 & t168);
    goto LAB49;

}

static void N67_9(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 15164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9120);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 3292U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t8 = (t7 + 4U);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 511U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 511U);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 9, t4, 9, t5, 9);
    t16 = (t0 + 18088);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 4U);
    t22 = 511U;
    t23 = t22;
    t24 = (t15 + 4U);
    t25 = *((unsigned int *)t15);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 4294966784U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 | t22);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 4294966784U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 | t23);
    xsi_driver_vfirst_trans(t16, 0, 8U);
    t31 = (t0 + 17592);
    *((int *)t31) = 1;

LAB1:    return;
}

static void N69_10(char *t0)
{
    char t3[16];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 15292U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8200);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t18, 16);

LAB16:    t24 = (t0 + 18124);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    xsi_vlog_bit_copy(t28, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t24, 0, 63U);
    t29 = (t0 + 17600);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3380U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t19, 64, t18, 64);
    goto LAB16;

LAB14:    memcpy(t3, t19, 16);
    goto LAB16;

}

static void N70_11(char *t0)
{
    char t3[16];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 15420U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8200);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t18, 16);

LAB16:    t24 = (t0 + 18160);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    xsi_vlog_bit_copy(t28, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t24, 0, 63U);
    t29 = (t0 + 17608);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3468U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t19, 64, t18, 64);
    goto LAB16;

LAB14:    memcpy(t3, t19, 16);
    goto LAB16;

}

static void N85_12(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 15548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9672);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t4 + 4U);
    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 18196);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    t27 = (t26 + 4U);
    t28 = 1U;
    t29 = t28;
    t30 = (t6 + 4U);
    t31 = *((unsigned int *)t6);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 | t28);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 4294967294U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 | t29);
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t37 = (t0 + 17616);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

}

static void N86_13(char *t0)
{
    char t3[16];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 15676U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5140U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4U);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 16);

LAB16:    t26 = (t0 + 18232);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    xsi_vlog_bit_copy(t30, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t26, 0, 63U);
    t31 = (t0 + 17624);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 10224);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 10132);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t18, 64, t25, 64);
    goto LAB16;

LAB14:    memcpy(t3, t18, 16);
    goto LAB16;

}

static void C102_14(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 15804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11604);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t6 + 8U);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    memset(t4, 0, 8);
    t17 = (t4 + 4U);
    t18 = (t7 + 4U);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t18) != 0)
        goto LAB6;

LAB7:    t24 = (t4 + 4U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB8;

LAB9:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t46 = (t0 + 18268);
    t47 = (t46 + 32U);
    t48 = *((char **)t47);
    t49 = (t48 + 40U);
    t50 = *((char **)t49);
    t51 = (t50 + 4U);
    t52 = 65535U;
    t53 = t52;
    t54 = (t3 + 4U);
    t55 = *((unsigned int *)t3);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294901760U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 | t52);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 4294901760U);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t60 | t53);
    xsi_driver_vfirst_trans(t46, 48, 63);
    t61 = (t0 + 17632);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB8:    t28 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t34 = (t0 + 11604);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4U);
    t38 = (t36 + 8U);
    t39 = (t36 + 12U);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 16);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 16);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t44 & 65535U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 65535U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t28, 16, t33, 16);
    goto LAB16;

LAB14:    memcpy(t3, t28, 8);
    goto LAB16;

}

static void C103_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 15932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11604);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t6 + 8U);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    memset(t4, 0, 8);
    t17 = (t4 + 4U);
    t18 = (t7 + 4U);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t18) != 0)
        goto LAB6;

LAB7:    t24 = (t4 + 4U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB8;

LAB9:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t46 = (t0 + 18304);
    t47 = (t46 + 32U);
    t48 = *((char **)t47);
    t49 = (t48 + 40U);
    t50 = *((char **)t49);
    t51 = (t50 + 4U);
    t52 = 65535U;
    t53 = t52;
    t54 = (t3 + 4U);
    t55 = *((unsigned int *)t3);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294901760U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 | t52);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 4294901760U);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t60 | t53);
    xsi_driver_vfirst_trans(t46, 32, 47);
    t61 = (t0 + 17640);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB8:    t28 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t34 = (t0 + 11604);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4U);
    t38 = (t36 + 8U);
    t39 = (t36 + 12U);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 0);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t44 & 65535U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 65535U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t28, 16, t33, 16);
    goto LAB16;

LAB14:    memcpy(t3, t28, 8);
    goto LAB16;

}

static void C104_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 16060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11604);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t6 + 4U);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t4 + 4U);
    t17 = (t7 + 4U);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t17) != 0)
        goto LAB6;

LAB7:    t23 = (t4 + 4U);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t44 = (t0 + 18340);
    t45 = (t44 + 32U);
    t46 = *((char **)t45);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    t49 = (t48 + 4U);
    t50 = 65535U;
    t51 = t50;
    t52 = (t3 + 4U);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 4294901760U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 | t50);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 4294901760U);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t58 | t51);
    xsi_driver_vfirst_trans(t44, 16, 31);
    t59 = (t0 + 17648);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t27 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t33 = (t0 + 11604);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4U);
    t37 = (t35 + 4U);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 16);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 16);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 65535U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 65535U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t27, 16, t32, 16);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void C105_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 16188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11604);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t6 + 4U);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t4 + 4U);
    t17 = (t7 + 4U);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t17) != 0)
        goto LAB6;

LAB7:    t23 = (t4 + 4U);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t44 = (t0 + 18376);
    t45 = (t44 + 32U);
    t46 = *((char **)t45);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    t49 = (t48 + 4U);
    t50 = 65535U;
    t51 = t50;
    t52 = (t3 + 4U);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 4294901760U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 | t50);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 4294901760U);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t58 | t51);
    xsi_driver_vfirst_trans(t44, 0, 15);
    t59 = (t0 + 17656);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t27 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t33 = (t0 + 11604);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4U);
    t37 = (t35 + 4U);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 65535U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 65535U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t27, 16, t32, 16);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void A108_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;

LAB0:    t1 = (t0 + 16316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng4);
    t2 = (t0 + 17664);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng4);

LAB5:    xsi_set_current_line(109, ng4);
    t3 = (t0 + 11144);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);

LAB6:    t6 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t7 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(113, ng4);
    t2 = (t0 + 11328);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 13536);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 64);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(110, ng4);
    t8 = (t0 + 5316U);
    t9 = *((char **)t8);
    t8 = (t0 + 13536);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 64);
    goto LAB17;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(111, ng4);
    t4 = (t0 + 11512);
    t6 = (t4 + 32U);
    t8 = *((char **)t6);
    t9 = (t0 + 13536);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 64);
    goto LAB17;

LAB13:    xsi_set_current_line(112, ng4);
    t3 = (t0 + 5404U);
    t4 = *((char **)t3);
    t3 = (t0 + 13536);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB17;

}

static void C121_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 16444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 12432);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 18412);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    t10 = (t9 + 4U);
    t11 = 1U;
    t12 = t11;
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t4);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967294U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | t11);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967294U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 | t12);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t20 = (t0 + 17672);
    *((int *)t20) = 1;

LAB1:    return;
}

static void C122_20(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 16572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 12340);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 12432);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4U);
    t13 = (t7 + 4U);
    t14 = (t8 + 4U);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 18448);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    t41 = (t40 + 4U);
    t42 = 1U;
    t43 = t42;
    t44 = (t8 + 4U);
    t45 = *((unsigned int *)t8);
    t42 = (t42 & t45);
    t46 = *((unsigned int *)t44);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 4294967294U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 | t42);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 4294967294U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 | t43);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t51 = (t0 + 17680);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t4 + 4U);
    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB6;

}

static void C123_21(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 16700U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 12708);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 18484);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t18 + 4U);
    t20 = 255U;
    t21 = t20;
    t22 = (t3 + 4U);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 4294967040U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 | t20);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4294967040U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 | t21);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t29 = (t0 + 17688);
    *((int *)t29) = 1;

LAB1:    return;
}

static void C124_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 16828U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 12800);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 18520);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 17696);
    *((int *)t10) = 1;

LAB1:    return;
}

static void C125_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 16956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1620U);
    t3 = *((char **)t2);
    t2 = (t0 + 18556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t8 = (t0 + 17704);
    *((int *)t8) = 1;

LAB1:    return;
}

static void C141_24(char *t0)
{
    char t3[16];
    char t4[8];
    char t24[16];
    char t25[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 17084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 12984);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4U);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 16);

LAB16:    t49 = (t0 + 18592);
    t50 = (t49 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    xsi_vlog_bit_copy(t53, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t49, 0, 63);
    t54 = (t0 + 17712);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3644U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 13168);
    t26 = (t18 + 32U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t28 = (t25 + 4U);
    t29 = (t27 + 4U);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB20:    t35 = (t25 + 4U);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB21;

LAB22:    t42 = *((unsigned int *)t25);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t25) > 0)
        goto LAB27;

LAB28:    memcpy(t24, t48, 16);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t19, 64, t24, 64);
    goto LAB16;

LAB14:    memcpy(t3, t19, 16);
    goto LAB16;

LAB17:    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    t39 = (t0 + 13444);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    goto LAB22;

LAB23:    t46 = (t0 + 13352);
    t47 = (t46 + 32U);
    t48 = *((char **)t47);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t24, 64, t41, 64, t48, 64);
    goto LAB29;

LAB27:    memcpy(t24, t41, 16);
    goto LAB29;

}

static void A147_25(char *t0)
{
    char t3[8];
    char t23[8];
    char t37[8];
    char t45[8];
    char t85[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    int t98;
    char *t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    int t106;

LAB0:    t1 = (t0 + 17212U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng4);
    t2 = (t0 + 17720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng4);

LAB5:    xsi_set_current_line(148, ng4);
    t4 = (t0 + 652U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    *((unsigned int *)t3) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t12 = (t3 + 4U);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(170, ng4);

LAB14:    xsi_set_current_line(171, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6636);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng4);
    t2 = (t0 + 13076);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4U);
    t12 = (t5 + 4U);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t12) != 0)
        goto LAB17;

LAB18:    t18 = (t3 + 4U);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t18);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB19;

LAB20:    memcpy(t45, t3, 8);

LAB21:    t77 = (t45 + 4U);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(174, ng4);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(176, ng4);
    t2 = (t0 + 3996U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(178, ng4);
    t2 = (t0 + 2940U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(198, ng4);
    t2 = (t0 + 5716);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 32, t5, 9, t6, 32);
    t12 = (t0 + 5716);
    xsi_vlogvar_generic_wait_assign_value(t12, t3, 2, 0, 0, 9, 0LL);

LAB46:
LAB43:
LAB40:    xsi_set_current_line(200, ng4);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 21);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 21);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 6820);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(200, ng4);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 6912);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(200, ng4);
    t2 = (t0 + 1972U);
    t4 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t5) != 0)
        goto LAB50;

LAB51:    t6 = (t23 + 4U);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t6);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB52;

LAB53:    t31 = *((unsigned int *)t23);
    t32 = (~(t31));
    t33 = *((unsigned int *)t6);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t6) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t23) > 0)
        goto LAB58;

LAB59:    memcpy(t3, t45, 8);

LAB60:    t24 = (t0 + 7004);
    xsi_vlogvar_generic_wait_assign_value(t24, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(200, ng4);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 6);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 6);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 7096);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(200, ng4);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 7188);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 16, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2060U);
    t4 = *((char **)t2);
    t2 = (t0 + 5808);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2148U);
    t4 = *((char **)t2);
    t2 = (t0 + 5900);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2236U);
    t4 = *((char **)t2);
    t2 = (t0 + 5992);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2324U);
    t4 = *((char **)t2);
    t2 = (t0 + 6084);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2412U);
    t4 = *((char **)t2);
    t2 = (t0 + 6176);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2500U);
    t4 = *((char **)t2);
    t2 = (t0 + 6268);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2588U);
    t4 = *((char **)t2);
    t2 = (t0 + 6360);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2676U);
    t4 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 1884U);
    t4 = *((char **)t2);
    t2 = (t0 + 7280);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2764U);
    t4 = *((char **)t2);
    t2 = (t0 + 6452);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 2852U);
    t4 = *((char **)t2);
    t2 = (t0 + 6544);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng4);
    t2 = (t0 + 5716);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7372);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 9, 0LL);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 3028U);
    t4 = *((char **)t2);
    t2 = (t0 + 8752);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 3116U);
    t4 = *((char **)t2);
    t2 = (t0 + 8844);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 3204U);
    t4 = *((char **)t2);
    t2 = (t0 + 8936);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 7188);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8660);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 16, 0LL);
    xsi_set_current_line(203, ng4);
    t2 = (t0 + 7004);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8568);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 5808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7556);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 5900);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7648);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 5992);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7740);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6084);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7832);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6176);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 7924);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6268);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8016);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6360);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8108);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6728);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8476);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 7280);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9028);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6452);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8200);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 6544);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 8292);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 2940U);
    t4 = *((char **)t2);
    t2 = (t0 + 8384);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng4);
    t2 = (t0 + 7372);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9120);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 9, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 3820U);
    t4 = *((char **)t2);
    t2 = (t0 + 9856);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 3380U);
    t4 = *((char **)t2);
    t2 = (t0 + 10040);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 3468U);
    t4 = *((char **)t2);
    t2 = (t0 + 10132);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 3556U);
    t4 = *((char **)t2);
    t2 = (t0 + 10224);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 8844);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9948);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(206, ng4);
    t2 = (t0 + 8568);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9764);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(208, ng4);
    t2 = (t0 + 4348U);
    t4 = *((char **)t2);
    t2 = (t0 + 10316);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(208, ng4);
    t2 = (t0 + 4436U);
    t4 = *((char **)t2);
    t2 = (t0 + 10408);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(208, ng4);
    t2 = (t0 + 4524U);
    t4 = *((char **)t2);
    t2 = (t0 + 10500);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 28, 0LL);
    xsi_set_current_line(208, ng4);
    t2 = (t0 + 4612U);
    t4 = *((char **)t2);
    t2 = (t0 + 10592);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 7648);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9212);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 7740);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9304);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 7832);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9396);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 7924);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9488);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 8200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9580);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng4);
    t2 = (t0 + 8476);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 9672);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(212, ng4);
    t2 = (t0 + 9856);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11328);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(212, ng4);
    t2 = (t0 + 9948);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11420);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(212, ng4);
    t2 = (t0 + 9764);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11236);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 4700U);
    t4 = *((char **)t2);
    t2 = (t0 + 11696);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 4788U);
    t4 = *((char **)t2);
    t2 = (t0 + 11788);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 4876U);
    t4 = *((char **)t2);
    t2 = (t0 + 11880);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 4964U);
    t4 = *((char **)t2);
    t2 = (t0 + 11972);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(213, ng4);
    t2 = (t0 + 5052U);
    t4 = *((char **)t2);
    t2 = (t0 + 12064);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(215, ng4);
    t2 = (t0 + 10592);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11512);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(215, ng4);
    t2 = (t0 + 10040);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11604);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9212);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 10684);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9304);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 10776);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9396);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 10868);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9488);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 10960);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9580);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11052);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng4);
    t2 = (t0 + 9672);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 11144);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(219, ng4);
    t2 = (t0 + 11328);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12708);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(219, ng4);
    t2 = (t0 + 11420);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12800);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(219, ng4);
    t2 = (t0 + 13536);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12892);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(219, ng4);
    t2 = (t0 + 11236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12616);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(220, ng4);
    t2 = (t0 + 10684);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12156);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng4);
    t2 = (t0 + 10776);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12248);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng4);
    t2 = (t0 + 10868);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12340);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng4);
    t2 = (t0 + 10960);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12432);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng4);
    t2 = (t0 + 11052);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12524);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng4);
    t2 = (t0 + 12708);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 13352);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(222, ng4);
    t2 = (t0 + 12892);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 13444);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(222, ng4);
    t2 = (t0 + 12616);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 13260);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(223, ng4);
    t2 = (t0 + 12156);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 12984);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng4);
    t2 = (t0 + 12248);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 13076);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng4);
    t2 = (t0 + 12524);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 13168);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(148, ng4);

LAB13:    xsi_set_current_line(149, ng4);
    t18 = ((char*)((ng0)));
    t19 = (t0 + 5716);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6820);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6912);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7004);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7096);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7188);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 16, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7280);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(150, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7372);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 5808);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 5900);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 5992);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6084);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6176);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6268);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6360);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6728);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6452);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6544);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 6636);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 8752);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 8844);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 8936);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8660);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 16, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8568);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9028);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(153, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9120);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7556);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7648);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7740);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7832);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7924);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8016);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8108);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8476);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8200);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8292);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8384);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 9856);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10040);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10132);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10224);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 9948);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(156, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9764);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9212);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9304);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9396);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9488);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9580);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9672);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(158, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10316);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(158, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10408);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(158, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10500);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 28, 0LL);
    xsi_set_current_line(158, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10592);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(160, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11328);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(160, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11420);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(160, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11512);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(160, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11604);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(160, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11236);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10684);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10776);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10868);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10960);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11052);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11144);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(162, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11696);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(162, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11788);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(162, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11880);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(162, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11972);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(162, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12064);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(164, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12708);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(164, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12800);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(164, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12892);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(164, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12616);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(165, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12156);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12248);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12340);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12432);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12524);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 13352);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(167, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 13444);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(167, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13260);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(168, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12984);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13076);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13168);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t3) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t3) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    t19 = (t0 + 13260);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng0)));
    memset(t23, 0, 8);
    t24 = (t23 + 4U);
    t25 = (t21 + 4U);
    t26 = (t22 + 4U);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t27 = (t16 ^ t17);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t25);
    t33 = *((unsigned int *)t26);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB23;

LAB22:    if (t34 != 0)
        goto LAB24;

LAB25:    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t39 = (t23 + 4U);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t39) != 0)
        goto LAB28;

LAB29:    t46 = *((unsigned int *)t3);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t3 + 4U);
    t50 = (t37 + 4U);
    t51 = (t45 + 4U);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB23:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t37) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB29;

LAB30:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t3 + 4U);
    t60 = (t37 + 4U);
    t61 = *((unsigned int *)t3);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB32;

LAB33:    xsi_set_current_line(172, ng4);
    t83 = (t0 + 3732U);
    t84 = *((char **)t83);
    t83 = (t0 + 7464);
    t87 = (t0 + 7464);
    t88 = (t87 + 40U);
    t89 = *((char **)t88);
    t90 = (t0 + 7464);
    t91 = (t90 + 36U);
    t92 = *((char **)t91);
    t93 = (t0 + 13260);
    t94 = (t93 + 32U);
    t95 = *((char **)t94);
    xsi_vlog_generic_convert_array_indices(t85, t86, t89, t92, 2, 1, t95, 5, 2);
    t96 = (t85 + 4U);
    t97 = *((unsigned int *)t96);
    t98 = (!(t97));
    t99 = (t86 + 4U);
    t100 = *((unsigned int *)t99);
    t101 = (!(t100));
    t102 = (t98 && t101);
    if (t102 == 1)
        goto LAB36;

LAB37:    goto LAB35;

LAB36:    t103 = *((unsigned int *)t85);
    t104 = *((unsigned int *)t86);
    t105 = (t103 - t104);
    t106 = (t105 + 1);
    xsi_vlogvar_generic_wait_assign_value(t83, t84, 2, 0, *((unsigned int *)t86), t106, 0LL);
    goto LAB37;

LAB38:    xsi_set_current_line(174, ng4);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 5716);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 1, 0, 0, 9, 0LL);
    goto LAB40;

LAB41:    xsi_set_current_line(176, ng4);
    t5 = (t0 + 4084U);
    t6 = *((char **)t5);
    t5 = (t0 + 5716);
    xsi_vlogvar_generic_wait_assign_value(t5, t6, 2, 0, 0, 9, 0LL);
    goto LAB43;

LAB44:    xsi_set_current_line(178, ng4);

LAB47:    xsi_set_current_line(179, ng4);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 8752);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 8844);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 8936);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8660);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 16, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8568);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9028);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(179, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9120);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7556);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7648);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7740);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7832);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 7924);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8016);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8108);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8476);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8200);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8292);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 8384);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 9856);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10040);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10132);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10224);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 9948);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(182, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9764);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9212);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9304);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9396);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9488);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9580);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 9672);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(184, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10316);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(184, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10408);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(184, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10500);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 28, 0LL);
    xsi_set_current_line(184, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10592);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11328);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11420);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11512);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 11604);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11236);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10684);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10776);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10868);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 10960);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11052);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11144);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11696);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11788);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11880);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 32, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 11972);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(188, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12064);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(190, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12708);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(190, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12800);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(190, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 12892);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(190, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12616);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(191, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12156);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12248);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12340);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12432);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12524);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 13352);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(193, ng4);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 13444);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(193, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13260);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 5, 0LL);
    xsi_set_current_line(194, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 12984);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13076);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng4);
    t2 = ((char*)((ng0)));
    t4 = (t0 + 13168);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng4);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6636);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 1, 0LL);
    goto LAB46;

LAB48:    *((unsigned int *)t23) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB51;

LAB52:    t12 = (t0 + 1884U);
    t18 = *((char **)t12);
    memset(t37, 0, 8);
    t12 = (t37 + 4U);
    t19 = (t18 + 4U);
    t16 = *((unsigned int *)t18);
    t17 = (t16 >> 11);
    *((unsigned int *)t37) = t17;
    t27 = *((unsigned int *)t19);
    t28 = (t27 >> 11);
    *((unsigned int *)t12) = t28;
    t29 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t29 & 31U);
    t30 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t30 & 31U);
    goto LAB53;

LAB54:    t20 = (t0 + 1884U);
    t21 = *((char **)t20);
    memset(t45, 0, 8);
    t20 = (t45 + 4U);
    t22 = (t21 + 4U);
    t35 = *((unsigned int *)t21);
    t36 = (t35 >> 16);
    *((unsigned int *)t45) = t36;
    t40 = *((unsigned int *)t22);
    t41 = (t40 >> 16);
    *((unsigned int *)t20) = t41;
    t42 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t42 & 31U);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & 31U);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t3, 5, t37, 5, t45, 5);
    goto LAB60;

LAB58:    memcpy(t3, t37, 8);
    goto LAB60;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 17340U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng11)));
    t3 = (t0 + 18628);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    t8 = (t7 + 4U);
    t9 = 1U;
    t10 = t9;
    t11 = (t2 + 4U);
    t12 = *((unsigned int *)t2);
    t9 = (t9 & t12);
    t13 = *((unsigned int *)t11);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967294U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 | t9);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967294U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 | t10);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000001131153189_1880471037_init()
{
	static char *pe[] = {(void *)N19_0,(void *)N20_1,(void *)N21_2,(void *)N27_3,(void *)N28_4,(void *)N29_5,(void *)C60_6,(void *)C61_7,(void *)N66_8,(void *)N67_9,(void *)N69_10,(void *)N70_11,(void *)N85_12,(void *)N86_13,(void *)C102_14,(void *)C103_15,(void *)C104_16,(void *)C105_17,(void *)A108_18,(void *)C121_19,(void *)C122_20,(void *)C123_21,(void *)C124_22,(void *)C125_23,(void *)C141_24,(void *)A147_25,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001131153189_1880471037", "isim/_tmp/work/m_00000000001131153189_1880471037.didat");
	xsi_register_executes(pe);
}
