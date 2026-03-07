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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static const char *ng3 = "//vmware-host/Shared Folders/EE533/lab8_sp26/verilog/processor_integration/single_packet_fifo.v";
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {0U, 0U, 0U, 0U, 0U, 0U};



static void N78_0(char *t0)
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

LAB0:    t1 = (t0 + 3828U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1424U);
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
        goto LAB5;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 5108);
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
    t35 = (t0 + 5032);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void C80_1(char *t0)
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

LAB0:    t1 = (t0 + 3956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2984);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
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

LAB32:    t144 = (t0 + 5144);
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
    t159 = (t0 + 5040);
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

LAB12:    t35 = (t0 + 2984);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
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

LAB30:    t103 = (t0 + 1512U);
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

static void C81_2(char *t0)
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

LAB0:    t1 = (t0 + 4084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    t2 = (t0 + 1424U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t5, 8, t4, 64);
    t2 = (t0 + 5180);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t2, 0, 71);
    t10 = (t0 + 5048);
    *((int *)t10) = 1;

LAB1:    return;
}

static void A84_3(char *t0)
{
    char t7[16];
    char t8[8];
    char t34[8];
    char t35[8];
    char t42[8];
    char t50[8];
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
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
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
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
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

LAB0:    t1 = (t0 + 4212U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng3);
    t2 = (t0 + 5056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng3);

LAB5:    xsi_set_current_line(86, ng3);
    t3 = (t0 + 2984);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 3076);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    xsi_set_current_line(87, ng3);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2892);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng3);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t7, 64, t3, 63, 0);
    t2 = (t0 + 2616);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 64);
    xsi_set_current_line(89, ng3);
    t2 = (t0 + 1864U);
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
    t6 = (t0 + 2708);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    xsi_set_current_line(91, ng3);
    t2 = (t0 + 2984);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(92, ng3);

LAB16:    xsi_set_current_line(93, ng3);
    t6 = ((char*)((ng2)));
    t16 = (t0 + 2892);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    xsi_set_current_line(94, ng3);
    t2 = (t0 + 1512U);
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

LAB9:    xsi_set_current_line(103, ng3);

LAB26:    xsi_set_current_line(104, ng3);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2892);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(105, ng3);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB15;

LAB11:    xsi_set_current_line(118, ng3);

LAB43:    xsi_set_current_line(119, ng3);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2892);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(120, ng3);
    t2 = (t0 + 1248U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB15;

LAB13:    xsi_set_current_line(126, ng3);

LAB48:    xsi_set_current_line(127, ng3);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2892);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(131, ng3);
    t2 = (t0 + 1248U);
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
        goto LAB49;

LAB50:    if (*((unsigned int *)t5) != 0)
        goto LAB51;

LAB52:    t6 = (t8 + 4U);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t6);
    t18 = (t14 || t17);
    if (t18 > 0)
        goto LAB53;

LAB54:    memcpy(t50, t8, 8);

LAB55:    t81 = (t50 + 4U);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t50);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB15;

LAB17:    xsi_set_current_line(94, ng3);

LAB20:    xsi_set_current_line(95, ng3);
    t5 = (t0 + 2040U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t14 = *((unsigned int *)t5);
    t17 = (~(t14));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(97, ng3);

LAB25:    xsi_set_current_line(98, ng3);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3076);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB23:    goto LAB19;

LAB21:    xsi_set_current_line(95, ng3);

LAB24:    xsi_set_current_line(96, ng3);
    t16 = ((char*)((ng4)));
    t21 = (t0 + 3076);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 2);
    goto LAB23;

LAB27:    xsi_set_current_line(105, ng3);

LAB30:    xsi_set_current_line(106, ng3);
    t5 = (t0 + 2040U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t14 = *((unsigned int *)t5);
    t17 = (~(t14));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(111, ng3);
    t2 = (t0 + 3168);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
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
        goto LAB38;

LAB35:    if (t20 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t8) = 1;

LAB38:    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB33:    goto LAB29;

LAB31:    xsi_set_current_line(106, ng3);

LAB34:    xsi_set_current_line(108, ng3);
    t16 = ((char*)((ng4)));
    t21 = (t0 + 3076);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 2);
    goto LAB33;

LAB37:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(111, ng3);

LAB42:    xsi_set_current_line(113, ng3);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 3076);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 2);
    goto LAB41;

LAB44:    xsi_set_current_line(120, ng3);

LAB47:    xsi_set_current_line(122, ng3);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 3076);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    goto LAB46;

LAB49:    *((unsigned int *)t8) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB52;

