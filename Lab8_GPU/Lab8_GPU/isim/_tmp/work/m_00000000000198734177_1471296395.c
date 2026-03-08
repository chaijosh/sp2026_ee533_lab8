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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {1U, 0U};



static void N117_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t26[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 2228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 916U);
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

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t16 = (t0 + 3132);
    t27 = (t16 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    t31 = (t30 + 4U);
    t32 = 511U;
    t33 = t32;
    t34 = (t3 + 4U);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 4294966784U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 | t32);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 4294966784U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 | t33);
    xsi_driver_vfirst_trans(t16, 0, 8U);
    t41 = (t0 + 3048);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 564U);
    t17 = *((char **)t16);
    t16 = (t0 + 652U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 9, t17, 8, t18, 8);
    goto LAB9;

LAB10:    t16 = (t0 + 564U);
    t24 = *((char **)t16);
    t16 = (t0 + 652U);
    t25 = *((char **)t16);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 9, t24, 8, t25, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 9, t19, 9, t26, 9);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void N122_1(char *t0)
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

LAB0:    t1 = (t0 + 2356U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
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
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 3168);
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
    t35 = (t0 + 3056);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void N123_2(char *t0)
{
    char t5[8];
    char t8[8];
    char t20[8];
    char t29[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 2484U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = (t0 + 1180U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t4 + 4U);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t5 + 4U);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t16 = (t8 + 4U);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB13;

LAB14:    memcpy(t37, t8, 8);

LAB15:    t69 = (t0 + 3204);
    t70 = (t69 + 32U);
    t71 = *((char **)t70);
    t72 = (t71 + 40U);
    t73 = *((char **)t72);
    t74 = (t73 + 4U);
    t75 = 1U;
    t76 = t75;
    t77 = (t37 + 4U);
    t78 = *((unsigned int *)t37);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 & 4294967294U);
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t81 | t75);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & 4294967294U);
    t83 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t83 | t76);
    xsi_driver_vfirst_trans(t69, 0, 0U);
    t84 = (t0 + 3064);
    *((int *)t84) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t8) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB13:    t21 = (t0 + 1356U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4U);
    t23 = (t22 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t23) == 0)
        goto LAB16;

LAB18:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;

LAB19:    memset(t29, 0, 8);
    t30 = (t29 + 4U);
    t31 = (t20 + 4U);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t20);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t31) != 0)
        goto LAB22;

LAB23:    t38 = *((unsigned int *)t8);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t8 + 4U);
    t42 = (t29 + 4U);
    t43 = (t37 + 4U);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB16:    *((unsigned int *)t20) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t29) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB23;

LAB24:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t8 + 4U);
    t52 = (t29 + 4U);
    t53 = *((unsigned int *)t8);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB26;

}

static void N125_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t27[8];
    char t32[8];
    char t33[8];
    char t37[8];
    char t83[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t34;
    char *t35;
    char *t36;
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
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t4 + 4U);
    t15 = (t6 + 4U);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4U);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t80 = (t0 + 3240);
    t84 = (t80 + 32U);
    t85 = *((char **)t84);
    t86 = (t85 + 40U);
    t87 = *((char **)t86);
    t88 = (t87 + 4U);
    t89 = 255U;
    t90 = t89;
    t91 = (t3 + 4U);
    t92 = *((unsigned int *)t3);
    t89 = (t89 & t92);
    t93 = *((unsigned int *)t91);
    t90 = (t90 & t93);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 & 4294967040U);
    t95 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t95 | t89);
    t96 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t96 & 4294967040U);
    t97 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t97 | t90);
    xsi_driver_vfirst_trans(t80, 0, 7U);
    t98 = (t0 + 3072);
    *((int *)t98) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 740U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng1)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 8, t26, 8, t25, 8);
    goto LAB9;

LAB10:    t34 = (t0 + 1356U);
    t35 = *((char **)t34);
    t34 = (t0 + 1444U);
    t36 = *((char **)t34);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t34 = (t35 + 4U);
    t41 = (t36 + 4U);
    t42 = (t37 + 4U);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t33, 0, 8);
    t64 = (t33 + 4U);
    t65 = (t37 + 4U);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t65) != 0)
        goto LAB22;

LAB23:    t71 = (t33 + 4U);
    t72 = *((unsigned int *)t33);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB24;

LAB25:    t76 = *((unsigned int *)t33);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t71) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t33) > 0)
        goto LAB30;

LAB31:    memcpy(t32, t83, 8);

