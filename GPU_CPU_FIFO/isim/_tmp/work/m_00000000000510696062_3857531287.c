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
static const char *ng0 = "C:/Documents and Settings/student/Desktop/processor_integration/GPU_CPU_FIFO/network_proc_full_tb.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};
static unsigned int ng5[] = {255U, 255U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4227858432U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {2348875777U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {2348941314U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {2349203459U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {12U, 0U};
static unsigned int ng22[] = {337778688U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {14U, 0U};
static unsigned int ng25[] = {15U, 0U};
static unsigned int ng26[] = {16U, 0U};
static unsigned int ng27[] = {17U, 0U};
static unsigned int ng28[] = {18U, 0U};
static unsigned int ng29[] = {2885877765U, 0U};
static unsigned int ng30[] = {19U, 0U};
static unsigned int ng31[] = {603980269U, 0U};
static unsigned int ng32[] = {20U, 0U};
static unsigned int ng33[] = {21U, 0U};
static unsigned int ng34[] = {22U, 0U};
static int ng35[] = {32, 0};
static unsigned int ng36[] = {0U, 0U, 0U, 0U};
static const char *ng37 = "Initializing source registers...";
static int ng38[] = {128, 0};
static unsigned int ng39[] = {10U, 0U, 0U, 0U};
static unsigned int ng40[] = {16640U, 0U, 0U, 0U};
static unsigned int ng41[] = {16656U, 0U, 0U, 0U};
static unsigned int ng42[] = {7U, 0U, 0U, 0U};
static unsigned int ng43[] = {6U, 0U, 0U, 0U};
static unsigned int ng44[] = {5U, 0U, 0U, 0U};
static unsigned int ng45[] = {4U, 0U, 0U, 0U};
static unsigned int ng46[] = {3U, 0U, 0U, 0U};
static unsigned int ng47[] = {2U, 0U, 0U, 0U};
static unsigned int ng48[] = {1U, 0U, 0U, 0U};
static unsigned int ng49[] = {255U, 0U};



static int sp_apply_reset(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 760);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2196);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t4 = (t2 + 28U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2196);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t4 = (t2 + 28U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 200000000LL);
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
    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);

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
    xsi_set_current_line(111, ng0);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(112, ng0);
    t4 = (t1 + 3944);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2656);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(113, ng0);
    t4 = (t1 + 4036);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2748);
    xsi_vlogvar_generic_wait_assign_value(t12, t6, 2, 0, 0, 8, 0LL);
    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2840);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t4 = (t1 + 3944);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 2932);
    t13 = (t1 + 2932);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t1 + 2932);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t21 = (t1 + 3116);
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

LAB11:    xsi_set_current_line(117, ng0);
    t4 = (t1 + 4036);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = (t1 + 3024);
    t13 = (t1 + 3024);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t1 + 3024);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t21 = (t1 + 3116);
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

LAB13:    xsi_set_current_line(118, ng0);
    t4 = (t1 + 3116);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t6, 32, t12, 32);
    t13 = (t1 + 3116);
    xsi_vlogvar_assign_value(t13, t19, 0, 0, 32);
    xsi_set_current_line(120, ng0);
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

LAB14:    xsi_set_current_line(121, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2840);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 2656);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(123, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 2748);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 8, 0LL);
    goto LAB4;

}

static void A93_0(char *t0)
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

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4428);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 2104);
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
    t17 = (t0 + 2104);
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

static void I128_1(char *t0)
{
    char t19[8];
    char t25[8];
    char t26[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);

LAB4:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2564);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4556);
    t3 = (t0 + 760);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 4604);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB9;

LAB8:    t6 = (t0 + 760);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 4604);
    t15 = *((char **)t14);
    t14 = (t0 + 760);
    t16 = (t0 + 4604);
    t17 = *((char **)t16);
    t16 = (t0 + 4556);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4844);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB9:    t5 = (t0 + 4640U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB10:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4852);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4860);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4868);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4876);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4884);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4892);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4900);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4908);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4916);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4924);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4932);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4940);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 4948);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4956);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 4964);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 4972);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4980);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4988);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 4996);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5004);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 5012);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 3576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 5020);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 600000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 5028);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(210, ng0);
    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB36:    t2 = (t0 + 2012);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t19, 0, 8);
    xsi_vlog_signed_less(t19, 32, t4, 32, t5, 32);
    t6 = (t19 + 4U);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(213, ng0);
    xsi_vlogfile_write(1, 0, ng37, 1, t0);
    xsi_set_current_line(214, ng0);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB42:    t2 = (t0 + 2012);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    memset(t19, 0, 8);
    xsi_vlog_signed_less(t19, 32, t4, 32, t5, 32);
    t6 = (t19 + 4U);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB37:    xsi_set_current_line(210, ng0);

