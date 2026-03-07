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
static const char *ng1 = "[%0t] INFO: Applying reset (active-low).";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static const char *ng4 = "[%0t] INFO: Reset released.";
static int ng5[] = {1, 0};
static unsigned int ng6[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};
static unsigned int ng7[] = {255U, 255U};
static int ng8[] = {0, 0};
static const char *ng9 = "Initializing source registers...";
static int ng10[] = {128, 0};
static unsigned int ng11[] = {0U, 0U, 0U, 0U};
static const char *ng12 = "\n--- TEST 1: Basic packet send with output stalled. ---";
static unsigned int ng13[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng14[] = {3149642683U, 0U, 3149642683U, 0U};
static unsigned int ng15[] = {3435973836U, 0U, 3435973836U, 0U};
static const char *ng16 = "[%0t] INFO: Packet sent. FIFO should be full. Waiting 5 cycles.";
static const char *ng17 = "\n--- ALL TESTS PASSED ---";
static const char *ng18 = "\n--- TEST FAILED with %0d errors ---";
static const char *ng19 = "[%0t] MISMATCH! Word: %0d. Expected: D=%h,C=%h. Got: D=%h,C=%h";
static const char *ng20 = "[%0t] MATCH. Word: %0d. Data: %h, Ctrl: %h";
static const char *ng21 = "[%0t] UNEXPECTED DATA! Received more words than sent.";



static int sp_apply_reset(char *t1, char *t2)
{
    char t5[16];
    int t0;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 760);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t6 = xsi_vlog_time(t5, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng1, 2, t1, (char)118, t5, 64);
    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t4 = (t2 + 28U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t6, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t4 = xsi_vlog_time(t5, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng4, 2, t1, (char)118, t5, 64);
    xsi_set_current_line(87, ng0);
    t4 = (t2 + 28U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 200000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_send_word(char *t1, char *t2)
{
    char t19[8];
    char t20[8];
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    int t30;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1000);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);

LAB6:    t5 = (t1 + 1612U);
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
    xsi_set_current_line(97, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(98, ng0);
    t4 = (t1 + 3216);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 3308);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2388);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2480);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t4 = (t1 + 3216);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2572);
    t13 = (t1 + 2572);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t1 + 2572);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t21 = (t1 + 2756);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t19, t20, t15, t18, 2, 1, t23, 32, 1);
    t24 = (t19 + 4U);
    t7 = *((unsigned int *)t24);
    t25 = (!(t7));
    t26 = (t20 + 4U);
    t8 = *((unsigned int *)t26);
    t27 = (!(t8));
    t28 = (t25 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(103, ng0);
    t4 = (t1 + 3308);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2664);
    t13 = (t1 + 2664);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t1 + 2664);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t21 = (t1 + 2756);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t19, t20, t15, t18, 2, 1, t23, 32, 1);
    t24 = (t19 + 4U);
    t7 = *((unsigned int *)t24);
    t25 = (!(t7));
    t26 = (t20 + 4U);
    t8 = *((unsigned int *)t26);
    t27 = (!(t8));
    t28 = (t25 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(104, ng0);
    t4 = (t1 + 2756);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t6, 32, t12, 32);
    t13 = (t1 + 2756);
    xsi_vlogvar_assign_value(t13, t19, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB10:    t9 = *((unsigned int *)t19);
    t10 = *((unsigned int *)t20);
    t29 = (t9 - t10);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t12, t6, 0, *((unsigned int *)t20), t30);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t19);
    t10 = *((unsigned int *)t20);
    t29 = (t9 - t10);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t12, t6, 0, *((unsigned int *)t20), t30);
    goto LAB13;

LAB14:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2480);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 2388);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 8, 0LL);
    goto LAB4;

}

static void A77_0(char *t0)
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

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3700);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1928);
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
    t17 = (t0 + 1928);
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

static void I114_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t17[8];
    char t40[16];
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

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);

LAB4:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2020);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2940);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3124);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(127, ng0);
    xsi_vlogfile_write(1, 0, ng9, 1, t0);
    xsi_set_current_line(128, ng0);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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

LAB8:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2020);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 1200000000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB7:    xsi_set_current_line(128, ng0);

LAB9:    xsi_set_current_line(129, ng0);
    t13 = ((char*)((ng11)));
    t14 = (t0 + 6372);
    t15 = *((char **)t14);
    t18 = (t0 + 6404);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 6436);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 1836);
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
        goto LAB10;

