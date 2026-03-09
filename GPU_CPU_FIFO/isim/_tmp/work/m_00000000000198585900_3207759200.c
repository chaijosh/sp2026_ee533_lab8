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
static unsigned int ng0[] = {2U, 0U};
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static const char *ng4 = "C:/Documents and Settings/student/Desktop/processor_integration/GPU_CPU_FIFO/single_packet_fifo.v";
static int ng5[] = {256, 0};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {0U, 0U, 0U, 0U, 0U, 0U};



static void C93_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 5588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t77 = (t0 + 7428);
    t78 = (t77 + 32U);
    t79 = *((char **)t78);
    t80 = (t79 + 40U);
    t81 = *((char **)t80);
    t82 = (t81 + 4U);
    t83 = 255U;
    t84 = t83;
    t85 = (t3 + 4U);
    t86 = *((unsigned int *)t3);
    t83 = (t83 & t86);
    t87 = *((unsigned int *)t85);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 & 4294967040U);
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 | t83);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 4294967040U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 | t84);
    xsi_driver_vfirst_trans(t77, 0, 7);
    t92 = (t0 + 7304);
    *((int *)t92) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2304U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1248U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t42 + 4U);
    t44 = (t41 + 4U);
    t45 = (t33 + 4U);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t33);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB24;

LAB21:    if (t55 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t40 + 4U);
    t59 = (t42 + 4U);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4U);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t76, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t34, 8, t39, 8);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t40) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 1688U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = (t0 + 4928);
    t75 = (t69 + 32U);
    t76 = *((char **)t75);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 8, t70, 8, t76, 8);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

}

static void C94_1(char *t0)
{
    char t3[24];
    char t4[8];
    char t6[8];
    char t33[24];
    char t41[24];
    char t42[8];
    char t44[8];
    char t71[24];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 5716U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 24);

LAB20:    t72 = (t0 + 7464);
    t80 = (t72 + 32U);
    t81 = *((char **)t80);
    t82 = (t81 + 40U);
    t83 = *((char **)t82);
    xsi_vlog_bit_copy(t83, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t72, 0, 71);
    t84 = (t0 + 7312);
    *((int *)t84) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 2392U);
    t35 = *((char **)t34);
    t34 = (t0 + 2480U);
    t36 = *((char **)t34);
    xsi_vlogtype_concat(t33, 72, 72, 2U, t36, 8, t35, 64);
    goto LAB13;

LAB14:    t34 = (t0 + 1248U);
    t43 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t44, 0, 8);
    t45 = (t44 + 4U);
    t46 = (t43 + 4U);
    t47 = (t34 + 4U);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t34);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB24;

LAB21:    if (t57 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t42, 0, 8);
    t60 = (t42 + 4U);
    t61 = (t44 + 4U);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t44);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t61) != 0)
        goto LAB27;

LAB28:    t67 = (t42 + 4U);
    t68 = *((unsigned int *)t42);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t42);
    t76 = (~(t75));
    t77 = *((unsigned int *)t67);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t42) > 0)
        goto LAB35;

LAB36:    memcpy(t41, t79, 24);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 72, t33, 72, t41, 72);
    goto LAB20;

LAB18:    memcpy(t3, t33, 24);
    goto LAB20;

LAB23:    *((unsigned int *)t44) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB28;

LAB29:    t72 = (t0 + 1776U);
    t73 = *((char **)t72);
    t72 = (t0 + 1864U);
    t74 = *((char **)t72);
    xsi_vlogtype_concat(t71, 72, 72, 2U, t74, 8, t73, 64);
    goto LAB30;

LAB31:    t72 = (t0 + 3008U);
    t79 = *((char **)t72);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t41, 72, t71, 72, t79, 72);
    goto LAB37;

LAB35:    memcpy(t41, t71, 24);
    goto LAB37;

}

