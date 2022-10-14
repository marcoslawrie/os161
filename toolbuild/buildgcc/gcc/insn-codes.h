/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,

  CODE_FOR_ls2_alu1_turn_enabled_insn = 1,
  CODE_FOR_ls2_alu2_turn_enabled_insn = 2,
  CODE_FOR_ls2_falu1_turn_enabled_insn = 3,
  CODE_FOR_ls2_falu2_turn_enabled_insn = 4,
  CODE_FOR_trap = 5,
  CODE_FOR_addsf3 = 8,
  CODE_FOR_adddf3 = 9,
  CODE_FOR_addv2sf3 = 10,
  CODE_FOR_subsf3 = 21,
  CODE_FOR_subdf3 = 22,
  CODE_FOR_subv2sf3 = 23,
  CODE_FOR_subsi3 = 24,
  CODE_FOR_subdi3 = 25,
  CODE_FOR_mulv2sf3 = 31,
  CODE_FOR_mulsi3_mul3_loongson = 32,
  CODE_FOR_muldi3_mul3_loongson = 33,
  CODE_FOR_mulsi3_mul3 = 34,
  CODE_FOR_muldi3_mul3 = 35,
  CODE_FOR_mulsi3_internal = 36,
  CODE_FOR_muldi3_internal = 37,
  CODE_FOR_mulsi3_r4000 = 38,
  CODE_FOR_muldi3_r4000 = 39,
  CODE_FOR_mulsidi3_32bit = 49,
  CODE_FOR_umulsidi3_32bit = 50,
  CODE_FOR_mulsidi3_32bit_r4000 = 51,
  CODE_FOR_umulsidi3_32bit_r4000 = 52,
  CODE_FOR_mulsidi3_64bit = 53,
  CODE_FOR_umulsidi3_64bit = 54,
  CODE_FOR_mulsidi3_64bit_hilo = 55,
  CODE_FOR_umulsidi3_64bit_hilo = 56,
  CODE_FOR_mulsidi3_64bit_dmul = 57,
  CODE_FOR_msubsidi4 = 60,
  CODE_FOR_umsubsidi4 = 61,
  CODE_FOR_smulsi3_highpart_internal = 62,
  CODE_FOR_umulsi3_highpart_internal = 63,
  CODE_FOR_smulsi3_highpart_mulhi_internal = 64,
  CODE_FOR_umulsi3_highpart_mulhi_internal = 65,
  CODE_FOR_smuldi3_highpart_internal = 68,
  CODE_FOR_umuldi3_highpart_internal = 69,
  CODE_FOR_mulditi3_internal = 70,
  CODE_FOR_umulditi3_internal = 71,
  CODE_FOR_mulditi3_r4000 = 72,
  CODE_FOR_umulditi3_r4000 = 73,
  CODE_FOR_madsi = 74,
  CODE_FOR_maddsidi4 = 75,
  CODE_FOR_umaddsidi4 = 76,
  CODE_FOR_divmodsi4_internal = 119,
  CODE_FOR_divmoddi4_internal = 120,
  CODE_FOR_udivmodsi4_internal = 121,
  CODE_FOR_udivmoddi4_internal = 122,
  CODE_FOR_divmodsi4_hilo_di = 123,
  CODE_FOR_udivmodsi4_hilo_di = 124,
#define CODE_FOR_divmoddi4_hilo_di CODE_FOR_nothing
#define CODE_FOR_udivmoddi4_hilo_di CODE_FOR_nothing
  CODE_FOR_divmodsi4_hilo_ti = 125,
  CODE_FOR_udivmodsi4_hilo_ti = 126,
  CODE_FOR_divmoddi4_hilo_ti = 127,
  CODE_FOR_udivmoddi4_hilo_ti = 128,
  CODE_FOR_sqrtsf2 = 129,
  CODE_FOR_sqrtdf2 = 130,
  CODE_FOR_sqrtv2sf2 = 131,
  CODE_FOR_abssf2 = 138,
  CODE_FOR_absdf2 = 139,
  CODE_FOR_absv2sf2 = 140,
  CODE_FOR_clzsi2 = 141,
  CODE_FOR_clzdi2 = 142,
  CODE_FOR_popcountsi2 = 143,
  CODE_FOR_popcountdi2 = 144,
  CODE_FOR_negsi2 = 146,
  CODE_FOR_negdi2 = 147,
  CODE_FOR_negsf2 = 148,
  CODE_FOR_negdf2 = 149,
  CODE_FOR_negv2sf2 = 150,
  CODE_FOR_one_cmplsi2 = 151,
  CODE_FOR_one_cmpldi2 = 152,
  CODE_FOR_truncdfsf2 = 167,
  CODE_FOR_truncdiqi2 = 168,
  CODE_FOR_truncdihi2 = 169,
  CODE_FOR_truncdisi2 = 170,
  CODE_FOR_extendsidi2 = 204,
  CODE_FOR_extendsfdf2 = 230,
  CODE_FOR_fix_truncdfsi2_insn = 231,
  CODE_FOR_fix_truncdfsi2_macro = 232,
  CODE_FOR_fix_truncsfsi2_insn = 233,
  CODE_FOR_fix_truncsfsi2_macro = 234,
  CODE_FOR_fix_truncdfdi2 = 235,
  CODE_FOR_fix_truncsfdi2 = 236,
  CODE_FOR_floatsidf2 = 237,
  CODE_FOR_floatdidf2 = 238,
  CODE_FOR_floatsisf2 = 239,
  CODE_FOR_floatdisf2 = 240,
  CODE_FOR_mov_lwl = 250,
  CODE_FOR_mov_ldl = 251,
  CODE_FOR_mov_lwr = 252,
  CODE_FOR_mov_ldr = 253,
  CODE_FOR_mov_swl = 254,
  CODE_FOR_mov_sdl = 255,
  CODE_FOR_mov_swr = 256,
  CODE_FOR_mov_sdr = 257,
  CODE_FOR_load_gotsi = 270,
  CODE_FOR_load_gotdi = 271,
  CODE_FOR_mfhisi_di = 345,
#define CODE_FOR_mfhidi_di CODE_FOR_nothing
  CODE_FOR_mfhisi_ti = 346,
  CODE_FOR_mfhidi_ti = 347,
  CODE_FOR_mthisi_di = 348,