LAB11:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1836);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t17);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(((char*)(t15)), t13, 0, *((unsigned int *)t17), t39);
    goto LAB11;

LAB12:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 3828);
    t4 = (t0 + 760);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB14:    t7 = (t0 + 3876);
    t13 = *((char **)t7);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t18 = (t15 + 132U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t31 = ((int  (*)(char *, char *))t21)(t0, t13);
    if (t31 != 0)
        goto LAB16;

LAB15:    t13 = (t0 + 760);
    xsi_vlog_subprogram_popinvocation(t13);

LAB13:    t22 = (t0 + 3876);
    t23 = *((char **)t22);
    t22 = (t0 + 760);
    t24 = (t0 + 3876);
    t25 = *((char **)t24);
    t24 = (t0 + 3828);
    t26 = 0;
    xsi_delete_subprogram_invocation(t22, t25, t0, t24, t26);
    xsi_set_current_line(136, ng0);
    xsi_vlogfile_write(1, 0, ng12, 1, t0);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3828);
    t5 = (t0 + 1000);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 3216);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 3308);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB18:    t15 = (t0 + 3876);
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

LAB19:    t18 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t18);

LAB17:    t25 = (t0 + 3876);
    t26 = *((char **)t25);
    t25 = (t0 + 1000);
    t27 = (t0 + 3876);
    t28 = *((char **)t27);
    t27 = (t0 + 3828);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3828);
    t5 = (t0 + 1000);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 3216);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 3308);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB22:    t15 = (t0 + 3876);
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

LAB23:    t18 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t18);

LAB21:    t25 = (t0 + 3876);
    t26 = *((char **)t25);
    t25 = (t0 + 1000);
    t27 = (t0 + 3876);
    t28 = *((char **)t27);
    t27 = (t0 + 3828);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3828);
    t5 = (t0 + 1000);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t13 = (t0 + 3216);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 64);
    t14 = (t0 + 3308);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 8);

LAB26:    t15 = (t0 + 3876);
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

LAB27:    t18 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t18);

LAB25:    t25 = (t0 + 3876);
    t26 = *((char **)t25);
    t25 = (t0 + 1000);
    t27 = (t0 + 3876);
    t28 = *((char **)t27);
    t27 = (t0 + 3828);
    t29 = 0;
    xsi_delete_subprogram_invocation(t25, t28, t0, t27, t29);
    xsi_set_current_line(145, ng0);
    t2 = xsi_vlog_time(t40, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng16, 2, t0, (char)118, t40, 64);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3828);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB16:    t7 = (t0 + 3912U);
    *((char **)t7) = &&LAB14;
    goto LAB1;

LAB20:    t15 = (t0 + 3912U);
    *((char **)t15) = &&LAB18;
    goto LAB1;

LAB24:    t15 = (t0 + 3912U);
    *((char **)t15) = &&LAB22;
    goto LAB1;

LAB28:    t15 = (t0 + 3912U);
    *((char **)t15) = &&LAB26;
    goto LAB1;

LAB29:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4U);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, ng18, 2, t0, (char)119, t4, 32);

LAB32:    xsi_set_current_line(151, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB30:    xsi_set_current_line(149, ng0);
    xsi_vlogfile_write(1, 0, ng17, 1, t0);
    goto LAB32;

}

static void A155_2(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t59[8];
    char t74[8];
    char t82[8];
    char t126[8];
    char t137[16];
    char t147[16];
    char t148[8];
    char t165[8];
    char t175[8];
    char t178[8];
    char t186[8];
    char t220[16];
    char t228[16];
    char t241[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t19;
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
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t176;
    char *t177;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;
    char *t227;
    char *t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    char *t240;
    char *t242;
    char *t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t252;
    char *t253;

LAB0:    t1 = (t0 + 4040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4244);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 2020);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t14 = (t6 + 4U);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    memset(t59, 0, 8);
    t60 = (t59 + 4U);
    t61 = (t27 + 4U);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t27);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t61) != 0)
        goto LAB22;

LAB23:    t67 = (t59 + 4U);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB24;

LAB25:    memcpy(t82, t59, 8);

LAB26:    t114 = (t82 + 4U);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t82);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1524U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t20 + 4U);
    t21 = (t19 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4U);
    t32 = (t20 + 4U);
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

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4U);
    t42 = (t20 + 4U);
    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t20);
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