static void C95_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 5844U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t69 = (t0 + 7500);
    t76 = (t69 + 32U);
    t77 = *((char **)t76);
    t78 = (t77 + 40U);
    t79 = *((char **)t78);
    t80 = (t79 + 4U);
    t81 = 1U;
    t82 = t81;
    t83 = (t3 + 4U);
    t84 = *((unsigned int *)t3);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 & 4294967294U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 | t81);
    t88 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t88 & 4294967294U);
    t89 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t89 | t82);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t90 = (t0 + 7320);
    *((int *)t90) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2568U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1248U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t42 + 4U);
    t44 = (t41 + 4U);
    t45 = (t33 + 4U);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t33);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB24;

LAB21:    if (t55 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t40 + 4U);
    t59 = (t42 + 4U);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4U);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t75, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t34, 1, t39, 1);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t40) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 1952U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = (t0 + 3184U);
    t75 = *((char **)t69);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 1, t70, 1, t75, 1);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

}

static void C96_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 5972U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t75 = (t0 + 7536);
    t76 = (t75 + 32U);
    t77 = *((char **)t76);
    t78 = (t77 + 40U);
    t79 = *((char **)t78);
    t80 = (t79 + 4U);
    t81 = 1U;
    t82 = t81;
    t83 = (t3 + 4U);
    t84 = *((unsigned int *)t3);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 & 4294967294U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 | t81);
    t88 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t88 & 4294967294U);
    t89 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t89 | t82);
    xsi_driver_vfirst_trans(t75, 0, 0);
    t90 = (t0 + 7328);
    *((int *)t90) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2656U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1248U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t42 + 4U);
    t44 = (t41 + 4U);
    t45 = (t33 + 4U);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t33);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB24;

LAB21:    if (t55 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t40 + 4U);
    t59 = (t42 + 4U);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4U);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t69, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t34, 1, t39, 1);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t40) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 2216U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 1, t70, 1, t69, 1);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

}

static void C98_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 6100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 7572);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t45 = *((char **)t44);
    t46 = (t45 + 4U);
    t47 = 255U;
    t48 = t47;
    t49 = (t3 + 4U);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 4294967040U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 | t47);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967040U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 | t48);
    xsi_driver_vfirst_trans(t41, 0, 7);
    t56 = (t0 + 7336);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 5020);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t35, 8, t40, 8);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void C99_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 6228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1248U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 7608);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    t44 = (t43 + 4U);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4U);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 4294967294U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 | t45);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 4294967294U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 | t46);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t54 = (t0 + 7344);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t33, 1, t38, 1);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void N117_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 6356U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t4 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB5;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 7644);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t24 + 4U);
    t26 = 1U;
    t27 = t26;
    t28 = (t4 + 4U);
    t29 = *((unsigned int *)t4);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 4294967294U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 | t26);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 | t27);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t35 = (t0 + 7352);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void C119_7(char *t0)
{
    char t6[8];
    char t22[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t91[8];
    char t105[8];
    char t112[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;

LAB0:    t1 = (t0 + 6484U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4744);
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

LAB7:    memset(t22, 0, 8);
    t23 = (t22 + 4U);
    t24 = (t6 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4U);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t63, t22, 8);

LAB14:    memset(t91, 0, 8);
    t92 = (t91 + 4U);
    t93 = (t63 + 4U);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t63);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t93) != 0)
        goto LAB28;

LAB29:    t99 = (t91 + 4U);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB30;

LAB31:    memcpy(t112, t91, 8);

LAB32:    t144 = (t0 + 7680);
    t145 = (t144 + 32U);
    t146 = *((char **)t145);
    t147 = (t146 + 40U);
    t148 = *((char **)t147);
    t149 = (t148 + 4U);
    t150 = 1U;
    t151 = t150;
    t152 = (t112 + 4U);
    t153 = *((unsigned int *)t112);
    t150 = (t150 & t153);
    t154 = *((unsigned int *)t152);
    t151 = (t151 & t154);
    t155 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t155 & 4294967294U);
    t156 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t156 | t150);
    t157 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t157 & 4294967294U);
    t158 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t158 | t151);
    xsi_driver_vfirst_trans(t144, 0, 0);
    t159 = (t0 + 7360);
    *((int *)t159) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 4744);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t40 = (t39 + 4U);
    t41 = (t37 + 4U);
    t42 = (t38 + 4U);
    t43 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t38);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB18;

