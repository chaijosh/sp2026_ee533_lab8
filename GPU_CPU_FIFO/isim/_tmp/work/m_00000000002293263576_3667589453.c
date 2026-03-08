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
static unsigned int ng0[] = {0U, 0U, 0U, 0U};
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "C:/Documents and Settings/student/Desktop/processor_integration/GPU_CPU_FIFO/alu_64.v";
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {10U, 0U};
static unsigned int ng6[] = {1U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng7[] = {0U, 0U, 0U, 0U, 0U, 0U};



static void C53_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1668);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t3, 64, t5, 63, 0);
    t6 = (t0 + 3048);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t6, 0, 63);
    t11 = (t0 + 2964);
    *((int *)t11) = 1;

LAB1:    return;
}

static void C54_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1268U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    xsi_vlog_unsigned_equal(t6, 64, t5, 64, t2, 64);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 3084);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    t29 = (t28 + 4U);
    t30 = 1U;
    t31 = t30;
    t32 = (t3 + 4U);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 4294967294U);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 | t30);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 4294967294U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 | t31);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t39 = (t0 + 2972);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t23 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void C55_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t20[8];
    char t30[8];
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
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;

LAB0:    t1 = (t0 + 2400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1668);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4U);
    t9 = (t6 + 16U);
    t10 = (t6 + 20U);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t17 = (t0 + 1668);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t20 + 4U);
    t22 = (t19 + 8U);
    t23 = (t19 + 12U);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t21) = t29;
    memset(t30, 0, 8);
    t31 = (t30 + 4U);
    t32 = (t7 + 4U);
    t33 = (t20 + 4U);
    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t20);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB5;

LAB4:    if (t43 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t46 = (t4 + 4U);
    t47 = (t30 + 4U);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t47) != 0)
        goto LAB10;

LAB11:    t53 = (t4 + 4U);
    t54 = *((unsigned int *)t4);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB12;

LAB13:    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t53) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t62, 8);

LAB20:    t63 = (t0 + 3120);
    t64 = (t63 + 32U);
    t65 = *((char **)t64);
    t66 = (t65 + 40U);
    t67 = *((char **)t66);
    t68 = (t67 + 4U);
    t69 = 1U;
    t70 = t69;
    t71 = (t3 + 4U);
    t72 = *((unsigned int *)t3);
    t69 = (t69 & t72);
    t73 = *((unsigned int *)t71);
    t70 = (t70 & t73);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & 4294967294U);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 | t69);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 4294967294U);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t77 | t70);
    xsi_driver_vfirst_trans(t63, 0, 0);
    t78 = (t0 + 2980);
    *((int *)t78) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB11;

LAB12:    t57 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t62 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t57, 32, t62, 32);
    goto LAB20;

LAB18:    memcpy(t3, t57, 8);
    goto LAB20;

}

static void C56_3(char *t0)
{
    char t5[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1668);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 16U);
    t8 = (t4 + 20U);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = (t0 + 3156);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = (t19 + 4U);
    t21 = 1U;
    t22 = t21;
    t23 = (t5 + 4U);
    t24 = *((unsigned int *)t5);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967294U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 | t21);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 4294967294U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 | t22);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t30 = (t0 + 2988);
    *((int *)t30) = 1;

LAB1:    return;
}

static void C57_4(char *t0)
{
    char t5[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 2656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1668);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 8U);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = (t0 + 3192);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = (t19 + 4U);
    t21 = 1U;
    t22 = t21;
    t23 = (t5 + 4U);
    t24 = *((unsigned int *)t5);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967294U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 | t21);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 4294967294U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 | t22);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t30 = (t0 + 2996);
    *((int *)t30) = 1;

LAB1:    return;
}

static void A59_5(char *t0)
{
    char t5[8];
    char t27[24];
    char t31[8];
    char t40[24];
    char t44[8];
    char t53[24];
    char t57[16];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng3);
    t2 = (t0 + 3004);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng3);

LAB5:    xsi_set_current_line(61, ng3);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng3);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t5) = 1;

LAB17:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(70, ng3);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t0 + 564U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4U);
    t6 = (t4 + 8U);
    t7 = (t4 + 12U);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t27, 65, 65, 2U, t5, 1, t3, 64);
    t8 = (t0 + 740U);
    t21 = *((char **)t8);
    t8 = (t0 + 740U);
    t28 = *((char **)t8);
    memset(t31, 0, 8);
    t8 = (t31 + 4U);
    t29 = (t28 + 8U);
    t30 = (t28 + 12U);
    t15 = *((unsigned int *)t29);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    xsi_vlogtype_concat(t40, 65, 65, 2U, t31, 1, t21, 64);
    xsi_vlog_unsigned_add(t53, 65, t27, 65, t40, 65);
    t32 = (t0 + 1668);
    xsi_vlogvar_assign_value(t32, t53, 0, 0, 65);

LAB20:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng3);

LAB13:    xsi_set_current_line(63, ng3);
    t28 = (t0 + 564U);
    t29 = *((char **)t28);
    t28 = (t0 + 564U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    t28 = (t31 + 4U);
    t32 = (t30 + 8U);
    t33 = (t30 + 12U);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 31);
    t36 = (t35 & 1);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 31);
    t39 = (t38 & 1);
    *((unsigned int *)t28) = t39;
    xsi_vlogtype_concat(t27, 65, 65, 2U, t31, 1, t29, 64);
    t41 = (t0 + 740U);
    t42 = *((char **)t41);
    t41 = (t0 + 740U);
    t43 = *((char **)t41);
    memset(t44, 0, 8);
    t41 = (t44 + 4U);
    t45 = (t43 + 8U);
    t46 = (t43 + 12U);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 31);
    t49 = (t48 & 1);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 31);
    t52 = (t51 & 1);
    *((unsigned int *)t41) = t52;
    xsi_vlogtype_concat(t40, 65, 65, 2U, t44, 1, t42, 64);
    xsi_vlog_unsigned_minus(t53, 65, t27, 65, t40, 65);
    t54 = (t0 + 1668);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 65);
    goto LAB12;

LAB16:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(66, ng3);

LAB21:    xsi_set_current_line(67, ng3);
    t21 = (t0 + 564U);
    t28 = *((char **)t21);
    t21 = (t0 + 740U);
    t29 = *((char **)t21);
    xsi_vlog_signed_less(t57, 64, t28, 64, t29, 64);
    memset(t31, 0, 8);
    t21 = (t31 + 4U);
    t30 = (t57 + 4U);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t57);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t30) != 0)
        goto LAB24;

LAB25:    t32 = (t31 + 4U);
    t39 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t32);
    t48 = (t39 || t47);
    if (t48 > 0)
        goto LAB26;

LAB27:    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t32) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t31) > 0)
        goto LAB32;

LAB33:    memcpy(t27, t41, 24);

LAB34:    t42 = (t0 + 1668);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 65);
    goto LAB20;

LAB22:    *((unsigned int *)t31) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    t33 = ((char*)((ng6)));
    goto LAB27;

LAB28:    t41 = ((char*)((ng7)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t27, 65, t33, 65, t41, 65);
    goto LAB34;

LAB32:    memcpy(t27, t33, 24);
    goto LAB34;

}


extern void work_m_00000000002293263576_3667589453_init()
{
	static char *pe[] = {(void *)C53_0,(void *)C54_1,(void *)C55_2,(void *)C56_3,(void *)C57_4,(void *)A59_5};
	xsi_register_didat("work_m_00000000002293263576_3667589453", "isim/_tmp/work/m_00000000002293263576_3667589453.didat");
	xsi_register_executes(pe);
}