LAB20:    *((unsigned int *)t59) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t59) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB23;

LAB24:    t71 = (t0 + 2204);
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
        goto LAB27;

LAB28:    if (*((unsigned int *)t76) != 0)
        goto LAB29;

LAB30:    t83 = *((unsigned int *)t59);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t59 + 4U);
    t87 = (t74 + 4U);
    t88 = (t82 + 4U);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t74) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t74) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB30;

LAB31:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t59 + 4U);
    t97 = (t74 + 4U);
    t98 = *((unsigned int *)t59);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB33;

LAB34:    xsi_set_current_line(156, ng0);

LAB37:    xsi_set_current_line(157, ng0);
    t120 = (t0 + 2848);
    t121 = (t120 + 32U);
    t122 = *((char **)t121);
    t123 = (t0 + 2756);
    t124 = (t123 + 32U);
    t125 = *((char **)t124);
    memset(t126, 0, 8);
    xsi_vlog_signed_less(t126, 32, t122, 32, t125, 32);
    t127 = (t126 + 4U);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (t130 & t129);
    t132 = (t131 != 0);
    if (t132 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2112);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t4 + 4U);
    t14 = (t5 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t14);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t14);
    t23 = (t17 | t22);
    t24 = (~(t23));
    t25 = (t16 & t24);
    if (t25 != 0)
        goto LAB66;

LAB63:    if (t23 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;

LAB66:    t18 = (t6 + 4U);
    t26 = *((unsigned int *)t18);
    t28 = (~(t26));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t34 = (t30 != 0);
    if (t34 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB40:    goto LAB36;

LAB38:    xsi_set_current_line(157, ng0);

LAB41:    xsi_set_current_line(158, ng0);
    t133 = (t0 + 1348U);
    t134 = *((char **)t133);
    t133 = (t0 + 2572);
    t135 = (t133 + 32U);
    t136 = *((char **)t135);
    t138 = (t0 + 2572);
    t139 = (t138 + 40U);
    t140 = *((char **)t139);
    t141 = (t0 + 2572);
    t142 = (t141 + 36U);
    t143 = *((char **)t142);
    t144 = (t0 + 2848);
    t145 = (t144 + 32U);
    t146 = *((char **)t145);
    xsi_vlog_generic_get_array_select_value(t137, 64, t136, t140, t143, 2, 1, t146, 32, 1);
    xsi_vlog_unsigned_case_noteq(t147, 64, t134, 64, t137, 64);
    memset(t148, 0, 8);
    t149 = (t148 + 4U);
    t150 = (t147 + 4U);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t147);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t150) != 0)
        goto LAB44;

LAB45:    t156 = (t148 + 4U);
    t157 = *((unsigned int *)t148);
    t158 = (!(t157));
    t159 = *((unsigned int *)t156);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB46;

LAB47:    memcpy(t186, t148, 8);

LAB48:    t214 = (t186 + 4U);
    t215 = *((unsigned int *)t214);
    t216 = (~(t215));
    t217 = *((unsigned int *)t186);
    t218 = (t217 & t216);
    t219 = (t218 != 0);
    if (t219 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(162, ng0);
    t2 = xsi_vlog_time(t137, 1000000.000000000, 1000.000000000000);
    t3 = (t0 + 2848);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t7 = (t0 + 1348U);
    t8 = *((char **)t7);
    t7 = (t0 + 1436U);
    t14 = *((char **)t7);
    xsi_vlogfile_write(1, 0, ng20, 5, t0, (char)118, t137, 64, (char)119, t5, 32, (char)118, t8, 64, (char)118, t14, 8);

LAB61:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2848);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2848);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB40;

LAB42:    *((unsigned int *)t148) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t148) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB45;

LAB46:    t161 = (t0 + 1436U);
    t162 = *((char **)t161);
    t161 = (t0 + 2664);
    t163 = (t161 + 32U);
    t164 = *((char **)t163);
    t166 = (t0 + 2664);
    t167 = (t166 + 40U);
    t168 = *((char **)t167);
    t169 = (t0 + 2664);
    t170 = (t169 + 36U);
    t171 = *((char **)t170);
    t172 = (t0 + 2848);
    t173 = (t172 + 32U);
    t174 = *((char **)t173);
    xsi_vlog_generic_get_array_select_value(t165, 8, t164, t168, t171, 2, 1, t174, 32, 1);
    memset(t175, 0, 8);
    t176 = (t162 + 4U);
    t177 = (t165 + 4U);
    if (*((unsigned int *)t162) != *((unsigned int *)t165))
        goto LAB50;