LAB15:    if (t52 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t39) = 1;

LAB18:    memset(t55, 0, 8);
    t56 = (t55 + 4U);
    t57 = (t39 + 4U);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t39);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t57) != 0)
        goto LAB21;

LAB22:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4U);
    t68 = (t55 + 4U);
    t69 = (t63 + 4U);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    *((unsigned int *)t39) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t55) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB22;

LAB23:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4U);
    t78 = (t55 + 4U);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t22);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB25;

LAB26:    *((unsigned int *)t91) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t91) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB29;

LAB30:    t103 = (t0 + 1600U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t103 = (t105 + 4U);
    t106 = (t104 + 4U);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t104);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t106) != 0)
        goto LAB35;

LAB36:    t113 = *((unsigned int *)t91);
    t114 = *((unsigned int *)t105);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t91 + 4U);
    t117 = (t105 + 4U);
    t118 = (t112 + 4U);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t105) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t105) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB36;

LAB37:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t91 + 4U);
    t127 = (t105 + 4U);
    t128 = *((unsigned int *)t91);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t105);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB39;

}

static void C120_8(char *t0)
{
    char t3[24];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1424U);
    t4 = *((char **)t2);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t5, 8, t4, 64);
    t2 = (t0 + 7716);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t2, 0, 71);
    t10 = (t0 + 7368);
    *((int *)t10) = 1;

LAB1:    return;
}

static void A122_9(char *t0)
{
    char t7[16];
    char t8[8];
    char t33[8];
    char t34[8];
    char t66[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 6740U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng4);
    t2 = (t0 + 7376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng4);

LAB5:    xsi_set_current_line(124, ng4);
    t3 = (t0 + 4744);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 4836);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    xsi_set_current_line(125, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4652);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng4);
    t2 = (t0 + 3712U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t7, 64, t3, 63, 0);
    t2 = (t0 + 4376);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 64);
    xsi_set_current_line(127, ng4);
    t2 = (t0 + 3712U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4U);
    t4 = (t3 + 16U);
    t5 = (t3 + 20U);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t8) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t6 = (t0 + 4468);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    xsi_set_current_line(129, ng4);
    t2 = (t0 + 4744);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng0)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(130, ng4);

LAB16:    xsi_set_current_line(131, ng4);
    t6 = ((char*)((ng1)));
    t16 = (t0 + 4652);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    xsi_set_current_line(132, ng4);
    t2 = (t0 + 1600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(140, ng4);

LAB24:    xsi_set_current_line(141, ng4);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4652);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(142, ng4);
    t2 = (t0 + 1600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(152, ng4);

LAB41:    xsi_set_current_line(153, ng4);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4652);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(154, ng4);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4U);
    t5 = (t3 + 4U);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t5) != 0)
        goto LAB44;

LAB45:    t6 = (t8 + 4U);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t6);
    t18 = (t14 || t17);
    if (t18 > 0)
        goto LAB46;

LAB47:    memcpy(t34, t8, 8);

LAB48:    t58 = (t34 + 4U);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t34);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB15;

LAB13:    xsi_set_current_line(160, ng4);

LAB60:    xsi_set_current_line(161, ng4);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4652);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(162, ng4);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4U);
    t5 = (t3 + 4U);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t5) != 0)
        goto LAB63;

LAB64:    t6 = (t8 + 4U);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t6);
    t18 = (t14 || t17);
    if (t18 > 0)
        goto LAB65;

LAB66:    memcpy(t68, t8, 8);

LAB67:    t81 = (t68 + 4U);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t68);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB79;

