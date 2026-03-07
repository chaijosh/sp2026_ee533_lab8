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
static const char *ng0 = "//vmware-host/Shared Folders/EE533/lab8_sp26/verilog/processor_integration/network_processor_tb.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {0, 0, 0, 0};
static const char *ng6 = "Starting Testbench for basic CPU operations...";
static const char *ng7 = "Reset released at time %0t";
static const char *ng8 = "Initializing source registers...";
static int ng9[] = {128, 0};
static unsigned int ng10[] = {0U, 0U, 0U, 0U};
static const char *ng11 = "\n--- TEST 4: Single-word packet. ---";
static unsigned int ng12[] = {0U, 0U, 4294967295U, 0U};
static unsigned int ng13[] = {255U, 0U};
static const char *ng14 = "[%0t] INFO: Test 4 complete.";
static int ng15[] = {5, 0};
static const char *ng16 = "\n--- ALL TESTS PASSED ---";
static const char *ng17 = "\n--- TEST FAILED with %0d errors ---";
static const char *ng18 = "[%0t] MISMATCH! Word: %0d. Expected data: %h, ctrl: %h. Got data: %h, ctrl: %h";
static const char *ng19 = "[%0t] MATCH. Word: %0d. Data: %h, Ctrl: %h";
static const char *ng20 = "[%0t] UNEXPECTED DATA! Received more words than were sent in the last packet.";



static int sp_send_word(char *t1, char *t2)
{
    char t8[8];
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 760);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t2 + 44U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(77, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 1780);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 2884);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 1872);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 1964);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2240);
    t10 = (t1 + 2240);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 2240);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t1 + 2424);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t8, t9, t12, t15, 2, 1, t18, 32, 1);
    t19 = (t8 + 4U);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t9 + 4U);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(82, ng0);
    t4 = (t1 + 2884);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2332);
    t10 = (t1 + 2332);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 2332);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t1 + 2424);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t8, t9, t12, t15, 2, 1, t18, 32, 1);
    t19 = (t8 + 4U);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t9 + 4U);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(83, ng0);
    t4 = (t1 + 2424);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t10 = (t1 + 2424);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB7:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t7, t6, 0, *((unsigned int *)t9), t29);
    goto LAB8;

LAB9:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t7, t6, 0, *((unsigned int *)t9), t29);
    goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 1964);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    goto LAB4;

}

static void I89_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1780);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2056);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t4) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB7:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 2056);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 1);
    goto LAB5;

LAB8:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB7;

LAB9:    goto LAB1;

}

static void I101_1(char *t0)
{
    char t4[16];
    char t7[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
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
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);

LAB4:    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, ng6, 1, t0);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3404);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = xsi_vlog_time(t4, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng7, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3404);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, ng8, 1, t0);
    xsi_set_current_line(117, ng0);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2700);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 2700);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3404);
    xsi_process_wait(t2, 1200000000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB8:    xsi_set_current_line(117, ng0);

LAB10:    xsi_set_current_line(118, ng0);
    t14 = ((char*)((ng10)));
    t15 = (t0 + 5808);
    t16 = *((char **)t15);
    t19 = (t0 + 5840);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 5872);
    t24 = *((char **)t23);
    t25 = ((((char*)(t24))) + 36U);
    t26 = *((char **)t25);
    t27 = (t0 + 2700);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t17, t18, t22, t26, 2, 1, t29, 32, 1);
    t30 = (t17 + 4U);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t18 + 4U);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2700);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 2700);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB7;

LAB11:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(((char*)(t16)), t14, 0, *((unsigned int *)t18), t40);
    goto LAB12;

LAB13:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, ng11, 1, t0);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1688);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    t5 = (t0 + 3404);
    t6 = (t0 + 760);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t8);
    t14 = (t0 + 2792);
    xsi_vlogvar_assign_value(t14, t2, 0, 0, 64);
    t15 = (t0 + 2884);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 8);

LAB15:    t16 = (t0 + 3452);
    t19 = *((char **)t16);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t21 + 132U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t32 = ((int  (*)(char *, char *))t25)(t0, t19);
    if (t32 != 0)
        goto LAB17;

LAB16:    t19 = (t0 + 760);
    xsi_vlog_subprogram_popinvocation(t19);

LAB14:    t26 = (t0 + 3452);
    t27 = *((char **)t26);
    t26 = (t0 + 760);
    t28 = (t0 + 3452);
    t29 = *((char **)t28);
    t28 = (t0 + 3404);
    t30 = 0;
    xsi_delete_subprogram_invocation(t26, t29, t0, t28, t30);
    xsi_set_current_line(130, ng0);

