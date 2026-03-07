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
static const char *ng0 = "//vmware-host/Shared Folders/EE533/lab8_sp26/verilog/fifo/single_packet_fifo_tb.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "[%0t] INFO: Reset applied.";
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static const char *ng7 = "--- Starting Testbench for single_packet_fifo ---";
static int ng8[] = {0, 0, 0, 0};
static const char *ng9 = "\n--- TEST 1: Basic packet send with output stalled. ---";
static unsigned int ng10[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng11[] = {3149642683U, 0U, 3149642683U, 0U};
static unsigned int ng12[] = {3435973836U, 0U, 3435973836U, 0U};
static const char *ng13 = "[%0t] INFO: Packet sent. FIFO should be full. Waiting 5 cycles.";
static int ng14[] = {5, 0};
static const char *ng15 = "[%0t] INFO: Enabling output. Expecting 3 words.";
static const char *ng16 = "[%0t] INFO: Test 1 complete.";
static const char *ng17 = "\n--- TEST 2: Back-to-back packets, no stalling. ---";
static const char *ng18 = "[%0t] INFO: Sending first packet (2 words).";
static unsigned int ng19[] = {286331153U, 0U, 286331153U, 0U};
static unsigned int ng20[] = {572662306U, 0U, 572662306U, 0U};
static unsigned int ng21[] = {2U, 0U};
static const char *ng22 = "[%0t] INFO: Sending second packet (4 words).";
static unsigned int ng23[] = {858993459U, 0U, 858993459U, 0U};
static unsigned int ng24[] = {1145324612U, 0U, 1145324612U, 0U};
static unsigned int ng25[] = {1431655765U, 0U, 1431655765U, 0U};
static unsigned int ng26[] = {1717986918U, 0U, 1717986918U, 0U};
static unsigned int ng27[] = {4U, 0U};
static const char *ng28 = "[%0t] INFO: Test 2 complete.";
static const char *ng29 = "\n--- TEST 3: Oversized packet (should be dropped). ---";
static const char *ng30 = "[%0t] INFO: Sending %0d words without EOP...";
static const char *ng31 = "[%0t] INFO: Sending one more word to trigger overflow.";
static unsigned int ng32[] = {3735928559U, 0U, 3735928559U, 0U};
static const char *ng33 = "[%0t] INFO: FIFO is ready again. Oversized packet was dropped as expected.";
static const char *ng34 = "[%0t] INFO: Test 3 complete.";
static const char *ng35 = "\n--- TEST 4: Single-word packet. ---";
static unsigned int ng36[] = {0U, 0U, 4294967295U, 0U};
static unsigned int ng37[] = {255U, 0U};
static const char *ng38 = "[%0t] INFO: Test 4 complete.";
static const char *ng39 = "\n--- ALL TESTS PASSED ---";
static const char *ng40 = "\n--- TEST FAILED with %0d errors ---";
static const char *ng41 = "[%0t] MISMATCH! Word: %0d. Expected data: %h, ctrl: %h. Got data: %h, ctrl: %h";
static const char *ng42 = "[%0t] MATCH. Word: %0d. Data: %h, Ctrl: %h";
static const char *ng43 = "[%0t] UNEXPECTED DATA! Received more words than were sent in the last packet.";



static int sp_apply_reset(char *t1, char *t2)
{
    char t15[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 760);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t6 = (t1 + 6252);
    *((int *)t6) = t10;

LAB6:    t11 = (t1 + 6252);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(82, ng0);
    t12 = (t2 + 44U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 6252);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(85, ng0);
    t4 = xsi_vlog_time(t15, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng4, 2, t1, (char)118, t15, 64);
    goto LAB4;

}

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

LAB2:    t4 = (t1 + 1000);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
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

LAB6:    xsi_set_current_line(94, ng0);
    t4 = (t1 + 2940);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(95, ng0);
    t4 = (t1 + 3032);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2112);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 2940);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2388);
    t10 = (t1 + 2388);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 2388);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t1 + 2572);
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

LAB8:    xsi_set_current_line(99, ng0);
    t4 = (t1 + 3032);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t1 + 2480);
    t10 = (t1 + 2480);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 2480);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t1 + 2572);
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

LAB10:    xsi_set_current_line(100, ng0);
    t4 = (t1 + 2572);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t10 = (t1 + 2572);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(101, ng0);
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

LAB11:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    goto LAB4;

}

static void I71_0(char *t0)
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

LAB0:    t1 = (t0 + 3508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);

