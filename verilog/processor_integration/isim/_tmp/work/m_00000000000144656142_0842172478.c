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
static const char *ng0 = "//vmware-host/Shared Folders/EE533/lab8_sp26/verilog/processor_integration/network_processor_full_tb.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {128, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {500U, 0U, 0U, 0U};
static unsigned int ng8[] = {4294966947U, 0U, 4294967295U, 0U};
static unsigned int ng9[] = {2068744720U, 0U, 2750520365U, 0U};
static unsigned int ng10[] = {3356639142U, 0U, 1577571513U, 0U};
static unsigned int ng11[] = {1031558632U, 0U, 2603249409U, 0U};
static unsigned int ng12[] = {4280327027U, 0U, 474844842U, 0U};
static unsigned int ng13[] = {1788625661U, 0U, 3504714519U, 0U};
static unsigned int ng14[] = {4570770U, 0U, 2139758028U, 0U};
static unsigned int ng15[] = {3923382396U, 0U, 675542705U, 0U};
static unsigned int ng16[] = {324513608U, 0U, 3334311982U, 0U};
static unsigned int ng17[] = {255U, 0U};



static int sp_send_word(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 684);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);

LAB6:    t5 = (t1 + 1296U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB8;

LAB7:    t12 = (t2 + 44U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    xsi_wp_set_status(t14, 1);
    t15 = (t2 + 24U);
    *((char **)t15) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t16 = (t2 + 44U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    xsi_wp_set_status(t18, 0);
    xsi_set_current_line(70, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(71, ng0);
    t4 = (t1 + 2348);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2072);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(72, ng0);
    t4 = (t1 + 2440);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2164);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2256);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2256);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2072);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2164);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 8, 0LL);
    goto LAB4;

}

static void A62_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t17;

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1612);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB5:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 1612);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    goto LAB2;

LAB6:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB5;

}

static void I82_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 3044U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);

LAB4:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1612);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1796);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1980);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB6:    t2 = (t0 + 1520);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1796);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    xsi_set_current_line(94, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 5060);
    t15 = *((char **)t14);
    t18 = (t0 + 5092);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 5124);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 1520);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t16, t17, t21, t25, 2, 1, t28, 32, 1);
    t29 = (t16 + 4U);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t17 + 4U);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1520);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1520);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB9:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t17);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(((char*)(t15)), t13, 0, *((unsigned int *)t17), t39);
    goto LAB10;

LAB11:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1796);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1980);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB14:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB16;

LAB15:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB13:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB18:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB20;

LAB19:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB17:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB22:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB24;

LAB23:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB21:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB26:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB28;

LAB27:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB25:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB30:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB32;

LAB31:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB29:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB34:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB36;

LAB35:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB33:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB38:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB40;

LAB39:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB37:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB42:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB44;

LAB43:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB41:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB46:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB48;

LAB47:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB45:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng17)));
    t4 = (t0 + 2960);
    t5 = (t0 + 684);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 2348);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 2440);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB50:    t15 = (t0 + 3008);
    t18 = *((char **)t15);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t20 + 132U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t31 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t31 != 0)
        goto LAB52;

LAB51:    t18 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t18);

LAB49:    t25 = (t0 + 3008);
    t26 = *((char **)t25);
    t25 = (t0 + 684);
    t27 = (t0 + 3008);
    t28 = *((char **)t27);
    t27 = (t0 + 2960);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 1200000000000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB16:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB14;
    goto LAB1;

LAB20:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB18;
    goto LAB1;

LAB24:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB22;
    goto LAB1;

LAB28:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB26;
    goto LAB1;

LAB32:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB30;
    goto LAB1;

LAB36:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB34;
    goto LAB1;

LAB40:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB38;
    goto LAB1;

LAB44:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB42;
    goto LAB1;

LAB48:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB46;
    goto LAB1;

LAB52:    t15 = (t0 + 3044U);
    *((char **)t15) = &&LAB50;
    goto LAB1;

LAB53:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 400000000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1980);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(133, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000000144656142_0842172478_init()
{
	static char *pe[] = {(void *)A62_0,(void *)I82_1};
	static char *se[] = {(void *)sp_send_word};
	xsi_register_didat("work_m_00000000000144656142_0842172478", "isim/_tmp/work/m_00000000000144656142_0842172478.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