#define CODE_FOR_mthidi_di CODE_FOR_nothing
  CODE_FOR_mthisi_ti = 349,
  CODE_FOR_mthidi_ti = 350,
  CODE_FOR_load_lowdf = 351,
  CODE_FOR_load_lowdi = 352,
  CODE_FOR_load_lowv2sf = 353,
  CODE_FOR_load_lowv2si = 354,
  CODE_FOR_load_lowv4hi = 355,
  CODE_FOR_load_lowv8qi = 356,
  CODE_FOR_load_lowtf = 357,
  CODE_FOR_load_highdf = 358,
  CODE_FOR_load_highdi = 359,
  CODE_FOR_load_highv2sf = 360,
  CODE_FOR_load_highv2si = 361,
  CODE_FOR_load_highv4hi = 362,
  CODE_FOR_load_highv8qi = 363,
  CODE_FOR_load_hightf = 364,
  CODE_FOR_store_worddf = 365,
  CODE_FOR_store_worddi = 366,
  CODE_FOR_store_wordv2sf = 367,
  CODE_FOR_store_wordv2si = 368,
  CODE_FOR_store_wordv4hi = 369,
  CODE_FOR_store_wordv8qi = 370,
  CODE_FOR_store_wordtf = 371,
  CODE_FOR_mthc1df = 372,
  CODE_FOR_mthc1di = 373,
  CODE_FOR_mthc1v2sf = 374,
  CODE_FOR_mthc1v2si = 375,
  CODE_FOR_mthc1v4hi = 376,
  CODE_FOR_mthc1v8qi = 377,
  CODE_FOR_mthc1tf = 378,
  CODE_FOR_mfhc1df = 379,
  CODE_FOR_mfhc1di = 380,
  CODE_FOR_mfhc1v2sf = 381,
  CODE_FOR_mfhc1v2si = 382,
  CODE_FOR_mfhc1v4hi = 383,
  CODE_FOR_mfhc1v8qi = 384,
  CODE_FOR_mfhc1tf = 385,
  CODE_FOR_loadgp_newabi_si = 386,
  CODE_FOR_loadgp_newabi_di = 387,
  CODE_FOR_loadgp_absolute_si = 388,
  CODE_FOR_loadgp_absolute_di = 389,
  CODE_FOR_loadgp_blockage = 390,
  CODE_FOR_loadgp_rtp_si = 391,
  CODE_FOR_loadgp_rtp_di = 392,
  CODE_FOR_copygp_mips16_si = 393,
  CODE_FOR_copygp_mips16_di = 394,
  CODE_FOR_potential_cprestore_si = 395,
  CODE_FOR_potential_cprestore_di = 396,
  CODE_FOR_cprestore_si = 397,
  CODE_FOR_cprestore_di = 398,
  CODE_FOR_use_cprestore_si = 399,
  CODE_FOR_use_cprestore_di = 400,
  CODE_FOR_sync = 401,
  CODE_FOR_synci = 402,
  CODE_FOR_rdhwr_synci_step_si = 403,
  CODE_FOR_rdhwr_synci_step_di = 404,
  CODE_FOR_clear_hazard_si = 405,
  CODE_FOR_clear_hazard_di = 406,
  CODE_FOR_mips_cache = 407,
  CODE_FOR_r10k_cache_barrier = 408,
  CODE_FOR_rotrsi3 = 425,
  CODE_FOR_rotrdi3 = 426,
  CODE_FOR_bswaphi2 = 427,
  CODE_FOR_bswapsi2 = 428,
  CODE_FOR_bswapdi2 = 429,
  CODE_FOR_wsbh = 430,
  CODE_FOR_dsbh = 431,
  CODE_FOR_dshd = 432,
  CODE_FOR_sunordered_sf = 531,
  CODE_FOR_suneq_sf = 532,
  CODE_FOR_sunlt_sf = 533,
  CODE_FOR_sunle_sf = 534,
  CODE_FOR_seq_sf = 535,
  CODE_FOR_slt_sf = 536,
  CODE_FOR_sle_sf = 537,
  CODE_FOR_sunordered_df = 538,
  CODE_FOR_suneq_df = 539,
  CODE_FOR_sunlt_df = 540,
  CODE_FOR_sunle_df = 541,
  CODE_FOR_seq_df = 542,
  CODE_FOR_slt_df = 543,
  CODE_FOR_sle_df = 544,
  CODE_FOR_sge_sf = 545,
  CODE_FOR_sgt_sf = 546,
  CODE_FOR_sunge_sf = 547,
  CODE_FOR_sungt_sf = 548,
  CODE_FOR_sge_df = 549,
  CODE_FOR_sgt_df = 550,
  CODE_FOR_sunge_df = 551,
  CODE_FOR_sungt_df = 552,
  CODE_FOR_indirect_jump_si = 556,
  CODE_FOR_indirect_jump_di = 557,
  CODE_FOR_indirect_jump_and_restore_si = 558,
  CODE_FOR_indirect_jump_and_restore_di = 559,
  CODE_FOR_tablejump_si = 560,
  CODE_FOR_tablejump_di = 561,
  CODE_FOR_casesi_internal_mips16_si = 562,
  CODE_FOR_casesi_internal_mips16_di = 563,
  CODE_FOR_blockage = 564,
  CODE_FOR_probe_stack_range_si = 565,
  CODE_FOR_probe_stack_range_di = 566,
  CODE_FOR_return_internal = 569,
  CODE_FOR_simple_return_internal = 570,
  CODE_FOR_mips_eret = 571,
  CODE_FOR_mips_deret = 572,
  CODE_FOR_mips_di = 573,
  CODE_FOR_mips_ehb = 574,
  CODE_FOR_mips_rdpgpr = 575,
  CODE_FOR_cop0_move = 576,
  CODE_FOR_eh_set_lr_si = 577,
  CODE_FOR_eh_set_lr_di = 578,
  CODE_FOR_restore_gp_si = 579,
  CODE_FOR_restore_gp_di = 580,
  CODE_FOR_move_gpsi = 581,
  CODE_FOR_move_gpdi = 582,
  CODE_FOR_load_callsi = 583,
  CODE_FOR_load_calldi = 584,
  CODE_FOR_set_got_version = 585,
  CODE_FOR_update_got_version = 586,
  CODE_FOR_sibcall_internal = 587,
  CODE_FOR_sibcall_value_internal = 588,
  CODE_FOR_sibcall_value_multiple_internal = 589,
  CODE_FOR_call_internal = 590,
  CODE_FOR_call_split = 591,
  CODE_FOR_call_internal_direct = 592,
  CODE_FOR_call_direct_split = 593,
  CODE_FOR_call_value_internal = 594,
  CODE_FOR_call_value_split = 595,
  CODE_FOR_call_value_internal_direct = 596,
  CODE_FOR_call_value_direct_split = 597,
  CODE_FOR_call_value_multiple_internal = 598,
  CODE_FOR_call_value_multiple_split = 599,
  CODE_FOR_prefetch = 600,
  CODE_FOR_nop = 603,
  CODE_FOR_hazard_nop = 604,
  CODE_FOR_consttable_tls_reloc = 617,
  CODE_FOR_consttable_int = 618,
  CODE_FOR_consttable_float = 619,
  CODE_FOR_align = 620,
  CODE_FOR_tls_get_tp_si = 622,
  CODE_FOR_tls_get_tp_di = 623,
  CODE_FOR_tls_get_tp_mips16_si = 626,
  CODE_FOR_tls_get_tp_mips16_di = 627,
  CODE_FOR_sync_compare_and_swapsi = 631,
  CODE_FOR_sync_compare_and_swapdi = 632,
  CODE_FOR_compare_and_swap_12 = 633,
  CODE_FOR_sync_addsi = 634,
  CODE_FOR_sync_adddi = 635,
  CODE_FOR_sync_add_12 = 636,
  CODE_FOR_sync_sub_12 = 637,
  CODE_FOR_sync_ior_12 = 638,
  CODE_FOR_sync_xor_12 = 639,
  CODE_FOR_sync_and_12 = 640,
  CODE_FOR_sync_old_add_12 = 641,
  CODE_FOR_sync_old_sub_12 = 642,
  CODE_FOR_sync_old_ior_12 = 643,
  CODE_FOR_sync_old_xor_12 = 644,
  CODE_FOR_sync_old_and_12 = 645,
  CODE_FOR_sync_new_add_12 = 646,
  CODE_FOR_sync_new_sub_12 = 647,
  CODE_FOR_sync_new_ior_12 = 648,
  CODE_FOR_sync_new_xor_12 = 649,
  CODE_FOR_sync_new_and_12 = 650,
  CODE_FOR_sync_nand_12 = 651,
  CODE_FOR_sync_old_nand_12 = 652,
  CODE_FOR_sync_new_nand_12 = 653,
  CODE_FOR_sync_subsi = 654,
  CODE_FOR_sync_subdi = 655,
  CODE_FOR_sync_old_addsi = 656,
  CODE_FOR_sync_old_adddi = 657,
  CODE_FOR_sync_old_subsi = 658,
  CODE_FOR_sync_old_subdi = 659,
  CODE_FOR_sync_new_addsi = 660,
  CODE_FOR_sync_new_adddi = 661,
  CODE_FOR_sync_new_subsi = 662,
  CODE_FOR_sync_new_subdi = 663,
  CODE_FOR_sync_iorsi = 664,
  CODE_FOR_sync_xorsi = 665,
  CODE_FOR_sync_andsi = 666,
  CODE_FOR_sync_iordi = 667,
  CODE_FOR_sync_xordi = 668,
  CODE_FOR_sync_anddi = 669,
  CODE_FOR_sync_old_iorsi = 670,
  CODE_FOR_sync_old_xorsi = 671,
  CODE_FOR_sync_old_andsi = 672,
  CODE_FOR_sync_old_iordi = 673,
  CODE_FOR_sync_old_xordi = 674,
  CODE_FOR_sync_old_anddi = 675,
  CODE_FOR_sync_new_iorsi = 676,
  CODE_FOR_sync_new_xorsi = 677,
  CODE_FOR_sync_new_andsi = 678,
  CODE_FOR_sync_new_iordi = 679,
  CODE_FOR_sync_new_xordi = 680,
  CODE_FOR_sync_new_anddi = 681,
  CODE_FOR_sync_nandsi = 682,
  CODE_FOR_sync_nanddi = 683,
  CODE_FOR_sync_old_nandsi = 684,
  CODE_FOR_sync_old_nanddi = 685,
  CODE_FOR_sync_new_nandsi = 686,
  CODE_FOR_sync_new_nanddi = 687,
  CODE_FOR_sync_lock_test_and_setsi = 688,
  CODE_FOR_sync_lock_test_and_setdi = 689,
  CODE_FOR_test_and_set_12 = 690,
  CODE_FOR_atomic_compare_and_swapsi = 691,
  CODE_FOR_atomic_compare_and_swapdi = 692,
  CODE_FOR_atomic_exchangesi_llsc = 693,
  CODE_FOR_atomic_exchangedi_llsc = 694,
  CODE_FOR_atomic_exchangesi_swap = 695,
  CODE_FOR_atomic_exchangedi_swap = 696,
  CODE_FOR_atomic_fetch_addsi_llsc = 697,
  CODE_FOR_atomic_fetch_adddi_llsc = 698,
  CODE_FOR_atomic_fetch_addsi_ldadd = 699,
  CODE_FOR_atomic_fetch_adddi_ldadd = 700,
  CODE_FOR_mips_cond_move_tf_ps = 703,
  CODE_FOR_vec_perm_const_ps = 704,
  CODE_FOR_vec_concatv2sf = 705,
  CODE_FOR_vec_extractv2sf = 706,
  CODE_FOR_mips_alnv_ps = 707,
  CODE_FOR_mips_addr_ps = 708,
  CODE_FOR_reduc_splus_v2sf = 709,
  CODE_FOR_mips_cvt_pw_ps = 710,
  CODE_FOR_mips_cvt_ps_pw = 711,
  CODE_FOR_mips_mulr_ps = 712,
  CODE_FOR_mips_cabs_cond_s = 714,
  CODE_FOR_mips_cabs_cond_d = 715,
  CODE_FOR_mips_c_cond_4s = 716,
  CODE_FOR_mips_cabs_cond_4s = 717,
  CODE_FOR_mips_c_cond_ps = 718,
  CODE_FOR_mips_cabs_cond_ps = 719,
  CODE_FOR_sunordered_ps = 720,
  CODE_FOR_suneq_ps = 721,
  CODE_FOR_sunlt_ps = 722,
  CODE_FOR_sunle_ps = 723,
  CODE_FOR_seq_ps = 724,
  CODE_FOR_slt_ps = 725,
  CODE_FOR_sle_ps = 726,
  CODE_FOR_sge_ps = 727,
  CODE_FOR_sgt_ps = 728,
  CODE_FOR_sunge_ps = 729,
  CODE_FOR_sungt_ps = 730,
  CODE_FOR_bc1any4t = 731,
  CODE_FOR_bc1any4f = 732,
  CODE_FOR_bc1any2t = 733,
  CODE_FOR_bc1any2f = 734,
  CODE_FOR_mips_rsqrt1_s = 737,
  CODE_FOR_mips_rsqrt1_d = 738,
  CODE_FOR_mips_rsqrt1_ps = 739,
  CODE_FOR_mips_rsqrt2_s = 740,
  CODE_FOR_mips_rsqrt2_d = 741,
  CODE_FOR_mips_rsqrt2_ps = 742,
  CODE_FOR_mips_recip1_s = 743,
  CODE_FOR_mips_recip1_d = 744,
  CODE_FOR_mips_recip1_ps = 745,
  CODE_FOR_mips_recip2_s = 746,
  CODE_FOR_mips_recip2_d = 747,
  CODE_FOR_mips_recip2_ps = 748,
  CODE_FOR_addv2hi3 = 749,
  CODE_FOR_addv4qi3 = 750,
  CODE_FOR_mips_addq_s_w = 751,
  CODE_FOR_mips_addq_s_ph = 752,
  CODE_FOR_mips_addu_s_qb = 753,
  CODE_FOR_subv2hi3 = 754,
  CODE_FOR_subv4qi3 = 755,
  CODE_FOR_mips_subq_s_w = 756,
  CODE_FOR_mips_subq_s_ph = 757,
  CODE_FOR_mips_subu_s_qb = 758,
  CODE_FOR_mips_addsc = 759,
  CODE_FOR_mips_addwc = 760,
  CODE_FOR_mips_modsub = 761,
  CODE_FOR_mips_raddu_w_qb = 762,
  CODE_FOR_mips_absq_s_w = 763,
  CODE_FOR_mips_absq_s_ph = 764,
  CODE_FOR_mips_precrq_qb_ph = 765,
  CODE_FOR_mips_precrq_ph_w = 766,
  CODE_FOR_mips_precrq_rs_ph_w = 767,
  CODE_FOR_mips_precrqu_s_qb_ph = 768,
  CODE_FOR_mips_preceq_w_phl = 769,
  CODE_FOR_mips_preceq_w_phr = 770,
  CODE_FOR_mips_precequ_ph_qbl = 771,
  CODE_FOR_mips_precequ_ph_qbr = 772,
  CODE_FOR_mips_precequ_ph_qbla = 773,
  CODE_FOR_mips_precequ_ph_qbra = 774,
  CODE_FOR_mips_preceu_ph_qbl = 775,
  CODE_FOR_mips_preceu_ph_qbr = 776,
  CODE_FOR_mips_preceu_ph_qbla = 777,
  CODE_FOR_mips_preceu_ph_qbra = 778,
  CODE_FOR_mips_shll_ph = 779,
  CODE_FOR_mips_shll_qb = 780,
  CODE_FOR_mips_shll_s_w = 781,
  CODE_FOR_mips_shll_s_ph = 782,
  CODE_FOR_mips_shrl_qb = 783,
  CODE_FOR_mips_shra_ph = 784,
  CODE_FOR_mips_shra_r_w = 785,
  CODE_FOR_mips_shra_r_ph = 786,
  CODE_FOR_mips_muleu_s_ph_qbl = 787,
  CODE_FOR_mips_muleu_s_ph_qbr = 788,
  CODE_FOR_mips_mulq_rs_ph = 789,
  CODE_FOR_mips_muleq_s_w_phl = 790,
  CODE_FOR_mips_muleq_s_w_phr = 791,
  CODE_FOR_mips_dpau_h_qbl = 792,
  CODE_FOR_mips_dpau_h_qbr = 793,
  CODE_FOR_mips_dpsu_h_qbl = 794,
  CODE_FOR_mips_dpsu_h_qbr = 795,
  CODE_FOR_mips_dpaq_s_w_ph = 796,
  CODE_FOR_mips_dpsq_s_w_ph = 797,
  CODE_FOR_mips_mulsaq_s_w_ph = 798,
  CODE_FOR_mips_dpaq_sa_l_w = 799,
  CODE_FOR_mips_dpsq_sa_l_w = 800,
  CODE_FOR_mips_maq_s_w_phl = 801,
  CODE_FOR_mips_maq_s_w_phr = 802,
  CODE_FOR_mips_maq_sa_w_phl = 803,
  CODE_FOR_mips_maq_sa_w_phr = 804,
  CODE_FOR_mips_bitrev = 805,
  CODE_FOR_mips_insv = 806,
  CODE_FOR_mips_repl_qb = 807,
  CODE_FOR_mips_repl_ph = 808,
  CODE_FOR_mips_cmp_eq_ph = 809,
  CODE_FOR_mips_cmpu_eq_qb = 810,
  CODE_FOR_mips_cmp_lt_ph = 811,
  CODE_FOR_mips_cmpu_lt_qb = 812,
  CODE_FOR_mips_cmp_le_ph = 813,
  CODE_FOR_mips_cmpu_le_qb = 814,
  CODE_FOR_mips_cmpgu_eq_qb = 815,
  CODE_FOR_mips_cmpgu_lt_qb = 816,
  CODE_FOR_mips_cmpgu_le_qb = 817,
  CODE_FOR_mips_pick_ph = 818,
  CODE_FOR_mips_pick_qb = 819,
  CODE_FOR_mips_packrl_ph = 820,
  CODE_FOR_mips_extr_w = 821,
  CODE_FOR_mips_extr_r_w = 822,
  CODE_FOR_mips_extr_rs_w = 823,
  CODE_FOR_mips_extr_s_h = 824,
  CODE_FOR_mips_extp = 825,
  CODE_FOR_mips_extpdp = 826,
  CODE_FOR_mips_shilo = 827,
  CODE_FOR_mips_mthlip = 828,
  CODE_FOR_mips_wrdsp = 829,
  CODE_FOR_mips_rddsp = 830,
  CODE_FOR_mips_lbx_extsi_si = 831,
  CODE_FOR_mips_lbux_extsi_si = 832,
  CODE_FOR_mips_lbx_extdi_si = 833,
  CODE_FOR_mips_lbux_extdi_si = 834,
  CODE_FOR_mips_lhx_extsi_si = 835,
  CODE_FOR_mips_lhux_extsi_si = 836,
  CODE_FOR_mips_lhx_extdi_si = 837,
  CODE_FOR_mips_lhux_extdi_si = 838,
  CODE_FOR_mips_lbx_extsi_di = 839,
  CODE_FOR_mips_lbux_extsi_di = 840,
  CODE_FOR_mips_lbx_extdi_di = 841,
  CODE_FOR_mips_lbux_extdi_di = 842,
  CODE_FOR_mips_lhx_extsi_di = 843,
  CODE_FOR_mips_lhux_extsi_di = 844,
  CODE_FOR_mips_lhx_extdi_di = 845,
  CODE_FOR_mips_lhux_extdi_di = 846,
  CODE_FOR_mips_lwx_si = 847,
  CODE_FOR_mips_ldx_si = 848,
  CODE_FOR_mips_lwx_di = 849,
  CODE_FOR_mips_ldx_di = 850,
  CODE_FOR_mips_bposge = 855,
  CODE_FOR_mips_absq_s_qb = 856,
  CODE_FOR_mips_addu_ph = 857,
  CODE_FOR_mips_addu_s_ph = 858,
  CODE_FOR_mips_adduh_qb = 859,
  CODE_FOR_mips_adduh_r_qb = 860,
  CODE_FOR_mips_append = 861,
  CODE_FOR_mips_balign = 862,
  CODE_FOR_mips_cmpgdu_eq_qb = 863,
  CODE_FOR_mips_cmpgdu_lt_qb = 864,
  CODE_FOR_mips_cmpgdu_le_qb = 865,
  CODE_FOR_mips_dpa_w_ph = 866,
  CODE_FOR_mips_dps_w_ph = 867,
  CODE_FOR_mulv2hi3 = 868,
  CODE_FOR_mips_mul_s_ph = 869,
  CODE_FOR_mips_mulq_rs_w = 870,
  CODE_FOR_mips_mulq_s_ph = 871,
  CODE_FOR_mips_mulq_s_w = 872,
  CODE_FOR_mips_mulsa_w_ph = 873,
  CODE_FOR_mips_precr_qb_ph = 874,
  CODE_FOR_mips_precr_sra_ph_w = 875,
  CODE_FOR_mips_precr_sra_r_ph_w = 876,
  CODE_FOR_mips_prepend = 877,
  CODE_FOR_mips_shra_qb = 878,
  CODE_FOR_mips_shra_r_qb = 879,
  CODE_FOR_mips_shrl_ph = 880,
  CODE_FOR_mips_subu_ph = 881,
  CODE_FOR_mips_subu_s_ph = 882,
  CODE_FOR_mips_subuh_qb = 883,
  CODE_FOR_mips_subuh_r_qb = 884,
  CODE_FOR_mips_addqh_ph = 885,
  CODE_FOR_mips_addqh_r_ph = 886,
  CODE_FOR_mips_addqh_w = 887,
  CODE_FOR_mips_addqh_r_w = 888,
  CODE_FOR_mips_subqh_ph = 889,
  CODE_FOR_mips_subqh_r_ph = 890,
  CODE_FOR_mips_subqh_w = 891,
  CODE_FOR_mips_subqh_r_w = 892,
  CODE_FOR_mips_dpax_w_ph = 893,
  CODE_FOR_mips_dpsx_w_ph = 894,
  CODE_FOR_mips_dpaqx_s_w_ph = 895,
  CODE_FOR_mips_dpaqx_sa_w_ph = 896,
  CODE_FOR_mips_dpsqx_s_w_ph = 897,
  CODE_FOR_mips_dpsqx_sa_w_ph = 898,
  CODE_FOR_addqq3 = 899,
  CODE_FOR_addhq3 = 900,
  CODE_FOR_addsq3 = 901,
  CODE_FOR_adddq3 = 902,
  CODE_FOR_adduqq3 = 903,
  CODE_FOR_adduhq3 = 904,
  CODE_FOR_addusq3 = 905,
  CODE_FOR_addudq3 = 906,
  CODE_FOR_addha3 = 907,
  CODE_FOR_addsa3 = 908,
  CODE_FOR_addda3 = 909,
  CODE_FOR_adduha3 = 910,
  CODE_FOR_addusa3 = 911,
  CODE_FOR_adduda3 = 912,
  CODE_FOR_usadduqq3 = 913,
  CODE_FOR_usadduhq3 = 914,
  CODE_FOR_usadduha3 = 915,
  CODE_FOR_usaddv4uqq3 = 916,
  CODE_FOR_usaddv2uhq3 = 917,
  CODE_FOR_usaddv2uha3 = 918,
  CODE_FOR_ssaddhq3 = 919,
  CODE_FOR_ssaddsq3 = 920,
  CODE_FOR_ssaddha3 = 921,
  CODE_FOR_ssaddsa3 = 922,
  CODE_FOR_ssaddv2hq3 = 923,
  CODE_FOR_ssaddv2ha3 = 924,
  CODE_FOR_subqq3 = 925,
  CODE_FOR_subhq3 = 926,
  CODE_FOR_subsq3 = 927,
  CODE_FOR_subdq3 = 928,
  CODE_FOR_subuqq3 = 929,
  CODE_FOR_subuhq3 = 930,
  CODE_FOR_subusq3 = 931,
  CODE_FOR_subudq3 = 932,
  CODE_FOR_subha3 = 933,
  CODE_FOR_subsa3 = 934,
  CODE_FOR_subda3 = 935,
  CODE_FOR_subuha3 = 936,
  CODE_FOR_subusa3 = 937,
  CODE_FOR_subuda3 = 938,
  CODE_FOR_ussubuqq3 = 939,
  CODE_FOR_ussubuhq3 = 940,
  CODE_FOR_ussubuha3 = 941,
  CODE_FOR_ussubv4uqq3 = 942,
  CODE_FOR_ussubv2uhq3 = 943,
  CODE_FOR_ussubv2uha3 = 944,
  CODE_FOR_sssubhq3 = 945,
  CODE_FOR_sssubsq3 = 946,
  CODE_FOR_sssubha3 = 947,
  CODE_FOR_sssubsa3 = 948,
  CODE_FOR_sssubv2hq3 = 949,
  CODE_FOR_sssubv2ha3 = 950,
  CODE_FOR_ssmulv2hq3 = 951,
  CODE_FOR_ssmulhq3 = 952,
  CODE_FOR_ssmulsq3 = 953,
  CODE_FOR_ssmaddsqdq4 = 954,
  CODE_FOR_ssmsubsqdq4 = 955,
  CODE_FOR_movv2si_internal = 956,
  CODE_FOR_movv4hi_internal = 957,
  CODE_FOR_movv8qi_internal = 958,
  CODE_FOR_loongson_vec_init1_v4hi = 959,
  CODE_FOR_loongson_vec_init1_v8qi = 960,
  CODE_FOR_vec_pack_ssat_v2si = 962,
  CODE_FOR_vec_pack_ssat_v4hi = 963,
  CODE_FOR_vec_pack_usat_v4hi = 964,
  CODE_FOR_addv2si3 = 965,
  CODE_FOR_addv4hi3 = 966,
  CODE_FOR_addv8qi3 = 967,
  CODE_FOR_loongson_paddd = 968,
  CODE_FOR_ssaddv4hi3 = 969,
  CODE_FOR_ssaddv8qi3 = 970,
  CODE_FOR_usaddv4hi3 = 971,
  CODE_FOR_usaddv8qi3 = 972,
  CODE_FOR_loongson_pandn_w = 973,
  CODE_FOR_loongson_pandn_h = 974,
  CODE_FOR_loongson_pandn_b = 975,
  CODE_FOR_loongson_pandn_d = 976,
  CODE_FOR_andv2si3 = 977,
  CODE_FOR_andv4hi3 = 978,
  CODE_FOR_andv8qi3 = 979,
  CODE_FOR_iorv2si3 = 980,
  CODE_FOR_iorv4hi3 = 981,
  CODE_FOR_iorv8qi3 = 982,
  CODE_FOR_xorv2si3 = 983,
  CODE_FOR_xorv4hi3 = 984,
  CODE_FOR_xorv8qi3 = 985,
  CODE_FOR_one_cmplv2si2 = 989,
  CODE_FOR_one_cmplv4hi2 = 990,
  CODE_FOR_one_cmplv8qi2 = 991,
  CODE_FOR_loongson_pavgh = 992,
  CODE_FOR_loongson_pavgb = 993,
  CODE_FOR_loongson_pcmpeqw = 994,
  CODE_FOR_loongson_pcmpeqh = 995,
  CODE_FOR_loongson_pcmpeqb = 996,
  CODE_FOR_loongson_pcmpgtw = 997,
  CODE_FOR_loongson_pcmpgth = 998,
  CODE_FOR_loongson_pcmpgtb = 999,
  CODE_FOR_loongson_pextrh = 1000,
  CODE_FOR_loongson_pinsrh_0 = 1001,
  CODE_FOR_loongson_pinsrh_1 = 1002,
  CODE_FOR_loongson_pinsrh_2 = 1003,
  CODE_FOR_loongson_pinsrh_3 = 1004,
  CODE_FOR_loongson_pmaddhw = 1006,
  CODE_FOR_smaxv4hi3 = 1007,
  CODE_FOR_umaxv8qi3 = 1008,
  CODE_FOR_sminv4hi3 = 1009,
  CODE_FOR_uminv8qi3 = 1010,
  CODE_FOR_loongson_pmovmskb = 1011,
  CODE_FOR_umulv4hi3_highpart = 1012,
  CODE_FOR_smulv4hi3_highpart = 1013,
  CODE_FOR_mulv4hi3 = 1014,
  CODE_FOR_loongson_pmuluw = 1015,
  CODE_FOR_loongson_pasubub = 1016,
  CODE_FOR_loongson_biadd = 1017,
  CODE_FOR_reduc_uplus_v8qi = 1018,
  CODE_FOR_loongson_psadbh = 1019,
  CODE_FOR_loongson_pshufh = 1020,
  CODE_FOR_ashlv2si3 = 1021,
  CODE_FOR_ashlv4hi3 = 1022,
  CODE_FOR_ashrv2si3 = 1023,
  CODE_FOR_ashrv4hi3 = 1024,
  CODE_FOR_lshrv2si3 = 1025,
  CODE_FOR_lshrv4hi3 = 1026,
  CODE_FOR_subv2si3 = 1027,
  CODE_FOR_subv4hi3 = 1028,
  CODE_FOR_subv8qi3 = 1029,
  CODE_FOR_loongson_psubd = 1030,
  CODE_FOR_sssubv4hi3 = 1031,
  CODE_FOR_sssubv8qi3 = 1032,
  CODE_FOR_ussubv4hi3 = 1033,
  CODE_FOR_ussubv8qi3 = 1034,
  CODE_FOR_loongson_punpckhbh = 1035,
  CODE_FOR_loongson_punpckhhw = 1036,
  CODE_FOR_loongson_punpckhhw_qi = 1037,
  CODE_FOR_loongson_punpckhwd = 1038,
  CODE_FOR_loongson_punpckhwd_qi = 1039,
  CODE_FOR_loongson_punpckhwd_hi = 1040,
  CODE_FOR_loongson_punpcklbh = 1041,
  CODE_FOR_loongson_punpcklhw = 1042,
  CODE_FOR_loongson_punpcklwd = 1044,
  CODE_FOR_vec_shl_v2si = 1047,
  CODE_FOR_vec_shl_v4hi = 1048,
  CODE_FOR_vec_shl_v8qi = 1049,
  CODE_FOR_vec_shl_di = 1050,
  CODE_FOR_vec_shr_v2si = 1051,
  CODE_FOR_vec_shr_v4hi = 1052,
  CODE_FOR_vec_shr_v8qi = 1053,
  CODE_FOR_vec_shr_di = 1054,
  CODE_FOR_divsi3 = 1055,
  CODE_FOR_udivsi3 = 1056,
  CODE_FOR_divdi3 = 1057,
  CODE_FOR_udivdi3 = 1058,
  CODE_FOR_modsi3 = 1059,
  CODE_FOR_umodsi3 = 1060,
  CODE_FOR_moddi3 = 1061,
  CODE_FOR_umoddi3 = 1062,
  CODE_FOR_ctrapsi4 = 1063,
  CODE_FOR_ctrapdi4 = 1064,
  CODE_FOR_addsi3 = 1065,
  CODE_FOR_adddi3 = 1066,
  CODE_FOR_mulsf3 = 1072,
  CODE_FOR_muldf3 = 1073,
  CODE_FOR_mulsi3 = 1074,
  CODE_FOR_muldi3 = 1075,
  CODE_FOR_mulsidi3 = 1084,
  CODE_FOR_umulsidi3 = 1085,
  CODE_FOR_mulsidi3_32bit_mips16 = 1086,
  CODE_FOR_umulsidi3_32bit_mips16 = 1087,
  CODE_FOR_mulsidi3_64bit_mips16 = 1090,
  CODE_FOR_umulsidi3_64bit_mips16 = 1091,
  CODE_FOR_mulsidi3_64bit_split = 1092,
  CODE_FOR_umulsidi3_64bit_split = 1093,
  CODE_FOR_smulsi3_highpart = 1094,
  CODE_FOR_umulsi3_highpart = 1095,
  CODE_FOR_smulsi3_highpart_split = 1098,
  CODE_FOR_umulsi3_highpart_split = 1099,
  CODE_FOR_smuldi3_highpart = 1100,
  CODE_FOR_umuldi3_highpart = 1101,
  CODE_FOR_smuldi3_highpart_split = 1104,
  CODE_FOR_umuldi3_highpart_split = 1105,
  CODE_FOR_mulditi3 = 1106,
  CODE_FOR_umulditi3 = 1107,
  CODE_FOR_divsf3 = 1108,
  CODE_FOR_divdf3 = 1109,
  CODE_FOR_divv2sf3 = 1110,
  CODE_FOR_divmodsi4 = 1111,
  CODE_FOR_divmoddi4 = 1112,
  CODE_FOR_udivmodsi4 = 1115,
  CODE_FOR_udivmoddi4 = 1116,
  CODE_FOR_divmodsi4_split = 1119,
  CODE_FOR_udivmodsi4_split = 1120,
  CODE_FOR_divmoddi4_split = 1121,
  CODE_FOR_udivmoddi4_split = 1122,
  CODE_FOR_andsi3 = 1123,
  CODE_FOR_anddi3 = 1124,
  CODE_FOR_iorsi3 = 1125,
  CODE_FOR_iordi3 = 1126,
  CODE_FOR_xorsi3 = 1127,
  CODE_FOR_xordi3 = 1128,
  CODE_FOR_zero_extendsidi2 = 1129,
  CODE_FOR_zero_extendqisi2 = 1132,
  CODE_FOR_zero_extendqidi2 = 1133,
  CODE_FOR_zero_extendhisi2 = 1134,
  CODE_FOR_zero_extendhidi2 = 1135,
  CODE_FOR_zero_extendqihi2 = 1136,
  CODE_FOR_extendqisi2 = 1138,
  CODE_FOR_extendqidi2 = 1139,
  CODE_FOR_extendhisi2 = 1140,
  CODE_FOR_extendhidi2 = 1141,
  CODE_FOR_extendqihi2 = 1146,
  CODE_FOR_fix_truncdfsi2 = 1153,
  CODE_FOR_fix_truncsfsi2 = 1154,
  CODE_FOR_fixuns_truncdfsi2 = 1155,
  CODE_FOR_fixuns_truncdfdi2 = 1156,
  CODE_FOR_fixuns_truncsfsi2 = 1157,
  CODE_FOR_fixuns_truncsfdi2 = 1158,
  CODE_FOR_extvmisalignsi = 1159,
  CODE_FOR_extvmisaligndi = 1160,
  CODE_FOR_extvsi = 1161,
  CODE_FOR_extvdi = 1162,
  CODE_FOR_extzvmisalignsi = 1163,
  CODE_FOR_extzvmisaligndi = 1164,
  CODE_FOR_extzvsi = 1165,
  CODE_FOR_extzvdi = 1166,
  CODE_FOR_insvmisalignsi = 1167,
  CODE_FOR_insvmisaligndi = 1168,
  CODE_FOR_insvsi = 1169,
  CODE_FOR_insvdi = 1170,
  CODE_FOR_unspec_got_si = 1184,
  CODE_FOR_unspec_got_di = 1185,
  CODE_FOR_movdi = 1192,
  CODE_FOR_movsi = 1194,
  CODE_FOR_movv2hi = 1195,
  CODE_FOR_movv4qi = 1196,
  CODE_FOR_movv2hq = 1197,
  CODE_FOR_movv2uhq = 1198,
  CODE_FOR_movv2ha = 1199,
  CODE_FOR_movv2uha = 1200,
  CODE_FOR_movv4qq = 1201,
  CODE_FOR_movv4uqq = 1202,
  CODE_FOR_movhi = 1205,
  CODE_FOR_movqi = 1207,
  CODE_FOR_movsf = 1209,
  CODE_FOR_movdf = 1210,
  CODE_FOR_movti = 1211,
  CODE_FOR_movtf = 1212,
  CODE_FOR_movv2sf = 1222,
  CODE_FOR_move_doubleword_fprdf = 1223,
  CODE_FOR_move_doubleword_fprdi = 1224,
  CODE_FOR_move_doubleword_fprv2sf = 1225,
  CODE_FOR_move_doubleword_fprv2si = 1226,
  CODE_FOR_move_doubleword_fprv4hi = 1227,
  CODE_FOR_move_doubleword_fprv8qi = 1228,
  CODE_FOR_move_doubleword_fprtf = 1229,
  CODE_FOR_load_const_gp_si = 1230,
  CODE_FOR_load_const_gp_di = 1231,
  CODE_FOR_clear_cache = 1242,
  CODE_FOR_movmemsi = 1243,
  CODE_FOR_ashlsi3 = 1244,
  CODE_FOR_ashrsi3 = 1245,
  CODE_FOR_lshrsi3 = 1246,
  CODE_FOR_ashldi3 = 1247,
  CODE_FOR_ashrdi3 = 1248,
  CODE_FOR_lshrdi3 = 1249,
  CODE_FOR_cbranchsi4 = 1259,
  CODE_FOR_cbranchdi4 = 1260,
  CODE_FOR_cbranchsf4 = 1261,
  CODE_FOR_cbranchdf4 = 1262,
  CODE_FOR_condjump = 1263,
  CODE_FOR_cstoresi4 = 1264,
  CODE_FOR_cstoredi4 = 1265,
  CODE_FOR_jump = 1266,
  CODE_FOR_indirect_jump = 1267,
  CODE_FOR_tablejump = 1268,
  CODE_FOR_casesi = 1269,
  CODE_FOR_builtin_setjmp_setup = 1270,
  CODE_FOR_builtin_longjmp = 1271,
  CODE_FOR_prologue = 1272,
  CODE_FOR_epilogue = 1273,
  CODE_FOR_sibcall_epilogue = 1274,
  CODE_FOR_return = 1275,
  CODE_FOR_simple_return = 1276,
  CODE_FOR_eh_return = 1277,
  CODE_FOR_exception_receiver = 1279,
  CODE_FOR_nonlocal_goto_receiver = 1280,
  CODE_FOR_sibcall = 1285,
  CODE_FOR_sibcall_value = 1286,
  CODE_FOR_call = 1287,
  CODE_FOR_call_value = 1290,
  CODE_FOR_untyped_call = 1294,
  CODE_FOR_movsicc = 1295,
  CODE_FOR_movdicc = 1296,
  CODE_FOR_movsfcc = 1297,
  CODE_FOR_movdfcc = 1298,
  CODE_FOR_get_thread_pointersi = 1304,
  CODE_FOR_get_thread_pointerdi = 1305,
  CODE_FOR_memory_barrier = 1306,
  CODE_FOR_sync_compare_and_swapqi = 1307,
  CODE_FOR_sync_compare_and_swaphi = 1308,
  CODE_FOR_sync_addqi = 1309,
  CODE_FOR_sync_subqi = 1310,
  CODE_FOR_sync_iorqi = 1311,
  CODE_FOR_sync_xorqi = 1312,
  CODE_FOR_sync_andqi = 1313,
  CODE_FOR_sync_addhi = 1314,
  CODE_FOR_sync_subhi = 1315,
  CODE_FOR_sync_iorhi = 1316,
  CODE_FOR_sync_xorhi = 1317,
  CODE_FOR_sync_andhi = 1318,
  CODE_FOR_sync_old_addqi = 1319,
  CODE_FOR_sync_old_subqi = 1320,
  CODE_FOR_sync_old_iorqi = 1321,
  CODE_FOR_sync_old_xorqi = 1322,
  CODE_FOR_sync_old_andqi = 1323,
  CODE_FOR_sync_old_addhi = 1324,
  CODE_FOR_sync_old_subhi = 1325,
  CODE_FOR_sync_old_iorhi = 1326,
  CODE_FOR_sync_old_xorhi = 1327,
  CODE_FOR_sync_old_andhi = 1328,
  CODE_FOR_sync_new_addqi = 1329,
  CODE_FOR_sync_new_subqi = 1330,
  CODE_FOR_sync_new_iorqi = 1331,
  CODE_FOR_sync_new_xorqi = 1332,
  CODE_FOR_sync_new_andqi = 1333,
  CODE_FOR_sync_new_addhi = 1334,
  CODE_FOR_sync_new_subhi = 1335,
  CODE_FOR_sync_new_iorhi = 1336,
  CODE_FOR_sync_new_xorhi = 1337,
  CODE_FOR_sync_new_andhi = 1338,
  CODE_FOR_sync_nandqi = 1339,
  CODE_FOR_sync_nandhi = 1340,
  CODE_FOR_sync_old_nandqi = 1341,
  CODE_FOR_sync_old_nandhi = 1342,
  CODE_FOR_sync_new_nandqi = 1343,
  CODE_FOR_sync_new_nandhi = 1344,
  CODE_FOR_sync_lock_test_and_setqi = 1345,
  CODE_FOR_sync_lock_test_and_sethi = 1346,
  CODE_FOR_atomic_exchangesi = 1347,
  CODE_FOR_atomic_exchangedi = 1348,
  CODE_FOR_atomic_fetch_addsi = 1349,
  CODE_FOR_atomic_fetch_adddi = 1350,
  CODE_FOR_movv2sfcc = 1351,
  CODE_FOR_vec_perm_constv2sf = 1352,
  CODE_FOR_mips_puu_ps = 1353,
  CODE_FOR_mips_pul_ps = 1354,
  CODE_FOR_mips_plu_ps = 1355,
  CODE_FOR_mips_pll_ps = 1356,
  CODE_FOR_vec_initv2sf = 1357,
  CODE_FOR_vec_setv2sf = 1358,
  CODE_FOR_mips_cvt_ps_s = 1359,
  CODE_FOR_mips_cvt_s_pl = 1360,
  CODE_FOR_mips_cvt_s_pu = 1361,
  CODE_FOR_mips_abs_ps = 1362,
  CODE_FOR_scc_ps = 1365,
  CODE_FOR_single_cc = 1366,
  CODE_FOR_vcondv2sfv2sf = 1367,
  CODE_FOR_sminv2sf3 = 1368,
  CODE_FOR_smaxv2sf3 = 1369,
  CODE_FOR_reduc_smin_v2sf = 1370,
  CODE_FOR_reduc_smax_v2sf = 1371,
  CODE_FOR_mips_lbux = 1372,
  CODE_FOR_mips_lhx = 1373,
  CODE_FOR_mips_lwx = 1374,
  CODE_FOR_mips_ldx = 1375,
  CODE_FOR_mips_madd = 1376,
  CODE_FOR_mips_maddu = 1377,
  CODE_FOR_mips_msub = 1378,
  CODE_FOR_mips_msubu = 1379,
  CODE_FOR_movv2si = 1380,
  CODE_FOR_movv4hi = 1381,
  CODE_FOR_movv8qi = 1382,
  CODE_FOR_vec_initv2si = 1383,
  CODE_FOR_vec_initv4hi = 1384,
  CODE_FOR_vec_initv8qi = 1385,
  CODE_FOR_vec_setv4hi = 1386,
  CODE_FOR_sdot_prodv4hi = 1387,
  CODE_FOR_smaxv2si3 = 1388,
  CODE_FOR_smaxv8qi3 = 1389,
  CODE_FOR_sminv2si3 = 1390,
  CODE_FOR_sminv8qi3 = 1391,
  CODE_FOR_vec_perm_constv2si = 1392,
  CODE_FOR_vec_perm_constv4hi = 1393,
  CODE_FOR_vec_perm_constv8qi = 1394,
  CODE_FOR_vec_unpacks_lo_v4hi = 1395,
  CODE_FOR_vec_unpacks_lo_v8qi = 1396,
  CODE_FOR_vec_unpacks_hi_v4hi = 1397,
  CODE_FOR_vec_unpacks_hi_v8qi = 1398,
  CODE_FOR_vec_unpacku_lo_v4hi = 1399,
  CODE_FOR_vec_unpacku_lo_v8qi = 1400,
  CODE_FOR_vec_unpacku_hi_v4hi = 1401,
  CODE_FOR_vec_unpacku_hi_v8qi = 1402,
  CODE_FOR_reduc_uplus_v2si = 1403,
  CODE_FOR_reduc_uplus_v4hi = 1404,
  CODE_FOR_reduc_splus_v2si = 1405,
  CODE_FOR_reduc_splus_v4hi = 1406,
  CODE_FOR_reduc_splus_v8qi = 1407,
  CODE_FOR_reduc_smax_v2si = 1408,
  CODE_FOR_reduc_smax_v4hi = 1409,
  CODE_FOR_reduc_smax_v8qi = 1410,
  CODE_FOR_reduc_smin_v2si = 1411,
  CODE_FOR_reduc_smin_v4hi = 1412,
  CODE_FOR_reduc_smin_v8qi = 1413,
  CODE_FOR_reduc_umax_v8qi = 1414,
  CODE_FOR_reduc_umin_v8qi = 1415,
  LAST_INSN_CODE
};

#endif /* GCC_INSN_CODES_H */