LAB4:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3424);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1836);
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
    t17 = (t0 + 1836);
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

static void I109_1(char *t0)
{
    char t23[16];
    char t27[8];
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
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
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 3636U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);

LAB4:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, ng7, 1, t0);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2112);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3552);
    t3 = (t0 + 760);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB6:    t5 = (t0 + 3600);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB8;

LAB7:    t6 = (t0 + 760);
    xsi_vlog_subprogram_popinvocation(t6);

LAB5:    t14 = (t0 + 3600);
    t15 = *((char **)t14);
    t14 = (t0 + 760);
    t16 = (t0 + 3600);
    t17 = *((char **)t16);
    t16 = (t0 + 3552);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(126, ng0);
    xsi_vlogfile_write(1, 0, ng9, 1, t0);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB10:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB12;

LAB11:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB9:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB14:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB16;

LAB15:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB13:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB18:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB20;

LAB19:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB17:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(135, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng13, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t2 + 4U);
    t24 = *((unsigned int *)t3);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t13 = (t26 & t25);
    t4 = (t0 + 6256);
    *((int *)t4) = t13;

LAB21:    t5 = (t0 + 6256);
    if (*((int *)t5) > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(138, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng15, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);

LAB25:    t2 = (t0 + 2664);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2572);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t4, 32, t7, 32);
    t8 = (t27 + 4U);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB27;

LAB26:    t9 = (t0 + 3984);
    *((int *)t9) = 1;
    t10 = (t0 + 3636U);
    *((char **)t10) = &&LAB25;

LAB1:    return;
LAB8:    t5 = (t0 + 3636U);
    *((char **)t5) = &&LAB6;
    goto LAB1;

LAB12:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB10;
    goto LAB1;

LAB16:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB20:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(136, ng0);
    t6 = (t0 + 3976);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    t2 = (t0 + 6256);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB21;

LAB27:    t11 = (t0 + 3984);
    *((int *)t11) = 0;
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng16, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(148, ng0);
    xsi_vlogfile_write(1, 0, ng17, 1, t0);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng18, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB30:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB32;

LAB31:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB29:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng20)));
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB34:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB36;

LAB35:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB33:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(160, ng0);

LAB37:    t2 = (t0 + 2664);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2572);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t4, 32, t7, 32);
    t8 = (t27 + 4U);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB39;

LAB38:    t9 = (t0 + 4000);
    *((int *)t9) = 1;
    t10 = (t0 + 3636U);
    *((char **)t10) = &&LAB37;
    goto LAB1;

LAB32:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB30;
    goto LAB1;

LAB36:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB34;
    goto LAB1;

LAB39:    t11 = (t0 + 4000);
    *((int *)t11) = 0;
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4008);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(164, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng22, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng23)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB42:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB44;

LAB43:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB41:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng24)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB46:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB48;

LAB47:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB45:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng25)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB50:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB52;

LAB51:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB49:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng26)));
    t3 = ((char*)((ng27)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB54:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB56;

LAB55:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB53:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(173, ng0);

LAB57:    t2 = (t0 + 2664);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2572);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t4, 32, t7, 32);
    t8 = (t27 + 4U);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB59;

LAB58:    t9 = (t0 + 4016);
    *((int *)t9) = 1;
    t10 = (t0 + 3636U);
    *((char **)t10) = &&LAB57;
    goto LAB1;

LAB44:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB42;
    goto LAB1;

LAB48:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB46;
    goto LAB1;

LAB52:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB50;
    goto LAB1;

LAB56:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB54;
    goto LAB1;

LAB59:    t11 = (t0 + 4016);
    *((int *)t11) = 0;
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4024);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(175, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng28, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(178, ng0);
    xsi_vlogfile_write(1, 0, ng29, 1, t0);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    t3 = (t0 + 400);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, ng30, 3, t0, (char)118, t23, 64, (char)119, t4, 32);
    xsi_set_current_line(186, ng0);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB61:    t2 = (t0 + 2848);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 400);
    t6 = *((char **)t5);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t4, 32, t6, 32);
    t5 = (t27 + 4U);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(195, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng31, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB62:    xsi_set_current_line(186, ng0);

LAB64:    xsi_set_current_line(187, ng0);
    t7 = (t0 + 4032);
    *((int *)t7) = 1;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2848);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memcpy(t23, t4, 8);
    t5 = (t23 + 8U);
    memset(t5, 0, 8);
    t26 = *((unsigned int *)t4);
    t28 = (t26 & 2147483648U);
    t24 = t28;
    t6 = (t4 + 4U);
    t29 = *((unsigned int *)t6);
    t30 = (t29 & 2147483648U);
    t25 = t30;
    t31 = (t28 != 0);
    if (t31 == 1)
        goto LAB66;