LAB32:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t27, 8, t32, 8);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

LAB17:    t48 = *((unsigned int *)t37);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t37) = (t48 | t49);
    t50 = (t35 + 4U);
    t51 = (t36 + 4U);
    t52 = *((unsigned int *)t50);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = *((unsigned int *)t51);
    t57 = (~(t56));
    t58 = *((unsigned int *)t36);
    t59 = (t58 & t57);
    t60 = (~(t55));
    t61 = (~(t59));
    t62 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t62 & t60);
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    goto LAB19;

LAB20:    *((unsigned int *)t33) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t33) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB23;

LAB24:    t75 = ((char*)((ng0)));
    goto LAB25;

LAB26:    t80 = (t0 + 740U);
    t81 = *((char **)t80);
    t80 = (t0 + 1180U);
    t82 = *((char **)t80);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 8, t81, 8, t82, 3);
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t32, 8, t75, 8, t83, 8);
    goto LAB32;

LAB30:    memcpy(t32, t75, 8);
    goto LAB32;

}

static void N129_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t39[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 2740U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t4 + 4U);
    t15 = (t6 + 4U);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4U);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t21);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t51, 8);

LAB16:    t49 = (t0 + 3276);
    t52 = (t49 + 32U);
    t53 = *((char **)t52);
    t54 = (t53 + 40U);
    t55 = *((char **)t54);
    t56 = (t55 + 4U);
    t57 = 255U;
    t58 = t57;
    t59 = (t3 + 4U);
    t60 = *((unsigned int *)t3);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 4294967040U);
    t63 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t63 | t57);
    t64 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t64 & 4294967040U);
    t65 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t65 | t58);
    xsi_driver_vfirst_trans(t49, 0, 7U);
    t66 = (t0 + 3080);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 1092U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t25 + 4U);
    t28 = (t27 + 4U);
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 1);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 255U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 255U);
    goto LAB9;

LAB10:    t40 = (t0 + 1092U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4U);
    t42 = (t41 + 4U);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    t49 = (t0 + 1180U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_lshift(t51, 8, t39, 8, t50, 3);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t25, 8, t51, 8);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void C131_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t50[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
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

LAB0:    t1 = (t0 + 2868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1356U);
    t5 = *((char **)t2);
    t2 = (t0 + 1444U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4U);
    t11 = (t6 + 4U);
    t12 = (t7 + 4U);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t34 = (t4 + 4U);
    t35 = (t7 + 4U);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t7);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t35) != 0)
        goto LAB9;

LAB10:    t41 = (t4 + 4U);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t41) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t50, 8);

LAB19:    t61 = (t0 + 3312);
    t64 = (t61 + 32U);
    t65 = *((char **)t64);
    t66 = (t65 + 40U);
    t67 = *((char **)t66);
    t68 = (t67 + 4U);
    t69 = 65535U;
    t70 = t69;
    t71 = (t3 + 4U);
    t72 = *((unsigned int *)t3);
    t69 = (t69 & t72);
    t73 = *((unsigned int *)t71);
    t70 = (t70 & t73);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & 4294901760U);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 | t69);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 4294901760U);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t77 | t70);
    xsi_driver_vfirst_trans(t61, 0, 15);
    t78 = (t0 + 3088);
    *((int *)t78) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4U);
    t21 = (t6 + 4U);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB10;

LAB11:    t45 = ((char*)((ng0)));
    goto LAB12;

LAB13:    t52 = (t0 + 1620U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t51 + 4U);
    t54 = (t53 + 4U);
    t55 = *((unsigned int *)t53);
    t56 = (t55 >> 0);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t52) = t58;
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 127U);
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 127U);
    t61 = (t0 + 1532U);
    t62 = *((char **)t61);
    t61 = (t0 + 828U);
    t63 = *((char **)t61);
    xsi_vlogtype_concat(t50, 16, 16, 3U, t63, 1, t62, 8, t51, 7);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 16, t45, 16, t50, 16);
    goto LAB19;

LAB17:    memcpy(t3, t45, 8);
    goto LAB19;

}


extern void work_m_00000000000198734177_1471296395_init()
{
	static char *pe[] = {(void *)N117_0,(void *)N122_1,(void *)N123_2,(void *)N125_3,(void *)N129_4,(void *)C131_5};
	xsi_register_didat("work_m_00000000000198734177_1471296395", "isim/_tmp/work/m_00000000000198734177_1471296395.didat");
	xsi_register_executes(pe);
}