LAB49:    if (*((unsigned int *)t176) != *((unsigned int *)t177))
        goto LAB50;

LAB51:    memset(t178, 0, 8);
    t179 = (t178 + 4U);
    t180 = (t175 + 4U);
    t181 = *((unsigned int *)t180);
    t182 = (~(t181));
    t183 = *((unsigned int *)t175);
    t184 = (t183 & t182);
    t185 = (t184 & 1U);
    if (t185 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t180) != 0)
        goto LAB54;

LAB55:    t187 = *((unsigned int *)t148);
    t188 = *((unsigned int *)t178);
    t189 = (t187 | t188);
    *((unsigned int *)t186) = t189;
    t190 = (t148 + 4U);
    t191 = (t178 + 4U);
    t192 = (t186 + 4U);
    t193 = *((unsigned int *)t190);
    t194 = *((unsigned int *)t191);
    t195 = (t193 | t194);
    *((unsigned int *)t192) = t195;
    t196 = *((unsigned int *)t192);
    t197 = (t196 != 0);
    if (t197 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB48;

LAB50:    *((unsigned int *)t175) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t178) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t178) = 1;
    *((unsigned int *)t179) = 1;
    goto LAB55;

LAB56:    t198 = *((unsigned int *)t186);
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t186) = (t198 | t199);
    t200 = (t148 + 4U);
    t201 = (t178 + 4U);
    t202 = *((unsigned int *)t200);
    t203 = (~(t202));
    t204 = *((unsigned int *)t148);
    t205 = (t204 & t203);
    t206 = *((unsigned int *)t201);
    t207 = (~(t206));
    t208 = *((unsigned int *)t178);
    t209 = (t208 & t207);
    t210 = (~(t205));
    t211 = (~(t209));
    t212 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t212 & t210);
    t213 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t213 & t211);
    goto LAB58;

LAB59:    xsi_set_current_line(158, ng0);

LAB62:    xsi_set_current_line(159, ng0);
    t221 = xsi_vlog_time(t220, 1000000.000000000, 1000.000000000000);
    t222 = (t0 + 2848);
    t223 = (t222 + 32U);
    t224 = *((char **)t223);
    t225 = (t0 + 2572);
    t226 = (t225 + 32U);
    t227 = *((char **)t226);
    t229 = (t0 + 2572);
    t230 = (t229 + 40U);
    t231 = *((char **)t230);
    t232 = (t0 + 2572);
    t233 = (t232 + 36U);
    t234 = *((char **)t233);
    t235 = (t0 + 2848);
    t236 = (t235 + 32U);
    t237 = *((char **)t236);
    xsi_vlog_generic_get_array_select_value(t228, 64, t227, t231, t234, 2, 1, t237, 32, 1);
    t238 = (t0 + 2664);
    t239 = (t238 + 32U);
    t240 = *((char **)t239);
    t242 = (t0 + 2664);
    t243 = (t242 + 40U);
    t244 = *((char **)t243);
    t245 = (t0 + 2664);
    t246 = (t245 + 36U);
    t247 = *((char **)t246);
    t248 = (t0 + 2848);
    t249 = (t248 + 32U);
    t250 = *((char **)t249);
    xsi_vlog_generic_get_array_select_value(t241, 8, t240, t244, t247, 2, 1, t250, 32, 1);
    t251 = (t0 + 1348U);
    t252 = *((char **)t251);
    t251 = (t0 + 1436U);
    t253 = *((char **)t251);
    xsi_vlogfile_write(1, 0, ng19, 7, t0, (char)118, t220, 64, (char)119, t224, 32, (char)118, t228, 64, (char)118, t241, 8, (char)118, t252, 64, (char)118, t253, 8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB61;

LAB65:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(164, ng0);

LAB70:    xsi_set_current_line(165, ng0);
    t19 = xsi_vlog_time(t137, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng21, 2, t0, (char)118, t137, 64);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB69;

}


extern void work_m_00000000002609049321_0842172478_init()
{
	static char *pe[] = {(void *)A77_0,(void *)I114_1,(void *)A155_2};
	static char *se[] = {(void *)sp_apply_reset,(void *)sp_send_word};
	xsi_register_didat("work_m_00000000002609049321_0842172478", "isim/_tmp/work/m_00000000002609049321_0842172478.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