LAB80:
LAB81:    goto LAB15;

LAB17:    xsi_set_current_line(132, ng4);

LAB20:    xsi_set_current_line(133, ng4);
    t5 = (t0 + 3976U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t14 = *((unsigned int *)t5);
    t17 = (~(t14));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(136, ng4);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB23:    goto LAB19;

LAB21:    xsi_set_current_line(134, ng4);
    t16 = ((char*)((ng0)));
    t21 = (t0 + 4836);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 2);
    goto LAB23;

LAB25:    xsi_set_current_line(142, ng4);

LAB28:    xsi_set_current_line(143, ng4);
    t5 = (t0 + 3976U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t14 = *((unsigned int *)t5);
    t17 = (~(t14));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(145, ng4);
    t2 = (t0 + 4928);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t16 = (t8 + 4U);
    t21 = (t5 + 4U);
    t22 = (t6 + 4U);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t17 = (t11 | t14);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB36;

LAB33:    if (t20 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;

LAB36:    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB31:    goto LAB27;

LAB29:    xsi_set_current_line(143, ng4);

LAB32:    xsi_set_current_line(144, ng4);
    t16 = ((char*)((ng0)));
    t21 = (t0 + 4836);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 2);
    goto LAB31;

LAB35:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(145, ng4);

LAB40:    xsi_set_current_line(147, ng4);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 4836);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 2);
    goto LAB39;

LAB42:    *((unsigned int *)t8) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB45;

LAB46:    t16 = (t0 + 2744U);
    t21 = *((char **)t16);
    memset(t33, 0, 8);
    t16 = (t33 + 4U);
    t22 = (t21 + 4U);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (t23 & t20);
    t26 = (t24 & 1U);
    if (t26 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t22) != 0)
        goto LAB51;

LAB52:    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t33);
    t29 = (t27 & t28);
    *((unsigned int *)t34) = t29;
    t25 = (t8 + 4U);
    t31 = (t33 + 4U);
    t32 = (t34 + 4U);
    t30 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t31);
    t36 = (t30 | t35);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB48;

LAB49:    *((unsigned int *)t33) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t33) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB52;

LAB53:    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t34) = (t39 | t40);
    t41 = (t8 + 4U);
    t42 = (t33 + 4U);
    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t15 = (t44 & t46);
    t51 = (t48 & t50);
    t52 = (~(t15));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t52);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t53);
    goto LAB55;

LAB56:    xsi_set_current_line(154, ng4);

LAB59:    xsi_set_current_line(156, ng4);
    t64 = ((char*)((ng6)));
    t65 = (t0 + 4836);
    xsi_vlogvar_assign_value(t65, t64, 0, 0, 2);
    goto LAB58;

LAB61:    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB64;

LAB65:    t16 = (t0 + 5020);
    t21 = (t16 + 32U);
    t22 = *((char **)t21);
    t25 = (t0 + 5112);
    t31 = (t25 + 32U);
    t32 = *((char **)t31);
    t41 = ((char*)((ng7)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t32, 9, t41, 32);
    memset(t34, 0, 8);
    t42 = (t34 + 4U);
    t58 = (t22 + 4U);
    t64 = (t33 + 4U);
    t19 = *((unsigned int *)t22);
    t20 = *((unsigned int *)t33);
    t23 = (t19 ^ t20);
    t24 = *((unsigned int *)t58);
    t26 = *((unsigned int *)t64);
    t27 = (t24 ^ t26);
    t28 = (t23 | t27);
    t29 = *((unsigned int *)t58);
    t30 = *((unsigned int *)t64);
    t35 = (t29 | t30);
    t36 = (~(t35));
    t37 = (t28 & t36);
    if (t37 != 0)
        goto LAB71;

LAB68:    if (t35 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t34) = 1;

LAB71:    memset(t66, 0, 8);
    t65 = (t66 + 4U);
    t67 = (t34 + 4U);
    t38 = *((unsigned int *)t67);
    t39 = (~(t38));
    t40 = *((unsigned int *)t34);
    t43 = (t40 & t39);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t67) != 0)
        goto LAB74;