LAB18:    t2 = (t0 + 2516);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t0 + 2424);
    t8 = (t6 + 32U);
    t14 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t5, 32, t14, 32);
    t15 = (t7 + 4U);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB19:    t16 = (t0 + 3812);
    *((int *)t16) = 1;
    t19 = (t0 + 3488U);
    *((char **)t19) = &&LAB18;
    goto LAB1;

LAB17:    t16 = (t0 + 3488U);
    *((char **)t16) = &&LAB15;
    goto LAB1;

LAB20:    t20 = (t0 + 3812);
    *((int *)t20) = 0;
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3820);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(132, ng0);
    t2 = xsi_vlog_time(t4, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng14, 2, t0, (char)118, t4, 64);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t32 = (t11 & t10);
    t5 = (t0 + 5876);
    *((int *)t5) = t32;

LAB22:    t6 = (t0 + 5876);
    if (*((int *)t6) > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(138, ng0);

LAB30:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, ng17, 2, t0, (char)119, t5, 32);

LAB28:    xsi_set_current_line(141, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB23:    xsi_set_current_line(135, ng0);
    t8 = (t0 + 3828);
    *((int *)t8) = 1;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    t2 = (t0 + 5876);
    t32 = *((int *)t2);
    *((int *)t2) = (t32 - 1);
    goto LAB22;

LAB26:    xsi_set_current_line(136, ng0);

LAB29:    xsi_set_current_line(137, ng0);
    xsi_vlogfile_write(1, 0, ng16, 1, t0);
    goto LAB28;

}

static void A147_2(char *t0)
{
    char t5[8];
    char t19[8];
    char t27[8];
    char t71[8];
    char t82[16];
    char t92[16];
    char t93[8];
    char t110[8];
    char t120[8];
    char t123[8];
    char t131[8];
    char t165[16];
    char t173[16];
    char t186[8];
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
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
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
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;

LAB0:    t1 = (t0 + 3616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3836);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 1284U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t3 = (t5 + 4U);
    t6 = (t4 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t12 = (t5 + 4U);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t5, 8);

LAB12:    t59 = (t27 + 4U);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    t16 = (t0 + 1688);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4U);
    t21 = (t18 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t19);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4U);
    t32 = (t19 + 4U);
    t33 = (t27 + 4U);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4U);
    t42 = (t19 + 4U);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB19;

LAB20:    xsi_set_current_line(148, ng0);

LAB23:    xsi_set_current_line(149, ng0);
    t65 = (t0 + 2516);
    t66 = (t65 + 32U);
    t67 = *((char **)t66);
    t68 = (t0 + 2424);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    xsi_vlog_signed_less(t71, 32, t67, 32, t70, 32);
    t72 = (t71 + 4U);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(160, ng0);

LAB50:    xsi_set_current_line(161, ng0);
    t2 = xsi_vlog_time(t82, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng20, 2, t0, (char)118, t82, 64);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2608);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB26:    goto LAB22;

LAB24:    xsi_set_current_line(149, ng0);

LAB27:    xsi_set_current_line(150, ng0);
    t78 = (t0 + 1108U);
    t79 = *((char **)t78);
    t78 = (t0 + 2240);
    t80 = (t78 + 32U);
    t81 = *((char **)t80);
    t83 = (t0 + 2240);
    t84 = (t83 + 40U);
    t85 = *((char **)t84);
    t86 = (t0 + 2240);
    t87 = (t86 + 36U);
    t88 = *((char **)t87);
    t89 = (t0 + 2516);
    t90 = (t89 + 32U);
    t91 = *((char **)t90);
    xsi_vlog_generic_get_array_select_value(t82, 64, t81, t85, t88, 2, 1, t91, 32, 1);
    xsi_vlog_unsigned_case_noteq(t92, 64, t79, 64, t82, 64);
    memset(t93, 0, 8);
    t94 = (t93 + 4U);
    t95 = (t92 + 4U);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t92);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t95) != 0)
        goto LAB30;

LAB31:    t101 = (t93 + 4U);
    t102 = *((unsigned int *)t93);
    t103 = (!(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB32;

LAB33:    memcpy(t131, t93, 8);

LAB34:    t159 = (t131 + 4U);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t131);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(155, ng0);

LAB49:    xsi_set_current_line(156, ng0);
    t2 = xsi_vlog_time(t82, 1000000.000000000, 1000.000000000000);
    t3 = (t0 + 2516);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t12 = (t0 + 1108U);
    t16 = *((char **)t12);
    t12 = (t0 + 1196U);
    t17 = *((char **)t12);
    xsi_vlogfile_write(1, 0, ng19, 5, t0, (char)118, t82, 64, (char)119, t6, 32, (char)118, t16, 64, (char)118, t17, 8);

LAB47:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 2516);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2516);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB26;