LAB53:    t16 = (t0 + 3260);
    t21 = (t16 + 32U);
    t22 = *((char **)t21);
    t25 = (t0 + 3352);
    t31 = (t25 + 32U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng6)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 32, t32, 9, t33, 32);
    memset(t35, 0, 8);
    t36 = (t35 + 4U);
    t37 = (t22 + 4U);
    t38 = (t34 + 4U);
    t19 = *((unsigned int *)t22);
    t20 = *((unsigned int *)t34);
    t23 = (t19 ^ t20);
    t24 = *((unsigned int *)t37);
    t26 = *((unsigned int *)t38);
    t27 = (t24 ^ t26);
    t28 = (t23 | t27);
    t29 = *((unsigned int *)t37);
    t30 = *((unsigned int *)t38);
    t39 = (t29 | t30);
    t40 = (~(t39));
    t41 = (t28 & t40);
    if (t41 != 0)
        goto LAB59;

LAB56:    if (t39 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t35) = 1;

LAB59:    memset(t42, 0, 8);
    t43 = (t42 + 4U);
    t44 = (t35 + 4U);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t35);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t44) != 0)
        goto LAB62;

LAB63:    t51 = *((unsigned int *)t8);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t8 + 4U);
    t55 = (t42 + 4U);
    t56 = (t50 + 4U);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    *((unsigned int *)t35) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t42) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB63;

LAB64:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t8 + 4U);
    t65 = (t42 + 4U);
    t66 = *((unsigned int *)t8);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t15 = (t67 & t69);
    t74 = (t71 & t73);
    t75 = (~(t15));
    t76 = (~(t74));
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t79 & t75);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    goto LAB66;

LAB67:    xsi_set_current_line(131, ng3);

LAB70:    xsi_set_current_line(132, ng3);
    t87 = ((char*)((ng1)));
    t88 = (t0 + 3076);
    xsi_vlogvar_assign_value(t88, t87, 0, 0, 2);
    goto LAB69;

}

static void A139_4(char *t0)
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

LAB0:    t1 = (t0 + 4340U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng3);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng3);

LAB5:    xsi_set_current_line(140, ng3);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(146, ng3);

LAB10:    xsi_set_current_line(147, ng3);
    t2 = (t0 + 3076);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 2984);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(151, ng3);
    t2 = (t0 + 2984);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng5)));
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

LAB14:    t22 = (t0 + 2800);
    xsi_vlogvar_generic_wait_assign_value(t22, t12, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng3);
    t2 = (t0 + 3076);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng1)));
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

LAB38:    xsi_set_current_line(159, ng3);

LAB41:    xsi_set_current_line(161, ng3);
    t2 = (t0 + 2984);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng1)));
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
LAB80:    xsi_set_current_line(167, ng3);
    t2 = (t0 + 2984);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng5)));
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

LAB6:    xsi_set_current_line(140, ng3);

LAB9:    xsi_set_current_line(141, ng3);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 2984);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3168);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(143, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3260);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(144, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3352);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(145, ng3);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2800);
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

LAB23:    t34 = (t0 + 2984);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
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

LAB37:    xsi_set_current_line(155, ng3);

LAB40:    xsi_set_current_line(156, ng3);
    t100 = ((char*)((ng0)));
    t101 = (t0 + 3168);
    xsi_vlogvar_generic_wait_assign_value(t101, t100, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(157, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3260);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(158, ng3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3352);
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

LAB50:    t34 = (t0 + 2984);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
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

LAB68:    t103 = (t0 + 1512U);
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

LAB78:    xsi_set_current_line(161, ng3);

LAB81:    xsi_set_current_line(162, ng3);
    t150 = (t0 + 3168);
    t151 = (t150 + 32U);
    t152 = *((char **)t151);
    t153 = ((char*)((ng6)));
    memset(t154, 0, 8);
    xsi_vlog_unsigned_add(t154, 32, t152, 8, t153, 32);
    t155 = (t0 + 3168);
    xsi_vlogvar_generic_wait_assign_value(t155, t154, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(163, ng3);
    t2 = (t0 + 2040U);
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

LAB82:    xsi_set_current_line(163, ng3);

LAB85:    xsi_set_current_line(164, ng3);
    t4 = (t0 + 3168);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t11, 8, t13, 32);
    t14 = (t0 + 3352);
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

LAB94:    t34 = (t0 + 1248U);
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

LAB104:    xsi_set_current_line(167, ng3);

LAB107:    xsi_set_current_line(168, ng3);
    t66 = (t0 + 3260);
    t67 = (t66 + 32U);
    t68 = *((char **)t67);
    t76 = ((char*)((ng6)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 32, t68, 8, t76, 32);
    t77 = (t0 + 3260);
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

LAB0:    t1 = (t0 + 4468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 5216);
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

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4596U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 5252);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 72);
    xsi_driver_vfirst_trans(t3, 0, 71);

LAB1:    return;
}

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 4724U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
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

static void implSig4_execute(char *t0)
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

LAB0:    t1 = (t0 + 4852U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 5324);
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


extern void work_m_00000000003154449880_3207759200_init()
{
	static char *pe[] = {(void *)N78_0,(void *)C80_1,(void *)C81_2,(void *)A84_3,(void *)A139_4,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute};
	xsi_register_didat("work_m_00000000003154449880_3207759200", "isim/_tmp/work/m_00000000003154449880_3207759200.didat");
	xsi_register_executes(pe);
}