LAB75:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t66);
    t47 = (t45 & t46);
    *((unsigned int *)t68) = t47;
    t69 = (t8 + 4U);
    t70 = (t66 + 4U);
    t71 = (t68 + 4U);
    t48 = *((unsigned int *)t69);
    t49 = *((unsigned int *)t70);
    t50 = (t48 | t49);
    *((unsigned int *)t71) = t50;
    t52 = *((unsigned int *)t71);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t66) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t66) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB75;

LAB76:    t54 = *((unsigned int *)t68);
    t55 = *((unsigned int *)t71);
    *((unsigned int *)t68) = (t54 | t55);
    t72 = (t8 + 4U);
    t73 = (t66 + 4U);
    t56 = *((unsigned int *)t8);
    t57 = (~(t56));
    t59 = *((unsigned int *)t72);
    t60 = (~(t59));
    t61 = *((unsigned int *)t66);
    t62 = (~(t61));
    t63 = *((unsigned int *)t73);
    t74 = (~(t63));
    t15 = (t57 & t60);
    t51 = (t62 & t74);
    t75 = (~(t15));
    t76 = (~(t51));
    t77 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t77 & t75);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & t76);
    t79 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t79 & t75);
    t80 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t80 & t76);
    goto LAB78;

LAB79:    xsi_set_current_line(162, ng4);

LAB82:    xsi_set_current_line(163, ng4);
    t87 = ((char*)((ng2)));
    t88 = (t0 + 4836);
    xsi_vlogvar_assign_value(t88, t87, 0, 0, 2);
    goto LAB81;

}

static void A170_10(char *t0)
{
    char t12[8];
    char t23[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t102[8];
    char t105[8];
    char t112[8];
    char t154[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
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
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t155;

LAB0:    t1 = (t0 + 6868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng4);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng4);

LAB5:    xsi_set_current_line(171, ng4);
    t3 = (t0 + 2920U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(178, ng4);

LAB10:    xsi_set_current_line(179, ng4);
    t2 = (t0 + 4836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 4744);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(181, ng4);
    t2 = (t0 + 4744);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    t11 = (t12 + 4U);
    t13 = (t4 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB14;

LAB11:    if (t19 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t12) = 1;

LAB14:    t22 = (t0 + 4560);
    xsi_vlogvar_generic_wait_assign_value(t22, t12, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng4);
    t2 = (t0 + 4836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t11 = (t12 + 4U);
    t13 = (t4 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB18;

LAB15:    if (t19 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t12) = 1;

LAB18:    memset(t23, 0, 8);
    t22 = (t23 + 4U);
    t24 = (t12 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t24) != 0)
        goto LAB21;

LAB22:    t30 = (t23 + 4U);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB23;

LAB24:    memcpy(t62, t23, 8);

LAB25:    t94 = (t62 + 4U);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(187, ng4);

LAB41:    xsi_set_current_line(188, ng4);
    t2 = (t0 + 4744);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t11 = (t12 + 4U);
    t13 = (t4 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB45;

LAB42:    if (t19 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t12) = 1;

LAB45:    memset(t23, 0, 8);
    t22 = (t23 + 4U);
    t24 = (t12 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t24) != 0)
        goto LAB48;

LAB49:    t30 = (t23 + 4U);
    t31 = *((unsigned int *)t23);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t42 = (t32 || t33);
    if (t42 > 0)
        goto LAB50;

LAB51:    memcpy(t62, t23, 8);

LAB52:    memset(t102, 0, 8);
    t94 = (t102 + 4U);
    t100 = (t62 + 4U);
    t91 = *((unsigned int *)t100);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t95 = (t93 & t92);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t100) != 0)
        goto LAB66;

LAB67:    t101 = (t102 + 4U);
    t97 = *((unsigned int *)t102);
    t98 = *((unsigned int *)t101);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB68;

LAB69:    memcpy(t112, t102, 8);

LAB70:    t144 = (t112 + 4U);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 != 0);
    if (t149 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(194, ng4);
    t2 = (t0 + 4744);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    t11 = (t12 + 4U);
    t13 = (t4 + 4U);
    t14 = (t10 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t15 = (t8 ^ t9);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB89;

LAB86:    if (t19 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t12) = 1;

LAB89:    memset(t23, 0, 8);
    t22 = (t23 + 4U);
    t24 = (t12 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t24) != 0)
        goto LAB92;

LAB93:    t30 = (t23 + 4U);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB94;

LAB95:    memcpy(t54, t23, 8);

LAB96:    t56 = (t54 + 4U);
    t80 = *((unsigned int *)t56);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB104;

LAB105:
LAB106:
LAB39:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(171, ng4);

LAB9:    xsi_set_current_line(172, ng4);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 4744);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(174, ng4);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4928);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(175, ng4);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5020);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(176, ng4);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5112);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(177, ng4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4560);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB17:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t23) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    t34 = (t0 + 4744);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t38 + 4U);
    t40 = (t36 + 4U);
    t41 = (t37 + 4U);
    t42 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t37);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB27;