LAB28:    *((unsigned int *)t93) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t93) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB31;

LAB32:    t106 = (t0 + 1196U);
    t107 = *((char **)t106);
    t106 = (t0 + 2332);
    t108 = (t106 + 32U);
    t109 = *((char **)t108);
    t111 = (t0 + 2332);
    t112 = (t111 + 40U);
    t113 = *((char **)t112);
    t114 = (t0 + 2332);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    t117 = (t0 + 2516);
    t118 = (t117 + 32U);
    t119 = *((char **)t118);
    xsi_vlog_generic_get_array_select_value(t110, 8, t109, t113, t116, 2, 1, t119, 32, 1);
    memset(t120, 0, 8);
    t121 = (t107 + 4U);
    t122 = (t110 + 4U);
    if (*((unsigned int *)t107) != *((unsigned int *)t110))
        goto LAB36;

LAB35:    if (*((unsigned int *)t121) != *((unsigned int *)t122))
        goto LAB36;

LAB37:    memset(t123, 0, 8);
    t124 = (t123 + 4U);
    t125 = (t120 + 4U);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t120);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t125) != 0)
        goto LAB40;

LAB41:    t132 = *((unsigned int *)t93);
    t133 = *((unsigned int *)t123);
    t134 = (t132 | t133);
    *((unsigned int *)t131) = t134;
    t135 = (t93 + 4U);
    t136 = (t123 + 4U);
    t137 = (t131 + 4U);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB34;

LAB36:    *((unsigned int *)t120) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t123) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t123) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB41;

LAB42:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t93 + 4U);
    t146 = (t123 + 4U);
    t147 = *((unsigned int *)t145);
    t148 = (~(t147));
    t149 = *((unsigned int *)t93);
    t150 = (t149 & t148);
    t151 = *((unsigned int *)t146);
    t152 = (~(t151));
    t153 = *((unsigned int *)t123);
    t154 = (t153 & t152);
    t155 = (~(t150));
    t156 = (~(t154));
    t157 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t157 & t155);
    t158 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t158 & t156);
    goto LAB44;

LAB45:    xsi_set_current_line(150, ng0);

LAB48:    xsi_set_current_line(151, ng0);
    t166 = xsi_vlog_time(t165, 1000000.000000000, 1000.000000000000);
    t167 = (t0 + 2516);
    t168 = (t167 + 32U);
    t169 = *((char **)t168);
    t170 = (t0 + 2240);
    t171 = (t170 + 32U);
    t172 = *((char **)t171);
    t174 = (t0 + 2240);
    t175 = (t174 + 40U);
    t176 = *((char **)t175);
    t177 = (t0 + 2240);
    t178 = (t177 + 36U);
    t179 = *((char **)t178);
    t180 = (t0 + 2516);
    t181 = (t180 + 32U);
    t182 = *((char **)t181);
    xsi_vlog_generic_get_array_select_value(t173, 64, t172, t176, t179, 2, 1, t182, 32, 1);
    t183 = (t0 + 2332);
    t184 = (t183 + 32U);
    t185 = *((char **)t184);
    t187 = (t0 + 2332);
    t188 = (t187 + 40U);
    t189 = *((char **)t188);
    t190 = (t0 + 2332);
    t191 = (t190 + 36U);
    t192 = *((char **)t191);
    t193 = (t0 + 2516);
    t194 = (t193 + 32U);
    t195 = *((char **)t194);
    xsi_vlog_generic_get_array_select_value(t186, 8, t185, t189, t192, 2, 1, t195, 32, 1);
    t196 = (t0 + 1108U);
    t197 = *((char **)t196);
    t196 = (t0 + 1196U);
    t198 = *((char **)t196);
    xsi_vlogfile_write(1, 0, ng18, 7, t0, (char)118, t165, 64, (char)119, t169, 32, (char)118, t173, 64, (char)118, t186, 8, (char)118, t197, 64, (char)118, t198, 8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2608);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB47;

}


extern void work_m_00000000001293335629_3845719082_init()
{
	static char *pe[] = {(void *)I89_0,(void *)I101_1,(void *)A147_2};
	static char *se[] = {(void *)sp_send_word};
	xsi_register_didat("work_m_00000000001293335629_3845719082", "isim/_tmp/work/m_00000000001293335629_3845719082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