LAB39:    xsi_set_current_line(211, ng0);
    t7 = ((char*)((ng36)));
    t8 = (t0 + 7456);
    t9 = *((char **)t8);
    t10 = (t0 + 7488);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 40U);
    t14 = *((char **)t12);
    t15 = (t0 + 7520);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 36U);
    t18 = *((char **)t17);
    t27 = (t0 + 2012);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t25, t26, t14, t18, 2, 1, t29, 32, 1);
    t30 = (t25 + 4U);
    t31 = *((unsigned int *)t30);
    t13 = (!(t31));
    t32 = (t26 + 4U);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t13 && t34);
    if (t35 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2012);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t4, 32, t5, 32);
    t6 = (t0 + 2012);
    xsi_vlogvar_assign_value(t6, t19, 0, 0, 32);
    goto LAB36;

LAB40:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(((char*)(t9)), t7, 0, *((unsigned int *)t26), t39);
    goto LAB41;

LAB43:    xsi_set_current_line(214, ng0);

LAB45:    xsi_set_current_line(215, ng0);
    t7 = ((char*)((ng36)));
    t8 = (t0 + 7552);
    t9 = *((char **)t8);
    t10 = (t0 + 7584);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 40U);
    t14 = *((char **)t12);
    t15 = (t0 + 7616);
    t16 = *((char **)t15);
    t17 = ((((char*)(t16))) + 36U);
    t18 = *((char **)t17);
    t27 = (t0 + 2012);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t25, t26, t14, t18, 2, 1, t29, 32, 1);
    t30 = (t25 + 4U);
    t31 = *((unsigned int *)t30);
    t13 = (!(t31));
    t32 = (t26 + 4U);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t13 && t34);
    if (t35 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2012);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t4, 32, t5, 32);
    t6 = (t0 + 2012);
    xsi_vlogvar_assign_value(t6, t19, 0, 0, 32);
    goto LAB42;

LAB46:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(((char*)(t9)), t7, 0, *((unsigned int *)t26), t39);
    goto LAB47;

LAB48:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng39)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB50:    t9 = (t0 + 4604);
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

LAB49:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng40)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB54:    t9 = (t0 + 4604);
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

LAB53:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng41)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB58:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB60;

LAB59:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB57:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng42)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB62:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB64;

LAB63:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB61:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng43)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB66:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB68;

LAB67:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB65:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng44)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB70:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB72;

LAB71:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB69:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng45)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB74:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB76;

LAB75:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB73:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng46)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB78:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB80;

LAB79:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB77:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng47)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB82:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB84;

LAB83:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB81:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng48)));
    t3 = ((char*)((ng49)));
    t4 = (t0 + 4556);
    t5 = (t0 + 1000);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3944);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 64);
    t8 = (t0 + 4036);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB86:    t9 = (t0 + 4604);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t14 = (t12 + 132U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);
    if (t13 != 0)
        goto LAB88;

LAB87:    t10 = (t0 + 1000);
    xsi_vlog_subprogram_popinvocation(t10);

LAB85:    t18 = (t0 + 4604);
    t27 = *((char **)t18);
    t18 = (t0 + 1000);
    t28 = (t0 + 4604);
    t29 = *((char **)t28);
    t28 = (t0 + 4556);
    t30 = 0;
    xsi_delete_subprogram_invocation(t18, t29, t0, t28, t30);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB52:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB50;
    goto LAB1;

LAB56:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB54;
    goto LAB1;

LAB60:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB58;
    goto LAB1;

LAB64:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB62;
    goto LAB1;

LAB68:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB66;
    goto LAB1;

LAB72:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB70;
    goto LAB1;

LAB76:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB74;
    goto LAB1;

LAB80:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB78;
    goto LAB1;

LAB84:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB82;
    goto LAB1;

LAB88:    t9 = (t0 + 4640U);
    *((char **)t9) = &&LAB86;
    goto LAB1;

LAB89:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2564);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 150000000000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 4556);
    xsi_process_wait(t3, 200000000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 4556);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB93:    xsi_set_current_line(249, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000510696062_3857531287_init()
{
	static char *pe[] = {(void *)A93_0,(void *)I128_1};
	static char *se[] = {(void *)sp_apply_reset,(void *)sp_send_word};
	xsi_register_didat("work_m_00000000000510696062_3857531287", "isim/_tmp/work/m_00000000000510696062_3857531287.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