LAB26:    if (t51 != 0)
        goto LAB28;

LAB29:    memset(t54, 0, 8);
    t55 = (t54 + 4U);
    t56 = (t38 + 4U);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t38);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t56) != 0)
        goto LAB32;

LAB33:    t63 = *((unsigned int *)t23);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t23 + 4U);
    t67 = (t54 + 4U);
    t68 = (t62 + 4U);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB27:    *((unsigned int *)t38) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t54) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t54) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB33;

LAB34:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t23 + 4U);
    t77 = (t54 + 4U);
    t78 = *((unsigned int *)t23);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB36;

LAB37:    xsi_set_current_line(183, ng4);

LAB40:    xsi_set_current_line(184, ng4);
    t100 = ((char*)((ng3)));
    t101 = (t0 + 4928);
    xsi_vlogvar_generic_wait_assign_value(t101, t100, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(185, ng4);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5020);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(186, ng4);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5112);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 9, 0LL);
    goto LAB39;

LAB44:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t23) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB49;

LAB50:    t34 = (t0 + 4744);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t38 + 4U);
    t40 = (t36 + 4U);
    t41 = (t37 + 4U);
    t43 = *((unsigned int *)t36);
    t44 = *((unsigned int *)t37);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t40);
    t47 = *((unsigned int *)t41);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t41);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t57 = (t49 & t53);
    if (t57 != 0)
        goto LAB56;

LAB53:    if (t52 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t38) = 1;

LAB56:    memset(t54, 0, 8);
    t55 = (t54 + 4U);
    t56 = (t38 + 4U);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t38);
    t61 = (t60 & t59);
    t63 = (t61 & 1U);
    if (t63 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t56) != 0)
        goto LAB59;

LAB60:    t64 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t54);
    t69 = (t64 | t65);
    *((unsigned int *)t62) = t69;
    t66 = (t23 + 4U);
    t67 = (t54 + 4U);
    t68 = (t62 + 4U);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t67);
    t72 = (t70 | t71);
    *((unsigned int *)t68) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t54) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t54) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB60;

LAB61:    t75 = *((unsigned int *)t62);
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t75 | t78);
    t76 = (t23 + 4U);
    t77 = (t54 + 4U);
    t79 = *((unsigned int *)t76);
    t80 = (~(t79));
    t81 = *((unsigned int *)t23);
    t86 = (t81 & t80);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t87 = (t84 & t83);
    t85 = (~(t86));
    t88 = (~(t87));
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t85);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    goto LAB63;

LAB64:    *((unsigned int *)t102) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t102) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB67;