LAB67:    t34 = (t30 != 0);
    if (t34 == 1)
        goto LAB68;

LAB69:    t10 = (t0 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t10, t23, 1, 0, 0, 64, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2112);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 4040);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB66:    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 | 0U);
    t7 = (t23 + 8U);
    t33 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t33 | 4294967295U);
    goto LAB67;

LAB68:    t8 = (t23 + 4U);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 | 0U);
    t9 = (t23 + 12U);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 | 4294967295U);
    goto LAB69;

LAB70:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2848);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t4, 32, t5, 32);
    t6 = (t0 + 2848);
    xsi_vlogvar_assign_value(t6, t27, 0, 0, 32);
    goto LAB61;

LAB71:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 2020);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2112);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);

LAB73:    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t4 = (t27 + 4U);
    t5 = (t3 + 4U);
    t6 = (t2 + 4U);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t2);
    t26 = (t24 ^ t25);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t6);
    t30 = (t28 ^ t29);
    t31 = (t26 | t30);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t6);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB77;

LAB74:    if (t34 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t27) = 1;

LAB77:    t7 = (t27 + 4U);
    t37 = *((unsigned int *)t7);
    t38 = (~(t37));
    t39 = *((unsigned int *)t27);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB79;

LAB78:    t8 = (t0 + 4064);
    *((int *)t8) = 1;
    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB73;
    goto LAB1;

LAB76:    *((unsigned int *)t27) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB77;

LAB79:    t10 = (t0 + 4064);
    *((int *)t10) = 0;
    xsi_set_current_line(204, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng33, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(205, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng34, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(208, ng0);
    xsi_vlogfile_write(1, 0, ng35, 1, t0);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2572);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2296);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng36)));
    t3 = ((char*)((ng37)));
    t4 = (t0 + 3552);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2940);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 3032);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB81:    t9 = (t0 + 3600);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB83;

LAB82:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB80:    t18 = (t0 + 3600);
    t19 = *((char **)t18);
    t18 = (t0 + 1000);
    t20 = (t0 + 3600);
    t21 = *((char **)t20);
    t20 = (t0 + 3552);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t21, t0, t20, t22);
    xsi_set_current_line(214, ng0);

LAB84:    t2 = (t0 + 2664);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2572);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t4, 32, t7, 32);
    t8 = (t27 + 4U);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB86;

LAB85:    t9 = (t0 + 4072);
    *((int *)t9) = 1;
    t10 = (t0 + 3636U);
    *((char **)t10) = &&LAB84;
    goto LAB1;

LAB83:    t9 = (t0 + 3636U);
    *((char **)t9) = &&LAB81;
    goto LAB1;

LAB86:    t11 = (t0 + 4072);
    *((int *)t11) = 0;
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(216, ng0);
    t2 = xsi_vlog_time(t23, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng38, 2, t0, (char)118, t23, 64);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t2 + 4U);
    t24 = *((unsigned int *)t3);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t13 = (t26 & t25);
    t4 = (t0 + 6260);
    *((int *)t4) = t13;

LAB88:    t5 = (t0 + 6260);
    if (*((int *)t5) > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t4, 32, t5, 32);
    t6 = (t27 + 4U);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t26 = *((unsigned int *)t27);
    t28 = (t26 & t25);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(222, ng0);

LAB96:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, ng40, 2, t0, (char)119, t4, 32);

LAB94:    xsi_set_current_line(225, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB89:    xsi_set_current_line(219, ng0);
    t6 = (t0 + 4088);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    t2 = (t0 + 6260);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB88;

LAB92:    xsi_set_current_line(220, ng0);

LAB95:    xsi_set_current_line(221, ng0);
    xsi_vlogfile_write(1, 0, ng39, 1, t0);
    goto LAB94;

}

static void A231_2(char *t0)
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