LAB68:    t103 = (t0 + 1600U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t103 = (t105 + 4U);
    t106 = (t104 + 4U);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t104);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t106) != 0)
        goto LAB73;

LAB74:    t113 = *((unsigned int *)t102);
    t114 = *((unsigned int *)t105);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t102 + 4U);
    t117 = (t105 + 4U);
    t118 = (t112 + 4U);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB70;

LAB71:    *((unsigned int *)t105) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t105) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB74;

LAB75:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t102 + 4U);
    t127 = (t105 + 4U);
    t128 = *((unsigned int *)t102);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t105);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB77;

LAB78:    xsi_set_current_line(188, ng4);

LAB81:    xsi_set_current_line(189, ng4);
    t150 = (t0 + 4928);
    t151 = (t150 + 32U);
    t152 = *((char **)t151);
    t153 = ((char*)((ng7)));
    memset(t154, 0, 8);
    xsi_vlog_unsigned_add(t154, 32, t152, 8, t153, 32);
    t155 = (t0 + 4928);
    xsi_vlogvar_generic_wait_assign_value(t155, t154, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(190, ng4);
    t2 = (t0 + 3976U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB80;

LAB82:    xsi_set_current_line(190, ng4);

LAB85:    xsi_set_current_line(191, ng4);
    t4 = (t0 + 4928);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t11, 8, t13, 32);
    t14 = (t0 + 5112);
    xsi_vlogvar_generic_wait_assign_value(t14, t12, 2, 0, 0, 9, 0LL);
    goto LAB84;

LAB88:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t23) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB93;

LAB94:    t34 = (t0 + 1336U);
    t35 = *((char **)t34);
    memset(t38, 0, 8);
    t34 = (t38 + 4U);
    t36 = (t35 + 4U);
    t42 = *((unsigned int *)t36);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t36) != 0)
        goto LAB99;

LAB100:    t47 = *((unsigned int *)t23);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t54) = t49;
    t37 = (t23 + 4U);
    t39 = (t38 + 4U);
    t40 = (t54 + 4U);
    t50 = *((unsigned int *)t37);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    *((unsigned int *)t40) = t52;
    t53 = *((unsigned int *)t40);
    t57 = (t53 != 0);
    if (t57 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB96;

LAB97:    *((unsigned int *)t38) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t38) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB100;

LAB101:    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t40);
    *((unsigned int *)t54) = (t58 | t59);
    t41 = (t23 + 4U);
    t55 = (t38 + 4U);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t63 = *((unsigned int *)t41);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t69 = (~(t65));
    t70 = *((unsigned int *)t55);
    t71 = (~(t70));
    t86 = (t61 & t64);
    t87 = (t69 & t71);
    t72 = (~(t86));
    t73 = (~(t87));
    t74 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t74 & t72);
    t75 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t75 & t73);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t72);
    t79 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t79 & t73);
    goto LAB103;

LAB104:    xsi_set_current_line(194, ng4);

LAB107:    xsi_set_current_line(195, ng4);
    t66 = (t0 + 5020);
    t67 = (t66 + 32U);
    t68 = *((char **)t67);
    t76 = ((char*)((ng7)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 32, t68, 8, t76, 32);
    t77 = (t0 + 5020);
    xsi_vlogvar_generic_wait_assign_value(t77, t62, 2, 0, 0, 8, 0LL);
    goto LAB106;

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

LAB0:    t1 = (t0 + 6996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 7752);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 72);
    xsi_driver_vfirst_trans(t3, 0, 71);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 7124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 7788);
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


extern void work_m_00000000000198585900_3207759200_init()
{
	static char *pe[] = {(void *)C93_0,(void *)C94_1,(void *)C95_2,(void *)C96_3,(void *)C98_4,(void *)C99_5,(void *)N117_6,(void *)C119_7,(void *)C120_8,(void *)A122_9,(void *)A170_10,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000000198585900_3207759200", "isim/_tmp/work/m_00000000000198585900_3207759200.didat");
	xsi_register_executes(pe);
}