LAB0:    t1 = (t0 + 3764U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    t3 = (t0 + 1524U);
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

LAB10:    t16 = (t0 + 2296);
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

LAB20:    xsi_set_current_line(232, ng0);

LAB23:    xsi_set_current_line(233, ng0);
    t65 = (t0 + 2664);
    t66 = (t65 + 32U);
    t67 = *((char **)t66);
    t68 = (t0 + 2572);
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

LAB25:    xsi_set_current_line(244, ng0);

LAB50:    xsi_set_current_line(245, ng0);
    t2 = xsi_vlog_time(t82, 1000000.000000000, 1000.000000000000);
    xsi_vlogfile_write(1, 0, ng43, 2, t0, (char)118, t82, 64);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 2756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2756);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB26:    goto LAB22;

LAB24:    xsi_set_current_line(233, ng0);

LAB27:    xsi_set_current_line(234, ng0);
    t78 = (t0 + 1348U);
    t79 = *((char **)t78);
    t78 = (t0 + 2388);
    t80 = (t78 + 32U);
    t81 = *((char **)t80);
    t83 = (t0 + 2388);
    t84 = (t83 + 40U);
    t85 = *((char **)t84);
    t86 = (t0 + 2388);
    t87 = (t86 + 36U);
    t88 = *((char **)t87);
    t89 = (t0 + 2664);
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

LAB46:    xsi_set_current_line(239, ng0);

LAB49:    xsi_set_current_line(240, ng0);
    t2 = xsi_vlog_time(t82, 1000000.000000000, 1000.000000000000);
    t3 = (t0 + 2664);
    t4 = (t3 + 32U);
    t6 = *((char **)t4);
    t12 = (t0 + 1348U);
    t16 = *((char **)t12);
    t12 = (t0 + 1436U);
    t17 = *((char **)t12);
    xsi_vlogfile_write(1, 0, ng42, 5, t0, (char)118, t82, 64, (char)119, t6, 32, (char)118, t16, 64, (char)118, t17, 8);

LAB47:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 2664);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2664);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB26;

LAB28:    *((unsigned int *)t93) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t93) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB31;

LAB32:    t106 = (t0 + 1436U);
    t107 = *((char **)t106);
    t106 = (t0 + 2480);
    t108 = (t106 + 32U);
    t109 = *((char **)t108);
    t111 = (t0 + 2480);
    t112 = (t111 + 40U);
    t113 = *((char **)t112);
    t114 = (t0 + 2480);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    t117 = (t0 + 2664);
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

LAB45:    xsi_set_current_line(234, ng0);

LAB48:    xsi_set_current_line(235, ng0);
    t166 = xsi_vlog_time(t165, 1000000.000000000, 1000.000000000000);
    t167 = (t0 + 2664);
    t168 = (t167 + 32U);
    t169 = *((char **)t168);
    t170 = (t0 + 2388);
    t171 = (t170 + 32U);
    t172 = *((char **)t171);
    t174 = (t0 + 2388);
    t175 = (t174 + 40U);
    t176 = *((char **)t175);
    t177 = (t0 + 2388);
    t178 = (t177 + 36U);
    t179 = *((char **)t178);
    t180 = (t0 + 2664);
    t181 = (t180 + 32U);
    t182 = *((char **)t181);
    xsi_vlog_generic_get_array_select_value(t173, 64, t172, t176, t179, 2, 1, t182, 32, 1);
    t183 = (t0 + 2480);
    t184 = (t183 + 32U);
    t185 = *((char **)t184);
    t187 = (t0 + 2480);
    t188 = (t187 + 40U);
    t189 = *((char **)t188);
    t190 = (t0 + 2480);
    t191 = (t190 + 36U);
    t192 = *((char **)t191);
    t193 = (t0 + 2664);
    t194 = (t193 + 32U);
    t195 = *((char **)t194);
    xsi_vlog_generic_get_array_select_value(t186, 8, t185, t189, t192, 2, 1, t195, 32, 1);
    t196 = (t0 + 1348U);
    t197 = *((char **)t196);
    t196 = (t0 + 1436U);
    t198 = *((char **)t196);
    xsi_vlogfile_write(1, 0, ng41, 7, t0, (char)118, t165, 64, (char)119, t169, 32, (char)118, t173, 64, (char)118, t186, 8, (char)118, t197, 64, (char)118, t198, 8);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 2756);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 2756);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB47;

}


extern void work_m_00000000004178438750_4200415898_init()
{
	static char *pe[] = {(void *)I71_0,(void *)I109_1,(void *)A231_2};
	static char *se[] = {(void *)sp_apply_reset,(void *)sp_send_word};
	xsi_register_didat("work_m_00000000004178438750_4200415898", "isim/_tmp/work/m_00000000004178438750_4200415898.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
