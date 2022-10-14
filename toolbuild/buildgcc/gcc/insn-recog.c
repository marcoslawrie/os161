/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_1067 (rtx, rtx *);
extern rtx gen_split_1068 (rtx, rtx *);
extern rtx gen_split_1069 (rtx, rtx *);
extern rtx gen_split_1070 (rtx, rtx *);
extern rtx gen_split_1071 (rtx, rtx *);
extern rtx gen_peephole2_1076 (rtx, rtx *);
extern rtx gen_peephole2_1077 (rtx, rtx *);
extern rtx gen_split_1078 (rtx, rtx *);
extern rtx gen_split_1079 (rtx, rtx *);
extern rtx gen_peephole2_1080 (rtx, rtx *);
extern rtx gen_peephole2_1081 (rtx, rtx *);
extern rtx gen_peephole2_1082 (rtx, rtx *);
extern rtx gen_split_1083 (rtx, rtx *);
extern rtx gen_split_1088 (rtx, rtx *);
extern rtx gen_split_1089 (rtx, rtx *);
extern rtx gen_split_1096 (rtx, rtx *);
extern rtx gen_split_1097 (rtx, rtx *);
extern rtx gen_split_1102 (rtx, rtx *);
extern rtx gen_split_1103 (rtx, rtx *);
extern rtx gen_split_1113 (rtx, rtx *);
extern rtx gen_split_1114 (rtx, rtx *);
extern rtx gen_split_1117 (rtx, rtx *);
extern rtx gen_split_1118 (rtx, rtx *);
extern rtx gen_split_1130 (rtx, rtx *);
extern rtx gen_split_1131 (rtx, rtx *);
extern rtx gen_split_1137 (rtx, rtx *);
extern rtx gen_split_1142 (rtx, rtx *);
extern rtx gen_split_1143 (rtx, rtx *);
extern rtx gen_split_1144 (rtx, rtx *);
extern rtx gen_split_1145 (rtx, rtx *);
extern rtx gen_split_1147 (rtx, rtx *);
extern rtx gen_split_1148 (rtx, rtx *);
extern rtx gen_split_1149 (rtx, rtx *);
extern rtx gen_split_1150 (rtx, rtx *);
extern rtx gen_split_1151 (rtx, rtx *);
extern rtx gen_split_1152 (rtx, rtx *);
extern rtx gen_split_1171 (rtx, rtx *);
extern rtx gen_peephole2_1172 (rtx, rtx *);
extern rtx gen_split_1173 (rtx, rtx *);
extern rtx gen_split_1174 (rtx, rtx *);
extern rtx gen_split_1175 (rtx, rtx *);
extern rtx gen_split_1176 (rtx, rtx *);
extern rtx gen_split_1177 (rtx, rtx *);
extern rtx gen_split_1178 (rtx, rtx *);
extern rtx gen_split_1179 (rtx, rtx *);
extern rtx gen_split_1180 (rtx, rtx *);
extern rtx gen_split_1181 (rtx, rtx *);
extern rtx gen_split_1182 (rtx, rtx *);
extern rtx gen_split_1183 (rtx, rtx *);
extern rtx gen_split_1186 (rtx, rtx *);
extern rtx gen_split_1187 (rtx, rtx *);
extern rtx gen_split_1188 (rtx, rtx *);
extern rtx gen_split_1189 (rtx, rtx *);
extern rtx gen_split_1190 (rtx, rtx *);
extern rtx gen_split_1191 (rtx, rtx *);
extern rtx gen_split_1193 (rtx, rtx *);
extern rtx gen_split_1203 (rtx, rtx *);
extern rtx gen_split_1204 (rtx, rtx *);
extern rtx gen_split_1206 (rtx, rtx *);
extern rtx gen_split_1208 (rtx, rtx *);
extern rtx gen_split_1213 (rtx, rtx *);
extern rtx gen_split_1214 (rtx, rtx *);
extern rtx gen_split_1215 (rtx, rtx *);
extern rtx gen_split_1216 (rtx, rtx *);
extern rtx gen_split_1217 (rtx, rtx *);
extern rtx gen_split_1218 (rtx, rtx *);
extern rtx gen_split_1219 (rtx, rtx *);
extern rtx gen_split_1220 (rtx, rtx *);
extern rtx gen_split_1221 (rtx, rtx *);
extern rtx gen_split_1232 (rtx, rtx *);
extern rtx gen_split_1233 (rtx, rtx *);
extern rtx gen_split_1234 (rtx, rtx *);
extern rtx gen_split_1235 (rtx, rtx *);
extern rtx gen_split_1236 (rtx, rtx *);
extern rtx gen_split_1237 (rtx, rtx *);
extern rtx gen_split_1238 (rtx, rtx *);
extern rtx gen_split_1239 (rtx, rtx *);
extern rtx gen_split_1240 (rtx, rtx *);
extern rtx gen_split_1241 (rtx, rtx *);
extern rtx gen_split_1250 (rtx, rtx *);
extern rtx gen_split_1251 (rtx, rtx *);
extern rtx gen_split_1252 (rtx, rtx *);
extern rtx gen_split_1253 (rtx, rtx *);
extern rtx gen_split_1254 (rtx, rtx *);
extern rtx gen_split_1255 (rtx, rtx *);
extern rtx gen_split_1256 (rtx, rtx *);
extern rtx gen_split_1257 (rtx, rtx *);
extern rtx gen_split_1258 (rtx, rtx *);
extern rtx gen_split_1278 (rtx, rtx *);
extern rtx gen_split_1281 (rtx, rtx *);
extern rtx gen_split_1282 (rtx, rtx *);
extern rtx gen_split_1283 (rtx, rtx *);
extern rtx gen_split_1284 (rtx, rtx *);
extern rtx gen_split_1288 (rtx, rtx *);
extern rtx gen_split_1289 (rtx, rtx *);
extern rtx gen_split_1291 (rtx, rtx *);
extern rtx gen_split_1292 (rtx, rtx *);
extern rtx gen_split_1293 (rtx, rtx *);
extern rtx gen_split_1299 (rtx, rtx *);
extern rtx gen_split_1300 (rtx, rtx *);
extern rtx gen_split_1301 (rtx, rtx *);
extern rtx gen_split_1302 (rtx, rtx *);
extern rtx gen_split_1303 (rtx, rtx *);
extern rtx gen_split_1363 (rtx, rtx *);
extern rtx gen_split_1364 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L24;
    case MINUS:
      goto L112;
    case MULT:
      goto L148;
    case NEG:
      goto L975;
    case DIV:
      goto L1185;
    case SQRT:
      goto L1307;
    case ABS:
      goto L1364;
    case FLOAT_TRUNCATE:
      goto L1526;
    case FLOAT:
      goto L1938;
    case MEM:
      goto L2260;
    case IF_THEN_ELSE:
      goto L4378;
    default:
     break;
   }
  goto ret0;

 L24: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L9380;
  goto ret0;

 L9380: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L880;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L25;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L881;
    }
  goto ret0;

 L881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L882;
    }
  goto ret0;

 L882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L883;
    }
  goto ret0;

 L883: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2319 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 77;  /* *madd4sf */
    }
 L907: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2330 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 80;  /* *madd3sf */
    }
  goto ret0;

 L25: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L26;
    }
  goto ret0;

 L26: ATTRIBUTE_UNUSED_LABEL
  if (
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 8;  /* addsf3 */
    }
  goto ret0;

 L112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L9382;
  goto ret0;

 L9382: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L928;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L113;
    }
  goto ret0;

 L928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L9384;
  goto ret0;

 L9384: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1031;
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L929;
    }
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L1032;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1033;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L1034;
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2394 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 95;  /* *nmadd4sf_fastmath */
    }
 L1061: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 98;  /* *nmadd3sf_fastmath */
    }
  goto ret0;

 L929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L930;
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L931;
    }
  goto ret0;

 L931: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2341 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 83;  /* *msub4sf */
    }
 L955: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2352 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 86;  /* *msub3sf */
    }
  goto ret0;

 L113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L9386;
  goto ret0;

 L9386: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1139;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L114;
    }
  goto ret0;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1140;
    }
  goto ret0;

 L1140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L1141;
    }
  goto ret0;

 L1141: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2454 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 107;  /* *nmsub4sf_fastmath */
    }
 L1165: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2469 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 110;  /* *nmsub3sf_fastmath */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 21;  /* subsf3 */
    }
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L149;
    }
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L150;
    }
  goto ret0;

 L150: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1387 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 27;  /* *mulsf3 */
    }
 L162: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1400 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 29;  /* *mulsf3_r4300 */
    }
  goto ret0;

 L975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L9387;
  goto ret0;

 L9387: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L976;
    case MINUS:
      goto L1084;
    case REG:
    case SUBREG:
      goto L9389;
    default:
      goto ret0;
   }
 L9389: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1415;
    }
  goto ret0;

 L976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L977;
  goto ret0;

 L977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L978;
    }
  goto ret0;

 L978: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L979;
    }
  goto ret0;

 L979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L980;
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2364 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 89;  /* *nmadd4sf */
    }
 L1007: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2379 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 92;  /* *nmadd3sf */
    }
  goto ret0;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L1085;
  goto ret0;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L1086;
    }
  goto ret0;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L1087;
    }
  goto ret0;

 L1087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1088;
    }
  goto ret0;

 L1088: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2424 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 101;  /* *nmsub4sf */
    }
 L1115: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2439 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 104;  /* *nmsub3sf */
    }
  goto ret0;

 L1415: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2825 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 148;  /* negsf2 */
    }
  goto ret0;

 L1185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1186;
    }
  if (const_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1204;
    }
  goto ret0;

 L1186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1187;
    }
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2513 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 113;  /* *divsf3 */
    }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L9391;
  goto ret0;

 L9391: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1324;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1205;
    }
  goto ret0;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1325;
    }
  goto ret0;

 L1325: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2694 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 132;  /* *rsqrtsfa */
    }
  goto ret0;

 L1205: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 116;  /* *recipsf3 */
    }
  goto ret0;

 L1307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L9393;
  goto ret0;

 L9393: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1344;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1308;
    }
  goto ret0;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1345;
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1346;
    }
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2712 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 135;  /* *rsqrtsfb */
    }
  goto ret0;

 L1308: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 129;  /* sqrtsf2 */
    }
  goto ret0;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1365;
    }
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 138;  /* abssf2 */
    }
  goto ret0;

 L1526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1527;
    }
  goto ret0;

 L1527: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3031 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 167;  /* truncdfsf2 */
    }
  goto ret0;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9394;
    case DImode:
      goto L9395;
    default:
      break;
    }
  goto ret0;

 L9394: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1939;
    }
  goto ret0;

 L1939: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3594 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 239;  /* floatsisf2 */
    }
  goto ret0;

 L9395: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1944;
    }
  goto ret0;

 L1944: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3604 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 240;  /* floatdisf2 */
    }
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9396;
    case DImode:
      goto L9397;
    default:
      break;
    }
  goto ret0;

 L9396: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2261;
  goto ret0;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2262;
    }
  goto ret0;

 L2262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2263;
    }
  goto ret0;

 L2263: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 300;  /* *lwxc1_si */
    }
  goto ret0;

 L9397: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2282;
  goto ret0;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2283;
    }
  goto ret0;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2284;
    }
  goto ret0;

 L2284: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 303;  /* *lwxc1_di */
    }
  goto ret0;

 L4378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9398;
    case DImode:
      goto L9399;
    case CCmode:
      goto L9400;
    default:
      break;
    }
  goto ret0;

 L9398: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4379;
    }
  goto ret0;

 L4379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4380;
    }
  goto ret0;

 L4380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4381;
  goto ret0;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4382;
    }
  goto ret0;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4383;
    }
  goto ret0;

 L4383: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 611;  /* *movsf_on_si */
    }
  goto ret0;

 L9399: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4388;
    }
  goto ret0;

 L4388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4389;
    }
  goto ret0;

 L4389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4390;
  goto ret0;

 L4390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4391;
    }
  goto ret0;

 L4391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4392;
    }
  goto ret0;

 L4392: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))))
    {
      return 612;  /* *movsf_on_di */
    }
  goto ret0;

 L9400: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4397;
    }
  goto ret0;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4398;
    }
  goto ret0;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4399;
  goto ret0;

 L4399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4400;
    }
  goto ret0;

 L4400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4401;
    }
  goto ret0;

 L4401: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))))
    {
      return 613;  /* *movsf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L30;
    case MINUS:
      goto L118;
    case MULT:
      goto L154;
    case NEG:
      goto L984;
    case DIV:
      goto L1191;
    case SQRT:
      goto L1312;
    case ABS:
      goto L1369;
    case FLOAT_EXTEND:
      goto L1877;
    case FLOAT:
      goto L1928;
    case MEM:
      goto L2267;
    case UNSPEC:
      goto L9417;
    case IF_THEN_ELSE:
      goto L4405;
    default:
     break;
   }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L9421;
  goto ret0;

 L9421: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L888;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L31;
    }
  goto ret0;

 L888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L889;
    }
  goto ret0;

 L889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L890;
    }
  goto ret0;

 L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L891;
    }
  goto ret0;

 L891: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2319 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 78;  /* *madd4df */
    }
 L915: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2330 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 81;  /* *madd3df */
    }
  goto ret0;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L32;
    }
  goto ret0;

 L32: ATTRIBUTE_UNUSED_LABEL
  if (
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 9;  /* adddf3 */
    }
  goto ret0;

 L118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L9423;
  goto ret0;

 L9423: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L936;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L119;
    }
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L9425;
  goto ret0;

 L9425: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1040;
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L937;
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L1041;
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1042;
    }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L1043;
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2394 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 96;  /* *nmadd4df_fastmath */
    }
 L1070: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 99;  /* *nmadd3df_fastmath */
    }
  goto ret0;

 L937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L938;
    }
  goto ret0;

 L938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L939;
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2341 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 84;  /* *msub4df */
    }
 L963: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2352 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 87;  /* *msub3df */
    }
  goto ret0;

 L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L9427;
  goto ret0;

 L9427: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1147;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L120;
    }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1148;
    }
  goto ret0;

 L1148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L1149;
    }
  goto ret0;

 L1149: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2454 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 108;  /* *nmsub4df_fastmath */
    }
 L1173: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2469 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 111;  /* *nmsub3df_fastmath */
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  if (
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 22;  /* subdf3 */
    }
  goto ret0;

 L154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L155;
    }
  goto ret0;

 L155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L156;
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1387 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 28;  /* *muldf3 */
    }
 L168: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1400 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 30;  /* *muldf3_r4300 */
    }
  goto ret0;

 L984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L9428;
  goto ret0;

 L9428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L985;
    case MINUS:
      goto L1093;
    case REG:
    case SUBREG:
      goto L9430;
    default:
      goto ret0;
   }
 L9430: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1420;
    }
  goto ret0;

 L985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L986;
  goto ret0;

 L986: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L987;
    }
  goto ret0;

 L987: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L988;
    }
  goto ret0;

 L988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L989;
    }
  goto ret0;

 L989: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2364 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 90;  /* *nmadd4df */
    }
 L1016: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2379 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 93;  /* *nmadd3df */
    }
  goto ret0;

 L1093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L1094;
  goto ret0;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L1095;
    }
  goto ret0;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L1096;
    }
  goto ret0;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1097;
    }
  goto ret0;

 L1097: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2424 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 102;  /* *nmsub4df */
    }
 L1124: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2439 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 105;  /* *nmsub3df */
    }
  goto ret0;

 L1420: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2825 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 149;  /* negdf2 */
    }
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1192;
    }
  if (const_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1210;
    }
  goto ret0;

 L1192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1193;
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  if (
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 114;  /* *divdf3 */
    }
  goto ret0;

 L1210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L9432;
  goto ret0;

 L9432: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1331;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1211;
    }
  goto ret0;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1332;
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2694 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 133;  /* *rsqrtdfa */
    }
  goto ret0;

 L1211: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 117;  /* *recipdf3 */
    }
  goto ret0;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L9434;
  goto ret0;

 L9434: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1351;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1313;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1352;
    }
  goto ret0;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1353;
    }
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2712 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 136;  /* *rsqrtdfb */
    }
  goto ret0;

 L1313: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 130;  /* sqrtdf2 */
    }
  goto ret0;

 L1369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1370;
    }
  goto ret0;

 L1370: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 139;  /* absdf2 */
    }
  goto ret0;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1878;
    }
  goto ret0;

 L1878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3463 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 230;  /* extendsfdf2 */
    }
  goto ret0;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9435;
    case DImode:
      goto L9436;
    default:
      break;
    }
  goto ret0;

 L9435: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1929;
    }
  goto ret0;

 L1929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3574 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 237;  /* floatsidf2 */
    }
  goto ret0;

 L9436: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1934;
    }
  goto ret0;

 L1934: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3584 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 238;  /* floatdidf2 */
    }
  goto ret0;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9437;
    case DImode:
      goto L9438;
    default:
      break;
    }
  goto ret0;

 L9437: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2268;
  goto ret0;

 L2268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2269;
    }
  goto ret0;

 L2269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2270;
    }
  goto ret0;

 L2270: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 301;  /* *ldxc1_si */
    }
  goto ret0;

 L9438: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2289;
  goto ret0;

 L2289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2290;
    }
  goto ret0;

 L2290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2291;
    }
  goto ret0;

 L2291: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 304;  /* *ldxc1_di */
    }
  goto ret0;

 L9417: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9439;
    case 2:
      goto L9440;
    default:
      break;
    }
  goto ret0;

 L9439: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2599;
  goto ret0;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2600;
    }
  goto ret0;

 L2600: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 351;  /* load_lowdf */
    }
  goto ret0;

 L9440: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2634;
    case 11L:
      goto L2718;
    default:
      break;
    }
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2635;
    }
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2636;
    }
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 358;  /* load_highdf */
    }
  goto ret0;

 L2718: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2719;
    }
  goto ret0;

 L2719: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2720;
    }
  goto ret0;

 L2720: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 372;  /* mthc1df */
    }
  goto ret0;

 L4405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9442;
    case DImode:
      goto L9443;
    case CCmode:
      goto L9444;
    default:
      break;
    }
  goto ret0;

 L9442: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4406;
    }
  goto ret0;

 L4406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4407;
    }
  goto ret0;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4408;
  goto ret0;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4409;
    }
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4410;
    }
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 614;  /* *movdf_on_si */
    }
  goto ret0;

 L9443: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4415;
    }
  goto ret0;

 L4415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4416;
    }
  goto ret0;

 L4416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4417;
  goto ret0;

 L4417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4418;
    }
  goto ret0;

 L4418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4419;
    }
  goto ret0;

 L4419: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))))
    {
      return 615;  /* *movdf_on_di */
    }
  goto ret0;

 L9444: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4424;
    }
  goto ret0;

 L4424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4425;
    }
  goto ret0;

 L4425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4426;
  goto ret0;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4427;
    }
  goto ret0;

 L4427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4428;
    }
  goto ret0;

 L4428: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6768 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && ((((
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))))
    {
      return 616;  /* *movdf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L36;
    case MINUS:
      goto L124;
    case MULT:
      goto L172;
    case NEG:
      goto L993;
    case DIV:
      goto L1197;
    case SQRT:
      goto L1317;
    case ABS:
      goto L1374;
    case MEM:
      goto L2274;
    case UNSPEC:
      goto L9458;
    default:
     break;
   }
  goto ret0;

 L36: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L9462;
  goto ret0;

 L9462: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L896;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L37;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L897;
    }
  goto ret0;

 L897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L898;
    }
  goto ret0;

 L898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L899;
    }
  goto ret0;

 L899: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2319 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 79;  /* *madd4v2sf */
    }
 L923: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2330 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 82;  /* *madd3v2sf */
    }
  goto ret0;

 L37: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L38;
    }
  goto ret0;

 L38: ATTRIBUTE_UNUSED_LABEL
  if (
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 10;  /* addv2sf3 */
    }
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L9464;
  goto ret0;

 L9464: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L944;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L125;
    }
  goto ret0;

 L944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode)
    goto L9466;
  goto ret0;

 L9466: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1049;
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L945;
    }
  goto ret0;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L1050;
    }
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1051;
    }
  goto ret0;

 L1051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L1052;
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2394 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 97;  /* *nmadd4v2sf_fastmath */
    }
 L1079: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 100;  /* *nmadd3v2sf_fastmath */
    }
  goto ret0;

 L945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L946;
    }
  goto ret0;

 L946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L947;
    }
  goto ret0;

 L947: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2341 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 85;  /* *msub4v2sf */
    }
 L971: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2352 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 88;  /* *msub3v2sf */
    }
  goto ret0;

 L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L9468;
  goto ret0;

 L9468: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1155;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L126;
    }
  goto ret0;

 L1155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1156;
    }
  goto ret0;

 L1156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L1157;
    }
  goto ret0;

 L1157: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2454 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 109;  /* *nmsub4v2sf_fastmath */
    }
 L1181: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2469 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 112;  /* *nmsub3v2sf_fastmath */
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 23;  /* subv2sf3 */
    }
  goto ret0;

 L172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L173;
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1410 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 31;  /* mulv2sf3 */
    }
  goto ret0;

 L993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L9469;
  goto ret0;

 L9469: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L994;
    case MINUS:
      goto L1102;
    case REG:
    case SUBREG:
      goto L9471;
    default:
      goto ret0;
   }
 L9471: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1425;
    }
  goto ret0;

 L994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L995;
  goto ret0;

 L995: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L996;
    }
  goto ret0;

 L996: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L997;
    }
  goto ret0;

 L997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L998;
    }
  goto ret0;

 L998: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2364 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 91;  /* *nmadd4v2sf */
    }
 L1025: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2379 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 94;  /* *nmadd3v2sf */
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L1103;
  goto ret0;

 L1103: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L1104;
    }
  goto ret0;

 L1104: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[3] = x4;
      goto L1105;
    }
  goto ret0;

 L1105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1106;
    }
  goto ret0;

 L1106: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2424 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 103;  /* *nmsub4v2sf */
    }
 L1133: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2439 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 106;  /* *nmsub3v2sf */
    }
  goto ret0;

 L1425: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2825 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 150;  /* negv2sf2 */
    }
  goto ret0;

 L1197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1198;
    }
  if (const_1_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1216;
    }
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1199;
    }
  goto ret0;

 L1199: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2513 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 115;  /* *divv2sf3 */
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L9473;
  goto ret0;

 L9473: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1338;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1217;
    }
  goto ret0;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1339;
    }
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2694 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 134;  /* *rsqrtv2sfa */
    }
  goto ret0;

 L1217: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 118;  /* *recipv2sf3 */
    }
  goto ret0;

 L1317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L9475;
  goto ret0;

 L9475: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1358;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1318;
    }
  goto ret0;

 L1358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1359;
    }
  goto ret0;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1360;
    }
  goto ret0;

 L1360: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2712 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 137;  /* *rsqrtv2sfb */
    }
  goto ret0;

 L1318: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2676 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 131;  /* sqrtv2sf2 */
    }
  goto ret0;

 L1374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1375;
    }
  goto ret0;

 L1375: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 140;  /* absv2sf2 */
    }
  goto ret0;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9476;
    case DImode:
      goto L9477;
    default:
      break;
    }
  goto ret0;

 L9476: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2275;
  goto ret0;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2276;
    }
  goto ret0;

 L2276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2277;
    }
  goto ret0;

 L2277: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 302;  /* *ldxc1_si */
    }
  goto ret0;

 L9477: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2296;
  goto ret0;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2297;
    }
  goto ret0;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2298;
    }
  goto ret0;

 L2298: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4459 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && (((
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 305;  /* *ldxc1_di */
    }
  goto ret0;

 L9458: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9478;
    case 2:
      goto L9479;
    default:
      break;
    }
  goto ret0;

 L9478: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2609;
  goto ret0;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2610;
    }
  goto ret0;

 L2610: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 777 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 353;  /* load_lowv2sf */
    }
  goto ret0;

 L9479: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2646;
    case 11L:
      goto L2730;
    default:
      break;
    }
  goto ret0;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2647;
    }
  goto ret0;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2648;
    }
  goto ret0;

 L2648: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 777 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 360;  /* load_highv2sf */
    }
  goto ret0;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2731;
    }
  goto ret0;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2732;
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 777 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 374;  /* mthc1v2sf */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L241;
    case PLUS:
      goto L275;
    case MINUS:
      goto L334;
    case NEG:
      goto L424;
    case TRUNCATE:
      goto L616;
    case CLZ:
      goto L1379;
    case POPCOUNT:
      goto L1389;
    case NOT:
      goto L1429;
    case AND:
      goto L1438;
    case IOR:
      goto L1462;
    case XOR:
      goto L1486;
    case ZERO_EXTEND:
      goto L1637;
    case SIGN_EXTEND:
      goto L1742;
    case FIX:
      goto L1882;
    case SIGN_EXTRACT:
      goto L1948;
    case ZERO_EXTRACT:
      goto L1962;
    case UNSPEC:
      goto L9523;
    case HIGH:
      goto L2090;
    case LO_SUM:
      goto L2100;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9521;
    default:
      goto ret0;
   }
 L9521: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2112;
    }
  goto ret0;

 L241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L242;
    }
  goto ret0;

 L242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L243;
    }
  goto ret0;

 L243: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1555 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* mulsi3_r4000 */
    }
  goto ret0;

 L275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L276;
  goto ret0;

 L276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L277;
    }
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L278;
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L279;
    }
 L855: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2281 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MAD))
    {
      return 74;  /* madsi */
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1612 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 40;  /* *mul_acc_si */
    }
 L300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1630 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 41;  /* *mul_acc_si_r3900 */
    }
 L319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1662 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 42;  /* *macc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L855;

 L334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L335;
    }
  goto ret0;

 L335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L336;
  goto ret0;

 L336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L337;
    }
  goto ret0;

 L337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L338;
    }
  goto ret0;

 L338: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1684 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 43;  /* *msac */
    }
 L359: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1705 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 44;  /* *msac_using_macc */
    }
 L410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1848 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 47;  /* *mul_sub_si */
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9526;
  goto ret0;

 L9526: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L425;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 146;  /* negsi2 */
    }
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L426;
    }
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L427;
    }
  goto ret0;

 L427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1878 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 48;  /* *muls */
    }
  goto ret0;

 L616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9528;
  goto ret0;

 L9528: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L617;
    case ASHIFTRT:
      goto L1561;
    case ZERO_EXTRACT:
      goto L1977;
    default:
     break;
   }
  goto ret0;

 L617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9531;
  goto ret0;

 L9531: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L618;
    case NEG:
      goto L715;
    case REG:
    case SUBREG:
      goto L9533;
    default:
      goto ret0;
   }
 L9533: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1581;
    }
  goto ret0;

 L618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L9534;
  goto ret0;

 L9534: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L619;
    case ZERO_EXTEND:
      goto L643;
    default:
     break;
   }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L620;
    }
  goto ret0;

 L620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L621;
  goto ret0;

 L621: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L622;
    }
  goto ret0;

 L622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9536;
  goto ret0;

 L9536: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L9538;
  goto ret0;

 L9538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 62;  /* smulsi3_highpart_internal */
    }
 L9539: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2146 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 64;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L644;
    }
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L645;
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L646;
    }
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9540;
  goto ret0;

 L9540: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L9542;
  goto ret0;

 L9542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 63;  /* umulsi3_highpart_internal */
    }
 L9543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2146 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 65;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L715: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L716;
  goto ret0;

 L716: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L9544;
  goto ret0;

 L9544: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L717;
    case ZERO_EXTEND:
      goto L743;
    default:
     break;
   }
  goto ret0;

 L717: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L718;
    }
  goto ret0;

 L718: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L719;
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L720;
    }
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 66;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L743: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L744;
    }
  goto ret0;

 L744: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L745;
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L746;
    }
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 2161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 67;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9546;
  goto ret0;

 L9546: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 3077 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 176;  /* *lshr32_truncsi */
    }
 L9547: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1623;
    }
  goto ret0;

 L1623: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 182;  /* *lshr_truncsi_exts */
    }
  goto ret0;

 L1561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1562;
    }
  goto ret0;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1563;
    }
  goto ret0;

 L1563: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3067 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 173;  /* *ashr_truncsi */
    }
 L1616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 181;  /* *ashr_truncsi_exts */
    }
  goto ret0;

 L1977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1978;
    }
  goto ret0;

 L1978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1979;
    }
  goto ret0;

 L1979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1980;
    }
  goto ret0;

 L1980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3876 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 245;  /* *extzv_truncsi_exts */
    }
  goto ret0;

 L1379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1380;
    }
  goto ret0;

 L1380: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2759 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO))
    {
      return 141;  /* clzsi2 */
    }
  goto ret0;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9549;
  goto ret0;

 L9549: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1400;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1390;
    }
  goto ret0;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1401;
    }
  goto ret0;

 L1401: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2785 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_POP && TARGET_64BIT))
    {
      return 145;  /* *popcountdi2_trunc */
    }
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_POP))
    {
      return 143;  /* popcountsi2 */
    }
  goto ret0;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 151;  /* one_cmplsi2 */
    }
  goto ret0;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9551;
  goto ret0;

 L9551: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L1511;
    case ASHIFT:
      goto L1999;
    case REG:
    case SUBREG:
    case MEM:
      goto L9550;
    default:
      goto ret0;
   }
 L9550: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1439;
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1513;
  goto ret0;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1514;
    }
  goto ret0;

 L1514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3014 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 165;  /* *norsi3 */
    }
  goto ret0;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2000;
    }
  goto ret0;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2001;
    }
  goto ret0;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2002;
    }
  goto ret0;

 L2002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32)))
    {
      return 248;  /* *cinssi */
    }
  goto ret0;

 L1439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (and_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1440;
    }
  goto ret0;

 L1440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2884 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2])))
    {
      return 153;  /* *andsi3 */
    }
 L1452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2920 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (SImode, operands[1], operands[2])))
    {
      return 155;  /* *andsi3_mips16 */
    }
  goto ret0;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1463;
    }
  goto ret0;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1464;
    }
 L1475: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1476;
    }
  goto ret0;

 L1464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 157;  /* *iorsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1475;

 L1476: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2969 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 159;  /* *iorsi3_mips16 */
    }
  goto ret0;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1487;
    }
  goto ret0;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1488;
    }
  goto ret0;

 L1488: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2985 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 161;  /* *mips.md:2981 */
    }
 L1500: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2996 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 163;  /* *mips.md:2992 */
    }
  goto ret0;

 L1637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L9559;
    case HImode:
      goto L9560;
    default:
      break;
    }
  goto ret0;

 L9559: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1708;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1638;
    }
 L9555: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1658;
    }
 L9557: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1678;
    }
  goto ret0;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1709;
    }
  goto ret0;

 L1709: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3229 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 199;  /* *zero_extendsi_truncqi */
    }
  goto ret0;

 L1638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3168 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 185;  /* *zero_extendqisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9555;

 L1658: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3178 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 189;  /* *zero_extendqisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9557;

 L1678: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 193;  /* *zero_extendqisi2_mips16 */
    }
  goto ret0;

 L9560: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1720;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1648;
    }
 L9556: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1668;
    }
 L9558: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1688;
    }
  goto ret0;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1721;
    }
  goto ret0;

 L1721: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3229 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 201;  /* *zero_extendsi_trunchi */
    }
  goto ret0;

 L1648: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3168 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 187;  /* *zero_extendhisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9556;

 L1668: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3178 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 191;  /* *zero_extendhisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9558;

 L1688: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 195;  /* *zero_extendhisi2_mips16 */
    }
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L9563;
    case HImode:
      goto L9564;
    default:
      break;
    }
  goto ret0;

 L9563: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1830;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1743;
    }
  goto ret0;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1831;
    }
  goto ret0;

 L1831: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3404 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS))
    {
      return 222;  /* *extendsi_truncateqi */
    }
 L1849: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS))
    {
      return 225;  /* *extendsi_truncateqi_exts */
    }
  goto ret0;

 L1743: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3294 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 205;  /* *extendqisi2_mips16e */
    }
 L1763: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 209;  /* *extendqisi2 */
    }
 L1783: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3324 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 213;  /* *extendqisi2_seb */
    }
  goto ret0;

 L9564: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1836;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1753;
    }
  goto ret0;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1837;
    }
  goto ret0;

 L1837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3404 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS))
    {
      return 223;  /* *extendsi_truncatehi */
    }
 L1861: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS))
    {
      return 227;  /* *extendsi_truncatehi_exts */
    }
  goto ret0;

 L1753: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3294 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 207;  /* *extendhisi2_mips16e */
    }
 L1773: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 211;  /* *extendhisi2 */
    }
 L1793: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3324 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 215;  /* *extendhisi2_seh */
    }
  goto ret0;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L9565;
    case SFmode:
      goto L9566;
    default:
      break;
    }
  goto ret0;

 L9565: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1883;
    }
  goto ret0;

 L1883: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3491 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 231;  /* fix_truncdfsi2_insn */
    }
 L1896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3501 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L9566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1901;
    }
  goto ret0;

 L1901: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3528 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 233;  /* fix_truncsfsi2_insn */
    }
 L1914: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3538 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 234;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1949;
    }
  goto ret0;

 L1949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1950;
    }
  goto ret0;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1951;
    }
  goto ret0;

 L1951: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3826 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32))
    {
      return 241;  /* *extvsi */
    }
  goto ret0;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1963;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1964;
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1965;
    }
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3864 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))))
    {
      return 243;  /* *extzvsi */
    }
  goto ret0;

 L9523: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9567;
    case 3:
      goto L9568;
    default:
      break;
    }
  goto ret0;

 L9567: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L2014;
    case 26L:
      goto L2130;
    default:
      break;
    }
  goto ret0;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L2015;
    }
  goto ret0;

 L2015: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2016;
    }
  goto ret0;

 L2016: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3959 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 250;  /* mov_lwl */
    }
  goto ret0;

 L2130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2131;
    }
  goto ret0;

 L2131: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2132;
    }
  goto ret0;

 L2132: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 270;  /* load_gotsi */
    }
  goto ret0;

 L9568: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 1)
    goto L2026;
  goto ret0;

 L2026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L2027;
    }
  goto ret0;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2028;
    }
  goto ret0;

 L2028: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2029;
    }
  goto ret0;

 L2029: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3970 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 252;  /* mov_lwr */
    }
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9570;
  goto ret0;

 L9570: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2091;
    }
 L9571: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2121;
    }
  goto ret0;

 L2091: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4109 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 262;  /* *xgot_hisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9571;

 L2121: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4152 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 268;  /* *got_pagesi */
    }
  goto ret0;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2101;
    }
  goto ret0;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2102;
    }
 L2143: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2144;
    }
  goto ret0;

 L2102: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 264;  /* *xgot_losi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2143;

 L2144: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 272;  /* *lowsi */
    }
 L2156: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4196 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 274;  /* *lowsi_mips16 */
    }
  goto ret0;

 L2112: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4139 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 266;  /* *got_dispsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L2344;
    case UNSPEC:
      goto L9613;
    case ASHIFT:
      goto L2916;
    case ASHIFTRT:
      goto L2922;
    case LSHIFTRT:
      goto L2928;
    case ROTATERT:
      goto L3015;
    case BSWAP:
      goto L3032;
    case EQ:
      goto L3290;
    case NE:
      goto L3354;
    case GT:
      goto L3398;
    case GTU:
      goto L3404;
    case GE:
      goto L3494;
    case GEU:
      goto L3499;
    case LT:
      goto L3534;
    case LTU:
      goto L3540;
    case LE:
      goto L3630;
    case LEU:
      goto L3636;
    case UNSPEC_VOLATILE:
      goto L9619;
    case IF_THEN_ELSE:
      goto L4324;
    default:
     break;
   }
  goto ret0;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9624;
    case DImode:
      goto L9625;
    default:
      break;
    }
  goto ret0;

 L9624: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2345;
  goto ret0;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2346;
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2347;
    }
  goto ret0;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2348;
  goto ret0;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2349;
    }
  goto ret0;

 L2349: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 312;  /* *lwxs */
    }
  goto ret0;

 L9625: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2354;
  goto ret0;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2355;
  goto ret0;

 L2355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2356;
    }
  goto ret0;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2357;
  goto ret0;

 L2357: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2358;
    }
  goto ret0;

 L2358: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 313;  /* *lwxs */
    }
  goto ret0;

 L9613: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9626;
    case 2:
      goto L9628;
    case 3:
      goto L9632;
    default:
      break;
    }
  goto ret0;

 L9626: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 12L:
      goto L2566;
    case 10L:
      goto L2760;
    case 15L:
      goto L2807;
    case 16L:
      goto L2831;
    case 4L:
      goto L3042;
    case 28L:
      goto L4493;
    default:
      break;
    }
  goto ret0;

 L2566: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L9634;
    case TImode:
      goto L9635;
    default:
      break;
    }
  goto ret0;

 L9634: ATTRIBUTE_UNUSED_LABEL
  if (hilo_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2567;
    }
  goto ret0;

 L2567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 345;  /* mfhisi_di */
    }
  goto ret0;

 L9635: ATTRIBUTE_UNUSED_LABEL
  if (hilo_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L2572;
    }
  goto ret0;

 L2572: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 346;  /* mfhisi_ti */
    }
  goto ret0;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L9636;
    case DImode:
      goto L9637;
    case V2SFmode:
      goto L9638;
    case V2SImode:
      goto L9639;
    case V4HImode:
      goto L9640;
    case V8QImode:
      goto L9641;
    default:
      break;
    }
  goto ret0;

 L9636: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2761;
    }
  goto ret0;

 L2761: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 379;  /* mfhc1df */
    }
  goto ret0;

 L9637: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2766;
    }
  goto ret0;

 L2766: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 776 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 380;  /* mfhc1di */
    }
  goto ret0;

 L9638: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2771;
    }
  goto ret0;

 L2771: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 777 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 381;  /* mfhc1v2sf */
    }
  goto ret0;

 L9639: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2776;
    }
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 778 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 382;  /* mfhc1v2si */
    }
  goto ret0;

 L9640: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2781;
    }
  goto ret0;

 L2781: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 779 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 383;  /* mfhc1v4hi */
    }
  goto ret0;

 L9641: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2786;
    }
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 780 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 384;  /* mfhc1v8qi */
    }
  goto ret0;

 L2807: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2808;

 L2808: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4993 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 388;  /* loadgp_absolute_si */
    }
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2832;
    }
  goto ret0;

 L2832: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5040 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 393;  /* copygp_mips16_si */
    }
  goto ret0;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3043;
    }
  goto ret0;

 L3043: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5420 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_WSBH))
    {
      return 430;  /* wsbh */
    }
  goto ret0;

 L4493: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (call_insn_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4494;
    }
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6896 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 622;  /* tls_get_tp_si */
    }
  goto ret0;

 L4494: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6938 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 626;  /* tls_get_tp_mips16_si */
    }
  goto ret0;

 L9628: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 15)
    goto L2795;
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2796;
 L2819: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2820;
    }
  goto ret0;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2797;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2819;

 L2797: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4976 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 386;  /* loadgp_newabi_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2819;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2821;
    }
  goto ret0;

 L2821: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5019 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 391;  /* loadgp_rtp_si */
    }
  goto ret0;

 L9632: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 25)
    goto L4072;
  goto ret0;

 L4072: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4073;
    }
  goto ret0;

 L4073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4074;
    }
  goto ret0;

 L4074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 6372 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 583;  /* load_callsi */
    }
  goto ret0;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2917;
    }
  goto ret0;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2918;
    }
  goto ret0;

 L2918: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 409;  /* *ashlsi3 */
    }
 L2975: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5261 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 418;  /* *ashlsi3_mips16 */
    }
  goto ret0;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2923;
    }
  goto ret0;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2924;
    }
  goto ret0;

 L2924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 410;  /* *ashrsi3 */
    }
 L2981: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5261 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 419;  /* *ashrsi3_mips16 */
    }
  goto ret0;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9642;
  goto ret0;

 L9642: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2929;
    }
 L9643: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3010;
    }
  goto ret0;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2930;
    }
  x2 = XEXP (x1, 0);
  goto L9643;

 L2930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 411;  /* *lshrsi3 */
    }
 L2987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5261 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 420;  /* *lshrsi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9643;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3011;
    }
  goto ret0;

 L3011: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5363 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 424;  /* *mips.md:5359 */
    }
  goto ret0;

 L3015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3016;
    }
  goto ret0;

 L3016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3017;
    }
  goto ret0;

 L3017: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_ROR))
    {
      return 425;  /* rotrsi3 */
    }
  goto ret0;

 L3032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3033;
    }
  goto ret0;

 L3033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5398 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_WSBH && ISA_HAS_ROR))
    {
      return 428;  /* bswapsi2 */
    }
  goto ret0;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9644;
    case DImode:
      goto L9645;
    default:
      break;
    }
  goto ret0;

 L9644: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3291;
    }
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L9646;
 L3331: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3332;
    }
  goto ret0;

 L9646: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L9648;
  goto L3331;

 L9648: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5668 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 455;  /* *seq_zero_sisi */
    }
 L9649: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 459;  /* *seq_zero_sisi_mips16 */
    }
  goto L3331;

 L3332: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE))
    {
      return 463;  /* *seq_sisi_seq */
    }
  goto ret0;

 L9645: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3296;
    }
  goto ret0;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L9650;
 L3337: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3338;
    }
  goto ret0;

 L9650: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L9652;
  goto L3337;

 L9652: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5668 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 456;  /* *seq_zero_disi */
    }
 L9653: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 460;  /* *seq_zero_disi_mips16 */
    }
  goto L3337;

 L3338: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 464;  /* *seq_disi_seq */
    }
  goto ret0;

 L3354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9654;
    case DImode:
      goto L9655;
    default:
      break;
    }
  goto ret0;

 L9654: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3355;
    }
  goto ret0;

 L3355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5699 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 467;  /* *sne_zero_sisi */
    }
 L3375: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3376;
    }
  goto ret0;

 L3376: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5709 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE))
    {
      return 471;  /* *sne_sisi_sne */
    }
  goto ret0;

 L9655: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3360;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5699 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 468;  /* *sne_zero_disi */
    }
 L3381: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3382;
    }
  goto ret0;

 L3382: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5709 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 472;  /* *sne_disi_sne */
    }
  goto ret0;

 L3398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9656;
    case DImode:
      goto L9657;
    default:
      break;
    }
  goto ret0;

 L9656: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3399;
    }
  goto ret0;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3400;
    }
 L3447: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3448;
    }
  goto ret0;

 L3400: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 475;  /* *sgt_sisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3447;

 L3448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 483;  /* *sgt_sisi_mips16 */
    }
  goto ret0;

 L9657: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3411;
    }
  goto ret0;

 L3411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3412;
    }
 L3459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3460;
    }
  goto ret0;

 L3412: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 477;  /* *sgt_disi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3459;

 L3460: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 485;  /* *sgt_disi_mips16 */
    }
  goto ret0;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9658;
    case DImode:
      goto L9659;
    default:
      break;
    }
  goto ret0;

 L9658: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3405;
    }
  goto ret0;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3406;
    }
 L3453: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3454;
    }
  goto ret0;

 L3406: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 476;  /* *sgtu_sisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3453;

 L3454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 484;  /* *sgtu_sisi_mips16 */
    }
  goto ret0;

 L9659: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3417;
    }
  goto ret0;

 L3417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3418;
    }
 L3465: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3466;
    }
  goto ret0;

 L3418: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 478;  /* *sgtu_disi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3465;

 L3466: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 486;  /* *sgtu_disi_mips16 */
    }
  goto ret0;

 L3494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9660;
    case DImode:
      goto L9661;
    default:
      break;
    }
  goto ret0;

 L9660: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3495;
    }
  goto ret0;

 L3495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 491;  /* *sge_sisi */
    }
  goto ret0;

 L9661: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3505;
    }
  goto ret0;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 493;  /* *sge_disi */
    }
  goto ret0;

 L3499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9662;
    case DImode:
      goto L9663;
    default:
      break;
    }
  goto ret0;

 L9662: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3500;
    }
  goto ret0;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 492;  /* *sgeu_sisi */
    }
  goto ret0;

 L9663: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3510;
    }
  goto ret0;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 494;  /* *sgeu_disi */
    }
  goto ret0;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9664;
    case DImode:
      goto L9665;
    default:
      break;
    }
  goto ret0;

 L9664: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3535;
    }
  goto ret0;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3536;
    }
  goto ret0;

 L3536: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 499;  /* *slt_sisi */
    }
 L3584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 507;  /* *slt_sisi_mips16 */
    }
  goto ret0;

 L9665: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3547;
    }
  goto ret0;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3548;
    }
  goto ret0;

 L3548: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 501;  /* *slt_disi */
    }
 L3596: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 509;  /* *slt_disi_mips16 */
    }
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9666;
    case DImode:
      goto L9667;
    default:
      break;
    }
  goto ret0;

 L9666: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3541;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3542;
    }
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 500;  /* *sltu_sisi */
    }
 L3590: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 508;  /* *sltu_sisi_mips16 */
    }
  goto ret0;

 L9667: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3553;
    }
  goto ret0;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3554;
    }
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 502;  /* *sltu_disi */
    }
 L3602: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 510;  /* *sltu_disi_mips16 */
    }
  goto ret0;

 L3630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9668;
    case DImode:
      goto L9669;
    default:
      break;
    }
  goto ret0;

 L9668: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3631;
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3632;
    }
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 515;  /* *sle_sisi */
    }
 L3680: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 523;  /* *sle_sisi_mips16 */
    }
  goto ret0;

 L9669: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3643;
    }
  goto ret0;

 L3643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3644;
    }
  goto ret0;

 L3644: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 517;  /* *sle_disi */
    }
 L3692: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 525;  /* *sle_disi_mips16 */
    }
  goto ret0;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9670;
    case DImode:
      goto L9671;
    default:
      break;
    }
  goto ret0;

 L9670: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3637;
    }
  goto ret0;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3638;
    }
  goto ret0;

 L3638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 516;  /* *sleu_sisi */
    }
 L3686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 524;  /* *sleu_sisi_mips16 */
    }
  goto ret0;

 L9671: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3649;
    }
  goto ret0;

 L3649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3650;
    }
  goto ret0;

 L3650: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 518;  /* *sleu_disi */
    }
 L3698: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 526;  /* *sleu_disi_mips16 */
    }
  goto ret0;

 L9619: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9672;
    case 1:
      goto L9673;
    default:
      break;
    }
  goto ret0;

 L9672: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 48)
    goto L3979;
  goto ret0;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3980;
    }
  goto ret0;

 L3980: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3981;
    }
  goto ret0;

 L3981: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 565;  /* probe_stack_range_si */
    }
  goto ret0;

 L9673: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 44L:
      goto L4013;
    case 45L:
      goto L4017;
    default:
      break;
    }
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 575;  /* mips_rdpgpr */
    }
  goto ret0;

 L4017: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 576;  /* cop0_move */
    }
  goto ret0;

 L4324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9675;
    case DImode:
      goto L9676;
    case CCmode:
      goto L9677;
    default:
      break;
    }
  goto ret0;

 L9675: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4325;
    }
  goto ret0;

 L4325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4326;
    }
  goto ret0;

 L4326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4327;
  goto ret0;

 L4327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4328;
    }
  goto ret0;

 L4328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4329;
    }
  goto ret0;

 L4329: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE))
    {
      return 605;  /* *movsi_on_si */
    }
  goto ret0;

 L9676: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4343;
    }
  goto ret0;

 L4343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4344;
    }
  goto ret0;

 L4344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4345;
  goto ret0;

 L4345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4346;
    }
  goto ret0;

 L4346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4347;
    }
  goto ret0;

 L4347: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 607;  /* *movsi_on_di */
    }
  goto ret0;

 L9677: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4361;
    }
  goto ret0;

 L4361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4362;
    }
  goto ret0;

 L4362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4363;
  goto ret0;

 L4363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4364;
    }
  goto ret0;

 L4364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4365;
    }
  goto ret0;

 L4365: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)))
    {
      return 609;  /* *movsi_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1983;
    case REG:
      goto L9484;
    case MEM:
      goto L9482;
    default:
     break;
   }
 L9271: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L41;
    }
 L9273: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L219;
    }
 L9275: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L240;
    }
 L9281: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1540;
    }
 L9304: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2343;
    }
 L9324: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG)
    goto L9486;
  goto ret0;

 L1983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1984;
    }
  goto ret0;

 L1984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1985;
    }
  goto ret0;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1986;
    }
  goto ret0;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, SImode))
    {
      operands[3] = x1;
      goto L1987;
    }
  goto ret0;

 L1987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3914 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))))
    {
      return 246;  /* *insvsi */
    }
  goto ret0;

 L9484: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 0))
    {
    case 28L:
      goto L4046;
    case 79L:
      goto L4083;
    default:
      break;
    }
 L9481: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2079;
    }
  goto L9271;

 L4046: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 20)
    goto L4047;
  x1 = XEXP (x0, 0);
  goto L9481;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 579;  /* restore_gp_si */
    }
  x1 = XEXP (x0, 0);
  goto L9481;

 L4083: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9488;
  x1 = XEXP (x0, 0);
  goto L9481;

 L9488: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC_VOLATILE:
      goto L9490;
    case UNSPEC:
      goto L9491;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9481;

 L9490: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 23)
    goto L4084;
  x1 = XEXP (x0, 0);
  goto L9481;

 L4084: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6380 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 585;  /* set_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L9481;

 L9491: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 24)
    goto L4088;
  x1 = XEXP (x0, 0);
  goto L9481;

 L4088: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && 
#line 6387 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 586;  /* update_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L9481;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 29)
    goto L2080;
  x1 = XEXP (x0, 0);
  goto L9271;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (symbolic_operand_with_high (x2, SImode))
    {
      operands[1] = x2;
      goto L2081;
    }
  x1 = XEXP (x0, 0);
  goto L9271;

 L2081: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 260;  /* *unshifted_high */
    }
  x1 = XEXP (x0, 0);
  goto L9271;

 L9482: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2165;
    }
 L9483: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2858;
    }
  goto L9281;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && 
#line 4258 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 276;  /* *movsi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L9483;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 19)
    goto L2859;
  x1 = XEXP (x0, 0);
  goto L9281;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2860;
    }
  x1 = XEXP (x0, 0);
  goto L9281;

 L2860: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (
#line 5080 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 397;  /* cprestore_si */
    }
  x1 = XEXP (x0, 0);
  goto L9281;

 L41: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9492;
  x1 = XEXP (x0, 0);
  goto L9273;

 L9492: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L42;
    case ZERO_EXTEND:
      goto L80;
    case MINUS:
      goto L130;
    case MULT:
      goto L178;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9273;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L43;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L43: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L44;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L44: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 11;  /* *addsi3 */
    }
 L56: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1136 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 13;  /* *addsi3_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L9496;
  x1 = XEXP (x0, 0);
  goto L9273;

 L9496: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SUBREG:
      goto L9499;
    case TRUNCATE:
      goto L97;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9273;

 L9499: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 3L:
      goto L81;
    case 0L:
      goto L89;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L81: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L82;
  x1 = XEXP (x0, 0);
  goto L9273;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L83;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L84;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L84: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1308 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN))
    {
      return 17;  /* *baddu_si_eb */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L89: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L90;
  x1 = XEXP (x0, 0);
  goto L9273;

 L90: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L91: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L92;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L92: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1318 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN))
    {
      return 18;  /* *baddu_si_el */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L98;
  x1 = XEXP (x0, 0);
  goto L9273;

 L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L99;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L100;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1328 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT))
    {
      return 19;  /* *baddu_disi */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L131;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 24;  /* subsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L179;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L180;
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1492 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A))
    {
      return 32;  /* mulsi3_mul3_loongson */
    }
 L201: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1507 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 34;  /* mulsi3_mul3 */
    }
  x1 = XEXP (x0, 0);
  goto L9273;

 L219: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MULT)
    goto L220;
  x1 = XEXP (x0, 0);
  goto L9275;

 L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L221;
    }
  x1 = XEXP (x0, 0);
  goto L9275;

 L221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L222;
    }
  x1 = XEXP (x0, 0);
  goto L9275;

 L222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1545 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000))
    {
      return 36;  /* mulsi3_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9275;

 L240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9501;
  x1 = XEXP (x0, 0);
  goto L9281;

 L9501: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9281;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9572;
 L2187: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2188;
    }
  x1 = XEXP (x0, 0);
  goto L9304;

 L9572: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1541;
    case UNSPEC:
      goto L9575;
    default:
     break;
   }
  goto L2187;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1542;
    }
  goto L2187;

 L1542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3053 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 170;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9575: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9577;
    case 1:
      goto L9578;
    default:
      break;
    }
  goto L2187;

 L9577: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 9)
    goto L2676;
  goto L2187;

 L2676: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L9579;
    case DImode:
      goto L9580;
    case V2SFmode:
      goto L9581;
    case V2SImode:
      goto L9582;
    case V4HImode:
      goto L9583;
    case V8QImode:
      goto L9584;
    default:
      break;
    }
  goto L2187;

 L9579: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2677;
    }
  goto L2187;

 L2677: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2678;
    }
  goto L2187;

 L2678: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 365;  /* store_worddf */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9580: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2683;
    }
  goto L2187;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2684;
    }
  goto L2187;

 L2684: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 776 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 366;  /* store_worddi */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2689;
    }
  goto L2187;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2690;
    }
  goto L2187;

 L2690: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 777 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 367;  /* store_wordv2sf */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9582: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2695;
    }
  goto L2187;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2696;
    }
  goto L2187;

 L2696: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 778 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 368;  /* store_wordv2si */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9583: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2701;
    }
  goto L2187;

 L2701: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2702;
    }
  goto L2187;

 L2702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 779 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 369;  /* store_wordv4hi */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9584: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2707;
    }
  goto L2187;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2708;
    }
  goto L2187;

 L2708: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 780 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 370;  /* store_wordv8qi */
    }
  x1 = XEXP (x0, 1);
  goto L2187;

 L9578: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 17)
    goto L4063;
  goto L2187;

 L4063: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (move_operand (x2, SImode))
    {
      operands[1] = x2;
      return 581;  /* move_gpsi */
    }
  goto L2187;

 L2188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))))
    {
      return 282;  /* *movsi_internal */
    }
 L2224: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 291;  /* *movsi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9304;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9585;
 L2881: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 35)
    goto L2882;
  x1 = XEXP (x0, 0);
  goto L9324;

 L9585: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2881;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5135 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 403;  /* rdhwr_synci_step_si */
    }
  x1 = XEXP (x0, 0);
  goto L9324;

 L9486: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 0))
    {
    case 76L:
      goto L2868;
    case 3L:
      goto L4473;
    default:
      break;
    }
  goto ret0;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (cprestore_load_slot_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2869;
    }
  goto ret0;

 L2869: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 399;  /* use_cprestore_si */
    }
  goto ret0;

 L4473: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 28)
    goto L4523;
  goto ret0;

 L4523: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (call_insn_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4524;
    }
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6913 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 624;  /* *tls_get_tp_si_split */
    }
  goto ret0;

 L4524: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6957 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 628;  /* *tls_get_tp_mips16_call_si */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L256;
    case TRUNCATE:
      goto L764;
    case CLZ:
      goto L1384;
    case POPCOUNT:
      goto L1394;
    case NEG:
      goto L1409;
    case NOT:
      goto L1433;
    case AND:
      goto L1444;
    case IOR:
      goto L1468;
    case XOR:
      goto L1492;
    case ZERO_EXTEND:
      goto L1627;
    case SIGN_EXTEND:
      goto L1737;
    case FIX:
      goto L1918;
    case SIGN_EXTRACT:
      goto L1955;
    case ZERO_EXTRACT:
      goto L1969;
    case UNSPEC:
      goto L9757;
    case HIGH:
      goto L2064;
    case LO_SUM:
      goto L2106;
    case ASHIFT:
      goto L2934;
    case ASHIFTRT:
      goto L2940;
    case LSHIFTRT:
      goto L2946;
    case ROTATERT:
      goto L3021;
    case BSWAP:
      goto L3037;
    case EQ:
      goto L3300;
    case NE:
      goto L3364;
    case GT:
      goto L3422;
    case GTU:
      goto L3428;
    case GE:
      goto L3514;
    case GEU:
      goto L3519;
    case LT:
      goto L3558;
    case LTU:
      goto L3564;
    case LE:
      goto L3654;
    case LEU:
      goto L3660;
    case UNSPEC_VOLATILE:
      goto L9771;
    case IF_THEN_ELSE:
      goto L4333;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9723;
    default:
      goto L9725;
   }
 L9723: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2076;
    }
 L9725: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2116;
    }
  goto ret0;

 L256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9775;
  goto ret0;

 L9775: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L459;
    case ZERO_EXTEND:
      goto L478;
    case REG:
    case SUBREG:
      goto L9774;
    default:
      goto ret0;
   }
 L9774: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L257;
    }
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L460;
    }
  goto ret0;

 L460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L461;
  goto ret0;

 L461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L462;
    }
  goto ret0;

 L462: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 51;  /* mulsidi3_32bit_r4000 */
    }
 L502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1944 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 53;  /* mulsidi3_64bit */
    }
 L560: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_DMUL3)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 57;  /* mulsidi3_64bit_dmul */
    }
  goto ret0;

 L478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L479;
    }
  goto ret0;

 L479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L480;
  goto ret0;

 L480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L481;
    }
  goto ret0;

 L481: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 52;  /* umulsidi3_32bit_r4000 */
    }
 L523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1944 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 54;  /* umulsidi3_64bit */
    }
  goto ret0;

 L257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L258;
    }
  goto ret0;

 L258: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1555 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 39;  /* muldi3_r4000 */
    }
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L765;
  goto ret0;

 L765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L766;
  goto ret0;

 L766: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L9777;
  goto ret0;

 L9777: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L767;
    case ZERO_EXTEND:
      goto L791;
    default:
     break;
   }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L768;
    }
  goto ret0;

 L768: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L769;
  goto ret0;

 L769: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L770;
    }
  goto ret0;

 L770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 2195 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 68;  /* smuldi3_highpart_internal */
    }
  goto ret0;

 L791: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L792;
    }
  goto ret0;

 L792: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L793;
  goto ret0;

 L793: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L794;
    }
  goto ret0;

 L794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 2195 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 69;  /* umuldi3_highpart_internal */
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1385;
    }
  goto ret0;

 L1385: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2759 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 142;  /* clzdi2 */
    }
  goto ret0;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1395;
    }
  goto ret0;

 L1395: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2775 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 144;  /* popcountdi2 */
    }
  goto ret0;

 L1409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1410;
    }
  goto ret0;

 L1410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2813 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 147;  /* negdi2 */
    }
  goto ret0;

 L1433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1434;
    }
  goto ret0;

 L1434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 152;  /* one_cmpldi2 */
    }
  goto ret0;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9780;
  goto ret0;

 L9780: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L1519;
    case ASHIFT:
      goto L2007;
    case REG:
    case SUBREG:
    case MEM:
      goto L9779;
    default:
      goto ret0;
   }
 L9779: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1445;
    }
  goto ret0;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1520;
    }
  goto ret0;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1521;
  goto ret0;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1522;
    }
  goto ret0;

 L1522: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3014 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 166;  /* *nordi3 */
    }
  goto ret0;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2008;
    }
  goto ret0;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2009;
    }
  goto ret0;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2010;
    }
  goto ret0;

 L2010: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 249;  /* *cinsdi */
    }
  goto ret0;

 L1445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (and_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1446;
    }
  goto ret0;

 L1446: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2884 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 154;  /* *anddi3 */
    }
 L1458: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2920 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && and_operands_ok (DImode, operands[1], operands[2])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 156;  /* *anddi3_mips16 */
    }
  goto ret0;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1469;
    }
  goto ret0;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1470;
    }
 L1481: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1482;
    }
  goto ret0;

 L1470: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 158;  /* *iordi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1481;

 L1482: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2969 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 160;  /* *iordi3_mips16 */
    }
  goto ret0;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1493;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1494;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2985 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 162;  /* *mips.md:2981 */
    }
 L1506: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2996 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 164;  /* *mips.md:2992 */
    }
  goto ret0;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9782;
    case QImode:
      goto L9789;
    case HImode:
      goto L9790;
    default:
      break;
    }
  goto ret0;

 L9782: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1628;
    }
  goto ret0;

 L1628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3112 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS))
    {
      return 183;  /* *zero_extendsidi2 */
    }
 L1633: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3128 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_EXT_INS))
    {
      return 184;  /* *zero_extendsidi2_dext */
    }
  goto ret0;

 L9789: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1714;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1643;
    }
 L9785: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1663;
    }
 L9787: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1683;
    }
  goto ret0;

 L1714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1715;
    }
  goto ret0;

 L1715: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3229 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 200;  /* *zero_extenddi_truncqi */
    }
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3168 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 186;  /* *zero_extendqidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9785;

 L1663: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3178 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 190;  /* *zero_extendqidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9787;

 L1683: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 194;  /* *zero_extendqidi2_mips16 */
    }
  goto ret0;

 L9790: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1726;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1653;
    }
 L9786: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1673;
    }
 L9788: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1693;
    }
  goto ret0;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1727;
    }
  goto ret0;

 L1727: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3229 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 202;  /* *zero_extenddi_trunchi */
    }
  goto ret0;

 L1653: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3168 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 188;  /* *zero_extendhidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9786;

 L1673: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3178 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 192;  /* *zero_extendhidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9788;

 L1693: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 196;  /* *zero_extendhidi2_mips16 */
    }
  goto ret0;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9796;
    case QImode:
      goto L9794;
    case HImode:
      goto L9795;
    default:
      break;
    }
  goto ret0;

 L9796: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L2953;
    case ASHIFTRT:
      goto L2960;
    case LSHIFTRT:
      goto L2967;
    case REG:
    case SUBREG:
    case MEM:
      goto L9791;
    default:
      goto ret0;
   }
 L9791: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1738;
    }
  goto ret0;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2954;
    }
  goto ret0;

 L2954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2955;
    }
  goto ret0;

 L2955: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5247 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 415;  /* *ashlsi3_extend */
    }
  goto ret0;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2961;
    }
  goto ret0;

 L2961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2962;
    }
  goto ret0;

 L2962: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5247 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 416;  /* *ashrsi3_extend */
    }
  goto ret0;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2968;
    }
  goto ret0;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2969;
    }
  goto ret0;

 L2969: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5247 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 417;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1738: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 204;  /* extendsidi2 */
    }
  goto ret0;

 L9794: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1818;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1748;
    }
  goto ret0;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1819;
    }
  goto ret0;

 L1819: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3384 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS))
    {
      return 220;  /* *extenddi_truncateqi */
    }
 L1855: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 226;  /* *extenddi_truncateqi_exts */
    }
  goto ret0;

 L1748: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3294 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 206;  /* *extendqidi2_mips16e */
    }
 L1768: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 210;  /* *extendqidi2 */
    }
 L1788: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3324 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 214;  /* *extendqidi2_seb */
    }
  goto ret0;

 L9795: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1824;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1758;
    }
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1825;
    }
  goto ret0;

 L1825: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3384 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS))
    {
      return 221;  /* *extenddi_truncatehi */
    }
 L1867: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 228;  /* *extenddi_truncatehi_exts */
    }
  goto ret0;

 L1758: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3294 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 208;  /* *extendhidi2_mips16e */
    }
 L1778: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 212;  /* *extendhidi2 */
    }
 L1798: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3324 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 216;  /* *extendhidi2_seh */
    }
  goto ret0;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L9799;
    case SFmode:
      goto L9800;
    default:
      break;
    }
  goto ret0;

 L9799: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1919;
    }
  goto ret0;

 L1919: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 235;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L9800: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1924;
    }
  goto ret0;

 L1924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3564 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 236;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1956;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1957;
    }
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1958;
    }
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3826 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 242;  /* *extvdi */
    }
  goto ret0;

 L1969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1970;
    }
  goto ret0;

 L1970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1971;
    }
  goto ret0;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1972;
    }
  goto ret0;

 L1972: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3864 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 244;  /* *extzvdi */
    }
  goto ret0;

 L9757: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9801;
    case 3:
      goto L9802;
    case 1:
      goto L9804;
    default:
      break;
    }
  goto ret0;

 L9801: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0L:
      goto L2020;
    case 26L:
      goto L2136;
    case 13L:
      goto L2581;
    case 8L:
      goto L2640;
    case 11L:
      goto L2724;
    case 15L:
      goto L2801;
    default:
      break;
    }
  goto ret0;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L2021;
    }
  goto ret0;

 L2021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2022;
    }
  goto ret0;

 L2022: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3959 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 251;  /* mov_ldl */
    }
  goto ret0;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2137;
    }
  goto ret0;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2138;
    }
  goto ret0;

 L2138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 271;  /* load_gotdi */
    }
  goto ret0;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2582;
    }
  goto ret0;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2583;
    }
  goto ret0;

 L2583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 348;  /* mthisi_di */
    }
  goto ret0;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2641;
    }
  goto ret0;

 L2641: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2642;
    }
  goto ret0;

 L2642: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 776 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 359;  /* load_highdi */
    }
  goto ret0;

 L2724: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2725;
    }
  goto ret0;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2726;
    }
  goto ret0;

 L2726: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 776 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 373;  /* mthc1di */
    }
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2802;
 L2825: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2826;
    }
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2803;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2825;

 L2803: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4976 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 387;  /* loadgp_newabi_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2825;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2827;
    }
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5019 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 392;  /* loadgp_rtp_di */
    }
  goto ret0;

 L9802: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2033;
    case 25L:
      goto L4078;
    default:
      break;
    }
  goto ret0;

 L2033: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L2034;
    }
  goto ret0;

 L2034: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2035;
    }
  goto ret0;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2036;
    }
  goto ret0;

 L2036: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3970 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 253;  /* mov_ldr */
    }
  goto ret0;

 L4078: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4079;
    }
  goto ret0;

 L4079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4080;
    }
  goto ret0;

 L4080: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 6372 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 584;  /* load_calldi */
    }
  goto ret0;

 L9804: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 12L:
      goto L2576;
    case 7L:
      goto L2604;
    case 10L:
      goto L2790;
    case 15L:
      goto L2812;
    case 16L:
      goto L2836;
    case 5L:
      goto L3047;
    case 6L:
      goto L3052;
    case 28L:
      goto L4509;
    default:
      break;
    }
  goto ret0;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (hilo_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L2577;
    }
  goto ret0;

 L2577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 347;  /* mfhidi_ti */
    }
  goto ret0;

 L2604: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2605;
    }
  goto ret0;

 L2605: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 776 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 352;  /* load_lowdi */
    }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2791;
    }
  goto ret0;

 L2791: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4958 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 385;  /* mfhc1tf */
    }
  goto ret0;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2813;

 L2813: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4993 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 389;  /* loadgp_absolute_di */
    }
  goto ret0;

 L2836: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2837;
    }
  goto ret0;

 L2837: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5040 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 394;  /* copygp_mips16_di */
    }
  goto ret0;

 L3047: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3048;
    }
  goto ret0;

 L3048: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5427 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_WSBH))
    {
      return 431;  /* dsbh */
    }
  goto ret0;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3053;
    }
  goto ret0;

 L3053: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5434 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_WSBH))
    {
      return 432;  /* dshd */
    }
  goto ret0;

 L4509: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (call_insn_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4510;
    }
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6896 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 623;  /* tls_get_tp_di */
    }
  goto ret0;

 L4510: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6938 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 627;  /* tls_get_tp_mips16_di */
    }
  goto ret0;

 L2064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9817;
  goto ret0;

 L9817: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2065;
    }
 L9818: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2096;
    }
 L9819: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2126;
    }
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4014 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      return 258;  /* *lea_high64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9818;

 L2096: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4109 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 263;  /* *xgot_hidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9819;

 L2126: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4152 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 269;  /* *got_pagedi */
    }
  goto ret0;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2107;
    }
  goto ret0;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2108;
    }
 L2149: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2150;
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 265;  /* *xgot_lodi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2149;

 L2150: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4187 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 273;  /* *lowdi */
    }
 L2162: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4196 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 275;  /* *lowdi_mips16 */
    }
  goto ret0;

 L2934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2935;
    }
  goto ret0;

 L2935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2936;
    }
  goto ret0;

 L2936: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 412;  /* *ashldi3 */
    }
 L2993: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5283 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 421;  /* *ashldi3_mips16 */
    }
  goto ret0;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2941;
    }
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2942;
    }
  goto ret0;

 L2942: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 413;  /* *ashrdi3 */
    }
 L2999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5303 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 422;  /* *ashrdi3_mips16 */
    }
  goto ret0;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2947;
    }
  goto ret0;

 L2947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2948;
    }
  goto ret0;

 L2948: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5231 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 414;  /* *lshrdi3 */
    }
 L3005: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5322 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 423;  /* *lshrdi3_mips16 */
    }
  goto ret0;

 L3021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3022;
    }
  goto ret0;

 L3022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3023;
    }
  goto ret0;

 L3023: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 426;  /* rotrdi3 */
    }
  goto ret0;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3038;
    }
  goto ret0;

 L3038: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5409 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_WSBH))
    {
      return 429;  /* bswapdi2 */
    }
  goto ret0;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9820;
    case DImode:
      goto L9821;
    default:
      break;
    }
  goto ret0;

 L9820: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3301;
    }
  goto ret0;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L9822;
 L3343: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3344;
    }
  goto ret0;

 L9822: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L9824;
  goto L3343;

 L9824: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5668 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 457;  /* *seq_zero_sidi */
    }
 L9825: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 461;  /* *seq_zero_sidi_mips16 */
    }
  goto L3343;

 L3344: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 465;  /* *seq_sidi_seq */
    }
  goto ret0;

 L9821: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3306;
    }
  goto ret0;

 L3306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L9826;
 L3349: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3350;
    }
  goto ret0;

 L9826: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L9828;
  goto L3349;

 L9828: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5668 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 458;  /* *seq_zero_didi */
    }
 L9829: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 462;  /* *seq_zero_didi_mips16 */
    }
  goto L3349;

 L3350: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 466;  /* *seq_didi_seq */
    }
  goto ret0;

 L3364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9830;
    case DImode:
      goto L9831;
    default:
      break;
    }
  goto ret0;

 L9830: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3365;
    }
  goto ret0;

 L3365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5699 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 469;  /* *sne_zero_sidi */
    }
 L3387: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3388;
    }
  goto ret0;

 L3388: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5709 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 473;  /* *sne_sidi_sne */
    }
  goto ret0;

 L9831: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3370;
    }
  goto ret0;

 L3370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5699 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 470;  /* *sne_zero_didi */
    }
 L3393: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3394;
    }
  goto ret0;

 L3394: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5709 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 474;  /* *sne_didi_sne */
    }
  goto ret0;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9832;
    case DImode:
      goto L9833;
    default:
      break;
    }
  goto ret0;

 L9832: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3423;
    }
  goto ret0;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3424;
    }
 L3471: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3472;
    }
  goto ret0;

 L3424: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 479;  /* *sgt_sidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3471;

 L3472: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 487;  /* *sgt_sidi_mips16 */
    }
  goto ret0;

 L9833: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3435;
    }
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3436;
    }
 L3483: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3484;
    }
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 481;  /* *sgt_didi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3483;

 L3484: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 489;  /* *sgt_didi_mips16 */
    }
  goto ret0;

 L3428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9834;
    case DImode:
      goto L9835;
    default:
      break;
    }
  goto ret0;

 L9834: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3429;
    }
  goto ret0;

 L3429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3430;
    }
 L3477: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3478;
    }
  goto ret0;

 L3430: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 480;  /* *sgtu_sidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3477;

 L3478: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 488;  /* *sgtu_sidi_mips16 */
    }
  goto ret0;

 L9835: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3441;
    }
  goto ret0;

 L3441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3442;
    }
 L3489: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3490;
    }
  goto ret0;

 L3442: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5721 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 482;  /* *sgtu_didi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3489;

 L3490: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5730 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 490;  /* *sgtu_didi_mips16 */
    }
  goto ret0;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9836;
    case DImode:
      goto L9837;
    default:
      break;
    }
  goto ret0;

 L9836: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3515;
    }
  goto ret0;

 L3515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 495;  /* *sge_sidi */
    }
  goto ret0;

 L9837: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3525;
    }
  goto ret0;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 497;  /* *sge_didi */
    }
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9838;
    case DImode:
      goto L9839;
    default:
      break;
    }
  goto ret0;

 L9838: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3520;
    }
  goto ret0;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 496;  /* *sgeu_sidi */
    }
  goto ret0;

 L9839: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3530;
    }
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 498;  /* *sgeu_didi */
    }
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9840;
    case DImode:
      goto L9841;
    default:
      break;
    }
  goto ret0;

 L9840: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3559;
    }
  goto ret0;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3560;
    }
  goto ret0;

 L3560: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 503;  /* *slt_sidi */
    }
 L3608: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 511;  /* *slt_sidi_mips16 */
    }
  goto ret0;

 L9841: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3571;
    }
  goto ret0;

 L3571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3572;
    }
  goto ret0;

 L3572: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 505;  /* *slt_didi */
    }
 L3620: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 513;  /* *slt_didi_mips16 */
    }
  goto ret0;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9842;
    case DImode:
      goto L9843;
    default:
      break;
    }
  goto ret0;

 L9842: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3565;
    }
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3566;
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 504;  /* *sltu_sidi */
    }
 L3614: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 512;  /* *sltu_sidi_mips16 */
    }
  goto ret0;

 L9843: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3577;
    }
  goto ret0;

 L3577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3578;
    }
  goto ret0;

 L3578: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 506;  /* *sltu_didi */
    }
 L3626: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 514;  /* *sltu_didi_mips16 */
    }
  goto ret0;

 L3654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9844;
    case DImode:
      goto L9845;
    default:
      break;
    }
  goto ret0;

 L9844: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3655;
    }
  goto ret0;

 L3655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3656;
    }
  goto ret0;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 519;  /* *sle_sidi */
    }
 L3704: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 527;  /* *sle_sidi_mips16 */
    }
  goto ret0;

 L9845: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3667;
    }
  goto ret0;

 L3667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3668;
    }
  goto ret0;

 L3668: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 521;  /* *sle_didi */
    }
 L3716: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 529;  /* *sle_didi_mips16 */
    }
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9846;
    case DImode:
      goto L9847;
    default:
      break;
    }
  goto ret0;

 L9846: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3661;
    }
  goto ret0;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3662;
    }
  goto ret0;

 L3662: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 520;  /* *sleu_sidi */
    }
 L3710: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 528;  /* *sleu_sidi_mips16 */
    }
  goto ret0;

 L9847: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3673;
    }
  goto ret0;

 L3673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3674;
    }
  goto ret0;

 L3674: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 522;  /* *sleu_didi */
    }
 L3722: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 718 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 530;  /* *sleu_didi_mips16 */
    }
  goto ret0;

 L9771: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 48)
    goto L3985;
  goto ret0;

 L3985: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3986;
    }
  goto ret0;

 L3986: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3987;
    }
  goto ret0;

 L3987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 566;  /* probe_stack_range_di */
    }
  goto ret0;

 L4333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9848;
    case DImode:
      goto L9849;
    case CCmode:
      goto L9850;
    default:
      break;
    }
  goto ret0;

 L9848: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4334;
    }
  goto ret0;

 L4334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4335;
    }
  goto ret0;

 L4335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4336;
  goto ret0;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4337;
    }
  goto ret0;

 L4337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4338;
    }
  goto ret0;

 L4338: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 606;  /* *movdi_on_si */
    }
  goto ret0;

 L9849: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4352;
    }
  goto ret0;

 L4352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4353;
    }
  goto ret0;

 L4353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4354;
  goto ret0;

 L4354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4355;
    }
  goto ret0;

 L4355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4356;
    }
  goto ret0;

 L4356: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 608;  /* *movdi_on_di */
    }
  goto ret0;

 L9850: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4370;
    }
  goto ret0;

 L4370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4371;
    }
  goto ret0;

 L4371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4372;
  goto ret0;

 L4372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4373;
    }
  goto ret0;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4374;
    }
  goto ret0;

 L4374: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6753 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && ((((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 731 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))))
    {
      return 610;  /* *movdi_on_cc */
    }
  goto ret0;

 L2076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4068 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;  /* *lea64 */
    }
  x1 = XEXP (x0, 1);
  goto L9725;

 L2116: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4139 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 267;  /* *got_dispdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1990;
    case REG:
      goto L9681;
    case MEM:
      goto L9679;
    default:
     break;
   }
 L9272: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L47;
    }
 L9274: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L225;
    }
 L9276: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L255;
    }
 L9332: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 3)
    goto L4477;
 L9291: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2711;
    }
 L9325: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 76)
    goto L2872;
  goto ret0;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1991;
    }
  goto ret0;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1992;
    }
  goto ret0;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1993;
    }
  goto ret0;

 L1993: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, DImode))
    {
      operands[3] = x1;
      goto L1994;
    }
  goto ret0;

 L1994: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3914 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 247;  /* *insvdi */
    }
  goto ret0;

 L9681: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 28)
    goto L4058;
 L9678: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2084;
    }
  goto L9272;

 L4058: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 20)
    goto L4059;
  x1 = XEXP (x0, 0);
  goto L9678;

 L4059: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 580;  /* restore_gp_di */
    }
  x1 = XEXP (x0, 0);
  goto L9678;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 29)
    goto L2085;
  x1 = XEXP (x0, 0);
  goto L9272;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (symbolic_operand_with_high (x2, DImode))
    {
      operands[1] = x2;
      goto L2086;
    }
  x1 = XEXP (x0, 0);
  goto L9272;

 L2086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 261;  /* *unshifted_high */
    }
  x1 = XEXP (x0, 0);
  goto L9272;

 L9679: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2168;
    }
 L9680: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2863;
    }
  goto L9291;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (
#line 4258 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 277;  /* *movdi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L9680;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 19)
    goto L2864;
  x1 = XEXP (x0, 0);
  goto L9291;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2865;
    }
  x1 = XEXP (x0, 0);
  goto L9291;

 L2865: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (
#line 5080 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CPRESTORE_DIRECTIVE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 398;  /* cprestore_di */
    }
  x1 = XEXP (x0, 0);
  goto L9291;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9682;
  x1 = XEXP (x0, 0);
  goto L9274;

 L9682: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L48;
    case SIGN_EXTEND:
      goto L66;
    case ZERO_EXTEND:
      goto L104;
    case MINUS:
      goto L135;
    case MULT:
      goto L184;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9274;

 L48: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L49;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L49: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L50;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L50: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 12;  /* *adddi3 */
    }
 L62: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1136 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 14;  /* *adddi3_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L66: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9687;
  x1 = XEXP (x0, 0);
  goto L9274;

 L9687: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L67;
    case MINUS:
      goto L142;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9274;

 L67: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L68;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L68: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L69;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L69: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1277 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 15;  /* *addsi3_extended */
    }
 L76: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 16;  /* *addsi3_extended_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L143;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L144;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L144: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1363 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 26;  /* *subsi3_extended */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L105;
  x1 = XEXP (x0, 0);
  goto L9274;

 L105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L106;
  x1 = XEXP (x0, 0);
  goto L9274;

 L106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L107;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L108;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L108: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1328 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 20;  /* *baddu_didi */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L136;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L137;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L137: ATTRIBUTE_UNUSED_LABEL
  if (
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 25;  /* subdi3 */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L185;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L186;
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L186: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1492 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 33;  /* muldi3_mul3_loongson */
    }
 L216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1507 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 35;  /* muldi3_mul3 */
    }
  x1 = XEXP (x0, 0);
  goto L9274;

 L225: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9689;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9689: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L226;
    case NEG:
      goto L564;
    case MINUS:
      goto L582;
    case PLUS:
      goto L859;
    case UNSPEC:
      goto L9694;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9276;

 L226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9696;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L432;
    case ZERO_EXTEND:
      goto L440;
    case REG:
    case SUBREG:
      goto L9695;
    default:
      x1 = XEXP (x0, 0);
      goto L9276;
   }
 L9695: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L227;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L433;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L434;
  x1 = XEXP (x0, 0);
  goto L9276;

 L434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L435;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L435: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP)))
    {
      return 49;  /* mulsidi3_32bit */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L441;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L442;
  x1 = XEXP (x0, 0);
  goto L9276;

 L442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L443;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP)))
    {
      return 50;  /* umulsidi3_32bit */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L228;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L228: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1545 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 37;  /* muldi3_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L565;
  x1 = XEXP (x0, 0);
  goto L9276;

 L565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9698;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9698: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L566;
    case ZERO_EXTEND:
      goto L575;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9276;

 L566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L567;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L568;
  x1 = XEXP (x0, 0);
  goto L9276;

 L568: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L569;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L569: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2034 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 58;  /* *muls_di */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L575: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L576;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L577;
  x1 = XEXP (x0, 0);
  goto L9276;

 L577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L578;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L578: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2034 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 59;  /* *mulsu_di */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (muldiv_target_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L583;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L584;
  x1 = XEXP (x0, 0);
  goto L9276;

 L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9700;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9700: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L585;
    case ZERO_EXTEND:
      goto L595;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9276;

 L585: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L586;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L587;
  x1 = XEXP (x0, 0);
  goto L9276;

 L587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L588;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2053 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP)))
    {
      return 60;  /* msubsidi4 */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L595: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L596;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L597;
  x1 = XEXP (x0, 0);
  goto L9276;

 L597: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L598;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2053 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP)))
    {
      return 61;  /* umsubsidi4 */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L860;
  x1 = XEXP (x0, 0);
  goto L9276;

 L860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9702;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9702: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L861;
    case ZERO_EXTEND:
      goto L871;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9276;

 L861: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L862;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L863;
  x1 = XEXP (x0, 0);
  goto L9276;

 L863: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L864;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (muldiv_target_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L865;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2295 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP)
   && !TARGET_64BIT))
    {
      return 75;  /* maddsidi4 */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L872;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L873;
  x1 = XEXP (x0, 0);
  goto L9276;

 L873: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L874;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (muldiv_target_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L875;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L875: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2295 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP)
   && !TARGET_64BIT))
    {
      return 76;  /* umaddsidi4 */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L9694: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 14)
    goto L1265;
  x1 = XEXP (x0, 0);
  goto L9276;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L9704;
  x1 = XEXP (x0, 0);
  goto L9276;

 L9704: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1266;
    case UDIV:
      goto L1273;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1267;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1268;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 123;  /* divmodsi4_hilo_di */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1274;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1275;
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L1275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 124;  /* udivmodsi4_hilo_di */
    }
  x1 = XEXP (x0, 0);
  goto L9276;

 L255: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9706;
 L2885: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 35)
    goto L2886;
  x1 = XEXP (x0, 0);
  goto L9332;

 L9706: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2885;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5135 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 404;  /* rdhwr_synci_step_di */
    }
  x1 = XEXP (x0, 0);
  goto L9332;

 L4477: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 28)
    goto L4537;
  x1 = XEXP (x0, 0);
  goto L9291;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (call_insn_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4538;
    }
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6913 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 625;  /* *tls_get_tp_di_split */
    }
  x1 = XEXP (x0, 0);
  goto L9291;

 L4538: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6957 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 629;  /* *tls_get_tp_mips16_call_di */
    }
  x1 = XEXP (x0, 0);
  goto L9291;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9851;
 L2171: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2172;
    }
  x1 = XEXP (x0, 0);
  goto L9325;

 L9851: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9853;
  goto L2171;

 L9853: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9855;
    case 1:
      goto L9856;
    default:
      break;
    }
  goto L2171;

 L9855: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 9)
    goto L2712;
  goto L2171;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2713;
    }
  goto L2171;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2714;
    }
  goto L2171;

 L2714: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4933 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 371;  /* store_wordtf */
    }
  x1 = XEXP (x0, 1);
  goto L2171;

 L9856: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 17)
    goto L4067;
  goto L2171;

 L4067: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (move_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4068;
    }
  goto L2171;

 L4068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 582;  /* move_gpdi */
    }
  x1 = XEXP (x0, 1);
  goto L2171;

 L2172: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4266 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 278;  /* *movdi_32bit */
    }
 L2176: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4279 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 279;  /* *movdi_32bit_mips16 */
    }
 L2180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4289 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 280;  /* *movdi_64bit */
    }
 L2184: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4299 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 281;  /* *movdi_64bit_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9325;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (cprestore_load_slot_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2873;
    }
  goto ret0;

 L2873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 400;  /* use_cprestore_di */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L3725;
    }
  goto ret0;

 L3725: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L9955;
  goto ret0;

 L9955: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L3726;
    case UNEQ:
      goto L3732;
    case UNLT:
      goto L3738;
    case UNLE:
      goto L3744;
    case EQ:
      goto L3750;
    case LT:
      goto L3756;
    case LE:
      goto L3762;
    case GE:
      goto L3810;
    case GT:
      goto L3816;
    case UNGE:
      goto L3822;
    case UNGT:
      goto L3828;
    default:
     break;
   }
  goto ret0;

 L3726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9966;
    case DFmode:
      goto L9967;
    default:
      break;
    }
  goto ret0;

 L9966: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3727;
    }
  goto ret0;

 L3727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3728;
    }
  goto ret0;

 L3728: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 531;  /* sunordered_sf */
    }
  goto ret0;

 L9967: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3769;
    }
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3770;
    }
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 538;  /* sunordered_df */
    }
  goto ret0;

 L3732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9968;
    case DFmode:
      goto L9969;
    default:
      break;
    }
  goto ret0;

 L9968: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3733;
    }
  goto ret0;

 L3733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3734;
    }
  goto ret0;

 L3734: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 532;  /* suneq_sf */
    }
  goto ret0;

 L9969: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3775;
    }
  goto ret0;

 L3775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3776;
    }
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 539;  /* suneq_df */
    }
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9970;
    case DFmode:
      goto L9971;
    default:
      break;
    }
  goto ret0;

 L9970: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3739;
    }
  goto ret0;

 L3739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3740;
    }
  goto ret0;

 L3740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 533;  /* sunlt_sf */
    }
  goto ret0;

 L9971: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3781;
    }
  goto ret0;

 L3781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3782;
    }
  goto ret0;

 L3782: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 540;  /* sunlt_df */
    }
  goto ret0;

 L3744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9972;
    case DFmode:
      goto L9973;
    default:
      break;
    }
  goto ret0;

 L9972: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3745;
    }
  goto ret0;

 L3745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3746;
    }
  goto ret0;

 L3746: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 534;  /* sunle_sf */
    }
  goto ret0;

 L9973: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3787;
    }
  goto ret0;

 L3787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3788;
    }
  goto ret0;

 L3788: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 541;  /* sunle_df */
    }
  goto ret0;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9974;
    case DFmode:
      goto L9975;
    default:
      break;
    }
  goto ret0;

 L9974: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3751;
    }
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3752;
    }
  goto ret0;

 L3752: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 535;  /* seq_sf */
    }
  goto ret0;

 L9975: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3793;
    }
  goto ret0;

 L3793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3794;
    }
  goto ret0;

 L3794: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 542;  /* seq_df */
    }
  goto ret0;

 L3756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9976;
    case DFmode:
      goto L9977;
    default:
      break;
    }
  goto ret0;

 L9976: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3757;
    }
  goto ret0;

 L3757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3758;
    }
  goto ret0;

 L3758: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 536;  /* slt_sf */
    }
  goto ret0;

 L9977: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3799;
    }
  goto ret0;

 L3799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3800;
    }
  goto ret0;

 L3800: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 543;  /* slt_df */
    }
  goto ret0;

 L3762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9978;
    case DFmode:
      goto L9979;
    default:
      break;
    }
  goto ret0;

 L9978: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3763;
    }
  goto ret0;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3764;
    }
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 537;  /* sle_sf */
    }
  goto ret0;

 L9979: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3805;
    }
  goto ret0;

 L3805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3806;
    }
  goto ret0;

 L3806: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 544;  /* sle_df */
    }
  goto ret0;

 L3810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9980;
    case DFmode:
      goto L9981;
    default:
      break;
    }
  goto ret0;

 L9980: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3811;
    }
  goto ret0;

 L3811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3812;
    }
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 545;  /* sge_sf */
    }
  goto ret0;

 L9981: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3835;
    }
  goto ret0;

 L3835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3836;
    }
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 549;  /* sge_df */
    }
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9982;
    case DFmode:
      goto L9983;
    default:
      break;
    }
  goto ret0;

 L9982: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3817;
    }
  goto ret0;

 L3817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3818;
    }
  goto ret0;

 L3818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 546;  /* sgt_sf */
    }
  goto ret0;

 L9983: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3841;
    }
  goto ret0;

 L3841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3842;
    }
  goto ret0;

 L3842: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 550;  /* sgt_df */
    }
  goto ret0;

 L3822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9984;
    case DFmode:
      goto L9985;
    default:
      break;
    }
  goto ret0;

 L9984: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3823;
    }
  goto ret0;

 L3823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3824;
    }
  goto ret0;

 L3824: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 547;  /* sunge_sf */
    }
  goto ret0;

 L9985: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3847;
    }
  goto ret0;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3848;
    }
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 551;  /* sunge_df */
    }
  goto ret0;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9986;
    case DFmode:
      goto L9987;
    default:
      break;
    }
  goto ret0;

 L9986: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3829;
    }
  goto ret0;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3830;
    }
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 548;  /* sungt_sf */
    }
  goto ret0;

 L9987: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3853;
    }
  goto ret0;

 L3853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3854;
    }
  goto ret0;

 L3854: ATTRIBUTE_UNUSED_LABEL
  if (
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 552;  /* sungt_df */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L3191;
    case NE:
      goto L3203;
    case LEU:
      goto L3933;
    default:
     break;
   }
 L3057: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3058;
    }
 L3076: ATTRIBUTE_UNUSED_LABEL
  if (order_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3077;
    }
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L9990;
    case DImode:
      goto L9991;
    default:
      break;
    }
  goto L3057;

 L9990: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3192;
  goto L3057;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3193;
    }
  goto L3057;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3194;
  goto L3057;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3195;
    }
  goto L3057;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3196;
  goto L3057;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3197;
    case PC:
      goto L3245;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3198;

 L3198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5614 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 447;  /* *branch_bit0si */
    }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3246;
  x2 = XEXP (x1, 0);
  goto L3057;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3247;

 L3247: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5634 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 451;  /* *branch_bit0si_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3057;

 L9991: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3216;
  goto L3057;

 L3216: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3217;
    }
  goto L3057;

 L3217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3218;
  goto L3057;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3219;
    }
  goto L3057;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3220;
  goto L3057;

 L3220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3221;
    case PC:
      goto L3271;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3222;

 L3222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5614 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 449;  /* *branch_bit0di */
    }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3272;
  x2 = XEXP (x1, 0);
  goto L3057;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3273;

 L3273: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5634 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 453;  /* *branch_bit0di_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3057;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L9992;
    case DImode:
      goto L9993;
    default:
      break;
    }
  goto L3057;

 L9992: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3204;
  goto L3057;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3205;
    }
  goto L3057;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3206;
  goto L3057;

 L3206: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3207;
    }
  goto L3057;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3208;
  goto L3057;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3209;
    case PC:
      goto L3258;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3210;

 L3210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5614 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 448;  /* *branch_bit1si */
    }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3259;
  x2 = XEXP (x1, 0);
  goto L3057;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3260;

 L3260: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5634 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 452;  /* *branch_bit1si_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3057;

 L9993: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3228;
  goto L3057;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3229;
    }
  goto L3057;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3230;
  goto L3057;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3231;
    }
  goto L3057;

 L3231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3232;
  goto L3057;

 L3232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3233;
    case PC:
      goto L3284;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3234;

 L3234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5614 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 450;  /* *branch_bit1di */
    }
  x2 = XEXP (x1, 0);
  goto L3057;

 L3284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3285;
  x2 = XEXP (x1, 0);
  goto L3057;

 L3285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3286;

 L3286: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5634 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 454;  /* *branch_bit1di_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3057;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L3934;
    }
  goto L3076;

 L3934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3935;
    }
  goto L3076;

 L3935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9994;
    case DImode:
      goto L9995;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3076;

 L9994: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 47)
    goto L3936;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3936: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3937;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3938;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3939;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3940;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L3941;

 L3941: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6000 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 562;  /* casesi_internal_mips16_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3076;

 L9995: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 47)
    goto L3968;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3968: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3969;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3969: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3970;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3970: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L3971;

 L3971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3972;
  x2 = XEXP (x1, 0);
  goto L3076;

 L3972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L3973;

 L3973: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6000 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 563;  /* casesi_internal_mips16_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3076;

 L3058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCmode:
      goto L9996;
    case SImode:
      goto L9997;
    case DImode:
      goto L9998;
    default:
      break;
    }
  goto ret0;

 L9996: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L3059;
    }
  goto ret0;

 L3059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3060;
  goto ret0;

 L3060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3061;
    case PC:
      goto L3070;
    default:
     break;
   }
  goto ret0;

 L3061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3062;

 L3062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5455 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 433;  /* *branch_fp */
    }
  goto ret0;

 L3070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3071;
  goto ret0;

 L3071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3072;

 L3072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5471 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 434;  /* *branch_fp_inverted */
    }
  goto ret0;

 L9997: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3116;
    }
  goto ret0;

 L3116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3117;
    }
 L3154: ATTRIBUTE_UNUSED_LABEL
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3155;
  goto ret0;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3118;
    case PC:
      goto L3136;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3154;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3119;

 L3119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5515 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 439;  /* *branch_equalitysi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3154;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3137;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3154;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3138;

 L3138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 441;  /* *branch_equalitysi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3154;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3156;
    case PC:
      goto L3174;
    default:
     break;
   }
  goto ret0;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3157;

 L3157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5549 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 443;  /* *branch_equalitysi_mips16 */
    }
  goto ret0;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3175;
  goto ret0;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3176;

 L3176: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5563 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 445;  /* *branch_equalitysi_mips16_inverted */
    }
  goto ret0;

 L9998: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3125;
    }
  goto ret0;

 L3125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L3126;
    }
 L3163: ATTRIBUTE_UNUSED_LABEL
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3164;
  goto ret0;

 L3126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3127;
    case PC:
      goto L3146;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3163;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3128;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5515 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 440;  /* *branch_equalitydi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3163;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3147;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3163;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3148;

 L3148: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 442;  /* *branch_equalitydi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3163;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3165;
    case PC:
      goto L3184;
    default:
     break;
   }
  goto ret0;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3166;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5549 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 444;  /* *branch_equalitydi_mips16 */
    }
  goto ret0;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3185;
  goto ret0;

 L3185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3186;

 L3186: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5563 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 446;  /* *branch_equalitydi_mips16_inverted */
    }
  goto ret0;

 L3077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L9999;
    case DImode:
      goto L10000;
    default:
      break;
    }
  goto ret0;

 L9999: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3078;
    }
  goto ret0;

 L3078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3079;
  goto ret0;

 L3079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3080;
    case PC:
      goto L3098;
    default:
     break;
   }
  goto ret0;

 L3080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3081;

 L3081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5489 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 435;  /* *branch_ordersi */
    }
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3099;
  goto ret0;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3100;

 L3100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5501 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 437;  /* *branch_ordersi_inverted */
    }
  goto ret0;

 L10000: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3087;
    }
  goto ret0;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3088;
  goto ret0;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3089;
    case PC:
      goto L3108;
    default:
     break;
   }
  goto ret0;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3090;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5489 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 436;  /* *branch_orderdi */
    }
  goto ret0;

 L3108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3109;
  goto ret0;

 L3109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L3110;

 L3110: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5501 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 438;  /* *branch_orderdi_inverted */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10045;
    case SIGN_EXTEND:
      goto L6602;
    case ZERO_EXTEND:
      goto L6610;
    case MEM:
      goto L6730;
    case DIV:
      goto L8449;
    case UDIV:
      goto L8455;
    case MOD:
      goto L8473;
    case UMOD:
      goto L8479;
    default:
     break;
   }
  goto ret0;

 L10045: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L10063;
    case 1:
      goto L10064;
    case 4:
      goto L10069;
    case 7:
      goto L10073;
    case 3:
      goto L10074;
    default:
      break;
    }
  goto ret0;

 L10063: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 86L:
      goto L5923;
    case 107L:
      goto L6092;
    case 133L:
      goto L6432;
    case 134L:
      goto L6438;
    case 135L:
      goto L6444;
    case 185L:
      goto L7129;
    case 186L:
      goto L7135;
    case 189L:
      goto L7153;
    case 190L:
      goto L7159;
    default:
      break;
    }
  goto ret0;

 L5923: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5924;
    }
  goto ret0;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5925;
    }
  goto ret0;

 L5925: ATTRIBUTE_UNUSED_LABEL
  if (
#line 214 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 761;  /* mips_modsub */
    }
  goto ret0;

 L6092: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6093;
    }
  goto ret0;

 L6093: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6094;
    }
  goto ret0;

 L6094: ATTRIBUTE_UNUSED_LABEL
  if (
#line 474 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 785;  /* mips_shra_r_w */
    }
  goto ret0;

 L6432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6433;
    }
  goto ret0;

 L6433: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6434;
    }
  goto ret0;

 L6434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 856 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 815;  /* mips_cmpgu_eq_qb */
    }
  goto ret0;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6439;
    }
  goto ret0;

 L6439: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6440;
    }
  goto ret0;

 L6440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 866 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 816;  /* mips_cmpgu_lt_qb */
    }
  goto ret0;

 L6444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6445;
    }
  goto ret0;

 L6445: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6446;
    }
  goto ret0;

 L6446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 876 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 817;  /* mips_cmpgu_le_qb */
    }
  goto ret0;

 L7129: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7130;
    }
  goto ret0;

 L7130: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7131;
    }
  goto ret0;

 L7131: ATTRIBUTE_UNUSED_LABEL
  if (
#line 491 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 887;  /* mips_addqh_w */
    }
  goto ret0;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7136;
    }
  goto ret0;

 L7136: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7137;
    }
  goto ret0;

 L7137: ATTRIBUTE_UNUSED_LABEL
  if (
#line 501 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 888;  /* mips_addqh_r_w */
    }
  goto ret0;

 L7153: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7154;
    }
  goto ret0;

 L7154: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7155;
    }
  goto ret0;

 L7155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 531 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 891;  /* mips_subqh_w */
    }
  goto ret0;

 L7159: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7160;
    }
  goto ret0;

 L7160: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7161;
    }
  goto ret0;

 L7161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 541 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 892;  /* mips_subqh_r_w */
    }
  goto ret0;

 L10064: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 87L:
      goto L5929;
    case 93L:
      goto L5986;
    case 94L:
      goto L5991;
    case 126L:
      goto L6374;
    default:
      break;
    }
  goto ret0;

 L5929: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5930;
    }
  goto ret0;

 L5930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 224 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 762;  /* mips_raddu_w_qb */
    }
  goto ret0;

 L5986: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5987;
    }
  goto ret0;

 L5987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 297 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 769;  /* mips_preceq_w_phl */
    }
  goto ret0;

 L5991: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5992;
    }
  goto ret0;

 L5992: ATTRIBUTE_UNUSED_LABEL
  if (
#line 306 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 770;  /* mips_preceq_w_phr */
    }
  goto ret0;

 L6374: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6375;
    }
  goto ret0;

 L6375: ATTRIBUTE_UNUSED_LABEL
  if (
#line 769 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 805;  /* mips_bitrev */
    }
  goto ret0;

 L10069: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 127)
    goto L6379;
  goto ret0;

 L6379: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6380;
    }
  goto ret0;

 L6380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6381;
    }
  goto ret0;

 L6381: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L6382;
  goto ret0;

 L6382: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182
      && 
#line 782 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 806;  /* mips_insv */
    }
  goto ret0;

 L10073: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 147)
    goto L6592;
  goto ret0;

 L6592: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_uimm6_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6593;
    }
  goto ret0;

 L6593: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6594;
  goto ret0;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L6595;
  goto ret0;

 L6595: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L6596;
  goto ret0;

 L6596: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6597;
  goto ret0;

 L6597: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 5);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6598;
  goto ret0;

 L6598: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 6);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187
      && 
#line 1107 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 830;  /* mips_rddsp */
    }
  goto ret0;

 L10074: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 153L:
      goto L6842;
    case 154L:
      goto L6849;
    case 175L:
      goto L7058;
    default:
      break;
    }
  goto ret0;

 L6842: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6843;
    }
  goto ret0;

 L6843: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6844;
    }
  goto ret0;

 L6844: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6845;
    }
  goto ret0;

 L6845: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 861;  /* mips_append */
    }
  goto ret0;

 L6849: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6850;
    }
  goto ret0;

 L6850: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6851;
    }
  goto ret0;

 L6851: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6852;
    }
  goto ret0;

 L6852: ATTRIBUTE_UNUSED_LABEL
  if (
#line 151 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 862;  /* mips_balign */
    }
  goto ret0;

 L7058: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7059;
    }
  goto ret0;

 L7059: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7060;
    }
  goto ret0;

 L7060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7061;
    }
  goto ret0;

 L7061: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 877;  /* mips_prepend */
    }
  goto ret0;

 L6602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L10081;
    case HImode:
      goto L10082;
    default:
      break;
    }
  goto ret0;

 L10081: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6603;
  goto ret0;

 L6603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10083;
    case DImode:
      goto L10084;
    default:
      break;
    }
  goto ret0;

 L10083: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6604;
  goto ret0;

 L6604: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6605;
    }
  goto ret0;

 L6605: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6606;
    }
  goto ret0;

 L6606: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 831;  /* mips_lbx_extsi_si */
    }
  goto ret0;

 L10084: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6668;
  goto ret0;

 L6668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6669;
    }
  goto ret0;

 L6669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6670;
    }
  goto ret0;

 L6670: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 839;  /* mips_lbx_extsi_di */
    }
  goto ret0;

 L10082: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6635;
  goto ret0;

 L6635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10085;
    case DImode:
      goto L10086;
    default:
      break;
    }
  goto ret0;

 L10085: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6636;
  goto ret0;

 L6636: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6637;
    }
  goto ret0;

 L6637: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6638;
    }
  goto ret0;

 L6638: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 835;  /* mips_lhx_extsi_si */
    }
  goto ret0;

 L10086: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6700;
  goto ret0;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6701;
    }
  goto ret0;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6702;
    }
  goto ret0;

 L6702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 843;  /* mips_lhx_extsi_di */
    }
  goto ret0;

 L6610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L10087;
    case HImode:
      goto L10088;
    default:
      break;
    }
  goto ret0;

 L10087: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6611;
  goto ret0;

 L6611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10089;
    case DImode:
      goto L10090;
    default:
      break;
    }
  goto ret0;

 L10089: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6612;
  goto ret0;

 L6612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6613;
    }
  goto ret0;

 L6613: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6614;
    }
  goto ret0;

 L6614: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 832;  /* mips_lbux_extsi_si */
    }
  goto ret0;

 L10090: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6676;
  goto ret0;

 L6676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6677;
    }
  goto ret0;

 L6677: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6678;
    }
  goto ret0;

 L6678: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 840;  /* mips_lbux_extsi_di */
    }
  goto ret0;

 L10088: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6643;
  goto ret0;

 L6643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10091;
    case DImode:
      goto L10092;
    default:
      break;
    }
  goto ret0;

 L10091: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6644;
  goto ret0;

 L6644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6645;
    }
  goto ret0;

 L6645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6646;
    }
  goto ret0;

 L6646: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 836;  /* mips_lhux_extsi_si */
    }
  goto ret0;

 L10092: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6708;
  goto ret0;

 L6708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6709;
    }
  goto ret0;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6710;
    }
  goto ret0;

 L6710: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 844;  /* mips_lhux_extsi_di */
    }
  goto ret0;

 L6730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10093;
    case DImode:
      goto L10094;
    default:
      break;
    }
  goto ret0;

 L10093: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6731;
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6732;
    }
  goto ret0;

 L6732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6733;
    }
  goto ret0;

 L6733: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1165 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 847;  /* mips_lwx_si */
    }
  goto ret0;

 L10094: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6745;
  goto ret0;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6746;
    }
  goto ret0;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6747;
    }
  goto ret0;

 L6747: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1165 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 849;  /* mips_lwx_di */
    }
  goto ret0;

 L8449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8450;
    }
  goto ret0;

 L8450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8451;
    }
  goto ret0;

 L8451: ATTRIBUTE_UNUSED_LABEL
  if (
#line 917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A))
    {
      return 1055;  /* divsi3 */
    }
  goto ret0;

 L8455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8456;
    }
  goto ret0;

 L8456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8457;
    }
  goto ret0;

 L8457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A))
    {
      return 1056;  /* udivsi3 */
    }
  goto ret0;

 L8473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8474;
    }
  goto ret0;

 L8474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8475;
    }
  goto ret0;

 L8475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 931 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A))
    {
      return 1059;  /* modsi3 */
    }
  goto ret0;

 L8479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8480;
    }
  goto ret0;

 L8480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8481;
    }
  goto ret0;

 L8481: ATTRIBUTE_UNUSED_LABEL
  if (
#line 931 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A))
    {
      return 1060;  /* umodsi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10123;
    case SIGN_EXTEND:
      goto L6618;
    case ZERO_EXTEND:
      goto L6626;
    case MEM:
      goto L6737;
    case AND:
      goto L7873;
    case DIV:
      goto L8461;
    case UDIV:
      goto L8467;
    case MOD:
      goto L8485;
    case UMOD:
      goto L8491;
    default:
     break;
   }
  goto ret0;

 L10123: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L10138;
    case 2:
      goto L10142;
    default:
      break;
    }
  goto ret0;

 L10138: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 113L:
      goto L6229;
    case 114L:
      goto L6236;
    case 115L:
      goto L6243;
    case 116L:
      goto L6250;
    case 158L:
      goto L6892;
    case 159L:
      goto L6899;
    case 169L:
      goto L7031;
    case 191L:
      goto L7165;
    case 192L:
      goto L7172;
    default:
      break;
    }
  goto ret0;

 L6229: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6230;
    }
  goto ret0;

 L6230: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6231;
    }
  goto ret0;

 L6231: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L6232;
    }
  goto ret0;

 L6232: ATTRIBUTE_UNUSED_LABEL
  if (
#line 569 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 792;  /* mips_dpau_h_qbl */
    }
  goto ret0;

 L6236: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6237;
    }
  goto ret0;

 L6237: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6238;
    }
  goto ret0;

 L6238: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L6239;
    }
  goto ret0;

 L6239: ATTRIBUTE_UNUSED_LABEL
  if (
#line 581 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 793;  /* mips_dpau_h_qbr */
    }
  goto ret0;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6244;
    }
  goto ret0;

 L6244: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6245;
    }
  goto ret0;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L6246;
    }
  goto ret0;

 L6246: ATTRIBUTE_UNUSED_LABEL
  if (
#line 594 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 794;  /* mips_dpsu_h_qbl */
    }
  goto ret0;

 L6250: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6251;
    }
  goto ret0;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6252;
    }
  goto ret0;

 L6252: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L6253;
    }
  goto ret0;

 L6253: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 795;  /* mips_dpsu_h_qbr */
    }
  goto ret0;

 L6892: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6893;
    }
  goto ret0;

 L6893: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6894;
    }
  goto ret0;

 L6894: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6895;
    }
  goto ret0;

 L6895: ATTRIBUTE_UNUSED_LABEL
  if (
#line 211 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 866;  /* mips_dpa_w_ph */
    }
  goto ret0;

 L6899: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6900;
    }
  goto ret0;

 L6900: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6901;
    }
  goto ret0;

 L6901: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6902;
    }
  goto ret0;

 L6902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 223 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 867;  /* mips_dps_w_ph */
    }
  goto ret0;

 L7031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7032;
    }
  goto ret0;

 L7032: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7033;
    }
  goto ret0;

 L7033: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L7034;
    }
  goto ret0;

 L7034: ATTRIBUTE_UNUSED_LABEL
  if (
#line 304 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 873;  /* mips_mulsa_w_ph */
    }
  goto ret0;

 L7165: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7166;
    }
  goto ret0;

 L7166: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7167;
    }
  goto ret0;

 L7167: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L7168;
    }
  goto ret0;

 L7168: ATTRIBUTE_UNUSED_LABEL
  if (
#line 552 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 893;  /* mips_dpax_w_ph */
    }
  goto ret0;

 L7172: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7173;
    }
  goto ret0;

 L7173: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7174;
    }
  goto ret0;

 L7174: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L7175;
    }
  goto ret0;

 L7175: ATTRIBUTE_UNUSED_LABEL
  if (
#line 564 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 894;  /* mips_dpsx_w_ph */
    }
  goto ret0;

 L10142: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 144L:
      goto L6542;
    case 214L:
      goto L7822;
    case 207L:
      goto L8131;
    case 215L:
      goto L8219;
    case 216L:
      goto L8419;
    case 217L:
      goto L8443;
    default:
      break;
    }
  goto ret0;

 L6542: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6543;
    }
  goto ret0;

 L6543: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6544;
    }
  goto ret0;

 L6544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1045 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 827;  /* mips_shilo */
    }
  goto ret0;

 L7822: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7823;
    }
  goto ret0;

 L7823: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7824;
    }
  goto ret0;

 L7824: ATTRIBUTE_UNUSED_LABEL
  if (
#line 199 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 968;  /* loongson_paddd */
    }
  goto ret0;

 L8131: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8132;
    }
  goto ret0;

 L8132: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8133;
    }
  goto ret0;

 L8133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1015;  /* loongson_pmuluw */
    }
  goto ret0;

 L8219: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8220;
    }
  goto ret0;

 L8220: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8221;
    }
  goto ret0;

 L8221: ATTRIBUTE_UNUSED_LABEL
  if (
#line 609 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1030;  /* loongson_psubd */
    }
  goto ret0;

 L8419: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8420;
    }
  goto ret0;

 L8420: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8421;
    }
  goto ret0;

 L8421: ATTRIBUTE_UNUSED_LABEL
  if (
#line 842 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1050;  /* vec_shl_di */
    }
  goto ret0;

 L8443: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8444;
    }
  goto ret0;

 L8444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8445;
    }
  goto ret0;

 L8445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1054;  /* vec_shr_di */
    }
  goto ret0;

 L6618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L10153;
    case HImode:
      goto L10154;
    case SImode:
      goto L10155;
    default:
      break;
    }
  goto ret0;

 L10153: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6619;
  goto ret0;

 L6619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10156;
    case DImode:
      goto L10157;
    default:
      break;
    }
  goto ret0;

 L10156: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6620;
  goto ret0;

 L6620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6621;
    }
  goto ret0;

 L6621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6622;
    }
  goto ret0;

 L6622: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 833;  /* mips_lbx_extdi_si */
    }
  goto ret0;

 L10157: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6684;
  goto ret0;

 L6684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6685;
    }
  goto ret0;

 L6685: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6686;
    }
  goto ret0;

 L6686: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 841;  /* mips_lbx_extdi_di */
    }
  goto ret0;

 L10154: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6651;
  goto ret0;

 L6651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10158;
    case DImode:
      goto L10159;
    default:
      break;
    }
  goto ret0;

 L10158: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6652;
  goto ret0;

 L6652: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6653;
    }
  goto ret0;

 L6653: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6654;
    }
  goto ret0;

 L6654: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 837;  /* mips_lhx_extdi_si */
    }
  goto ret0;

 L10159: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6716;
  goto ret0;

 L6716: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6717;
    }
  goto ret0;

 L6717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6718;
    }
  goto ret0;

 L6718: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 845;  /* mips_lhx_extdi_di */
    }
  goto ret0;

 L10155: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6759;
  goto ret0;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10160;
    case DImode:
      goto L10161;
    default:
      break;
    }
  goto ret0;

 L10160: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6760;
  goto ret0;

 L6760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6761;
    }
  goto ret0;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6762;
    }
  goto ret0;

 L6762: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1176 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 851;  /* *mips_lwx_si_ext */
    }
  goto ret0;

 L10161: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6776;
  goto ret0;

 L6776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6777;
    }
  goto ret0;

 L6777: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6778;
    }
  goto ret0;

 L6778: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1176 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWX && TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 853;  /* *mips_lwx_di_ext */
    }
  goto ret0;

 L6626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L10162;
    case HImode:
      goto L10163;
    case SImode:
      goto L10164;
    default:
      break;
    }
  goto ret0;

 L10162: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6627;
  goto ret0;

 L6627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10165;
    case DImode:
      goto L10166;
    default:
      break;
    }
  goto ret0;

 L10165: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6628;
  goto ret0;

 L6628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6629;
    }
  goto ret0;

 L6629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6630;
    }
  goto ret0;

 L6630: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 834;  /* mips_lbux_extdi_si */
    }
  goto ret0;

 L10166: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6692;
  goto ret0;

 L6692: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6693;
    }
  goto ret0;

 L6693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6694;
    }
  goto ret0;

 L6694: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LBUX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 842;  /* mips_lbux_extdi_di */
    }
  goto ret0;

 L10163: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6659;
  goto ret0;

 L6659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10167;
    case DImode:
      goto L10168;
    default:
      break;
    }
  goto ret0;

 L10167: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6660;
  goto ret0;

 L6660: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6661;
    }
  goto ret0;

 L6661: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6662;
    }
  goto ret0;

 L6662: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 838;  /* mips_lhux_extdi_si */
    }
  goto ret0;

 L10168: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6724;
  goto ret0;

 L6724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6725;
    }
  goto ret0;

 L6725: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6726;
    }
  goto ret0;

 L6726: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1131 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LHUX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 846;  /* mips_lhux_extdi_di */
    }
  goto ret0;

 L10164: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6767;
  goto ret0;

 L6767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10169;
    case DImode:
      goto L10170;
    default:
      break;
    }
  goto ret0;

 L10169: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6768;
  goto ret0;

 L6768: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6769;
    }
  goto ret0;

 L6769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6770;
    }
  goto ret0;

 L6770: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1176 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 852;  /* *mips_lwux_si_ext */
    }
  goto ret0;

 L10170: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6784;
  goto ret0;

 L6784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6785;
    }
  goto ret0;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6786;
    }
  goto ret0;

 L6786: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1176 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LWUX && TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 854;  /* *mips_lwux_di_ext */
    }
  goto ret0;

 L6737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10171;
    case DImode:
      goto L10172;
    default:
      break;
    }
  goto ret0;

 L10171: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6738;
  goto ret0;

 L6738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6739;
    }
  goto ret0;

 L6739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6740;
    }
  goto ret0;

 L6740: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1165 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 848;  /* mips_ldx_si */
    }
  goto ret0;

 L10172: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6752;
  goto ret0;

 L6752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6753;
    }
  goto ret0;

 L6753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6754;
    }
  goto ret0;

 L6754: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1165 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_LDX) && (((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 850;  /* mips_ldx_di */
    }
  goto ret0;

 L7873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L7874;
  goto ret0;

 L7874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7875;
    }
  goto ret0;

 L7875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7876;
    }
  goto ret0;

 L7876: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 976;  /* loongson_pandn_d */
    }
  goto ret0;

 L8461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8462;
    }
  goto ret0;

 L8462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8463;
    }
  goto ret0;

 L8463: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 1057;  /* divdi3 */
    }
  goto ret0;

 L8467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8468;
    }
  goto ret0;

 L8468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8469;
    }
  goto ret0;

 L8469: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 917 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 1058;  /* udivdi3 */
    }
  goto ret0;

 L8485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8486;
    }
  goto ret0;

 L8486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8487;
    }
  goto ret0;

 L8487: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 931 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 1061;  /* moddi3 */
    }
  goto ret0;

 L8491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8492;
    }
  goto ret0;

 L8492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8493;
    }
  goto ret0;

 L8493: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 931 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF || TARGET_LOONGSON_3A) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 1062;  /* umoddi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10455;
    case VEC_CONCAT:
      goto L7780;
    case PLUS:
      goto L7810;
    case SS_PLUS:
      goto L7828;
    case US_PLUS:
      goto L7840;
    case AND:
      goto L7859;
    case IOR:
      goto L7904;
    case XOR:
      goto L7922;
    case NOT:
      goto L7963;
    case VEC_SELECT:
      goto L8027;
    case SMAX:
      goto L8084;
    case SMIN:
      goto L8096;
    case MULT:
      goto L8125;
    case ASHIFT:
      goto L8171;
    case ASHIFTRT:
      goto L8183;
    case LSHIFTRT:
      goto L8195;
    case MINUS:
      goto L8207;
    case SS_MINUS:
      goto L8225;
    case US_MINUS:
      goto L8237;
    default:
     break;
   }
  goto ret0;

 L10455: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10468;
    case 2:
      goto L10469;
    case 3:
      goto L10473;
    default:
      break;
    }
  goto ret0;

 L10468: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 202L:
      goto L7762;
    case 209L:
      goto L8143;
    default:
      break;
    }
  goto ret0;

 L7762: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L7763;
  goto ret0;

 L7763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7764;
    }
  goto ret0;

 L7764: ATTRIBUTE_UNUSED_LABEL
  if (
#line 138 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 959;  /* loongson_vec_init1_v4hi */
    }
  goto ret0;

 L8143: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8144;
    }
  goto ret0;

 L8144: ATTRIBUTE_UNUSED_LABEL
  if (
#line 532 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1017;  /* loongson_biadd */
    }
  goto ret0;

 L10469: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 197L:
      goto L7973;
    case 198L:
      goto L7991;
    case 199L:
      goto L8009;
    case 200L:
      goto L8021;
    case 205L:
      goto L8113;
    case 206L:
      goto L8119;
    case 210L:
      goto L8153;
    case 211L:
      goto L8159;
    case 216L:
      goto L8407;
    case 217L:
      goto L8431;
    default:
      break;
    }
  goto ret0;

 L7973: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7974;
    }
  goto ret0;

 L7974: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7975;
    }
  goto ret0;

 L7975: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 992;  /* loongson_pavgh */
    }
  goto ret0;

 L7991: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7992;
    }
  goto ret0;

 L7992: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7993;
    }
  goto ret0;

 L7993: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 995;  /* loongson_pcmpeqh */
    }
  goto ret0;

 L8009: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8010;
    }
  goto ret0;

 L8010: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8011;
    }
  goto ret0;

 L8011: ATTRIBUTE_UNUSED_LABEL
  if (
#line 302 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 998;  /* loongson_pcmpgth */
    }
  goto ret0;

 L8021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8022;
    }
  goto ret0;

 L8022: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8023;
    }
  goto ret0;

 L8023: ATTRIBUTE_UNUSED_LABEL
  if (
#line 312 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1000;  /* loongson_pextrh */
    }
  goto ret0;

 L8113: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8114;
    }
  goto ret0;

 L8114: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8115;
    }
  goto ret0;

 L8115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 484 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1012;  /* umulv4hi3_highpart */
    }
  goto ret0;

 L8119: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8120;
    }
  goto ret0;

 L8120: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8121;
    }
  goto ret0;

 L8121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1013;  /* smulv4hi3_highpart */
    }
  goto ret0;

 L8153: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8154;
    }
  goto ret0;

 L8154: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8155;
    }
  goto ret0;

 L8155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 550 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1019;  /* loongson_psadbh */
    }
  goto ret0;

 L8159: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8160;
    }
  goto ret0;

 L8160: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8161;
    }
  goto ret0;

 L8161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 560 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1020;  /* loongson_pshufh */
    }
  goto ret0;

 L8407: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8408;
    }
  goto ret0;

 L8408: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8409;
    }
  goto ret0;

 L8409: ATTRIBUTE_UNUSED_LABEL
  if (
#line 842 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1048;  /* vec_shl_v4hi */
    }
  goto ret0;

 L8431: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8432;
    }
  goto ret0;

 L8432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8433;
    }
  goto ret0;

 L8433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1052;  /* vec_shr_v4hi */
    }
  goto ret0;

 L10473: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 201)
    goto L8071;
  goto ret0;

 L8071: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8072;
    }
  goto ret0;

 L8072: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8073;
    }
  goto ret0;

 L8073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_0_to_3_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8074;
    }
  goto ret0;

 L8074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 371 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1005;  /* *vec_setv4hi */
    }
  goto ret0;

 L7780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7781;
  goto ret0;

 L7781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L7782;
    }
  goto ret0;

 L7782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7783;
  goto ret0;

 L7783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L7784;
    }
  goto ret0;

 L7784: ATTRIBUTE_UNUSED_LABEL
  if (
#line 163 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 962;  /* vec_pack_ssat_v2si */
    }
  goto ret0;

 L7810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7811;
    }
  goto ret0;

 L7811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7812;
    }
  goto ret0;

 L7812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 184 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 966;  /* addv4hi3 */
    }
  goto ret0;

 L7828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7829;
    }
  goto ret0;

 L7829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7830;
    }
  goto ret0;

 L7830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 208 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 969;  /* ssaddv4hi3 */
    }
  goto ret0;

 L7840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7841;
    }
  goto ret0;

 L7841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7842;
    }
  goto ret0;

 L7842: ATTRIBUTE_UNUSED_LABEL
  if (
#line 217 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 971;  /* usaddv4hi3 */
    }
  goto ret0;

 L7859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L10481;
  goto ret0;

 L10481: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7860;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7887;
    }
  goto ret0;

 L7860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7861;
    }
  goto ret0;

 L7861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode)
    goto L10484;
  goto ret0;

 L10484: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7945;
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7862;
    }
  goto ret0;

 L7945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7946;
    }
  goto ret0;

 L7946: ATTRIBUTE_UNUSED_LABEL
  if (
#line 264 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 987;  /* *loongson_nor */
    }
  goto ret0;

 L7862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 974;  /* loongson_pandn_h */
    }
  goto ret0;

 L7887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7888;
    }
  goto ret0;

 L7888: ATTRIBUTE_UNUSED_LABEL
  if (
#line 236 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 978;  /* andv4hi3 */
    }
  goto ret0;

 L7904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7905;
    }
  goto ret0;

 L7905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7906;
    }
  goto ret0;

 L7906: ATTRIBUTE_UNUSED_LABEL
  if (
#line 245 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 981;  /* iorv4hi3 */
    }
  goto ret0;

 L7922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7923;
    }
  goto ret0;

 L7923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7924;
    }
  goto ret0;

 L7924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 254 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 984;  /* xorv4hi3 */
    }
  goto ret0;

 L7963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7964;
    }
  goto ret0;

 L7964: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 990;  /* one_cmplv4hi2 */
    }
  goto ret0;

 L8027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L8028;
  goto ret0;

 L8028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8029;
    }
  goto ret0;

 L8029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8030;
    }
  goto ret0;

 L8030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L8031;
  goto ret0;

 L8031: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L10485;
  goto ret0;

 L10485: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L8032;
      case 0L:
        goto L8043;
      case 2L:
        goto L8269;
      default:
        break;
      }
  goto ret0;

 L8032: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8033;
  goto ret0;

 L8033: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8034;
  goto ret0;

 L8034: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 325 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1001;  /* loongson_pinsrh_0 */
    }
  goto ret0;

 L8043: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10488;
  goto ret0;

 L10488: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L8044;
      case 1L:
        goto L8055;
      default:
        break;
      }
  goto ret0;

 L8044: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT)
    goto L10490;
  goto ret0;

 L10490: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L8045;
      case 1L:
        goto L8347;
      default:
        break;
      }
  goto ret0;

 L8045: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 337 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1002;  /* loongson_pinsrh_1 */
    }
  goto ret0;

 L8347: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 732 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1042;  /* loongson_punpcklhw */
    }
  goto ret0;

 L8055: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT)
    goto L10492;
  goto ret0;

 L10492: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L8056;
      case 2L:
        goto L8067;
      default:
        break;
      }
  goto ret0;

 L8056: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_CODE (x3) == CONST_INT)
    goto L10494;
  goto ret0;

 L10494: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 3L:
        goto L10496;
      case 5L:
        goto L10497;
      default:
        break;
      }
  goto ret0;

 L10496: ATTRIBUTE_UNUSED_LABEL
  if (
#line 349 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1003;  /* loongson_pinsrh_2 */
    }
  goto ret0;

 L10497: ATTRIBUTE_UNUSED_LABEL
  if (
#line 783 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1046;  /* *loongson_punpcklwd_hi */
    }
  goto ret0;

 L8067: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)]
      && 
#line 361 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1004;  /* loongson_pinsrh_3 */
    }
  goto ret0;

 L8269: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10498;
  goto ret0;

 L10498: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 6L:
        goto L8270;
      case 3L:
        goto L8320;
      default:
        break;
      }
  goto ret0;

 L8270: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8271;
  goto ret0;

 L8271: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 654 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1036;  /* loongson_punpckhhw */
    }
  goto ret0;

 L8320: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8321;
  goto ret0;

 L8321: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 705 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1040;  /* loongson_punpckhwd_hi */
    }
  goto ret0;

 L8084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8085;
    }
  goto ret0;

 L8085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8086;
    }
  goto ret0;

 L8086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 416 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1007;  /* smaxv4hi3 */
    }
  goto ret0;

 L8096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8097;
    }
  goto ret0;

 L8097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8098;
    }
  goto ret0;

 L8098: ATTRIBUTE_UNUSED_LABEL
  if (
#line 445 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1009;  /* sminv4hi3 */
    }
  goto ret0;

 L8125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8126;
    }
  goto ret0;

 L8126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8127;
    }
  goto ret0;

 L8127: ATTRIBUTE_UNUSED_LABEL
  if (
#line 503 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1014;  /* mulv4hi3 */
    }
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8172;
    }
  goto ret0;

 L8172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8173;
    }
  goto ret0;

 L8173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 569 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1022;  /* ashlv4hi3 */
    }
  goto ret0;

 L8183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8184;
    }
  goto ret0;

 L8184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8185;
    }
  goto ret0;

 L8185: ATTRIBUTE_UNUSED_LABEL
  if (
#line 578 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1024;  /* ashrv4hi3 */
    }
  goto ret0;

 L8195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8196;
    }
  goto ret0;

 L8196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8197;
    }
  goto ret0;

 L8197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 587 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1026;  /* lshrv4hi3 */
    }
  goto ret0;

 L8207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8208;
    }
  goto ret0;

 L8208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8209;
    }
  goto ret0;

 L8209: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1028;  /* subv4hi3 */
    }
  goto ret0;

 L8225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8226;
    }
  goto ret0;

 L8226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8227;
    }
  goto ret0;

 L8227: ATTRIBUTE_UNUSED_LABEL
  if (
#line 618 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1031;  /* sssubv4hi3 */
    }
  goto ret0;

 L8237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8238;
    }
  goto ret0;

 L8238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8239;
    }
  goto ret0;

 L8239: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1033;  /* ussubv4hi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L10523;
    case VEC_CONCAT:
      goto L7788;
    case PLUS:
      goto L7816;
    case SS_PLUS:
      goto L7834;
    case US_PLUS:
      goto L7846;
    case AND:
      goto L7866;
    case IOR:
      goto L7910;
    case XOR:
      goto L7928;
    case NOT:
      goto L7968;
    case UMAX:
      goto L8090;
    case UMIN:
      goto L8102;
    case MINUS:
      goto L8213;
    case SS_MINUS:
      goto L8231;
    case US_MINUS:
      goto L8243;
    case VEC_SELECT:
      goto L8249;
    default:
     break;
   }
  goto ret0;

 L10523: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10532;
    case 2:
      goto L10533;
    default:
      break;
    }
  goto ret0;

 L10532: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 202L:
      goto L7768;
    case 204L:
      goto L8108;
    case 209L:
      goto L8148;
    default:
      break;
    }
  goto ret0;

 L7768: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L7769;
  goto ret0;

 L7769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7770;
    }
  goto ret0;

 L7770: ATTRIBUTE_UNUSED_LABEL
  if (
#line 138 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 960;  /* loongson_vec_init1_v8qi */
    }
  goto ret0;

 L8108: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8109;
    }
  goto ret0;

 L8109: ATTRIBUTE_UNUSED_LABEL
  if (
#line 474 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1011;  /* loongson_pmovmskb */
    }
  goto ret0;

 L8148: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8149;
    }
  goto ret0;

 L8149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 540 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1018;  /* reduc_uplus_v8qi */
    }
  goto ret0;

 L10533: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 197L:
      goto L7979;
    case 198L:
      goto L7997;
    case 199L:
      goto L8015;
    case 208L:
      goto L8137;
    case 216L:
      goto L8413;
    case 217L:
      goto L8437;
    default:
      break;
    }
  goto ret0;

 L7979: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7980;
    }
  goto ret0;

 L7980: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7981;
    }
  goto ret0;

 L7981: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 993;  /* loongson_pavgb */
    }
  goto ret0;

 L7997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7998;
    }
  goto ret0;

 L7998: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7999;
    }
  goto ret0;

 L7999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 996;  /* loongson_pcmpeqb */
    }
  goto ret0;

 L8015: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8016;
    }
  goto ret0;

 L8016: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8017;
    }
  goto ret0;

 L8017: ATTRIBUTE_UNUSED_LABEL
  if (
#line 302 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 999;  /* loongson_pcmpgtb */
    }
  goto ret0;

 L8137: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8138;
    }
  goto ret0;

 L8138: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8139;
    }
  goto ret0;

 L8139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 523 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1016;  /* loongson_pasubub */
    }
  goto ret0;

 L8413: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8414;
    }
  goto ret0;

 L8414: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8415;
    }
  goto ret0;

 L8415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 842 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1049;  /* vec_shl_v8qi */
    }
  goto ret0;

 L8437: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8438;
    }
  goto ret0;

 L8438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8439;
    }
  goto ret0;

 L8439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1053;  /* vec_shr_v8qi */
    }
  goto ret0;

 L7788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L10541;
  goto ret0;

 L10541: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L7789;
    case US_TRUNCATE:
      goto L7797;
    default:
     break;
   }
  goto ret0;

 L7789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7790;
    }
  goto ret0;

 L7790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7791;
  goto ret0;

 L7791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7792;
    }
  goto ret0;

 L7792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 163 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 963;  /* vec_pack_ssat_v4hi */
    }
  goto ret0;

 L7797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7798;
    }
  goto ret0;

 L7798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L7799;
  goto ret0;

 L7799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7800;
    }
  goto ret0;

 L7800: ATTRIBUTE_UNUSED_LABEL
  if (
#line 175 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 964;  /* vec_pack_usat_v4hi */
    }
  goto ret0;

 L7816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7817;
    }
  goto ret0;

 L7817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7818;
    }
  goto ret0;

 L7818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 184 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 967;  /* addv8qi3 */
    }
  goto ret0;

 L7834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7835;
    }
  goto ret0;

 L7835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7836;
    }
  goto ret0;

 L7836: ATTRIBUTE_UNUSED_LABEL
  if (
#line 208 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 970;  /* ssaddv8qi3 */
    }
  goto ret0;

 L7846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7847;
    }
  goto ret0;

 L7847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7848;
    }
  goto ret0;

 L7848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 217 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 972;  /* usaddv8qi3 */
    }
  goto ret0;

 L7866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L10543;
  goto ret0;

 L10543: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7867;
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7893;
    }
  goto ret0;

 L7867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L7868;
    }
  goto ret0;

 L7868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode)
    goto L10546;
  goto ret0;

 L10546: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7953;
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7869;
    }
  goto ret0;

 L7953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L7954;
    }
  goto ret0;

 L7954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 264 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 988;  /* *loongson_nor */
    }
  goto ret0;

 L7869: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 975;  /* loongson_pandn_b */
    }
  goto ret0;

 L7893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7894;
    }
  goto ret0;

 L7894: ATTRIBUTE_UNUSED_LABEL
  if (
#line 236 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 979;  /* andv8qi3 */
    }
  goto ret0;

 L7910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7911;
    }
  goto ret0;

 L7911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7912;
    }
  goto ret0;

 L7912: ATTRIBUTE_UNUSED_LABEL
  if (
#line 245 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 982;  /* iorv8qi3 */
    }
  goto ret0;

 L7928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7929;
    }
  goto ret0;

 L7929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7930;
    }
  goto ret0;

 L7930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 254 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 985;  /* xorv8qi3 */
    }
  goto ret0;

 L7968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7969;
    }
  goto ret0;

 L7969: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 991;  /* one_cmplv8qi2 */
    }
  goto ret0;

 L8090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8091;
    }
  goto ret0;

 L8091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8092;
    }
  goto ret0;

 L8092: ATTRIBUTE_UNUSED_LABEL
  if (
#line 436 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1008;  /* umaxv8qi3 */
    }
  goto ret0;

 L8102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8103;
    }
  goto ret0;

 L8103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8104;
    }
  goto ret0;

 L8104: ATTRIBUTE_UNUSED_LABEL
  if (
#line 465 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1010;  /* uminv8qi3 */
    }
  goto ret0;

 L8213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8214;
    }
  goto ret0;

 L8214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8215;
    }
  goto ret0;

 L8215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1029;  /* subv8qi3 */
    }
  goto ret0;

 L8231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8232;
    }
  goto ret0;

 L8232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8233;
    }
  goto ret0;

 L8233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 618 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1032;  /* sssubv8qi3 */
    }
  goto ret0;

 L8243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8244;
    }
  goto ret0;

 L8244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8245;
    }
  goto ret0;

 L8245: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1034;  /* ussubv8qi3 */
    }
  goto ret0;

 L8249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L8250;
  goto ret0;

 L8250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8251;
    }
  goto ret0;

 L8251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8252;
    }
  goto ret0;

 L8252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L8253;
  goto ret0;

 L8253: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L10547;
  goto ret0;

 L10547: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L8254;
      case 0L:
        goto L8330;
      default:
        break;
      }
  goto ret0;

 L8254: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10549;
  goto ret0;

 L10549: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 12L:
        goto L8255;
      case 5L:
        goto L8281;
      default:
        break;
      }
  goto ret0;

 L8255: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L8256;
  goto ret0;

 L8256: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L8257;
  goto ret0;

 L8257: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8258;
  goto ret0;

 L8258: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L8259;
  goto ret0;

 L8259: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L8260;
  goto ret0;

 L8260: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 642 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1035;  /* loongson_punpckhbh */
    }
  goto ret0;

 L8281: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT)
    goto L10551;
  goto ret0;

 L10551: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 12L:
        goto L8282;
      case 6L:
        goto L8306;
      default:
        break;
      }
  goto ret0;

 L8282: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L8283;
  goto ret0;

 L8283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8284;
  goto ret0;

 L8284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L8285;
  goto ret0;

 L8285: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L8286;
  goto ret0;

 L8286: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 668 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1037;  /* loongson_punpckhhw_qi */
    }
  goto ret0;

 L8306: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L8307;
  goto ret0;

 L8307: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L8308;
  goto ret0;

 L8308: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L8309;
  goto ret0;

 L8309: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L8310;
  goto ret0;

 L8310: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 693 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1039;  /* loongson_punpckhwd_qi */
    }
  goto ret0;

 L8330: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10553;
  goto ret0;

 L10553: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8L:
        goto L8331;
      case 1L:
        goto L8357;
      default:
        break;
      }
  goto ret0;

 L8331: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8332;
  goto ret0;

 L8332: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L8333;
  goto ret0;

 L8333: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8334;
  goto ret0;

 L8334: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L8335;
  goto ret0;

 L8335: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8336;
  goto ret0;

 L8336: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 720 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1041;  /* loongson_punpcklbh */
    }
  goto ret0;

 L8357: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT)
    goto L10555;
  goto ret0;

 L10555: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8L:
        goto L8358;
      case 2L:
        goto L8382;
      default:
        break;
      }
  goto ret0;

 L8358: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L8359;
  goto ret0;

 L8359: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8360;
  goto ret0;

 L8360: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8361;
  goto ret0;

 L8361: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L8362;
  goto ret0;

 L8362: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 746 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1043;  /* *loongson_punpcklhw_qi */
    }
  goto ret0;

 L8382: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8383;
  goto ret0;

 L8383: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L8384;
  goto ret0;

 L8384: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L8385;
  goto ret0;

 L8385: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L8386;
  goto ret0;

 L8386: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1045;  /* *loongson_punpcklwd_qi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SFmode:
      goto L9301;
    case DFmode:
      goto L9302;
    case V2SFmode:
      goto L9303;
    case SImode:
      goto L9284;
    case DImode:
      goto L9285;
    case TImode:
      goto L9277;
    case QImode:
      goto L9279;
    case HImode:
      goto L9280;
    case BLKmode:
      goto L9326;
    case V2HImode:
      goto L9293;
    case V4QImode:
      goto L9294;
    case V2HQmode:
      goto L9295;
    case V2UHQmode:
      goto L9296;
    case V2HAmode:
      goto L9297;
    case V2UHAmode:
      goto L9298;
    case V4QQmode:
      goto L9299;
    case V4UQQmode:
      goto L9300;
    case TFmode:
      goto L9316;
    case V2SImode:
      goto L9318;
    case V4HImode:
      goto L9319;
    case V8QImode:
      goto L9320;
    case CCmode:
      goto L9327;
    default:
      break;
    }
 L3055: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L3872;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4096;
    }
 L4540: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L4541;
 L4576: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9333;
    case DImode:
      goto L9334;
    case V2SFmode:
      goto L9335;
    case SFmode:
      goto L9336;
    case CCmode:
      goto L9337;
    case CCV4mode:
      goto L9338;
    case CCV2mode:
      goto L9339;
    case DFmode:
      goto L9340;
    case V4QImode:
      goto L9342;
    case V2HImode:
      goto L9343;
    case CCDSPmode:
      goto L9345;
    case QQmode:
      goto L9346;
    case HQmode:
      goto L9347;
    case SQmode:
      goto L9348;
    case DQmode:
      goto L9349;
    case UQQmode:
      goto L9350;
    case UHQmode:
      goto L9351;
    case USQmode:
      goto L9352;
    case UDQmode:
      goto L9353;
    case HAmode:
      goto L9354;
    case SAmode:
      goto L9355;
    case DAmode:
      goto L9356;
    case UHAmode:
      goto L9357;
    case USAmode:
      goto L9358;
    case UDAmode:
      goto L9359;
    case V2SImode:
      goto L9360;
    case V4HImode:
      goto L9361;
    case V8QImode:
      goto L9362;
    default:
      break;
    }
 L5663: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L5664;
  goto ret0;

 L9301: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2301;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L23;
    }
 L9313: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2521;
    }
  goto L3055;

 L2301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9366;
    case DImode:
      goto L9367;
    default:
      break;
    }
  goto L9313;

 L9366: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2302;
  goto L9313;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2303;
    }
  goto L9313;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2304;
    }
  goto L9313;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2305;
    }
  x1 = XEXP (x0, 0);
  goto L9313;

 L2305: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))))
    {
      return 306;  /* *swxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L9313;

 L9367: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2323;
  goto L9313;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2324;
    }
  goto L9313;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2325;
    }
  goto L9313;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2326;
    }
  x1 = XEXP (x0, 0);
  goto L9313;

 L2326: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))))
    {
      return 309;  /* *swxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L9313;

 L23: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L9368;
  x1 = XEXP (x0, 0);
  goto L9313;

 L9368: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9313;

 L2521: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L2522;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4640 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 334;  /* *movsf_hardfloat */
    }
 L2526: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4650 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 335;  /* *movsf_softfloat */
    }
 L2530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4660 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 336;  /* *movsf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9302: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2308;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L29;
    }
 L9314: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2533;
    }
  goto L3055;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9401;
    case DImode:
      goto L9402;
    default:
      break;
    }
  goto L9314;

 L9401: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2309;
  goto L9314;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2310;
    }
  goto L9314;

 L2310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2311;
    }
  goto L9314;

 L2311: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2312;
    }
  x1 = XEXP (x0, 0);
  goto L9314;

 L2312: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))))
    {
      return 307;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L9314;

 L9402: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2330;
  goto L9314;

 L2330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2331;
    }
  goto L9314;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2332;
    }
  goto L9314;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2333;
    }
  x1 = XEXP (x0, 0);
  goto L9314;

 L2333: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))))
    {
      return 310;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L9314;

 L29: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L9403;
  x1 = XEXP (x0, 0);
  goto L9314;

 L9403: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9314;

 L2533: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2534;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2534: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4681 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 337;  /* *movdf_hardfloat */
    }
 L2538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4691 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 338;  /* *movdf_softfloat */
    }
 L2542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4701 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 339;  /* *movdf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9303: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2315;
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L35;
    }
 L9317: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2561;
    }
  goto L3055;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9445;
    case DImode:
      goto L9446;
    default:
      break;
    }
  goto L9317;

 L9445: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2316;
  goto L9317;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2317;
    }
  goto L9317;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2318;
    }
  goto L9317;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2319;
    }
  x1 = XEXP (x0, 0);
  goto L9317;

 L2319: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))))
    {
      return 308;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L9317;

 L9446: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2337;
  goto L9317;

 L2337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2338;
    }
  goto L9317;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2339;
    }
  goto L9317;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2340;
    }
  x1 = XEXP (x0, 0);
  goto L9317;

 L2340: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4468 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && ((((
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))))
    {
      return 311;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L9317;

 L35: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L9447;
  x1 = XEXP (x0, 0);
  goto L9317;

 L9447: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9317;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L2562;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2562: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4827 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 344;  /* *movv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9284: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3055;

 L9285: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3055;

 L9277: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L526;
    }
 L9278: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L824;
    }
 L9315: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L2545;
    }
  goto L3055;

 L526: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L9857;
  x1 = XEXP (x0, 0);
  goto L9278;

 L9857: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L9859;
    case MULT:
      goto L798;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9278;

 L9859: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 14)
    goto L527;
  x1 = XEXP (x0, 0);
  goto L9278;

 L527: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L9860;
    case SImode:
      goto L9861;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L9860: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L528;
    case DIV:
      goto L1294;
    case UDIV:
      goto L1301;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9278;

 L528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9865;
  x1 = XEXP (x0, 0);
  goto L9278;

 L9865: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L529;
    case ZERO_EXTEND:
      goto L538;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9278;

 L529: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L530;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L531;
  x1 = XEXP (x0, 0);
  goto L9278;

 L531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L532;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2011 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 55;  /* mulsidi3_64bit_hilo */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L539;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L540;
  x1 = XEXP (x0, 0);
  goto L9278;

 L540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L541;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2011 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 56;  /* umulsidi3_64bit_hilo */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1294: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1295;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1296;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1296: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 127;  /* divmoddi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1302;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1303;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 128;  /* udivmoddi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L9861: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1280;
    case UDIV:
      goto L1287;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1281;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1282;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1282: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 125;  /* divmodsi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1288;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1289;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L1289: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 126;  /* udivmodsi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L9867;
  x1 = XEXP (x0, 0);
  goto L9278;

 L9867: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L799;
    case ZERO_EXTEND:
      goto L807;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9278;

 L799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L800;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L801;
  x1 = XEXP (x0, 0);
  goto L9278;

 L801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L802;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2253 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 70;  /* mulditi3_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L808;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L809;
  x1 = XEXP (x0, 0);
  goto L9278;

 L809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L810;
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2253 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 71;  /* umulditi3_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9278;

 L824: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L9869;
  x1 = XEXP (x0, 0);
  goto L9315;

 L9869: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L825;
    case UNSPEC:
      goto L9871;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9315;

 L825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L9872;
  x1 = XEXP (x0, 0);
  goto L9315;

 L9872: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L826;
    case ZERO_EXTEND:
      goto L845;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9315;

 L826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L827;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L828;
  x1 = XEXP (x0, 0);
  goto L9315;

 L828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L829;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L829: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 72;  /* mulditi3_r4000 */
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L846;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L847;
  x1 = XEXP (x0, 0);
  goto L9315;

 L847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L848;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 73;  /* umulditi3_r4000 */
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L9871: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 13)
    goto L2587;
  x1 = XEXP (x0, 0);
  goto L9315;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2588;
    }
 L2593: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2594;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2589;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2593;

 L2589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 349;  /* mthisi_ti */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2593;

 L2594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2595;
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L2595: ATTRIBUTE_UNUSED_LABEL
  if (
#line 722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 350;  /* mthidi_ti */
    }
  x1 = XEXP (x0, 0);
  goto L9315;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L2546;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2546: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4722 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode))))
    {
      return 340;  /* *movti */
    }
 L2550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4736 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode))))
    {
      return 341;  /* *movti_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9279: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1530;
    }
 L9282: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1545;
    }
  goto L3055;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1531;
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L2514;
    }
  x1 = XEXP (x0, 0);
  goto L9282;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1532;
    }
  x1 = XEXP (x0, 0);
  goto L9282;

 L1532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3053 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 168;  /* truncdiqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L9282;

 L2514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4582 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))))
    {
      return 332;  /* *movqi_internal */
    }
 L2518: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4592 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 333;  /* *movqi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9282;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1546;
  x1 = XEXP (x0, 0);
  goto L3055;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9874;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9874: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1547;
    case LSHIFTRT:
      goto L1568;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1548;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1549;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1549: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3067 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 171;  /* *ashr_truncqi */
    }
 L1588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 177;  /* *ashr_truncqi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1569;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9876;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9876: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 3077 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 174;  /* *lshr32_truncqi */
    }
 L9877: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1595;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1595: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 178;  /* *lshr_truncqi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9280: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1535;
    }
 L9283: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1552;
    }
  goto L3055;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1536;
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L2506;
    }
  x1 = XEXP (x0, 0);
  goto L9283;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1537;
    }
  x1 = XEXP (x0, 0);
  goto L9283;

 L1537: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3053 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 169;  /* truncdihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L9283;

 L2506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4507 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))))
    {
      return 330;  /* *movhi_internal */
    }
 L2510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4517 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 331;  /* *movhi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9283;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L9878;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9878: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1553;
    case ZERO_EXTEND:
      goto L1697;
    case SIGN_EXTEND:
      goto L1802;
    case BSWAP:
      goto L3027;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9882;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9882: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1554;
    case LSHIFTRT:
      goto L1574;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1555;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1555: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1556;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1556: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3067 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 172;  /* *ashr_trunchi */
    }
 L1602: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 179;  /* *ashr_trunchi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1575;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9884;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9884: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 3077 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 175;  /* *lshr32_trunchi */
    }
 L9885: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1609;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1609: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3090 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 180;  /* *lshr_trunchi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L9888;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9888: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1732;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1698;
    }
 L9887: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1703;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1733;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1733: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3241 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 203;  /* *zero_extendhi_truncqi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1698: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3208 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 197;  /* *zero_extendqihi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9887;

 L1703: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3218 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 198;  /* *zero_extendqihi2_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L9890;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9890: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1842;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1803;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1843;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1843: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3424 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS))
    {
      return 224;  /* *extendhi_truncateqi */
    }
 L1873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3455 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && ISA_HAS_EXTS))
    {
      return 229;  /* *extendhi_truncateqi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L1803: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3339 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 217;  /* *extendqihi2_mips16e */
    }
 L1808: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3350 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 218;  /* *extendqihi2 */
    }
 L1813: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3370 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 219;  /* *extendqihi2_seb */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3028;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L3028: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5391 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_WSBH))
    {
      return 427;  /* bswaphi2 */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9326: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2903;
 L9286: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L2039;
    }
  goto L3055;

 L2903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SCRATCH)
    goto L2904;
  goto L9286;

 L2904: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L9891;
  x1 = XEXP (x0, 0);
  goto L9286;

 L9891: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9893;
  x1 = XEXP (x0, 0);
  goto L9286;

 L9893: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9895;
    case 1:
      goto L9896;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9286;

 L9895: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 38)
    goto L2905;
  x1 = XEXP (x0, 0);
  goto L9286;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2906;
    }
  x1 = XEXP (x0, 0);
  goto L9286;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (address_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2907;
    }
  x1 = XEXP (x0, 0);
  goto L9286;

 L2907: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5157 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CACHE))
    {
      return 407;  /* mips_cache */
    }
  x1 = XEXP (x0, 0);
  goto L9286;

 L9896: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 39)
    goto L2912;
  x1 = XEXP (x0, 0);
  goto L9286;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5167 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_CACHE))
    {
      return 408;  /* r10k_cache_barrier */
    }
  x1 = XEXP (x0, 0);
  goto L9286;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L9897;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9897: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9899;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9899: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9901;
    case 3:
      goto L9902;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9901: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 2)
    goto L2040;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2040: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2041;
    }
 L2046: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2047;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2041: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2042;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2046;

 L2042: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3980 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 254;  /* mov_swl */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2046;

 L2047: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2048;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2048: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3980 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 255;  /* mov_sdl */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9902: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 3)
    goto L2052;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2053;
    }
 L2058: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2059;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2054;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2058;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3991 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 256;  /* mov_swr */
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2058;

 L2059: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2060;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (
#line 3991 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 257;  /* mov_sdr */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9293: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2191;
    }
 L9305: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2361;
    }
  goto L3055;

 L2191: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HImode))
    {
      operands[1] = x1;
      goto L2192;
    }
  x1 = XEXP (x0, 0);
  goto L9305;

 L2192: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 736 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 283;  /* *movv2hi_internal */
    }
 L2228: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 736 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 292;  /* *movv2hi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9305;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode
      && GET_CODE (x1) == MEM)
    goto L2362;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9903;
    case DImode:
      goto L9904;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9903: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2363;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2364;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2364: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2365;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2365: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2366;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2367;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2367: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 736 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 314;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9904: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2372;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2373;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2374;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2375;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2376;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2376: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 736 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 315;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9294: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2195;
    }
 L9306: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2379;
    }
  goto L3055;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4QImode))
    {
      operands[1] = x1;
      goto L2196;
    }
  x1 = XEXP (x0, 0);
  goto L9306;

 L2196: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 737 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 284;  /* *movv4qi_internal */
    }
 L2232: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 737 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 293;  /* *movv4qi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9306;

 L2379: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode
      && GET_CODE (x1) == MEM)
    goto L2380;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9905;
    case DImode:
      goto L9906;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9905: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2381;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2382;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2383;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2384;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2385;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2385: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 737 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 316;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9906: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2390;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2391;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2392;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2393;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2394;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2394: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 737 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 317;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9295: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HQmode))
    {
      operands[0] = x1;
      goto L2199;
    }
 L9307: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HQmode))
    {
      operands[0] = x1;
      goto L2397;
    }
  goto L3055;

 L2199: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HQmode))
    {
      operands[1] = x1;
      goto L2200;
    }
  x1 = XEXP (x0, 0);
  goto L9307;

 L2200: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 738 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 285;  /* *movv2hq_internal */
    }
 L2236: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 738 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 294;  /* *movv2hq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9307;

 L2397: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HQmode
      && GET_CODE (x1) == MEM)
    goto L2398;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9907;
    case DImode:
      goto L9908;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9907: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2399;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2400;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2401;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2402;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2403;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2403: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 738 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 318;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9908: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2408;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2409;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2410;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2411;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2412;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2412: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 738 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 319;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9296: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2UHQmode))
    {
      operands[0] = x1;
      goto L2203;
    }
 L9308: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2UHQmode))
    {
      operands[0] = x1;
      goto L2415;
    }
  goto L3055;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2UHQmode))
    {
      operands[1] = x1;
      goto L2204;
    }
  x1 = XEXP (x0, 0);
  goto L9308;

 L2204: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 286;  /* *movv2uhq_internal */
    }
 L2240: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 295;  /* *movv2uhq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9308;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2UHQmode
      && GET_CODE (x1) == MEM)
    goto L2416;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9909;
    case DImode:
      goto L9910;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9909: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2417;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2418;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2419;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2420;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2421;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2421: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 320;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9910: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2426;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2427;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2428;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2429;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2430;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2430: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 739 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 321;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9297: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HAmode))
    {
      operands[0] = x1;
      goto L2207;
    }
 L9309: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HAmode))
    {
      operands[0] = x1;
      goto L2433;
    }
  goto L3055;

 L2207: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HAmode))
    {
      operands[1] = x1;
      goto L2208;
    }
  x1 = XEXP (x0, 0);
  goto L9309;

 L2208: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 740 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 287;  /* *movv2ha_internal */
    }
 L2244: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 740 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 296;  /* *movv2ha_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9309;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HAmode
      && GET_CODE (x1) == MEM)
    goto L2434;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9911;
    case DImode:
      goto L9912;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9911: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2435;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2436;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2437;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2438;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2439;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2439: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 740 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 322;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9912: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2444;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2445;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2446;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2447;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2448;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2448: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 740 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 323;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9298: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2UHAmode))
    {
      operands[0] = x1;
      goto L2211;
    }
 L9310: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2UHAmode))
    {
      operands[0] = x1;
      goto L2451;
    }
  goto L3055;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2UHAmode))
    {
      operands[1] = x1;
      goto L2212;
    }
  x1 = XEXP (x0, 0);
  goto L9310;

 L2212: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 741 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 288;  /* *movv2uha_internal */
    }
 L2248: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 741 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 297;  /* *movv2uha_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9310;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2UHAmode
      && GET_CODE (x1) == MEM)
    goto L2452;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9913;
    case DImode:
      goto L9914;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9913: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2453;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2454;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2455;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2456;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2457;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2457: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 741 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 324;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9914: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2462;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2463;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2464;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2465;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2466;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2466: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 741 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 325;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9299: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QQmode))
    {
      operands[0] = x1;
      goto L2215;
    }
 L9311: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QQmode))
    {
      operands[0] = x1;
      goto L2469;
    }
  goto L3055;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4QQmode))
    {
      operands[1] = x1;
      goto L2216;
    }
  x1 = XEXP (x0, 0);
  goto L9311;

 L2216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 742 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 289;  /* *movv4qq_internal */
    }
 L2252: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 742 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 298;  /* *movv4qq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9311;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QQmode
      && GET_CODE (x1) == MEM)
    goto L2470;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9915;
    case DImode:
      goto L9916;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9915: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2471;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2472;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2473;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2474;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2475;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2475: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 742 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 326;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9916: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2480;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2481;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2482;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2483;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2484;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2484: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 742 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 327;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9300: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4UQQmode))
    {
      operands[0] = x1;
      goto L2219;
    }
 L9312: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4UQQmode))
    {
      operands[0] = x1;
      goto L2487;
    }
  goto L3055;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4UQQmode))
    {
      operands[1] = x1;
      goto L2220;
    }
  x1 = XEXP (x0, 0);
  goto L9312;

 L2220: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4367 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 290;  /* *movv4uqq_internal */
    }
 L2256: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4377 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 299;  /* *movv4uqq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9312;

 L2487: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4UQQmode
      && GET_CODE (x1) == MEM)
    goto L2488;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9917;
    case DImode:
      goto L9918;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9917: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2489;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2490;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2490: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2491;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2491: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2492;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2493;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2493: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))))
    {
      return 328;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9918: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2498;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2499;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2500;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2500: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2501;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2502;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2502: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4483 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && ((((
#line 743 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_DSP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))))
    {
      return 329;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9316: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2553;
    }
 L9321: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2628;
    }
  goto L3055;

 L2553: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2554;
    }
  x1 = XEXP (x0, 0);
  goto L9321;

 L2554: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4759 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode))))
    {
      return 342;  /* *movtf */
    }
 L2558: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode))))
    {
      return 343;  /* *movtf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L9321;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L9919;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9919: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9922;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9922: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9925;
    case 2:
      goto L9926;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9925: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2629;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2629: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2630;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2630: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 357;  /* load_lowtf */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9926: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2670;
    case 11L:
      goto L2754;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2671;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2672;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2672: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 364;  /* load_hightf */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2755;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2756;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2756: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 378;  /* mthc1tf */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9318: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2613;
    }
  goto L3055;

 L2613: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L9928;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9928: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9931;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9931: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9934;
    case 2:
      goto L9935;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9934: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2614;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2614: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2615;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2615: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 778 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 354;  /* load_lowv2si */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9935: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2652;
    case 11L:
      goto L2736;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2653;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2654;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2654: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 778 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 361;  /* load_highv2si */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2737;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2738;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2738: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 778 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 375;  /* mthc1v2si */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9319: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2618;
    }
  goto L3055;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L9937;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9937: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9940;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9940: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9943;
    case 2:
      goto L9944;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9943: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2619;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2620;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2620: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 779 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 355;  /* load_lowv4hi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9944: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2658;
    case 11L:
      goto L2742;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2659;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2660;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2660: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 779 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 362;  /* load_highv4hi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2743;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2744;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2744: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 779 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 376;  /* mthc1v4hi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9320: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2623;
    }
  goto L3055;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L9946;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9946: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9949;
  x1 = XEXP (x0, 0);
  goto L3055;

 L9949: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9952;
    case 2:
      goto L9953;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9952: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 7)
    goto L2624;
  x1 = XEXP (x0, 0);
  goto L3055;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2625;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2625: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4903 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 780 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 356;  /* load_lowv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9953: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L2664;
    case 11L:
      goto L2748;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2665;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2666;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2666: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4918 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 780 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 363;  /* load_highv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2749;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2750;
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L2750: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4948 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 780 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 377;  /* mthc1v8qi */
    }
  x1 = XEXP (x0, 0);
  goto L3055;

 L9327: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3055;

 L3872: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9988;
    case DImode:
      goto L9989;
    default:
      break;
    }
 L3056: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L3190;
    case LABEL_REF:
      goto L3858;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L4540;

 L9988: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3873;
    }
  goto L3056;

 L3873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 556;  /* indirect_jump_si */
    }
  x1 = XEXP (x0, 1);
  goto L3056;

 L9989: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3877;
    }
  goto L3056;

 L3877: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 557;  /* indirect_jump_di */
    }
  x1 = XEXP (x0, 1);
  goto L3056;

 L3190: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4540;

 L3858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L3859;

 L3859: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5835 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && TARGET_ABSOLUTE_JUMPS))
    {
      return 553;  /* *jump_absolute */
    }
 L3864: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5842 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_ABSOLUTE_JUMPS))
    {
      return 554;  /* *jump_pic */
    }
 L3869: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5860 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 555;  /* *jump_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L4540;

 L4096: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L4097;
  x1 = XEXP (x0, 0);
  goto L4540;

 L4097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4098;
  x1 = XEXP (x0, 0);
  goto L4540;

 L4098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L4099;
    }
  x1 = XEXP (x0, 0);
  goto L4540;

 L4099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L4100;

 L4100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6440 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 588;  /* sibcall_value_internal */
    }
 L4185: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 594;  /* call_value_internal */
    }
 L4203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6595 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 595;  /* call_value_split */
    }
  x1 = XEXP (x0, 0);
  goto L4540;

 L4541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 61)
    goto L4542;
  x1 = XEXP (x0, 0);
  goto L4576;

 L4542: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 56 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_SYNC))
    {
      return 630;  /* *memory_barrier */
    }
  x1 = XEXP (x0, 0);
  goto L4576;

 L9333: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L4577;
    }
 L9341: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5922;
    }
  goto L5663;

 L4577: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10001;
  x1 = XEXP (x0, 0);
  goto L9341;

 L10001: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE)
    goto L10004;
  x1 = XEXP (x0, 0);
  goto L9341;

 L10004: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10007;
    case 3:
      goto L10008;
    case 4:
      goto L10009;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L10007: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 55)
    goto L4578;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L10010;
 L5242: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5243;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L10010: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4579;
    case MINUS:
      goto L4981;
    case IOR:
      goto L5087;
    case XOR:
      goto L5093;
    case AND:
      goto L5099;
    default:
     break;
   }
  goto L5242;

 L4579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4580;
  goto L5242;

 L4580: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4581;
    }
  goto L5242;

 L4581: ATTRIBUTE_UNUSED_LABEL
  if (
#line 114 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 634;  /* sync_addsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L5242;

 L4981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4982;
  goto L5242;

 L4982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4983;
    }
  goto L5242;

 L4983: ATTRIBUTE_UNUSED_LABEL
  if (
#line 368 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 654;  /* sync_subsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L5242;

 L5087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5088;
    }
  goto L5242;

 L5088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 664;  /* sync_iorsi */
    }
  goto L5242;

 L5093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5094;
    }
  goto L5242;

 L5094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 665;  /* sync_xorsi */
    }
  goto L5242;

 L5099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5100;
    }
  goto L5242;

 L5100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 666;  /* sync_andsi */
    }
  goto L5242;

 L5243: ATTRIBUTE_UNUSED_LABEL
  if (
#line 484 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 682;  /* sync_nandsi */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L10008: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 58)
    goto L4604;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4605;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4606;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4606: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode)
    goto L10015;
  x1 = XEXP (x0, 0);
  goto L9341;

 L10015: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4607;
    case MINUS:
      goto L4628;
    case IOR:
      goto L4649;
    case XOR:
      goto L4670;
    case AND:
      goto L4691;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4608;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4609;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4609: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 636;  /* sync_add_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4629;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4630;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4630: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 637;  /* sync_sub_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4650;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4651;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 638;  /* sync_ior_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4671;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4672;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 639;  /* sync_xor_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4692;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4693;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4693: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 640;  /* sync_and_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L10009: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 58)
    goto L4933;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4933: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4934;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4934: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4935;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4935: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0]))
    goto L4936;
  x1 = XEXP (x0, 0);
  goto L9341;

 L4936: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4937;
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L4937: ATTRIBUTE_UNUSED_LABEL
  if (
#line 268 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 651;  /* sync_nand_12 */
    }
  x1 = XEXP (x0, 0);
  goto L9341;

 L5922: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10020;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10020: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5663;

 L9334: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4584;
    }
 L9344: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L6228;
    }
  goto L5663;

 L4584: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 55)
    goto L4585;
  x1 = XEXP (x0, 0);
  goto L9344;

 L4585: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L10095;
 L5247: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5248;
    }
  x1 = XEXP (x0, 0);
  goto L9344;

 L10095: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4586;
    case MINUS:
      goto L4988;
    case IOR:
      goto L5105;
    case XOR:
      goto L5111;
    case AND:
      goto L5117;
    default:
     break;
   }
  goto L5247;

 L4586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4587;
  goto L5247;

 L4587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4588;
    }
  goto L5247;

 L4588: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 114 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 635;  /* sync_adddi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L5247;

 L4988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4989;
  goto L5247;

 L4989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4990;
    }
  goto L5247;

 L4990: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 368 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 655;  /* sync_subdi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L5247;

 L5105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5106;
    }
  goto L5247;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 667;  /* sync_iordi */
    }
  goto L5247;

 L5111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5112;
    }
  goto L5247;

 L5112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 668;  /* sync_xordi */
    }
  goto L5247;

 L5117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5118;
    }
  goto L5247;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 443 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 669;  /* sync_anddi */
    }
  goto L5247;

 L5248: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 484 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 683;  /* sync_nanddi */
    }
  x1 = XEXP (x0, 0);
  goto L9344;

 L6228: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10100;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10100: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5663;

 L9335: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L5454;
    }
  goto L5663;

 L5454: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L10173;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10173: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L5455;
    case UNSPEC:
      goto L10187;
    case VEC_SELECT:
      goto L5480;
    case VEC_CONCAT:
      goto L5490;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10198;
    case DImode:
      goto L10199;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10198: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L5456;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5457;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5458;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5459;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5460;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 52 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 701;  /* *movcc_v2sf_si */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10199: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L5465;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5466;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5467;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5468;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5469;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5469: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 52 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 702;  /* *movcc_v2sf_di */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10187: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L10200;
    case 2:
      goto L10202;
    case 1:
      goto L10203;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10200: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 65L:
      goto L5473;
    case 67L:
      goto L5503;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5473: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5474;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5475;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5475: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, CCV2mode))
    {
      operands[3] = x2;
      goto L5476;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5476: ATTRIBUTE_UNUSED_LABEL
  if (
#line 65 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 703;  /* mips_cond_move_tf_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5503: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5504;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5504: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5505;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5505: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5506;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 358 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 707;  /* mips_alnv_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10202: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 69L:
      goto L5510;
    case 72L:
      goto L5531;
    case 75L:
      goto L5751;
    case 77L:
      goto L5784;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5510: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5511;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5511: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5512;
    }
 L5517: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[1])
      && 
#line 379 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 709;  /* reduc_splus_v2sf */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 369 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 708;  /* mips_addr_ps */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 1);
  goto L5517;

 L5531: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5532;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5532: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5533;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5533: ATTRIBUTE_UNUSED_LABEL
  if (
#line 408 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 712;  /* mips_mulr_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5751: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5752;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5752: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5753;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5753: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 742;  /* mips_rsqrt2_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5785;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5785: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5786;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5786: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 706 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 748;  /* mips_recip2_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10203: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 70L:
      goto L5521;
    case 71L:
      goto L5526;
    case 73L:
      goto L5537;
    case 74L:
      goto L5734;
    case 76L:
      goto L5767;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5521: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5522;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 387 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 710;  /* mips_cvt_pw_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5526: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5527;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5527: ATTRIBUTE_UNUSED_LABEL
  if (
#line 397 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 711;  /* mips_cvt_ps_pw */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5537: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5538;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 433 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 713;  /* *mips_abs_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5734: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5735;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5735: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 739;  /* mips_rsqrt1_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5768;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5768: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 696 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 767 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 745;  /* mips_recip1_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L5481;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5482;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5483;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L5484;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5485;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5485: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_2_or_3_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5486;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5486: ATTRIBUTE_UNUSED_LABEL
  if (
#line 100 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 704;  /* vec_perm_const_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5491;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5492;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5492: ATTRIBUTE_UNUSED_LABEL
  if (
#line 271 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 705;  /* vec_concatv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9336: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L5495;
    }
  goto L5663;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L10211;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10211: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L5496;
    case UNSPEC:
      goto L10216;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5497;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L5498;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5498: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5499;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5499: ATTRIBUTE_UNUSED_LABEL
  if (
#line 290 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 706;  /* vec_extractv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10216: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10220;
    case 2:
      goto L10221;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10220: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74L:
      goto L5724;
    case 76L:
      goto L5757;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5724: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5725;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5725: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 737;  /* mips_rsqrt1_s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5757: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5758;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5758: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 696 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 743;  /* mips_recip1_s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10221: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 75L:
      goto L5739;
    case 77L:
      goto L5772;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5739: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5740;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5740: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5741;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5741: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 740;  /* mips_rsqrt2_s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5773;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5773: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5774;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5774: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 706 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 765 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 746;  /* mips_recip2_s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9337: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L5541;
    }
  goto L5663;

 L5541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 68)
    goto L5542;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5542: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10224;
    case DFmode:
      goto L10225;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10224: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5543;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5543: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5544;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5544: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5545;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5545: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 448 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 770 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 714;  /* mips_cabs_cond_s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10225: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5550;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5550: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5551;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5551: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5552;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5552: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 448 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 771 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 715;  /* mips_cabs_cond_d */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9338: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L5555;
    }
  goto L5663;

 L5555: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L10226;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10226: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10228;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10228: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L10230;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10230: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 66L:
      goto L5556;
    case 68L:
      goto L5565;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5556: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5557;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5557: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5558;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5558: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5559;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L5560;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L5561;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 466 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 716;  /* mips_c_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5565: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5566;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5566: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5567;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5567: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5568;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L5569;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5569: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L5570;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5570: ATTRIBUTE_UNUSED_LABEL
  if (
#line 495 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 717;  /* mips_cabs_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9339: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV2mode))
    {
      operands[0] = x1;
      goto L5573;
    }
  goto L5663;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV2mode)
    goto L10232;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10232: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10235;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10235: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L10238;
    case 1:
      goto L10240;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10238: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 66L:
      goto L5574;
    case 68L:
      goto L5581;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5575;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5576;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5576: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5577;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 527 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 718;  /* mips_c_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5582;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5583;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5584;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 538 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 719;  /* mips_cabs_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10240: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 79)
    goto L5588;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case UNORDERED:
      goto L5589;
    case UNEQ:
      goto L5596;
    case UNLT:
      goto L5603;
    case UNLE:
      goto L5610;
    case EQ:
      goto L5617;
    case LT:
      goto L5624;
    case LE:
      goto L5631;
    case GE:
      goto L5638;
    case GT:
      goto L5645;
    case UNGE:
      goto L5652;
    case UNGT:
      goto L5659;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5590;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5591;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 720;  /* sunordered_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5597;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5598;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 721;  /* suneq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5604;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5605;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5605: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 722;  /* sunlt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5611;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5612;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 723;  /* sunle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5618;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5619;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5619: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 724;  /* seq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5625;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5626;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5626: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 725;  /* slt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5632;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5633;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5633: ATTRIBUTE_UNUSED_LABEL
  if (
#line 554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 726;  /* sle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5639;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5640;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5640: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 727;  /* sge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5646;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5647;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5647: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 728;  /* sgt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5653;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5654;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5654: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 729;  /* sunge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5660;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5661;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 730;  /* sungt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9340: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L5728;
    }
  goto L5663;

 L5728: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10241;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10241: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10245;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10245: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L10249;
    case 2:
      goto L10250;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10249: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74L:
      goto L5729;
    case 76L:
      goto L5762;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5729: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5730;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5730: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 677 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 738;  /* mips_rsqrt1_d */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5762: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5763;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5763: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 696 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 744;  /* mips_recip1_d */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10250: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 75L:
      goto L5745;
    case 77L:
      goto L5778;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5745: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5746;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5746: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5747;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5747: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 687 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 741;  /* mips_rsqrt2_d */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5779;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5780;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5780: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 706 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D) && 
#line 766 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 747;  /* mips_recip2_d */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9342: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L5951;
    }
  goto L5663;

 L5951: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L10253;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10253: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10264;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10264: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L10275;
    case 1:
      goto L10277;
    case 3:
      goto L10278;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10275: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 89L:
      goto L5952;
    case 105L:
      goto L6080;
    case 151L:
      goto L6830;
    case 152L:
      goto L6836;
    case 172L:
      goto L7038;
    case 176L:
      goto L7065;
    case 177L:
      goto L7071;
    case 181L:
      goto L7105;
    case 182L:
      goto L7111;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5952: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5953;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5953: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5954;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 248 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 765;  /* mips_precrq_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6080: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6081;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6081: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6082;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6082: ATTRIBUTE_UNUSED_LABEL
  if (
#line 437 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 783;  /* mips_shrl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6830: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6831;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6831: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6832;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6832: ATTRIBUTE_UNUSED_LABEL
  if (
#line 115 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 859;  /* mips_adduh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6836: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6837;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6837: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6838;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6838: ATTRIBUTE_UNUSED_LABEL
  if (
#line 125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 860;  /* mips_adduh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7039;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7039: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7040;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7040: ATTRIBUTE_UNUSED_LABEL
  if (
#line 315 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 874;  /* mips_precr_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7065: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L7066;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7066: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7067;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7067: ATTRIBUTE_UNUSED_LABEL
  if (
#line 370 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 878;  /* mips_shra_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7071: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L7072;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7072: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7073;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7073: ATTRIBUTE_UNUSED_LABEL
  if (
#line 389 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 879;  /* mips_shra_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7105: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L7106;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7106: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L7107;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 451 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 883;  /* mips_subuh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7111: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L7112;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7112: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L7113;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 461 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 884;  /* mips_subuh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10277: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 128)
    goto L6386;
  x1 = XEXP (x0, 0);
  goto L5663;

 L6386: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6387;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6387: ATTRIBUTE_UNUSED_LABEL
  if (
#line 792 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 807;  /* mips_repl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10278: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 136)
    goto L6456;
  x1 = XEXP (x0, 0);
  goto L5663;

 L6456: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6457;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6457: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6458;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6458: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 888 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 819;  /* mips_pick_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9343: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L5957;
    }
  goto L5663;

 L5957: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L10286;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10286: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10307;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10307: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L10328;
    case 1:
      goto L10329;
    case 3:
      goto L10340;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10328: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 90L:
      goto L5958;
    case 106L:
      goto L6086;
    case 107L:
      goto L6098;
    case 137L:
      goto L6462;
    case 178L:
      goto L7077;
    case 183L:
      goto L7117;
    case 184L:
      goto L7123;
    case 187L:
      goto L7141;
    case 188L:
      goto L7147;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5958: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5959;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5959: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5960;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 258 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 766;  /* mips_precrq_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6086: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6087;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6087: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6088;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6088: ATTRIBUTE_UNUSED_LABEL
  if (
#line 456 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 784;  /* mips_shra_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6098: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6099;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6099: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6100;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 474 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 786;  /* mips_shra_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6462: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6463;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6463: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6464;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 899 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 820;  /* mips_packrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7077: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7078;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7078: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7079;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7079: ATTRIBUTE_UNUSED_LABEL
  if (
#line 407 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 880;  /* mips_shrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7117: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7118;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7118: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7119;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7119: ATTRIBUTE_UNUSED_LABEL
  if (
#line 471 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 885;  /* mips_addqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7123: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7124;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7124: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7125;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7125: ATTRIBUTE_UNUSED_LABEL
  if (
#line 481 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 886;  /* mips_addqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7141: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7142;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7142: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7143;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 511 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 889;  /* mips_subqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7147: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L7148;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7148: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L7149;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 521 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 890;  /* mips_subqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10329: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 95L:
      goto L5996;
    case 96L:
      goto L6001;
    case 97L:
      goto L6006;
    case 98L:
      goto L6011;
    case 99L:
      goto L6016;
    case 100L:
      goto L6021;
    case 101L:
      goto L6026;
    case 102L:
      goto L6031;
    case 129L:
      goto L6391;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5997;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L5997: ATTRIBUTE_UNUSED_LABEL
  if (
#line 316 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 771;  /* mips_precequ_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6002;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 325 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 772;  /* mips_precequ_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6006: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6007;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6007: ATTRIBUTE_UNUSED_LABEL
  if (
#line 334 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 773;  /* mips_precequ_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6011: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6012;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6012: ATTRIBUTE_UNUSED_LABEL
  if (
#line 343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 774;  /* mips_precequ_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6016: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6017;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6017: ATTRIBUTE_UNUSED_LABEL
  if (
#line 353 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 775;  /* mips_preceu_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6022;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 362 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 776;  /* mips_preceu_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6027;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 371 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 777;  /* mips_preceu_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6032;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 380 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 778;  /* mips_preceu_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6391: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_imm10_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6392;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6392: ATTRIBUTE_UNUSED_LABEL
  if (
#line 809 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 808;  /* mips_repl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10340: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 136L:
      goto L6450;
    case 173L:
      goto L7044;
    case 174L:
      goto L7051;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6450: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6451;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6451: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6452;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6452: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 888 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 818;  /* mips_pick_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7044: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7045;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7045: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7046;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7046: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7047;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7047: ATTRIBUTE_UNUSED_LABEL
  if (
#line 326 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 875;  /* mips_precr_sra_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7051: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7052;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7052: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7053;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7053: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7054;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7054: ATTRIBUTE_UNUSED_LABEL
  if (
#line 341 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 876;  /* mips_precr_sra_r_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9345: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 186)
    goto L6395;
  goto L5663;

 L6395: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCDSPmode)
    goto L10349;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10349: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L10352;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10352: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L10355;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10355: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 130L:
      goto L6396;
    case 131L:
      goto L6408;
    case 132L:
      goto L6420;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6396: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L10358;
    case V4QImode:
      goto L10359;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10358: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L6397;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6397: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6398;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6398: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 824 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 809;  /* mips_cmp_eq_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10359: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L6403;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6403: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6404;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6404: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 824 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 810;  /* mips_cmpu_eq_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L10360;
    case V4QImode:
      goto L10361;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10360: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L6409;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6410;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6410: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 835 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 811;  /* mips_cmp_lt_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10361: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L6415;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6415: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6416;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6416: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 835 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 812;  /* mips_cmpu_lt_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6420: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L10362;
    case V4QImode:
      goto L10363;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10362: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L6421;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6421: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6422;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 846 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 813;  /* mips_cmp_le_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10363: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L6427;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6428;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 846 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 814;  /* mips_cmpu_le_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9346: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QQmode))
    {
      operands[0] = x1;
      goto L7230;
    }
  goto L5663;

 L7230: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QQmode)
    goto L10364;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10364: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7231;
    case MINUS:
      goto L7437;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L7232;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 899;  /* addqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L7438;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 925;  /* subqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9347: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HQmode))
    {
      operands[0] = x1;
      goto L7235;
    }
  goto L5663;

 L7235: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HQmode)
    goto L10366;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10366: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7236;
    case MINUS:
      goto L7442;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L7237;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 900;  /* addhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L7443;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 926;  /* subhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9348: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SQmode))
    {
      operands[0] = x1;
      goto L7240;
    }
  goto L5663;

 L7240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SQmode)
    goto L10368;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10368: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7241;
    case MINUS:
      goto L7447;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L7242;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 901;  /* addsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L7448;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 927;  /* subsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9349: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DQmode))
    {
      operands[0] = x1;
      goto L7245;
    }
  goto L5663;

 L7245: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DQmode)
    goto L10370;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10370: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7246;
    case MINUS:
      goto L7452;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L7247;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L7248;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7248: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 902;  /* adddq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L7453;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L7454;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 928;  /* subdq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9350: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UQQmode))
    {
      operands[0] = x1;
      goto L7251;
    }
  goto L5663;

 L7251: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UQQmode)
    goto L10372;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10372: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7252;
    case MINUS:
      goto L7458;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L7253;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 903;  /* adduqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L7459;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 929;  /* subuqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9351: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHQmode))
    {
      operands[0] = x1;
      goto L7256;
    }
  goto L5663;

 L7256: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHQmode)
    goto L10374;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10374: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7257;
    case MINUS:
      goto L7463;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L7258;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 904;  /* adduhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L7464;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 930;  /* subuhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USQmode))
    {
      operands[0] = x1;
      goto L7261;
    }
  goto L5663;

 L7261: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USQmode)
    goto L10376;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10376: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7262;
    case MINUS:
      goto L7468;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L7263;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 905;  /* addusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L7469;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 931;  /* subusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9353: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDQmode))
    {
      operands[0] = x1;
      goto L7266;
    }
  goto L5663;

 L7266: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDQmode)
    goto L10378;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10378: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7267;
    case MINUS:
      goto L7473;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L7268;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L7269;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7269: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 906;  /* addudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L7474;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L7475;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 932;  /* subudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9354: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HAmode))
    {
      operands[0] = x1;
      goto L7272;
    }
  goto L5663;

 L7272: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HAmode)
    goto L10380;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10380: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7273;
    case MINUS:
      goto L7479;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L7274;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 907;  /* addha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L7480;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 933;  /* subha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9355: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SAmode))
    {
      operands[0] = x1;
      goto L7277;
    }
  goto L5663;

 L7277: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SAmode)
    goto L10382;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10382: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7278;
    case MINUS:
      goto L7484;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L7279;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 908;  /* addsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L7485;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 934;  /* subsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9356: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DAmode))
    {
      operands[0] = x1;
      goto L7282;
    }
  goto L5663;

 L7282: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DAmode)
    goto L10384;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10384: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7283;
    case MINUS:
      goto L7489;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L7284;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L7285;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7285: ATTRIBUTE_UNUSED_LABEL
  if (
#line 24 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 909;  /* addda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L7490;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L7491;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7491: ATTRIBUTE_UNUSED_LABEL
  if (
#line 24 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 935;  /* subda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9357: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHAmode))
    {
      operands[0] = x1;
      goto L7288;
    }
  goto L5663;

 L7288: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHAmode)
    goto L10386;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10386: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7289;
    case MINUS:
      goto L7495;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L7290;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 910;  /* adduha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L7496;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 936;  /* subuha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9358: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USAmode))
    {
      operands[0] = x1;
      goto L7293;
    }
  goto L5663;

 L7293: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USAmode)
    goto L10388;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10388: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7294;
    case MINUS:
      goto L7500;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L7295;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 911;  /* addusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L7501;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 937;  /* subusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9359: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDAmode))
    {
      operands[0] = x1;
      goto L7298;
    }
  goto L5663;

 L7298: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDAmode)
    goto L10390;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10390: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7299;
    case MINUS:
      goto L7505;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L7300;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L7301;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7301: ATTRIBUTE_UNUSED_LABEL
  if (
#line 25 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 912;  /* adduda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L7506;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L7507;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7507: ATTRIBUTE_UNUSED_LABEL
  if (
#line 25 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 938;  /* subuda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9360: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7749;
    }
 L9365: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7773;
    }
  goto L5663;

 L7749: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L7750;
    }
  x1 = XEXP (x0, 0);
  goto L9365;

 L7750: ATTRIBUTE_UNUSED_LABEL
  if (
#line 115 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 956;  /* movv2si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9365;

 L7773: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L10392;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10392: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_CONCAT:
      goto L7774;
    case PLUS:
      goto L7804;
    case AND:
      goto L7852;
    case IOR:
      goto L7898;
    case XOR:
      goto L7916;
    case NOT:
      goto L7958;
    case UNSPEC:
      goto L10408;
    case ASHIFT:
      goto L8165;
    case ASHIFTRT:
      goto L8177;
    case LSHIFTRT:
      goto L8189;
    case MINUS:
      goto L8201;
    case VEC_SELECT:
      goto L8290;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7775;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7776;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 149 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 961;  /* *vec_concatv2si */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7805;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7806;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7806: ATTRIBUTE_UNUSED_LABEL
  if (
#line 184 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 965;  /* addv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10413;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10413: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7853;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7881;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L7854;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode)
    goto L10416;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10416: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7937;
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7855;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L7938;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7938: ATTRIBUTE_UNUSED_LABEL
  if (
#line 264 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 986;  /* *loongson_nor */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7855: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 973;  /* loongson_pandn_w */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7882;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7882: ATTRIBUTE_UNUSED_LABEL
  if (
#line 236 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 977;  /* andv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7899;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7900;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7900: ATTRIBUTE_UNUSED_LABEL
  if (
#line 245 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 980;  /* iorv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7917;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7918;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7918: ATTRIBUTE_UNUSED_LABEL
  if (
#line 254 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 983;  /* xorv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7959;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 989;  /* one_cmplv2si2 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L10408: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L10417;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10417: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 198L:
      goto L7985;
    case 199L:
      goto L8003;
    case 203L:
      goto L8078;
    case 216L:
      goto L8401;
    case 217L:
      goto L8425;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7985: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7986;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7986: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7987;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L7987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 994;  /* loongson_pcmpeqw */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8003: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8004;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8004: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8005;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8005: ATTRIBUTE_UNUSED_LABEL
  if (
#line 302 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 997;  /* loongson_pcmpgtw */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8078: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8079;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8080;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8080: ATTRIBUTE_UNUSED_LABEL
  if (
#line 394 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1006;  /* loongson_pmaddhw */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8401: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8402;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8402: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8403;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8403: ATTRIBUTE_UNUSED_LABEL
  if (
#line 842 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1047;  /* vec_shl_v2si */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8426;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8427;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1051;  /* vec_shr_v2si */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8166;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8167;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 569 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1021;  /* ashlv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8178;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8179;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8179: ATTRIBUTE_UNUSED_LABEL
  if (
#line 578 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1023;  /* ashrv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8190;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8191;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8191: ATTRIBUTE_UNUSED_LABEL
  if (
#line 587 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1025;  /* lshrv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8202;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8203;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1027;  /* subv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L8291;
  x1 = XEXP (x0, 0);
  goto L5663;

 L8291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8292;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8293;
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8294;
  x1 = XEXP (x0, 0);
  goto L5663;

 L8294: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L10422;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10422: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L8295;
      case 0L:
        goto L8371;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8295: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 679 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1038;  /* loongson_punpckhwd */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L8371: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 1044;  /* loongson_punpcklwd */
    }
  x1 = XEXP (x0, 0);
  goto L5663;

 L9361: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7753;
    }
 L9363: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7761;
    }
  goto L5663;

 L7753: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L7754;
    }
  x1 = XEXP (x0, 0);
  goto L9363;

 L7754: ATTRIBUTE_UNUSED_LABEL
  if (
#line 115 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 957;  /* movv4hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9363;

 L7761: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L10424;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10424: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5663;

 L9362: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7757;
    }
 L9364: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7767;
    }
  goto L5663;

 L7757: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L7758;
    }
  x1 = XEXP (x0, 0);
  goto L9364;

 L7758: ATTRIBUTE_UNUSED_LABEL
  if (
#line 115 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 958;  /* movv8qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L9364;

 L7767: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L10500;
  x1 = XEXP (x0, 0);
  goto L5663;

 L10500: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5663;

 L5664: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L5665;
  goto ret0;

 L5665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L5666;
    case GE:
      goto L6791;
    default:
     break;
   }
 L5701: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5702;
    }
  goto ret0;

 L5666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCV4mode:
      goto L10557;
    case CCV2mode:
      goto L10558;
    default:
      break;
    }
  goto L5701;

 L10557: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV4mode))
    {
      operands[1] = x3;
      goto L5667;
    }
  goto L5701;

 L5667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10559;
  goto L5701;

 L10559: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L5668;
      case -1L:
        goto L5677;
      default:
        break;
      }
  goto L5701;

 L5668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5669;
  x2 = XEXP (x1, 0);
  goto L5701;

 L5669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5670;

 L5670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 581 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 731;  /* bc1any4t */
    }
  x2 = XEXP (x1, 0);
  goto L5701;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5678;
  x2 = XEXP (x1, 0);
  goto L5701;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5679;

 L5679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 592 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 732;  /* bc1any4f */
    }
  x2 = XEXP (x1, 0);
  goto L5701;

 L10558: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV2mode))
    {
      operands[1] = x3;
      goto L5685;
    }
  goto L5701;

 L5685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L10561;
  goto L5701;

 L10561: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L5686;
      case -1L:
        goto L5695;
      default:
        break;
      }
  goto L5701;

 L5686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5687;
  x2 = XEXP (x1, 0);
  goto L5701;

 L5687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5688;

 L5688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 603 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 733;  /* bc1any2t */
    }
  x2 = XEXP (x1, 0);
  goto L5701;

 L5695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5696;
  x2 = XEXP (x1, 0);
  goto L5701;

 L5696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5697;

 L5697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 614 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_MIPS3D))
    {
      return 734;  /* bc1any2f */
    }
  x2 = XEXP (x1, 0);
  goto L5701;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6792;
  goto ret0;

 L6792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6793;
    }
  goto ret0;

 L6793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6794;
  goto ret0;

 L6794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L6795;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 1190 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 855;  /* mips_bposge */
    }
  goto ret0;

 L5702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 78)
    goto L5703;
  goto ret0;

 L5703: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, CCV2mode))
    {
      operands[2] = x4;
      goto L5704;
    }
  goto ret0;

 L5704: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L5705;
    }
  goto ret0;

 L5705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5706;
  goto ret0;

 L5706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5707;
    case PC:
      goto L5718;
    default:
     break;
   }
  goto ret0;

 L5707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5708;

 L5708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 638 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 735;  /* *branch_upper_lower */
    }
  goto ret0;

 L5718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5719;
  goto ret0;

 L5719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5720;

 L5720: ATTRIBUTE_UNUSED_LABEL
  if (
#line 659 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 736;  /* *branch_upper_lower_inverted */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L191;
    case PLUS:
      goto L305;
    case MINUS:
      goto L324;
    case NEG:
      goto L415;
    case TRUNCATE:
      goto L603;
    case FIX:
      goto L1888;
    case UNSPEC:
      goto L10586;
    case UNSPEC_VOLATILE:
      goto L10587;
    case SUBREG:
    case MEM:
      goto L10584;
    default:
      goto ret0;
   }
 L10584: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4547;
    }
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L192;
    }
  goto ret0;

 L192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L193;
    }
  goto ret0;

 L193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L194;
  goto ret0;

 L194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L195;
    }
  goto ret0;

 L195: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1507 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MUL3))
    {
      return 34;  /* mulsi3_mul3 */
    }
 L237: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1555 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
    {
      return 38;  /* mulsi3_r4000 */
    }
  goto ret0;

 L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L306;
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L307;
    }
  goto ret0;

 L307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L308;
    }
  goto ret0;

 L308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L309;
    }
  goto ret0;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L310;
  goto ret0;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L311;
    }
  goto ret0;

 L311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1662 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MACC))
    {
      return 42;  /* *macc */
    }
  goto ret0;

 L324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L325;
    }
  goto ret0;

 L325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L326;
  goto ret0;

 L326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L327;
    }
  goto ret0;

 L327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L328;
    }
  goto ret0;

 L328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L329;
  goto ret0;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L330;
    }
  goto ret0;

 L330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1684 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MSAC))
    {
      return 43;  /* *msac */
    }
  goto ret0;

 L415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L416;
  goto ret0;

 L416: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L417;
    }
  goto ret0;

 L417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L418;
    }
  goto ret0;

 L418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L419;
  goto ret0;

 L419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L420;
    }
  goto ret0;

 L420: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1878 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULS))
    {
      return 48;  /* *muls */
    }
  goto ret0;

 L603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L604;
  goto ret0;

 L604: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L10588;
  goto ret0;

 L10588: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L605;
    case NEG:
      goto L701;
    default:
     break;
   }
  goto ret0;

 L605: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L10590;
  goto ret0;

 L10590: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L606;
    case ZERO_EXTEND:
      goto L630;
    default:
     break;
   }
  goto ret0;

 L606: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L607;
    }
  goto ret0;

 L607: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L608;
  goto ret0;

 L608: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L609;
    }
  goto ret0;

 L609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L610;
  goto ret0;

 L610: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L611;
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L612;
    }
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16))
    {
      return 62;  /* smulsi3_highpart_internal */
    }
 L660: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2146 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 64;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L630: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L631;
    }
  goto ret0;

 L631: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L632;
  goto ret0;

 L632: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L633;
    }
  goto ret0;

 L633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L634;
  goto ret0;

 L634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L635;
  goto ret0;

 L635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L636;
    }
  goto ret0;

 L636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16))
    {
      return 63;  /* umulsi3_highpart_internal */
    }
 L684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2146 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 65;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L701: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L702;
  goto ret0;

 L702: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L10592;
  goto ret0;

 L10592: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L703;
    case ZERO_EXTEND:
      goto L729;
    default:
     break;
   }
  goto ret0;

 L703: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L704;
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L705;
  goto ret0;

 L705: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L706;
    }
  goto ret0;

 L706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L707;
  goto ret0;

 L707: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L708;
  goto ret0;

 L708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L709;
    }
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 66;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L730;
    }
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L731;
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L732;
    }
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L733;
  goto ret0;

 L733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L734;
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L735;
    }
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 67;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L10594;
    case SFmode:
      goto L10595;
    default:
      break;
    }
  goto ret0;

 L10594: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1889;
    }
  goto ret0;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1890;
  goto ret0;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1891;
    }
  goto ret0;

 L1891: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3501 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 232;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L10595: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1907;
    }
  goto ret0;

 L1907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1908;
  goto ret0;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1909;
    }
  goto ret0;

 L1909: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3538 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 234;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L10586: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4453;
  goto ret0;

 L4453: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4454;
  goto ret0;

 L4454: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4455;
  goto ret0;

 L4455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && (
#line 6896 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 622;  /* tls_get_tp_si */
    }
  goto ret0;

 L10587: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4838;
  goto ret0;

 L4838: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4839;
    }
  goto ret0;

 L4839: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4840;
    }
  goto ret0;

 L4840: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4841;
    }
  goto ret0;

 L4841: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_MODE (x3) == SImode)
    goto L10596;
 L4969: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4970;
    }
  goto ret0;

 L10596: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4842;
    case MINUS:
      goto L4859;
    case IOR:
      goto L4876;
    case XOR:
      goto L4893;
    case AND:
      goto L4910;
    default:
     break;
   }
  goto L4969;

 L4842: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4843;
  goto L4969;

 L4843: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4844;
    }
  goto L4969;

 L4844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4846;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4847;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4847: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4848;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4848: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4849: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4850;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4850: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 232 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 646;  /* sync_new_add_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4859: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4860;
  goto L4969;

 L4860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4861;
    }
  goto L4969;

 L4861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4862;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4863;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4864: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4865;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4865: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4866;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4866: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4867;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 232 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 647;  /* sync_new_sub_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4876: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4877;
  goto L4969;

 L4877: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4878;
    }
  goto L4969;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4879;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4880;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4881;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4881: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4882;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4883;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4883: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 232 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 648;  /* sync_new_ior_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4894;
  goto L4969;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4895;
    }
  goto L4969;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4898;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4898: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4899;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4899: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4900;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4900: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4901;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 232 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 649;  /* sync_new_xor_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4911;
  goto L4969;

 L4911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4912;
    }
  goto L4969;

 L4912: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4913;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4914;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4915;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4915: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4916: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 232 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 650;  /* sync_new_and_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 3);
  goto L4969;

 L4970: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4971;
  goto ret0;

 L4971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4972;
  goto ret0;

 L4972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 57)
    goto L4973;
  goto ret0;

 L4973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4974;
  goto ret0;

 L4974: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4975;
  goto ret0;

 L4975: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4976;
  goto ret0;

 L4976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 351 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 653;  /* sync_new_nand_12 */
    }
  goto ret0;

 L4547: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4548;
  goto ret0;

 L4548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4549;
  goto ret0;

 L4549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10601;
  goto ret0;

 L10601: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L10605;
  goto ret0;

 L10605: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10609;
    case 4:
      goto L10610;
    case 3:
      goto L10611;
    case 1:
      goto L10612;
    default:
      break;
    }
  goto ret0;

 L10609: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 53)
    goto L4550;
  goto ret0;

 L4550: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4551;
    }
  goto ret0;

 L4551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4552;
    }
  goto ret0;

 L4552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 67 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 631;  /* sync_compare_and_swapsi */
    }
  goto ret0;

 L10610: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 54)
    goto L4570;
  goto ret0;

 L4570: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4571;
    }
  goto ret0;

 L4571: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4572;
    }
  goto ret0;

 L4572: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4573;
    }
  goto ret0;

 L4573: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L4574;
    }
  goto ret0;

 L4574: ATTRIBUTE_UNUSED_LABEL
  if (
#line 99 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 633;  /* compare_and_swap_12 */
    }
  goto ret0;

 L10611: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 58)
    goto L4716;
  goto ret0;

 L4716: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4717;
    }
  goto ret0;

 L4717: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4718;
    }
  goto ret0;

 L4718: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L10613;
 L4960: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4961;
    }
  goto ret0;

 L10613: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4719;
    case MINUS:
      goto L4747;
    case IOR:
      goto L4775;
    case XOR:
      goto L4803;
    case AND:
      goto L4831;
    default:
     break;
   }
  goto L4960;

 L4719: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4720;
  goto L4960;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4721;
    }
  goto L4960;

 L4721: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 641;  /* sync_old_add_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4960;

 L4747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4748;
  goto L4960;

 L4748: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4749;
    }
  goto L4960;

 L4749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 642;  /* sync_old_sub_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4960;

 L4775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4776;
  goto L4960;

 L4776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4777;
    }
  goto L4960;

 L4777: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 643;  /* sync_old_ior_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4960;

 L4803: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4804;
  goto L4960;

 L4804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4805;
    }
  goto L4960;

 L4805: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 644;  /* sync_old_xor_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4960;

 L4831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4832;
  goto L4960;

 L4832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4833;
    }
  goto L4960;

 L4833: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 645;  /* sync_old_and_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4960;

 L4961: ATTRIBUTE_UNUSED_LABEL
  if (
#line 307 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 652;  /* sync_old_nand_12 */
    }
  goto ret0;

 L10612: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 55)
    goto L4998;
  goto ret0;

 L4998: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L10618;
  goto ret0;

 L10618: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4999;
    case MINUS:
      goto L5021;
    default:
     break;
   }
  goto ret0;

 L4999: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5000;
  goto ret0;

 L5000: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5001;
    }
  goto ret0;

 L5001: ATTRIBUTE_UNUSED_LABEL
  if (
#line 383 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 656;  /* sync_old_addsi */
    }
  goto ret0;

 L5021: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5022;
  goto ret0;

 L5022: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5023;
    }
  goto ret0;

 L5023: ATTRIBUTE_UNUSED_LABEL
  if (
#line 398 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 658;  /* sync_old_subsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L10575;
    case REG:
      goto L10576;
    default:
     break;
   }
 L10565: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L190;
    }
 L10567: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L363;
    }
 L10574: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4592;
    }
  goto ret0;

 L10575: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2841;
    }
  goto L10574;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 18)
    goto L2842;
  x2 = XEXP (x1, 0);
  goto L10574;

 L2842: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2843;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L2843: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2844;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L2844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2846;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L2846: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5059 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 395;  /* potential_cprestore_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L10576: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 28)
    goto L4039;
  goto L10565;

 L4039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 20)
    goto L4040;
  x2 = XEXP (x1, 0);
  goto L10565;

 L4040: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4041;
  x2 = XEXP (x1, 0);
  goto L10565;

 L4041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4042;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10565;

 L4042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4043;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10565;

 L4043: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 579;  /* restore_gp_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10565;

 L190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10577;
  x2 = XEXP (x1, 0);
  goto L10567;

 L10577: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L10567;

 L363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10620;
  x2 = XEXP (x1, 0);
  goto L10574;

 L10620: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L364;
    case MINUS:
      goto L379;
    case DIV:
      goto L1222;
    case UDIV:
      goto L1244;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10574;

 L364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L365;
  x2 = XEXP (x1, 0);
  goto L10574;

 L365: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L366;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L366: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L367;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L368;
  x2 = XEXP (x1, 0);
  goto L10574;

 L368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L369;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L370;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L371;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L372;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L373;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1732 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed))
    {
      return 45;  /* *macc2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L380;
  x2 = XEXP (x1, 0);
  goto L10574;

 L380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L381;
  x2 = XEXP (x1, 0);
  goto L10574;

 L381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L382;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L383;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L383: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L384;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L385;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L386;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 1747 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed))
    {
      return 46;  /* *msac2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1223;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1224;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L1224: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1226;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2575 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16))
    {
      return 119;  /* divmodsi4_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1245;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L1245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1246;
    }
  x2 = XEXP (x1, 0);
  goto L10574;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1248;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2615 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 121;  /* udivmodsi4_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10574;

 L4592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10624;
  goto ret0;

 L10624: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L10626;
  goto ret0;

 L10626: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 3:
      goto L10628;
    case 4:
      goto L10629;
    default:
      break;
    }
  goto ret0;

 L10628: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 58)
    goto L4593;
  goto ret0;

 L4593: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4594;
    }
  goto ret0;

 L4594: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4595;
    }
  goto ret0;

 L4595: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L10630;
  goto ret0;

 L10630: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4596;
    case MINUS:
      goto L4617;
    case IOR:
      goto L4638;
    case XOR:
      goto L4659;
    case AND:
      goto L4680;
    default:
     break;
   }
  goto ret0;

 L4596: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4597;
  goto ret0;

 L4597: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4598;
    }
  goto ret0;

 L4598: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4599;
  goto ret0;

 L4599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4600;
    }
  goto ret0;

 L4600: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 636;  /* sync_add_12 */
    }
  goto ret0;

 L4617: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4618;
  goto ret0;

 L4618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4619;
    }
  goto ret0;

 L4619: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4620;
  goto ret0;

 L4620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4621;
    }
  goto ret0;

 L4621: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 637;  /* sync_sub_12 */
    }
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4639;
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4640;
    }
  goto ret0;

 L4640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4641;
  goto ret0;

 L4641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4642;
    }
  goto ret0;

 L4642: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 638;  /* sync_ior_12 */
    }
  goto ret0;

 L4659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4660;
  goto ret0;

 L4660: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4661;
    }
  goto ret0;

 L4661: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4662;
  goto ret0;

 L4662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4663;
    }
  goto ret0;

 L4663: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 639;  /* sync_xor_12 */
    }
  goto ret0;

 L4680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4681;
  goto ret0;

 L4681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4682;
    }
  goto ret0;

 L4682: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4683;
  goto ret0;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4684;
    }
  goto ret0;

 L4684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 145 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 640;  /* sync_and_12 */
    }
  goto ret0;

 L10629: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 58)
    goto L4923;
  goto ret0;

 L4923: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4924;
    }
  goto ret0;

 L4924: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4925;
    }
  goto ret0;

 L4925: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[0]))
    goto L4926;
  goto ret0;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4927;
    }
  goto ret0;

 L4927: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4928;
  goto ret0;

 L4928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4929;
    }
  goto ret0;

 L4929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 268 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 651;  /* sync_nand_12 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L10635;
    case REG:
      goto L10636;
    default:
     break;
   }
 L10566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L205;
    }
 L10569: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1232;
    }
  goto ret0;

 L10635: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2850;
    }
  goto ret0;

 L2850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 18)
    goto L2851;
  goto ret0;

 L2851: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2852;
    }
  goto ret0;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2853;
    }
  goto ret0;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2854;
  goto ret0;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2855;
    }
  goto ret0;

 L2855: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5059 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 396;  /* potential_cprestore_di */
    }
  goto ret0;

 L10636: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 28)
    goto L4051;
  goto L10566;

 L4051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 20)
    goto L4052;
  x2 = XEXP (x1, 0);
  goto L10566;

 L4052: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4053;
  x2 = XEXP (x1, 0);
  goto L10566;

 L4053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10566;

 L4054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4055;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10566;

 L4055: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 580;  /* restore_gp_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10566;

 L205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10637;
  x2 = XEXP (x1, 0);
  goto L10569;

 L10637: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L206;
    case TRUNCATE:
      goto L751;
    case UNSPEC:
      goto L10642;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L10639;
    case SUBREG:
    case MEM:
      goto L10641;
    default:
      x2 = XEXP (x1, 0);
      goto L10569;
   }
 L10639: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2070;
    }
 L10641: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4557;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10644;
  x2 = XEXP (x1, 0);
  goto L10569;

 L10644: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L449;
    case ZERO_EXTEND:
      goto L468;
    case REG:
    case SUBREG:
      goto L10643;
    default:
      x2 = XEXP (x1, 0);
      goto L10569;
   }
 L10643: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L207;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L450;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L451;
  x2 = XEXP (x1, 0);
  goto L10569;

 L451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L452;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L453;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP))
    {
      return 51;  /* mulsidi3_32bit_r4000 */
    }
 L552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2022 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && ISA_HAS_DMUL3))
    {
      return 57;  /* mulsidi3_64bit_dmul */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L469;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L470;
  x2 = XEXP (x1, 0);
  goto L10569;

 L470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L471;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L471: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L472;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L473;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1932 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000 && !ISA_HAS_DSP))
    {
      return 52;  /* umulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L208;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L208: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L209;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L210;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L210: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1507 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 35;  /* muldi3_mul3 */
    }
 L252: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1555 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 39;  /* muldi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L752;
  x2 = XEXP (x1, 0);
  goto L10569;

 L752: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L753;
  x2 = XEXP (x1, 0);
  goto L10569;

 L753: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L10646;
  x2 = XEXP (x1, 0);
  goto L10569;

 L10646: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L754;
    case ZERO_EXTEND:
      goto L778;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10569;

 L754: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L755;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L755: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L756;
  x2 = XEXP (x1, 0);
  goto L10569;

 L756: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L757;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L757: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L758;
  x2 = XEXP (x1, 0);
  goto L10569;

 L758: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L759;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L760;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L760: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2195 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 68;  /* smuldi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L778: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L779;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L779: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L780;
  x2 = XEXP (x1, 0);
  goto L10569;

 L780: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L781;
    }
  x2 = XEXP (x1, 0);
  goto L10569;

 L781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L782;
  x2 = XEXP (x1, 0);
  goto L10569;

 L782: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L783;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L784;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L784: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2195 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 69;  /* umuldi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10642: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4464;
  x2 = XEXP (x1, 0);
  goto L10569;

 L4464: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4465;
  x2 = XEXP (x1, 0);
  goto L10569;

 L4465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && (
#line 6896 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 623;  /* tls_get_tp_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L2070: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2071;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2072;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L2072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4068 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected))
    {
      return 259;  /* *lea64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4558;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4559;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10648: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L10650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10650: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10652;
    case 1:
      goto L10653;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10652: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 53)
    goto L4560;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4560: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4561;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4561: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L4562;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L4562: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 67 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 632;  /* sync_compare_and_swapdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10653: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 55)
    goto L5009;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L10654;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L10654: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L5010;
    case MINUS:
      goto L5032;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5010: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5011: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5012;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5012: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 383 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 657;  /* sync_old_adddi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5032: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5033;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5034;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L5034: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 398 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 659;  /* sync_old_subdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10569;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10656;
  goto ret0;

 L10656: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1233;
    case UDIV:
      goto L1255;
    default:
     break;
   }
  goto ret0;

 L1233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1234;
    }
  goto ret0;

 L1234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1235;
    }
  goto ret0;

 L1235: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1236;
  goto ret0;

 L1236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1237;
    }
  goto ret0;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L1238;
  goto ret0;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1239;
  goto ret0;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2575 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 120;  /* divmoddi4_internal */
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1256;
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1257;
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1258;
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1259;
    }
  goto ret0;

 L1259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L1260;
  goto ret0;

 L1260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1261;
  goto ret0;

 L1261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2615 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 122;  /* udivmoddi4_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L189;
    case UNSPEC_VOLATILE:
      goto L10563;
    case RETURN:
      goto L3992;
    case SIMPLE_RETURN:
      goto L3996;
    case UNSPEC:
      goto L10564;
    case CALL:
      goto L4116;
    default:
     break;
   }
  goto ret0;

 L189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10570;
    case DImode:
      goto L10571;
    case TImode:
      goto L10568;
    default:
      break;
    }
 L3880: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L3881;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4104;
    }
  goto ret0;

 L10570: ATTRIBUTE_UNUSED_LABEL
  tem = recog_17 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3880;

 L10571: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L3880;

 L10568: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TImode))
    {
      operands[0] = x2;
      goto L814;
    }
  goto L3880;

 L814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == MULT)
    goto L815;
  x2 = XEXP (x1, 0);
  goto L3880;

 L815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode)
    goto L10658;
  x2 = XEXP (x1, 0);
  goto L3880;

 L10658: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L816;
    case ZERO_EXTEND:
      goto L835;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3880;

 L816: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L817;
    }
  x2 = XEXP (x1, 0);
  goto L3880;

 L817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L818;
  x2 = XEXP (x1, 0);
  goto L3880;

 L818: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L819;
    }
  x2 = XEXP (x1, 0);
  goto L3880;

 L819: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L820;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L821;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L821: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 72;  /* mulditi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L835: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L836;
    }
  x2 = XEXP (x1, 0);
  goto L3880;

 L836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L837;
  x2 = XEXP (x1, 0);
  goto L3880;

 L837: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L838;
    }
  x2 = XEXP (x1, 0);
  goto L3880;

 L838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L839;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L840;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 73;  /* umulditi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3880;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10660;
    case DImode:
      goto L10661;
    default:
      break;
    }
  goto ret0;

 L10660: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3882;
    }
 L10662: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3898;
    }
  goto ret0;

 L3882: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3883;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10662;

 L3883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3884;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10662;

 L3884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3885;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10662;

 L3885: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 558;  /* indirect_jump_and_restore_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10662;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3899;
  goto ret0;

 L3899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3900;
  goto ret0;

 L3900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3901;

 L3901: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 560;  /* tablejump_si */
    }
  goto ret0;

 L10661: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3890;
    }
 L10663: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3906;
    }
  goto ret0;

 L3890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3891;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10663;

 L3891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3892;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10663;

 L3892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3893;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10663;

 L3893: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 559;  /* indirect_jump_and_restore_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10663;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3907;
  goto ret0;

 L3907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3908;
  goto ret0;

 L3908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3909;

 L3909: ATTRIBUTE_UNUSED_LABEL
  if (
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 561;  /* tablejump_di */
    }
  goto ret0;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4105;
  goto ret0;

 L4105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4106;
  goto ret0;

 L4106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4107;
    }
 L4219: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4220;
    }
 L4262: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4263;
    }
  goto ret0;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4108;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4109;
    case CLOBBER:
      goto L4178;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4110;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4111;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4112;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4112: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4113;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6452 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 589;  /* sibcall_value_multiple_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 594;  /* call_value_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4219;

 L4220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4221;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L10664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4262;

 L10664: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 1L)
    goto L10666;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4262;

 L10666: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 596;  /* call_value_internal_direct */
    }
 L10667: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6626 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 597;  /* call_value_direct_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4262;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4264;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4265;
  goto ret0;

 L4265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4266;
    }
  goto ret0;

 L4266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4267;
  goto ret0;

 L4267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4268;
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4269;
  goto ret0;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 598;  /* call_value_multiple_internal */
    }
 L4299: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6661 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 599;  /* call_value_multiple_split */
    }
  goto ret0;

 L10563: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L2889;
  goto ret0;

 L2889: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2890;
  goto ret0;

 L2890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2891;
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10668;
    case DImode:
      goto L10669;
    default:
      break;
    }
  goto ret0;

 L10668: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 5141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 405;  /* clear_hazard_si */
    }
  goto ret0;

 L10669: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 5141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 406;  /* clear_hazard_di */
    }
  goto ret0;

 L3992: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L3993;
    case UNSPEC_VOLATILE:
      goto L10670;
    default:
     break;
   }
  goto ret0;

 L3993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 569;  /* return_internal */
    }
  goto ret0;

 L10670: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10672;
  goto ret0;

 L10672: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 40L:
      goto L4001;
    case 41L:
      goto L4005;
    default:
      break;
    }
  goto ret0;

 L4001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 571;  /* mips_eret */
    }
  goto ret0;

 L4005: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 572;  /* mips_deret */
    }
  goto ret0;

 L3996: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3997;
  goto ret0;

 L3997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 570;  /* simple_return_internal */
    }
  goto ret0;

 L10564: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 21)
    goto L4020;
  goto ret0;

 L4020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10674;
    case DImode:
      goto L10675;
    default:
      break;
    }
  goto ret0;

 L10674: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4021;
    }
  goto ret0;

 L4021: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4022;
  goto ret0;

 L4022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4023;
    }
  goto ret0;

 L4023: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6242 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(! TARGET_64BIT))
    {
      return 577;  /* eh_set_lr_si */
    }
  goto ret0;

 L10675: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4030;
    }
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4031;
  goto ret0;

 L4031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4032;
    }
  goto ret0;

 L4032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6248 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 578;  /* eh_set_lr_di */
    }
  goto ret0;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4117;
  goto ret0;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4118;
    }
 L4151: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4152;
    }
  goto ret0;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4119;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4151;

 L4120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 590;  /* call_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4151;

 L4152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4153;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L10676;
  goto ret0;

 L10676: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 1L)
    goto L10678;
  goto ret0;

 L10678: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 592;  /* call_internal_direct */
    }
 L10679: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 593;  /* call_direct_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_20 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L263;
    case MINUS:
      goto L343;
    case UNSPEC_VOLATILE:
      goto L10698;
    case UNSPEC:
      goto L10700;
    case SUBREG:
    case MEM:
      goto L10690;
    default:
      goto ret0;
   }
 L10690: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4698;
    }
  goto ret0;

 L263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L264;
  goto ret0;

 L264: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L265;
    }
  goto ret0;

 L265: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L266;
    }
  goto ret0;

 L266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L267;
    }
  goto ret0;

 L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L268;
  goto ret0;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L269;
    }
  goto ret0;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L270;
  goto ret0;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L271;
    }
  goto ret0;

 L271: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1612 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16))
    {
      return 40;  /* *mul_acc_si */
    }
 L292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1630 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16))
    {
      return 41;  /* *mul_acc_si_r3900 */
    }
  goto ret0;

 L343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L344;
    }
  goto ret0;

 L344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L345;
  goto ret0;

 L345: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L346;
    }
  goto ret0;

 L346: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L347;
    }
  goto ret0;

 L347: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L348;
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L349;
    }
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L350;
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L351;
    }
  goto ret0;

 L351: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1705 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC))
    {
      return 44;  /* *msac_using_macc */
    }
 L402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1848 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB))
    {
      return 47;  /* *mul_sub_si */
    }
  goto ret0;

 L10698: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10705;
  goto ret0;

 L10705: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 63L:
      goto L5360;
    case 64L:
      goto L5404;
    default:
      break;
    }
  goto ret0;

 L5360: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5361;
    }
  goto ret0;

 L5361: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5362;
  goto ret0;

 L5362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5363;
  goto ret0;

 L5363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 63)
    goto L5364;
  goto ret0;

 L5364: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5365;
    }
  goto ret0;

 L5365: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 63)
    goto L5366;
  goto ret0;

 L5366: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5367;
    }
  goto ret0;

 L5367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 639 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP))
    {
      return 693;  /* atomic_exchangesi_llsc */
    }
  goto ret0;

 L5404: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5405;
    }
  goto ret0;

 L5405: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5406;
  goto ret0;

 L5406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5407;
  goto ret0;

 L5407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 64)
    goto L5408;
  goto ret0;

 L5408: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L5409;
  goto ret0;

 L5409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5410;
  goto ret0;

 L5410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5411;
    }
  goto ret0;

 L5411: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 64)
    goto L5412;
  goto ret0;

 L5412: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5413;
    }
  goto ret0;

 L5413: ATTRIBUTE_UNUSED_LABEL
  if (
#line 696 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD))
    {
      return 697;  /* atomic_fetch_addsi_llsc */
    }
  goto ret0;

 L10700: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10707;
    case 3:
      goto L10709;
    default:
      break;
    }
  goto ret0;

 L10707: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 111L:
      goto L6180;
    case 112L:
      goto L6205;
    case 166L:
      goto L6957;
    case 168L:
      goto L7007;
    default:
      break;
    }
  goto ret0;

 L6180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6181;
    }
  goto ret0;

 L6181: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6182;
    }
  goto ret0;

 L6182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6183;
  goto ret0;

 L6183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6184;
  goto ret0;

 L6184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 111)
    goto L6185;
  goto ret0;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6186;
  goto ret0;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6187;
  goto ret0;

 L6187: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6188;
  goto ret0;

 L6188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6189;
    }
  goto ret0;

 L6189: ATTRIBUTE_UNUSED_LABEL
  if (
#line 543 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 790;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L6205: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6206;
    }
  goto ret0;

 L6206: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6207;
    }
  goto ret0;

 L6207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6208;
  goto ret0;

 L6208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6209;
  goto ret0;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 112)
    goto L6210;
  goto ret0;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6211;
  goto ret0;

 L6211: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6212;
  goto ret0;

 L6212: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6213;
  goto ret0;

 L6213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6214;
    }
  goto ret0;

 L6214: ATTRIBUTE_UNUSED_LABEL
  if (
#line 557 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 791;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L6957: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6958;
    }
  goto ret0;

 L6958: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6959;
    }
  goto ret0;

 L6959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6960;
  goto ret0;

 L6960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6961;
  goto ret0;

 L6961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 166)
    goto L6962;
  goto ret0;

 L6962: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6963;
  goto ret0;

 L6963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6964;
  goto ret0;

 L6964: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6965;
  goto ret0;

 L6965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6966;
    }
  goto ret0;

 L6966: ATTRIBUTE_UNUSED_LABEL
  if (
#line 265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 870;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L7007: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7008;
    }
  goto ret0;

 L7008: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7009;
    }
  goto ret0;

 L7009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7010;
  goto ret0;

 L7010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7011;
  goto ret0;

 L7011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 168)
    goto L7012;
  goto ret0;

 L7012: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7013;
  goto ret0;

 L7013: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7014;
  goto ret0;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7015;
  goto ret0;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7016;
    }
  goto ret0;

 L7016: ATTRIBUTE_UNUSED_LABEL
  if (
#line 293 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 872;  /* mips_mulq_s_w */
    }
  goto ret0;

 L10709: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 143)
    goto L6525;
  goto ret0;

 L6525: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6526;
    }
  goto ret0;

 L6526: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6527;
    }
  goto ret0;

 L6527: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6528;
  goto ret0;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6529;
  goto ret0;

 L6529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6530;
  goto ret0;

 L6530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 143)
    goto L6531;
  goto ret0;

 L6531: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6532;
  goto ret0;

 L6532: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6533;
  goto ret0;

 L6533: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6534;
  goto ret0;

 L6534: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6535;
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L6536;
  goto ret0;

 L6536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 143)
    goto L6537;
  goto ret0;

 L6537: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6538;
  goto ret0;

 L6538: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 1026 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 826;  /* mips_extpdp */
    }
  goto ret0;

 L4698: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4699;
  goto ret0;

 L4699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4700;
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 58)
    goto L4701;
  goto ret0;

 L4701: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4702;
    }
  goto ret0;

 L4702: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4703;
    }
  goto ret0;

 L4703: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L10712;
 L4947: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4948;
    }
  goto ret0;

 L10712: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4704;
    case MINUS:
      goto L4732;
    case IOR:
      goto L4760;
    case XOR:
      goto L4788;
    case AND:
      goto L4816;
    default:
     break;
   }
  goto L4947;

 L4704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4705;
  goto L4947;

 L4705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4706;
    }
  goto L4947;

 L4706: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4707;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4708;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4708: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 641;  /* sync_old_add_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4733;
  goto L4947;

 L4733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4734;
    }
  goto L4947;

 L4734: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4735;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4736;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 642;  /* sync_old_sub_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4761;
  goto L4947;

 L4761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4762;
    }
  goto L4947;

 L4762: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4763;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4764;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4764: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 643;  /* sync_old_ior_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4788: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4789;
  goto L4947;

 L4789: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4790;
    }
  goto L4947;

 L4790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4791;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4792;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 644;  /* sync_old_xor_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4816: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4817;
  goto L4947;

 L4817: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_0_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4818;
    }
  goto L4947;

 L4818: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4819;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4820;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4820: ATTRIBUTE_UNUSED_LABEL
  if (
#line 186 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 645;  /* sync_old_and_12 */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  goto L4947;

 L4948: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4949;
  goto ret0;

 L4949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4950;
    }
  goto ret0;

 L4950: ATTRIBUTE_UNUSED_LABEL
  if (
#line 307 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 652;  /* sync_old_nand_12 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_21 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10682;
    case DImode:
      goto L10683;
    case V2HImode:
      goto L10684;
    case V2HQmode:
      goto L10685;
    case HQmode:
      goto L10686;
    case SQmode:
      goto L10687;
    default:
      break;
    }
 L4188: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4189;
    }
  goto ret0;

 L10682: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L4514;
 L10680: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L262;
    }
  goto L4188;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4515;
  x2 = XEXP (x1, 0);
  goto L10680;

 L4515: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (call_insn_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L4516;
    }
  x2 = XEXP (x1, 0);
  goto L10680;

 L4516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4517;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10680;

 L4517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 25)
    goto L4518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10680;

 L4518: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4519;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10680;

 L4519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 6957 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 628;  /* *tls_get_tp_mips16_call_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10680;

 L262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10688;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10688: ATTRIBUTE_UNUSED_LABEL
  tem = recog_20 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10683: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L4528;
 L10681: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L485;
    }
  goto L4188;

 L4528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4529;
  x2 = XEXP (x1, 0);
  goto L10681;

 L4529: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (call_insn_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L4530;
    }
  x2 = XEXP (x1, 0);
  goto L10681;

 L4530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10681;

 L4531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 25)
    goto L4532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10681;

 L4532: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4533;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10681;

 L4533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 6957 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 629;  /* *tls_get_tp_mips16_call_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L10681;

 L485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10717;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10717: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L486;
    case UNSPEC_VOLATILE:
      goto L10720;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4188;

 L486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10722;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10722: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L487;
    case ZERO_EXTEND:
      goto L508;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4188;

 L487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L488;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L489;
  x2 = XEXP (x1, 0);
  goto L4188;

 L489: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L490;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L490: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L491;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L492;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L494;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L494: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1944 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16))
    {
      return 53;  /* mulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L508: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L509;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L510;
  x2 = XEXP (x1, 0);
  goto L4188;

 L510: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L511;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L511: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L512;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L513;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L513: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L514;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L515;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1944 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DMUL3 && !TARGET_MIPS16))
    {
      return 54;  /* umulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L10720: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10724;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10724: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 63L:
      goto L5372;
    case 64L:
      goto L5418;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L5372: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5373;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L5373: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5375;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 63)
    goto L5376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5376: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5377;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5377: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 63)
    goto L5378;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5379;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5379: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 639 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_SWAP) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 694;  /* atomic_exchangedi_llsc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5419;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5420;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 64)
    goto L5422;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L5423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5424;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5424: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5425;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 64)
    goto L5426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5427;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L5427: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 696 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC && !ISA_HAS_LDADD) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 698;  /* atomic_fetch_adddi_llsc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L10684: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L6104;
    }
  goto L4188;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L10726;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10726: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L10732;
    case MULT:
      goto L6907;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4188;

 L10732: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L10737;
  x2 = XEXP (x1, 0);
  goto L4188;

 L10737: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 108L:
      goto L6105;
    case 109L:
      goto L6130;
    case 110L:
      goto L6155;
    case 165L:
      goto L6932;
    case 167L:
      goto L6982;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6106;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6106: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6107;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6107: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6108;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6109;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 108)
    goto L6110;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6110: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6111;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6111: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6112;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6112: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6113;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6114;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 499 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 787;  /* mips_muleu_s_ph_qbl */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6130: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6131;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6131: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6132;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6133;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6134;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 109)
    goto L6135;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6135: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6136;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6136: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6137;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6139;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 788;  /* mips_muleu_s_ph_qbr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6156;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6157;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6157: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6158;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6159;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L6160;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6160: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6161;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6161: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6162;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6163;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6164;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 528 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 789;  /* mips_mulq_rs_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6932: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6933;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6933: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6934;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6934: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6935;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6936;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 165)
    goto L6937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6937: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6938;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6938: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6939: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6940;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6941;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6941: ATTRIBUTE_UNUSED_LABEL
  if (
#line 251 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 869;  /* mips_mul_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6982: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6983;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6983: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6984;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6984: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6985;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6986;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 167)
    goto L6987;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6988;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6988: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6989;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6991;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6991: ATTRIBUTE_UNUSED_LABEL
  if (
#line 279 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 871;  /* mips_mulq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6908;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6909;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L6909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6910;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6911;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 164)
    goto L6912;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6912: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6913;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6913: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6914;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6915;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6916;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L6916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 237 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 868;  /* mulv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L10685: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L7643;
    }
  goto L4188;

 L7643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L7644;
  x2 = XEXP (x1, 0);
  goto L4188;

 L7644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L7645;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L7646;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7646: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7647;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7649;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7649: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7650: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7651;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7651: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7653;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7653: ATTRIBUTE_UNUSED_LABEL
  if (
#line 41 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 951;  /* ssmulv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L10686: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L7668;
    }
  goto L4188;

 L7668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L7669;
  x2 = XEXP (x1, 0);
  goto L4188;

 L7669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L7670;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L7671;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7671: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7672;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7673;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7674;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7674: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7675;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7675: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7676;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7676: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7677;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7678;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7678: ATTRIBUTE_UNUSED_LABEL
  if (
#line 41 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 952;  /* ssmulhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L10687: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L7693;
    }
  goto L4188;

 L7693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode
      && GET_CODE (x2) == SS_MULT)
    goto L7694;
  x2 = XEXP (x1, 0);
  goto L4188;

 L7694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7695;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7696;
    }
  x2 = XEXP (x1, 0);
  goto L4188;

 L7696: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7697;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7699: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7700: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7703;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L7703: ATTRIBUTE_UNUSED_LABEL
  if (
#line 42 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 953;  /* ssmulsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4188;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4190;
  goto ret0;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4191;
  goto ret0;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4192;
    }
 L4209: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4210;
    }
 L4247: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4248;
    }
  goto ret0;

 L4192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4193;

 L4193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4194;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4209;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L4195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4209;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4196;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4209;

 L4196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6595 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 595;  /* call_value_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4209;

 L4210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4211;

 L4211: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4212;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4247;

 L4212: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4213;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4247;

 L4213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 596;  /* call_value_internal_direct */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4247;

 L4248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4249;

 L4249: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4250;
  goto ret0;

 L4250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4251;
    }
  goto ret0;

 L4251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4252;
  goto ret0;

 L4252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4253;
  goto ret0;

 L4253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4254;
  goto ret0;

 L4254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4255;
  goto ret0;

 L4255: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4256;
  goto ret0;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 598;  /* call_value_multiple_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_22 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10742;
    case DImode:
      goto L10743;
    default:
      break;
    }
 L3912: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L3913;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4225;
    }
  goto ret0;

 L10742: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4482;
    }
  goto L3912;

 L4482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10744;
  x2 = XEXP (x1, 0);
  goto L3912;

 L10744: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L10746;
    case UNSPEC_VOLATILE:
      goto L10747;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3912;

 L10746: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4483;
  x2 = XEXP (x1, 0);
  goto L3912;

 L4483: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4484;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L4484: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4485;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L4486;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4486: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4487;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 25)
    goto L4488;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4488: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4489;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 6938 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 626;  /* tls_get_tp_mips16_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L10747: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 62)
    goto L5318;
  x2 = XEXP (x1, 0);
  goto L3912;

 L5318: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5319;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L5319: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5320;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L5320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5321;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5322;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 62)
    goto L5323;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5323: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5324;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5324: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5325;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    goto L5326;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 62)
    goto L5327;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5327: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5328;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5328: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L5329;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5329: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (arith_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5330;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 62)
    goto L5331;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5331: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L5332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5332: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5333;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5333: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L5334;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5334: ATTRIBUTE_UNUSED_LABEL
  if (
#line 594 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 691;  /* atomic_compare_and_swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L10743: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4498;
    }
  goto L3912;

 L4498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10748;
  x2 = XEXP (x1, 0);
  goto L3912;

 L10748: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L10750;
    case UNSPEC_VOLATILE:
      goto L10751;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3912;

 L10750: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 28)
    goto L4499;
  x2 = XEXP (x1, 0);
  goto L3912;

 L4499: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (call_insn_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4500;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4501;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3)
    goto L4502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4503;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 25)
    goto L4504;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4504: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4505;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L4505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 6938 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(HAVE_AS_TLS && TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 627;  /* tls_get_tp_mips16_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L10751: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 62)
    goto L5339;
  x2 = XEXP (x1, 0);
  goto L3912;

 L5339: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5340;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L5340: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L5341;
    }
  x2 = XEXP (x1, 0);
  goto L3912;

 L5341: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5342;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5343;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 62)
    goto L5344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5344: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5345;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5346;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    goto L5347;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 62)
    goto L5348;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5348: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5349;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5349: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L5350;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5350: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (arith_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L5351;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5351: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 62)
    goto L5352;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5352: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L5353;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5354;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5354: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L5355;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L5355: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 594 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 692;  /* atomic_compare_and_swapdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3912;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L3914;
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LEU)
    goto L3915;
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L3916;
    }
  goto ret0;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3917;
    }
  goto ret0;

 L3917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10752;
    case DImode:
      goto L10753;
    default:
      break;
    }
  goto ret0;

 L10752: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 47)
    goto L3918;
  goto ret0;

 L3918: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3919;
  goto ret0;

 L3919: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L3920;
  goto ret0;

 L3920: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  goto L3921;

 L3921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3922;
  goto ret0;

 L3922: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3923;

 L3923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3924;
  goto ret0;

 L3924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3925;
    }
  goto ret0;

 L3925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3926;
  goto ret0;

 L3926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3927;
    }
  goto ret0;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3928;
  goto ret0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (
#line 6000 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 562;  /* casesi_internal_mips16_si */
    }
  goto ret0;

 L10753: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 47)
    goto L3950;
  goto ret0;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3951;
  goto ret0;

 L3951: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == LABEL_REF)
    goto L3952;
  goto ret0;

 L3952: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  goto L3953;

 L3953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L3954;
  goto ret0;

 L3954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L3955;

 L3955: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3956;
  goto ret0;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3957;
    }
  goto ret0;

 L3957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3958;
  goto ret0;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3959;
    }
  goto ret0;

 L3959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3960;
  goto ret0;

 L3960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (
#line 6000 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16_SHORT_JUMP_TABLES) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 563;  /* casesi_internal_mips16_di */
    }
  goto ret0;

 L4225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4226;
  goto ret0;

 L4226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4227;
  goto ret0;

 L4227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4228;
    }
 L4275: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4276;
    }
  goto ret0;

 L4228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4229;

 L4229: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4230;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4275;

 L4230: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4231;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4275;

 L4231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L4232;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4275;

 L4232: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4233;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4275;

 L4233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6626 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 597;  /* call_value_direct_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L4275;

 L4276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L4277;

 L4277: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4278;
  goto ret0;

 L4278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4279;
    }
  goto ret0;

 L4279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L4280;
  goto ret0;

 L4280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L4281;
  goto ret0;

 L4281: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4282;
  goto ret0;

 L4282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4283;
  goto ret0;

 L4283: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4284;
  goto ret0;

 L4284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L4285;
  goto ret0;

 L4285: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4286;
  goto ret0;

 L4286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6661 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 599;  /* call_value_multiple_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_23 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 81L:
      goto L5813;
    case 83L:
      goto L5868;
    case 84L:
      goto L5901;
    case 104L:
      goto L6059;
    case 111L:
      goto L6194;
    case 112L:
      goto L6219;
    case 138L:
      goto L6469;
    case 139L:
      goto L6480;
    case 140L:
      goto L6491;
    case 141L:
      goto L6502;
    case 155L:
      goto L6857;
    case 156L:
      goto L6869;
    case 157L:
      goto L6881;
    case 166L:
      goto L6971;
    case 168L:
      goto L7021;
    default:
      break;
    }
  goto ret0;

 L5813: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5814;
    }
  goto ret0;

 L5814: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5815;
    }
  goto ret0;

 L5815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5816;
  goto ret0;

 L5816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5817;
  goto ret0;

 L5817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L5818;
  goto ret0;

 L5818: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5819;
  goto ret0;

 L5819: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 148 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 751;  /* mips_addq_s_w */
    }
  goto ret0;

 L5868: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5869;
    }
  goto ret0;

 L5869: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5870;
    }
  goto ret0;

 L5870: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5871;
  goto ret0;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5872;
  goto ret0;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L5873;
  goto ret0;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5874;
  goto ret0;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 174 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 756;  /* mips_subq_s_w */
    }
  goto ret0;

 L5901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5902;
    }
  goto ret0;

 L5902: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5903;
    }
  goto ret0;

 L5903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5904;
  goto ret0;

 L5904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L5905;
  goto ret0;

 L5905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 84)
    goto L5906;
  goto ret0;

 L5906: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5907;
  goto ret0;

 L5907: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 188 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 759;  /* mips_addsc */
    }
  goto ret0;

 L6059: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6060;
    }
  goto ret0;

 L6060: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6061;
    }
  goto ret0;

 L6061: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6062;
  goto ret0;

 L6062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6063;
  goto ret0;

 L6063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 104)
    goto L6064;
  goto ret0;

 L6064: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6065;
  goto ret0;

 L6065: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 417 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 781;  /* mips_shll_s_w */
    }
  goto ret0;

 L6194: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6195;
    }
  goto ret0;

 L6195: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6196;
    }
  goto ret0;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6197;
  goto ret0;

 L6197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6198;
  goto ret0;

 L6198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 111)
    goto L6199;
  goto ret0;

 L6199: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6200;
  goto ret0;

 L6200: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 543 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 790;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L6219: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6220;
    }
  goto ret0;

 L6220: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6221;
    }
  goto ret0;

 L6221: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6222;
  goto ret0;

 L6222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6223;
  goto ret0;

 L6223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 112)
    goto L6224;
  goto ret0;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6225;
  goto ret0;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 557 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 791;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L6469: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6470;
    }
  goto ret0;

 L6470: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6471;
    }
  goto ret0;

 L6471: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6472;
  goto ret0;

 L6472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6473;
  goto ret0;

 L6473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 138)
    goto L6474;
  goto ret0;

 L6474: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6475;
  goto ret0;

 L6475: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 914 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 821;  /* mips_extr_w */
    }
  goto ret0;

 L6480: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6481;
    }
  goto ret0;

 L6481: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6482;
    }
  goto ret0;

 L6482: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6483;
  goto ret0;

 L6483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6484;
  goto ret0;

 L6484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 139)
    goto L6485;
  goto ret0;

 L6485: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6486;
  goto ret0;

 L6486: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 935 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 822;  /* mips_extr_r_w */
    }
  goto ret0;

 L6491: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6492;
    }
  goto ret0;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6493;
    }
  goto ret0;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6494;
  goto ret0;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6495;
  goto ret0;

 L6495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 140)
    goto L6496;
  goto ret0;

 L6496: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6497;
  goto ret0;

 L6497: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 956 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 823;  /* mips_extr_rs_w */
    }
  goto ret0;

 L6502: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6503;
    }
  goto ret0;

 L6503: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6504;
    }
  goto ret0;

 L6504: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6505;
  goto ret0;

 L6505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6506;
  goto ret0;

 L6506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 141)
    goto L6507;
  goto ret0;

 L6507: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6508;
  goto ret0;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 978 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 824;  /* mips_extr_s_h */
    }
  goto ret0;

 L6857: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6858;
    }
  goto ret0;

 L6858: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6859;
    }
  goto ret0;

 L6859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6860;
  goto ret0;

 L6860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6861;
  goto ret0;

 L6861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 155)
    goto L6862;
  goto ret0;

 L6862: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6863;
  goto ret0;

 L6863: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6864;
  goto ret0;

 L6864: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 170 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 863;  /* mips_cmpgdu_eq_qb */
    }
  goto ret0;

 L6869: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6870;
    }
  goto ret0;

 L6870: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6871;
    }
  goto ret0;

 L6871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6872;
  goto ret0;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6873;
  goto ret0;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 156)
    goto L6874;
  goto ret0;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6875;
  goto ret0;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6876;
  goto ret0;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 185 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 864;  /* mips_cmpgdu_lt_qb */
    }
  goto ret0;

 L6881: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6882;
    }
  goto ret0;

 L6882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6883;
    }
  goto ret0;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6884;
  goto ret0;

 L6884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6885;
  goto ret0;

 L6885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 157)
    goto L6886;
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6887;
  goto ret0;

 L6887: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6888;
  goto ret0;

 L6888: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 200 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 865;  /* mips_cmpgdu_le_qb */
    }
  goto ret0;

 L6971: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6972;
    }
  goto ret0;

 L6972: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6973;
    }
  goto ret0;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6974;
  goto ret0;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6975;
  goto ret0;

 L6975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 166)
    goto L6976;
  goto ret0;

 L6976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6977;
  goto ret0;

 L6977: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 265 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 870;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7022;
    }
  goto ret0;

 L7022: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7023;
    }
  goto ret0;

 L7023: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7024;
  goto ret0;

 L7024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7025;
  goto ret0;

 L7025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 168)
    goto L7026;
  goto ret0;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7027;
  goto ret0;

 L7027: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 293 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 872;  /* mips_mulq_s_w */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_24 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5039;
    case MINUS:
      goto L5063;
    case UNSPEC_VOLATILE:
      goto L10794;
    case UNSPEC:
      goto L10796;
    case SUBREG:
    case MEM:
      goto L10773;
    default:
      goto ret0;
   }
 L10773: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5123;
    }
  goto ret0;

 L5039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5040;
    }
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5041;
    }
  goto ret0;

 L5041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5042;
  goto ret0;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5043;
  goto ret0;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 56)
    goto L5044;
  goto ret0;

 L5044: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L5045;
  goto ret0;

 L5045: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5046;
  goto ret0;

 L5046: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 413 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 660;  /* sync_new_addsi */
    }
  goto ret0;

 L5063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5064;
    }
  goto ret0;

 L5064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5065;
    }
  goto ret0;

 L5065: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5066;
  goto ret0;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5067;
  goto ret0;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 56)
    goto L5068;
  goto ret0;

 L5068: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L5069;
  goto ret0;

 L5069: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5070;
  goto ret0;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 429 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 662;  /* sync_new_subsi */
    }
  goto ret0;

 L10794: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10814;
  goto ret0;

 L10814: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 63L:
      goto L5384;
    case 64L:
      goto L5432;
    default:
      break;
    }
  goto ret0;

 L5384: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (mem_noofs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5385;
    }
  goto ret0;

 L5385: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5386;
  goto ret0;

 L5386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5387;
  goto ret0;

 L5387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 63)
    goto L5388;
  goto ret0;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5389;
    }
  goto ret0;

 L5389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 655 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(ISA_HAS_SWAP))
    {
      return 695;  /* atomic_exchangesi_swap */
    }
  goto ret0;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (mem_noofs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5433;
    }
  goto ret0;

 L5433: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5434;
  goto ret0;

 L5434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5435;
  goto ret0;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 64)
    goto L5436;
  goto ret0;

 L5436: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L5437;
  goto ret0;

 L5437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5438;
  goto ret0;

 L5438: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5439;
    }
  goto ret0;

 L5439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(ISA_HAS_LDADD))
    {
      return 699;  /* atomic_fetch_addsi_ldadd */
    }
  goto ret0;

 L10796: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10816;
    case 3:
      goto L10819;
    case 1:
      goto L10820;
    default:
      break;
    }
  goto ret0;

 L10816: ATTRIBUTE_UNUSED_LABEL
  return recog_23 (x0, insn, pnum_clobbers);

 L10819: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 85L:
      goto L5912;
    case 142L:
      goto L6513;
    default:
      break;
    }
  goto ret0;

 L5912: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5913;
    }
  goto ret0;

 L5913: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5914;
    }
  goto ret0;

 L5914: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 184)
    goto L5915;
  goto ret0;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5916;
  goto ret0;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5917;
  goto ret0;

 L5917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 85)
    goto L5918;
  goto ret0;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5919;
  goto ret0;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 203 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 760;  /* mips_addwc */
    }
  goto ret0;

 L6513: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6514;
    }
  goto ret0;

 L6514: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6515;
    }
  goto ret0;

 L6515: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6516;
  goto ret0;

 L6516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6517;
  goto ret0;

 L6517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L6518;
  goto ret0;

 L6518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 142)
    goto L6519;
  goto ret0;

 L6519: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6520;
  goto ret0;

 L6520: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 1001 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 825;  /* mips_extp */
    }
  goto ret0;

 L10820: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 88)
    goto L5935;
  goto ret0;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5936;
    }
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5937;
  goto ret0;

 L5937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5938;
  goto ret0;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 88)
    goto L5939;
  goto ret0;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 237 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 763;  /* mips_absq_s_w */
    }
  goto ret0;

 L5123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5124;
  goto ret0;

 L5124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5125;
  goto ret0;

 L5125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10834;
  goto ret0;

 L10834: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L10838;
  goto ret0;

 L10838: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L10842;
    case 3:
      goto L10845;
    default:
      break;
    }
  goto ret0;

 L10842: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 55L:
      goto L5126;
    case 56L:
      goto L5186;
    case 59L:
      goto L5292;
    default:
      break;
    }
  goto ret0;

 L5126: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L10846;
 L5256: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5257;
    }
  goto ret0;

 L10846: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L5127;
    case XOR:
      goto L5137;
    case AND:
      goto L5147;
    default:
     break;
   }
  goto L5256;

 L5127: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5128;
    }
  goto L5256;

 L5128: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 670;  /* sync_old_iorsi */
    }
  goto L5256;

 L5137: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5138;
    }
  goto L5256;

 L5138: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 671;  /* sync_old_xorsi */
    }
  goto L5256;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5148;
    }
  goto L5256;

 L5148: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 672;  /* sync_old_andsi */
    }
  goto L5256;

 L5257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 497 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 684;  /* sync_old_nandsi */
    }
  goto ret0;

 L5186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L10849;
 L5274: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5275;
    }
  goto ret0;

 L10849: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L5187;
    case XOR:
      goto L5197;
    case AND:
      goto L5207;
    default:
     break;
   }
  goto L5274;

 L5187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5188;
    }
  goto L5274;

 L5188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 676;  /* sync_new_iorsi */
    }
  goto L5274;

 L5197: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5198;
    }
  goto L5274;

 L5198: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 677;  /* sync_new_xorsi */
    }
  goto L5274;

 L5207: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5208;
    }
  goto L5274;

 L5208: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 678;  /* sync_new_andsi */
    }
  goto L5274;

 L5275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 511 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 686;  /* sync_new_nandsi */
    }
  goto ret0;

 L5292: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5293;
    }
  goto ret0;

 L5293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 526 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 688;  /* sync_lock_test_and_setsi */
    }
  goto ret0;

 L10845: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 60)
    goto L5310;
  goto ret0;

 L5310: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5311;
    }
  goto ret0;

 L5311: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5312;
    }
  goto ret0;

 L5312: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5313;
    }
  goto ret0;

 L5313: ATTRIBUTE_UNUSED_LABEL
  if (
#line 555 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 690;  /* test_and_set_12 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_25 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 117L:
      goto L6258;
    case 118L:
      goto L6271;
    case 119L:
      goto L6284;
    case 120L:
      goto L6297;
    case 121L:
      goto L6310;
    case 122L:
      goto L6323;
    case 123L:
      goto L6336;
    case 124L:
      goto L6349;
    case 125L:
      goto L6362;
    case 145L:
      goto L6549;
    case 193L:
      goto L7180;
    case 194L:
      goto L7193;
    case 195L:
      goto L7206;
    case 196L:
      goto L7219;
    default:
      break;
    }
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6259;
    }
  goto ret0;

 L6259: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6260;
    }
  goto ret0;

 L6260: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6261;
    }
  goto ret0;

 L6261: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6262;
  goto ret0;

 L6262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6263;
  goto ret0;

 L6263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 117)
    goto L6264;
  goto ret0;

 L6264: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6265;
  goto ret0;

 L6265: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6266;
  goto ret0;

 L6266: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 623 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 796;  /* mips_dpaq_s_w_ph */
    }
  goto ret0;

 L6271: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6272;
    }
  goto ret0;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6273;
    }
  goto ret0;

 L6273: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6274;
    }
  goto ret0;

 L6274: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6275;
  goto ret0;

 L6275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6276;
  goto ret0;

 L6276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 118)
    goto L6277;
  goto ret0;

 L6277: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6278;
  goto ret0;

 L6278: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6279;
  goto ret0;

 L6279: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 640 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 797;  /* mips_dpsq_s_w_ph */
    }
  goto ret0;

 L6284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6285;
    }
  goto ret0;

 L6285: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6286;
    }
  goto ret0;

 L6286: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6287;
    }
  goto ret0;

 L6287: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6288;
  goto ret0;

 L6288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6289;
  goto ret0;

 L6289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 119)
    goto L6290;
  goto ret0;

 L6290: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6291;
  goto ret0;

 L6291: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6292;
  goto ret0;

 L6292: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 657 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 798;  /* mips_mulsaq_s_w_ph */
    }
  goto ret0;

 L6297: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6298;
    }
  goto ret0;

 L6298: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6299;
    }
  goto ret0;

 L6299: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6300;
    }
  goto ret0;

 L6300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6301;
  goto ret0;

 L6301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6302;
  goto ret0;

 L6302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 120)
    goto L6303;
  goto ret0;

 L6303: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6304;
  goto ret0;

 L6304: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6305;
  goto ret0;

 L6305: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 674 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 799;  /* mips_dpaq_sa_l_w */
    }
  goto ret0;

 L6310: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6311;
    }
  goto ret0;

 L6311: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6312;
    }
  goto ret0;

 L6312: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6313;
    }
  goto ret0;

 L6313: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6314;
  goto ret0;

 L6314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6315;
  goto ret0;

 L6315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 121)
    goto L6316;
  goto ret0;

 L6316: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6317;
  goto ret0;

 L6317: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6318;
  goto ret0;

 L6318: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 691 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 800;  /* mips_dpsq_sa_l_w */
    }
  goto ret0;

 L6323: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6324;
    }
  goto ret0;

 L6324: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6325;
    }
  goto ret0;

 L6325: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6326;
    }
  goto ret0;

 L6326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6327;
  goto ret0;

 L6327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6328;
  goto ret0;

 L6328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 122)
    goto L6329;
  goto ret0;

 L6329: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6330;
  goto ret0;

 L6330: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6331;
  goto ret0;

 L6331: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 708 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 801;  /* mips_maq_s_w_phl */
    }
  goto ret0;

 L6336: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6337;
    }
  goto ret0;

 L6337: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6338;
    }
  goto ret0;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6339;
    }
  goto ret0;

 L6339: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6340;
  goto ret0;

 L6340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6341;
  goto ret0;

 L6341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 123)
    goto L6342;
  goto ret0;

 L6342: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6343;
  goto ret0;

 L6343: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6344;
  goto ret0;

 L6344: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 724 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 802;  /* mips_maq_s_w_phr */
    }
  goto ret0;

 L6349: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6350;
    }
  goto ret0;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6351;
    }
  goto ret0;

 L6351: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6352;
    }
  goto ret0;

 L6352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6353;
  goto ret0;

 L6353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6354;
  goto ret0;

 L6354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 124)
    goto L6355;
  goto ret0;

 L6355: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6356;
  goto ret0;

 L6356: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6357;
  goto ret0;

 L6357: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 741 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 803;  /* mips_maq_sa_w_phl */
    }
  goto ret0;

 L6362: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6363;
    }
  goto ret0;

 L6363: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6364;
    }
  goto ret0;

 L6364: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6365;
    }
  goto ret0;

 L6365: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6366;
  goto ret0;

 L6366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6367;
  goto ret0;

 L6367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 125)
    goto L6368;
  goto ret0;

 L6368: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6369;
  goto ret0;

 L6369: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6370;
  goto ret0;

 L6370: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 757 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 804;  /* mips_maq_sa_w_phr */
    }
  goto ret0;

 L6549: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6550;
    }
  goto ret0;

 L6550: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6551;
    }
  goto ret0;

 L6551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6552;
  goto ret0;

 L6552: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6553;
  goto ret0;

 L6553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6554;
  goto ret0;

 L6554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 145)
    goto L6555;
  goto ret0;

 L6555: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6556;
  goto ret0;

 L6556: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6557;
  goto ret0;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182
      && 
#line 1069 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 828;  /* mips_mthlip */
    }
  goto ret0;

 L7180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7181;
    }
  goto ret0;

 L7181: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7182;
    }
  goto ret0;

 L7182: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L7183;
    }
  goto ret0;

 L7183: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7184;
  goto ret0;

 L7184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7185;
  goto ret0;

 L7185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 193)
    goto L7186;
  goto ret0;

 L7186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7187;
  goto ret0;

 L7187: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7188;
  goto ret0;

 L7188: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 580 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 895;  /* mips_dpaqx_s_w_ph */
    }
  goto ret0;

 L7193: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7194;
    }
  goto ret0;

 L7194: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7195;
    }
  goto ret0;

 L7195: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L7196;
    }
  goto ret0;

 L7196: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7197;
  goto ret0;

 L7197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7198;
  goto ret0;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 194)
    goto L7199;
  goto ret0;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7200;
  goto ret0;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7201;
  goto ret0;

 L7201: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 596 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 896;  /* mips_dpaqx_sa_w_ph */
    }
  goto ret0;

 L7206: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7207;
    }
  goto ret0;

 L7207: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7208;
    }
  goto ret0;

 L7208: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L7209;
    }
  goto ret0;

 L7209: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7210;
  goto ret0;

 L7210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7211;
  goto ret0;

 L7211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 195)
    goto L7212;
  goto ret0;

 L7212: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7213;
  goto ret0;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7214;
  goto ret0;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 612 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 897;  /* mips_dpsqx_s_w_ph */
    }
  goto ret0;

 L7219: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7220;
    }
  goto ret0;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7221;
    }
  goto ret0;

 L7221: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L7222;
    }
  goto ret0;

 L7222: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7223;
  goto ret0;

 L7223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7224;
  goto ret0;

 L7224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 196)
    goto L7225;
  goto ret0;

 L7225: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7226;
  goto ret0;

 L7226: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7227;
  goto ret0;

 L7227: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 628 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 898;  /* mips_dpsqx_sa_w_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_26 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 81L:
      goto L5824;
    case 83L:
      goto L5879;
    case 91L:
      goto L5965;
    case 103L:
      goto L6037;
    case 104L:
      goto L6070;
    case 108L:
      goto L6119;
    case 109L:
      goto L6144;
    case 110L:
      goto L6169;
    case 150L:
      goto L6820;
    case 165L:
      goto L6946;
    case 167L:
      goto L6996;
    case 179L:
      goto L7084;
    case 180L:
      goto L7095;
    default:
      break;
    }
  goto ret0;

 L5824: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5825;
    }
  goto ret0;

 L5825: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5826;
    }
  goto ret0;

 L5826: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5827;
  goto ret0;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5828;
  goto ret0;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L5829;
  goto ret0;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5830;
  goto ret0;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 148 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 752;  /* mips_addq_s_ph */
    }
  goto ret0;

 L5879: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5880;
    }
  goto ret0;

 L5880: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5881;
    }
  goto ret0;

 L5881: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5882;
  goto ret0;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5883;
  goto ret0;

 L5883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L5884;
  goto ret0;

 L5884: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5885;
  goto ret0;

 L5885: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 174 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 757;  /* mips_subq_s_ph */
    }
  goto ret0;

 L5965: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5966;
    }
  goto ret0;

 L5966: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5967;
    }
  goto ret0;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5968;
  goto ret0;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5969;
  goto ret0;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 91)
    goto L5970;
  goto ret0;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5971;
  goto ret0;

 L5971: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 767;  /* mips_precrq_rs_ph_w */
    }
  goto ret0;

 L6037: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6038;
    }
  goto ret0;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6039;
    }
  goto ret0;

 L6039: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6040;
  goto ret0;

 L6040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6041;
  goto ret0;

 L6041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 103)
    goto L6042;
  goto ret0;

 L6042: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6043;
  goto ret0;

 L6043: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 395 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 779;  /* mips_shll_ph */
    }
  goto ret0;

 L6070: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6071;
    }
  goto ret0;

 L6071: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6072;
    }
  goto ret0;

 L6072: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6073;
  goto ret0;

 L6073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6074;
  goto ret0;

 L6074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 104)
    goto L6075;
  goto ret0;

 L6075: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6076;
  goto ret0;

 L6076: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 417 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 782;  /* mips_shll_s_ph */
    }
  goto ret0;

 L6119: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6120;
    }
  goto ret0;

 L6120: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6121;
    }
  goto ret0;

 L6121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6122;
  goto ret0;

 L6122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6123;
  goto ret0;

 L6123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 108)
    goto L6124;
  goto ret0;

 L6124: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6125;
  goto ret0;

 L6125: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 499 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 787;  /* mips_muleu_s_ph_qbl */
    }
  goto ret0;

 L6144: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6145;
    }
  goto ret0;

 L6145: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6146;
    }
  goto ret0;

 L6146: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6147;
  goto ret0;

 L6147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6148;
  goto ret0;

 L6148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 109)
    goto L6149;
  goto ret0;

 L6149: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6150;
  goto ret0;

 L6150: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 513 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 788;  /* mips_muleu_s_ph_qbr */
    }
  goto ret0;

 L6169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6170;
    }
  goto ret0;

 L6170: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6171;
    }
  goto ret0;

 L6171: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6172;
  goto ret0;

 L6172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6173;
  goto ret0;

 L6173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L6174;
  goto ret0;

 L6174: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6175;
  goto ret0;

 L6175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 528 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 789;  /* mips_mulq_rs_ph */
    }
  goto ret0;

 L6820: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6821;
    }
  goto ret0;

 L6821: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6822;
    }
  goto ret0;

 L6822: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6823;
  goto ret0;

 L6823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6824;
  goto ret0;

 L6824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 150)
    goto L6825;
  goto ret0;

 L6825: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6826;
  goto ret0;

 L6826: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 105 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 858;  /* mips_addu_s_ph */
    }
  goto ret0;

 L6946: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6947;
    }
  goto ret0;

 L6947: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6948;
    }
  goto ret0;

 L6948: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6949;
  goto ret0;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6950;
  goto ret0;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 165)
    goto L6951;
  goto ret0;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6952;
  goto ret0;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 251 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 869;  /* mips_mul_s_ph */
    }
  goto ret0;

 L6996: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6997;
    }
  goto ret0;

 L6997: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6998;
    }
  goto ret0;

 L6998: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6999;
  goto ret0;

 L6999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7000;
  goto ret0;

 L7000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 167)
    goto L7001;
  goto ret0;

 L7001: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7002;
  goto ret0;

 L7002: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 279 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 871;  /* mips_mulq_s_ph */
    }
  goto ret0;

 L7084: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L7085;
    }
  goto ret0;

 L7085: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7086;
    }
  goto ret0;

 L7086: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7087;
  goto ret0;

 L7087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7088;
  goto ret0;

 L7088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 179)
    goto L7089;
  goto ret0;

 L7089: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7090;
  goto ret0;

 L7090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 428 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 881;  /* mips_subu_ph */
    }
  goto ret0;

 L7095: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L7096;
    }
  goto ret0;

 L7096: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L7097;
    }
  goto ret0;

 L7097: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7098;
  goto ret0;

 L7098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7099;
  goto ret0;

 L7099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 180)
    goto L7100;
  goto ret0;

 L7100: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7101;
  goto ret0;

 L7101: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 441 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 882;  /* mips_subu_s_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_27 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10754;
    case DImode:
      goto L10755;
    case V2HImode:
      goto L10756;
    case V4QImode:
      goto L10757;
    case UQQmode:
      goto L10758;
    case UHQmode:
      goto L10759;
    case UHAmode:
      goto L10760;
    case V4UQQmode:
      goto L10761;
    case V2UHQmode:
      goto L10762;
    case V2UHAmode:
      goto L10763;
    case HQmode:
      goto L10764;
    case SQmode:
      goto L10765;
    case HAmode:
      goto L10766;
    case SAmode:
      goto L10767;
    case V2HQmode:
      goto L10768;
    case V2HAmode:
      goto L10769;
    case DQmode:
      goto L10770;
    default:
      break;
    }
  goto ret0;

 L10754: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5038;
    }
  goto ret0;

 L5038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10771;
  goto ret0;

 L10771: ATTRIBUTE_UNUSED_LABEL
  return recog_24 (x0, insn, pnum_clobbers);

 L10755: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5050;
    }
  goto ret0;

 L5050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10852;
  goto ret0;

 L10852: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5051;
    case MINUS:
      goto L5075;
    case UNSPEC_VOLATILE:
      goto L10871;
    case UNSPEC:
      goto L10873;
    case SUBREG:
    case MEM:
      goto L10854;
    default:
      goto ret0;
   }
 L10854: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5153;
    }
  goto ret0;

 L5051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5052;
    }
  goto ret0;

 L5052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5053;
    }
  goto ret0;

 L5053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5054;
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5055;
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 56)
    goto L5056;
  goto ret0;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L5057;
  goto ret0;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5058;
  goto ret0;

 L5058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 413 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 661;  /* sync_new_adddi */
    }
  goto ret0;

 L5075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5076;
    }
  goto ret0;

 L5076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5077;
    }
  goto ret0;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5078;
  goto ret0;

 L5078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5079;
  goto ret0;

 L5079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 56)
    goto L5080;
  goto ret0;

 L5080: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MINUS)
    goto L5081;
  goto ret0;

 L5081: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5082;
  goto ret0;

 L5082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 429 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 663;  /* sync_new_subdi */
    }
  goto ret0;

 L10871: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10887;
  goto ret0;

 L10887: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 63L:
      goto L5394;
    case 64L:
      goto L5444;
    default:
      break;
    }
  goto ret0;

 L5394: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (mem_noofs_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5395;
    }
  goto ret0;

 L5395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5396;
  goto ret0;

 L5396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5397;
  goto ret0;

 L5397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 63)
    goto L5398;
  goto ret0;

 L5398: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5399;
    }
  goto ret0;

 L5399: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 655 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(ISA_HAS_SWAP) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 696;  /* atomic_exchangedi_swap */
    }
  goto ret0;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (mem_noofs_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5445;
    }
  goto ret0;

 L5445: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5446;
  goto ret0;

 L5446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5447;
  goto ret0;

 L5447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 64)
    goto L5448;
  goto ret0;

 L5448: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L5449;
  goto ret0;

 L5449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5450;
  goto ret0;

 L5450: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5451;
    }
  goto ret0;

 L5451: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(ISA_HAS_LDADD) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 700;  /* atomic_fetch_adddi_ldadd */
    }
  goto ret0;

 L10873: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3)
    goto L10889;
  goto ret0;

 L10889: ATTRIBUTE_UNUSED_LABEL
  return recog_25 (x0, insn, pnum_clobbers);

 L5153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5154;
  goto ret0;

 L5154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L5155;
  goto ret0;

 L5155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10903;
  goto ret0;

 L10903: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L10906;
  goto ret0;

 L10906: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L10909;
  goto ret0;

 L10909: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 55L:
      goto L5156;
    case 56L:
      goto L5216;
    case 59L:
      goto L5301;
    default:
      break;
    }
  goto ret0;

 L5156: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L10912;
 L5265: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5266;
    }
  goto ret0;

 L10912: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L5157;
    case XOR:
      goto L5167;
    case AND:
      goto L5177;
    default:
     break;
   }
  goto L5265;

 L5157: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5158;
    }
  goto L5265;

 L5158: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 673;  /* sync_old_iordi */
    }
  goto L5265;

 L5167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5168;
    }
  goto L5265;

 L5168: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 674;  /* sync_old_xordi */
    }
  goto L5265;

 L5177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5178;
    }
  goto L5265;

 L5178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 457 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 675;  /* sync_old_anddi */
    }
  goto L5265;

 L5266: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 497 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 685;  /* sync_old_nanddi */
    }
  goto ret0;

 L5216: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L10915;
 L5283: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5284;
    }
  goto ret0;

 L10915: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L5217;
    case XOR:
      goto L5227;
    case AND:
      goto L5237;
    default:
     break;
   }
  goto L5283;

 L5217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5218;
    }
  goto L5283;

 L5218: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 679;  /* sync_new_iordi */
    }
  goto L5283;

 L5227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5228;
    }
  goto L5283;

 L5228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 680;  /* sync_new_xordi */
    }
  goto L5283;

 L5237: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L5238;
    }
  goto L5283;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 472 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 681;  /* sync_new_anddi */
    }
  goto L5283;

 L5284: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 511 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 687;  /* sync_new_nanddi */
    }
  goto ret0;

 L5301: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5302;
    }
  goto ret0;

 L5302: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 526 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 689;  /* sync_lock_test_and_setdi */
    }
  goto ret0;

 L10756: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5790;
    }
  goto ret0;

 L5790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L10918;
  goto ret0;

 L10918: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5791;
    case UNSPEC:
      goto L10935;
    case MINUS:
      goto L5846;
    case MULT:
      goto L6921;
    default:
     break;
   }
  goto ret0;

 L5791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5792;
    }
 L6809: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6810;
    }
  goto ret0;

 L5792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5793;
    }
  x3 = XEXP (x2, 0);
  goto L6809;

 L5793: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5794;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6809;

 L5794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5795;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6809;

 L5795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 80)
    goto L5796;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6809;

 L5796: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5797;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6809;

 L5797: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 135 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 749;  /* addv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6809;

 L6810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6811;
    }
  goto ret0;

 L6811: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6812;
  goto ret0;

 L6812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6813;
  goto ret0;

 L6813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 149)
    goto L6814;
  goto ret0;

 L6814: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6815;
  goto ret0;

 L6815: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 92 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 857;  /* mips_addu_ph */
    }
  goto ret0;

 L10935: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10949;
    case 1:
      goto L10951;
    default:
      break;
    }
  goto ret0;

 L10949: ATTRIBUTE_UNUSED_LABEL
  return recog_26 (x0, insn, pnum_clobbers);

 L10951: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 88)
    goto L5944;
  goto ret0;

 L5944: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5945;
    }
  goto ret0;

 L5945: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5946;
  goto ret0;

 L5946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5947;
  goto ret0;

 L5947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 88)
    goto L5948;
  goto ret0;

 L5948: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 237 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 764;  /* mips_absq_s_ph */
    }
  goto ret0;

 L5846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5847;
    }
  goto ret0;

 L5847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5848;
    }
  goto ret0;

 L5848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5849;
  goto ret0;

 L5849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5850;
  goto ret0;

 L5850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 82)
    goto L5851;
  goto ret0;

 L5851: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5852;
  goto ret0;

 L5852: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 754;  /* subv2hi3 */
    }
  goto ret0;

 L6921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6922;
    }
  goto ret0;

 L6922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6923;
    }
  goto ret0;

 L6923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6924;
  goto ret0;

 L6924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6925;
  goto ret0;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 164)
    goto L6926;
  goto ret0;

 L6926: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6927;
  goto ret0;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 237 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 868;  /* mulv2hi3 */
    }
  goto ret0;

 L10757: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L5801;
    }
  goto ret0;

 L5801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode)
    goto L10963;
  goto ret0;

 L10963: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5802;
    case UNSPEC:
      goto L10970;
    case MINUS:
      goto L5857;
    default:
     break;
   }
  goto ret0;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5803;
    }
  goto ret0;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5804;
    }
  goto ret0;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5805;
  goto ret0;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5806;
  goto ret0;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 80)
    goto L5807;
  goto ret0;

 L5807: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5808;
  goto ret0;

 L5808: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 135 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 750;  /* addv4qi3 */
    }
  goto ret0;

 L10970: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L10975;
    case 1:
      goto L10979;
    default:
      break;
    }
  goto ret0;

 L10975: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 81L:
      goto L5835;
    case 83L:
      goto L5890;
    case 92L:
      goto L5976;
    case 103L:
      goto L6048;
    default:
      break;
    }
  goto ret0;

 L5835: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5836;
    }
  goto ret0;

 L5836: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5837;
    }
  goto ret0;

 L5837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5838;
  goto ret0;

 L5838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5839;
  goto ret0;

 L5839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L5840;
  goto ret0;

 L5840: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5841;
  goto ret0;

 L5841: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 148 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 753;  /* mips_addu_s_qb */
    }
  goto ret0;

 L5890: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5891;
    }
  goto ret0;

 L5891: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5892;
    }
  goto ret0;

 L5892: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5893;
  goto ret0;

 L5893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5894;
  goto ret0;

 L5894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L5895;
  goto ret0;

 L5895: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5896;
  goto ret0;

 L5896: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 174 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 758;  /* mips_subu_s_qb */
    }
  goto ret0;

 L5976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5977;
    }
  goto ret0;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5978;
    }
  goto ret0;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5979;
  goto ret0;

 L5979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5980;
  goto ret0;

 L5980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 92)
    goto L5981;
  goto ret0;

 L5981: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5982;
  goto ret0;

 L5982: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 287 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 768;  /* mips_precrqu_s_qb_ph */
    }
  goto ret0;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6049;
    }
  goto ret0;

 L6049: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6050;
    }
  goto ret0;

 L6050: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6051;
  goto ret0;

 L6051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6052;
  goto ret0;

 L6052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 103)
    goto L6053;
  goto ret0;

 L6053: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6054;
  goto ret0;

 L6054: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 395 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 780;  /* mips_shll_qb */
    }
  goto ret0;

 L10979: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 148)
    goto L6800;
  goto ret0;

 L6800: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6801;
    }
  goto ret0;

 L6801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6802;
  goto ret0;

 L6802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6803;
  goto ret0;

 L6803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 148)
    goto L6804;
  goto ret0;

 L6804: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 80 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 856;  /* mips_absq_s_qb */
    }
  goto ret0;

 L5857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5858;
    }
  goto ret0;

 L5858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5859;
    }
  goto ret0;

 L5859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5860;
  goto ret0;

 L5860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5861;
  goto ret0;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 82)
    goto L5862;
  goto ret0;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5863;
  goto ret0;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 161 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 755;  /* subv4qi3 */
    }
  goto ret0;

 L10758: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UQQmode))
    {
      operands[0] = x2;
      goto L7305;
    }
  goto ret0;

 L7305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UQQmode)
    goto L10980;
  goto ret0;

 L10980: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7306;
    case US_MINUS:
      goto L7512;
    default:
     break;
   }
  goto ret0;

 L7306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L7307;
    }
  goto ret0;

 L7307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L7308;
    }
  goto ret0;

 L7308: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7309;
  goto ret0;

 L7309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7310;
  goto ret0;

 L7310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7311;
  goto ret0;

 L7311: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7312;
  goto ret0;

 L7312: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 34 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 913;  /* usadduqq3 */
    }
  goto ret0;

 L7512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L7513;
    }
  goto ret0;

 L7513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L7514;
    }
  goto ret0;

 L7514: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7515;
  goto ret0;

 L7515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7516;
  goto ret0;

 L7516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7517;
  goto ret0;

 L7517: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7518;
  goto ret0;

 L7518: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 34 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 939;  /* ussubuqq3 */
    }
  goto ret0;

 L10759: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHQmode))
    {
      operands[0] = x2;
      goto L7316;
    }
  goto ret0;

 L7316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHQmode)
    goto L10982;
  goto ret0;

 L10982: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7317;
    case US_MINUS:
      goto L7523;
    default:
     break;
   }
  goto ret0;

 L7317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L7318;
    }
  goto ret0;

 L7318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L7319;
    }
  goto ret0;

 L7319: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7320;
  goto ret0;

 L7320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7321;
  goto ret0;

 L7321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7322;
  goto ret0;

 L7322: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7323;
  goto ret0;

 L7323: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 34 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 914;  /* usadduhq3 */
    }
  goto ret0;

 L7523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L7524;
    }
  goto ret0;

 L7524: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L7525;
    }
  goto ret0;

 L7525: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7526;
  goto ret0;

 L7526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7527;
  goto ret0;

 L7527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7528;
  goto ret0;

 L7528: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7529;
  goto ret0;

 L7529: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 34 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 940;  /* ussubuhq3 */
    }
  goto ret0;

 L10760: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHAmode))
    {
      operands[0] = x2;
      goto L7327;
    }
  goto ret0;

 L7327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHAmode)
    goto L10984;
  goto ret0;

 L10984: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7328;
    case US_MINUS:
      goto L7534;
    default:
     break;
   }
  goto ret0;

 L7328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L7329;
    }
  goto ret0;

 L7329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L7330;
    }
  goto ret0;

 L7330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7331;
  goto ret0;

 L7331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7332;
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7333;
  goto ret0;

 L7333: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7334;
  goto ret0;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 915;  /* usadduha3 */
    }
  goto ret0;

 L7534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L7535;
    }
  goto ret0;

 L7535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L7536;
    }
  goto ret0;

 L7536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7537;
  goto ret0;

 L7537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7538;
  goto ret0;

 L7538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7539;
  goto ret0;

 L7539: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7540;
  goto ret0;

 L7540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 941;  /* ussubuha3 */
    }
  goto ret0;

 L10761: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4UQQmode))
    {
      operands[0] = x2;
      goto L7338;
    }
  goto ret0;

 L7338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4UQQmode)
    goto L10986;
  goto ret0;

 L10986: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7339;
    case US_MINUS:
      goto L7545;
    default:
     break;
   }
  goto ret0;

 L7339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L7340;
    }
  goto ret0;

 L7340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L7341;
    }
  goto ret0;

 L7341: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7342;
  goto ret0;

 L7342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7343;
  goto ret0;

 L7343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7344;
  goto ret0;

 L7344: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7345;
  goto ret0;

 L7345: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 916;  /* usaddv4uqq3 */
    }
  goto ret0;

 L7545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L7546;
    }
  goto ret0;

 L7546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L7547;
    }
  goto ret0;

 L7547: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7548;
  goto ret0;

 L7548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7549;
  goto ret0;

 L7549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7550;
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7551;
  goto ret0;

 L7551: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 942;  /* ussubv4uqq3 */
    }
  goto ret0;

 L10762: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHQmode))
    {
      operands[0] = x2;
      goto L7349;
    }
  goto ret0;

 L7349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHQmode)
    goto L10988;
  goto ret0;

 L10988: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7350;
    case US_MINUS:
      goto L7556;
    default:
     break;
   }
  goto ret0;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L7351;
    }
  goto ret0;

 L7351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L7352;
    }
  goto ret0;

 L7352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7353;
  goto ret0;

 L7353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7354;
  goto ret0;

 L7354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7355;
  goto ret0;

 L7355: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7356;
  goto ret0;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 36 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 917;  /* usaddv2uhq3 */
    }
  goto ret0;

 L7556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L7557;
    }
  goto ret0;

 L7557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L7558;
    }
  goto ret0;

 L7558: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7559;
  goto ret0;

 L7559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7560;
  goto ret0;

 L7560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7561;
  goto ret0;

 L7561: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7562;
  goto ret0;

 L7562: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 36 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 943;  /* ussubv2uhq3 */
    }
  goto ret0;

 L10763: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHAmode))
    {
      operands[0] = x2;
      goto L7360;
    }
  goto ret0;

 L7360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHAmode)
    goto L10990;
  goto ret0;

 L10990: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L7361;
    case US_MINUS:
      goto L7567;
    default:
     break;
   }
  goto ret0;

 L7361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L7362;
    }
  goto ret0;

 L7362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L7363;
    }
  goto ret0;

 L7363: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7364;
  goto ret0;

 L7364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7365;
  goto ret0;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7366;
  goto ret0;

 L7366: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7367;
  goto ret0;

 L7367: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 36 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 918;  /* usaddv2uha3 */
    }
  goto ret0;

 L7567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L7568;
    }
  goto ret0;

 L7568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L7569;
    }
  goto ret0;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7570;
  goto ret0;

 L7570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7571;
  goto ret0;

 L7571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7572;
  goto ret0;

 L7572: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7573;
  goto ret0;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 36 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 944;  /* ussubv2uha3 */
    }
  goto ret0;

 L10764: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L7371;
    }
  goto ret0;

 L7371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode)
    goto L10992;
  goto ret0;

 L10992: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7372;
    case SS_MINUS:
      goto L7578;
    case SS_MULT:
      goto L7683;
    default:
     break;
   }
  goto ret0;

 L7372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L7373;
    }
  goto ret0;

 L7373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L7374;
    }
  goto ret0;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7375;
  goto ret0;

 L7375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7376;
  goto ret0;

 L7376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7377;
  goto ret0;

 L7377: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7378;
  goto ret0;

 L7378: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 919;  /* ssaddhq3 */
    }
  goto ret0;

 L7578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L7579;
    }
  goto ret0;

 L7579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L7580;
    }
  goto ret0;

 L7580: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7581;
  goto ret0;

 L7581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7582;
  goto ret0;

 L7582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7583;
  goto ret0;

 L7583: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7584;
  goto ret0;

 L7584: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 945;  /* sssubhq3 */
    }
  goto ret0;

 L7683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L7684;
    }
  goto ret0;

 L7684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L7685;
    }
  goto ret0;

 L7685: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7686;
  goto ret0;

 L7686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7687;
  goto ret0;

 L7687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7688;
  goto ret0;

 L7688: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7689;
  goto ret0;

 L7689: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 41 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 952;  /* ssmulhq3 */
    }
  goto ret0;

 L10765: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L7382;
    }
  goto ret0;

 L7382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode)
    goto L10995;
  goto ret0;

 L10995: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7383;
    case SS_MINUS:
      goto L7589;
    case SS_MULT:
      goto L7708;
    default:
     break;
   }
  goto ret0;

 L7383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7384;
    }
  goto ret0;

 L7384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7385;
    }
  goto ret0;

 L7385: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7386;
  goto ret0;

 L7386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7387;
  goto ret0;

 L7387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7388;
  goto ret0;

 L7388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7389;
  goto ret0;

 L7389: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 920;  /* ssaddsq3 */
    }
  goto ret0;

 L7589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7590;
    }
  goto ret0;

 L7590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7591;
    }
  goto ret0;

 L7591: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7592;
  goto ret0;

 L7592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7593;
  goto ret0;

 L7593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7594;
  goto ret0;

 L7594: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7595;
  goto ret0;

 L7595: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 946;  /* sssubsq3 */
    }
  goto ret0;

 L7708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7709;
    }
  goto ret0;

 L7709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7710;
    }
  goto ret0;

 L7710: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7711;
  goto ret0;

 L7711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7712;
  goto ret0;

 L7712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7713;
  goto ret0;

 L7713: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7714;
  goto ret0;

 L7714: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 42 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 953;  /* ssmulsq3 */
    }
  goto ret0;

 L10766: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HAmode))
    {
      operands[0] = x2;
      goto L7393;
    }
  goto ret0;

 L7393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HAmode)
    goto L10998;
  goto ret0;

 L10998: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7394;
    case SS_MINUS:
      goto L7600;
    default:
     break;
   }
  goto ret0;

 L7394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L7395;
    }
  goto ret0;

 L7395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L7396;
    }
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7397;
  goto ret0;

 L7397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7398;
  goto ret0;

 L7398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7399;
  goto ret0;

 L7399: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7400;
  goto ret0;

 L7400: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 921;  /* ssaddha3 */
    }
  goto ret0;

 L7600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L7601;
    }
  goto ret0;

 L7601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L7602;
    }
  goto ret0;

 L7602: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7603;
  goto ret0;

 L7603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7604;
  goto ret0;

 L7604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7605;
  goto ret0;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7606;
  goto ret0;

 L7606: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 947;  /* sssubha3 */
    }
  goto ret0;

 L10767: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SAmode))
    {
      operands[0] = x2;
      goto L7404;
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SAmode)
    goto L11000;
  goto ret0;

 L11000: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7405;
    case SS_MINUS:
      goto L7611;
    default:
     break;
   }
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L7406;
    }
  goto ret0;

 L7406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L7407;
    }
  goto ret0;

 L7407: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7408;
  goto ret0;

 L7408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7409;
  goto ret0;

 L7409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7410;
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7411;
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 922;  /* ssaddsa3 */
    }
  goto ret0;

 L7611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L7612;
    }
  goto ret0;

 L7612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L7613;
    }
  goto ret0;

 L7613: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7614;
  goto ret0;

 L7614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7615;
  goto ret0;

 L7615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7616;
  goto ret0;

 L7616: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7617;
  goto ret0;

 L7617: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 948;  /* sssubsa3 */
    }
  goto ret0;

 L10768: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L7415;
    }
  goto ret0;

 L7415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode)
    goto L11002;
  goto ret0;

 L11002: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7416;
    case SS_MINUS:
      goto L7622;
    case SS_MULT:
      goto L7658;
    default:
     break;
   }
  goto ret0;

 L7416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L7417;
    }
  goto ret0;

 L7417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L7418;
    }
  goto ret0;

 L7418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7419;
  goto ret0;

 L7419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7420;
  goto ret0;

 L7420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7421;
  goto ret0;

 L7421: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7422;
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 923;  /* ssaddv2hq3 */
    }
  goto ret0;

 L7622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L7623;
    }
  goto ret0;

 L7623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L7624;
    }
  goto ret0;

 L7624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7625;
  goto ret0;

 L7625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7626;
  goto ret0;

 L7626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7627;
  goto ret0;

 L7627: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7628;
  goto ret0;

 L7628: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 949;  /* sssubv2hq3 */
    }
  goto ret0;

 L7658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L7659;
    }
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L7660;
    }
  goto ret0;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7661;
  goto ret0;

 L7661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7662;
  goto ret0;

 L7662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 110)
    goto L7663;
  goto ret0;

 L7663: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7664;
  goto ret0;

 L7664: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 41 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 951;  /* ssmulv2hq3 */
    }
  goto ret0;

 L10769: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HAmode))
    {
      operands[0] = x2;
      goto L7426;
    }
  goto ret0;

 L7426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HAmode)
    goto L11005;
  goto ret0;

 L11005: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7427;
    case SS_MINUS:
      goto L7633;
    default:
     break;
   }
  goto ret0;

 L7427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L7428;
    }
  goto ret0;

 L7428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L7429;
    }
  goto ret0;

 L7429: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7430;
  goto ret0;

 L7430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7431;
  goto ret0;

 L7431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 81)
    goto L7432;
  goto ret0;

 L7432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7433;
  goto ret0;

 L7433: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 73 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 924;  /* ssaddv2ha3 */
    }
  goto ret0;

 L7633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L7634;
    }
  goto ret0;

 L7634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L7635;
    }
  goto ret0;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7636;
  goto ret0;

 L7636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7637;
  goto ret0;

 L7637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 83)
    goto L7638;
  goto ret0;

 L7638: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7639;
  goto ret0;

 L7639: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 106 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 950;  /* sssubv2ha3 */
    }
  goto ret0;

 L10770: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DQmode))
    {
      operands[0] = x2;
      goto L7718;
    }
  goto ret0;

 L7718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DQmode)
    goto L11007;
  goto ret0;

 L11007: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7719;
    case SS_MINUS:
      goto L7735;
    default:
     break;
   }
  goto ret0;

 L7719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L7720;
  goto ret0;

 L7720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7721;
  goto ret0;

 L7721: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L7722;
    }
  goto ret0;

 L7722: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7723;
  goto ret0;

 L7723: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L7724;
    }
  goto ret0;

 L7724: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L7725;
    }
  goto ret0;

 L7725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7726;
  goto ret0;

 L7726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7727;
  goto ret0;

 L7727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 120)
    goto L7728;
  goto ret0;

 L7728: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7729;
  goto ret0;

 L7729: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7730;
  goto ret0;

 L7730: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 136 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 954;  /* ssmaddsqdq4 */
    }
  goto ret0;

 L7735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L7736;
    }
  goto ret0;

 L7736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L7737;
  goto ret0;

 L7737: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7738;
  goto ret0;

 L7738: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L7739;
    }
  goto ret0;

 L7739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7740;
  goto ret0;

 L7740: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L7741;
    }
  goto ret0;

 L7741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7742;
  goto ret0;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7743;
  goto ret0;

 L7743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 121)
    goto L7744;
  goto ret0;

 L7744: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7745;
  goto ret0;

 L7745: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7746;
  goto ret0;

 L7746: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 153 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 955;  /* ssmsubsqdq4 */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case UNSPEC:
      goto L9235;
    case TRAP_IF:
      goto L12;
    case SET:
      goto L22;
    case PARALLEL:
      goto L9239;
    case UNSPEC_VOLATILE:
      goto L9241;
    case RETURN:
      goto L9246;
    case SIMPLE_RETURN:
      goto L9247;
    case CALL:
      goto L4090;
    case PREFETCH:
      goto L4301;
    case CONST_INT:
      goto L9251;
    default:
     break;
   }
  goto ret0;

 L9235: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1)
    goto L9259;
  goto ret0;

 L9259: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 49L:
      goto L1;
    case 50L:
      goto L3;
    case 51L:
      goto L5;
    case 52L:
      goto L7;
    case 21L:
      goto L4025;
    default:
      break;
    }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 107 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 1;  /* ls2_alu1_turn_enabled_insn */
    }
  goto ret0;

 L3: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 118 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 2;  /* ls2_alu2_turn_enabled_insn */
    }
  goto ret0;

 L5: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 129 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 3;  /* ls2_falu1_turn_enabled_insn */
    }
  goto ret0;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 140 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 4;  /* ls2_falu2_turn_enabled_insn */
    }
  goto ret0;

 L4025: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9264;
    case DImode:
      goto L9265;
    default:
      break;
    }
  goto ret0;

 L9264: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L4026;
    }
  goto ret0;

 L4026: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6242 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 577;  /* eh_set_lr_si */
    }
  goto ret0;

 L9265: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4035;
    }
  goto ret0;

 L4035: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6248 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 578;  /* eh_set_lr_di */
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9266;
    case DImode:
      goto L9267;
    default:
      break;
    }
 L9: ATTRIBUTE_UNUSED_LABEL
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10;
  goto ret0;

 L9266: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, SImode))
    {
      operands[0] = x1;
      goto L13;
    }
  goto L9;

 L13: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L14;
    }
  goto L9;

 L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L15;
    }
  goto L9;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1094 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP))
    {
      return 6;  /* *conditional_trapsi */
    }
  x1 = XEXP (x0, 0);
  goto L9;

 L9267: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, DImode))
    {
      operands[0] = x1;
      goto L18;
    }
  goto L9;

 L18: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L19;
    }
  goto L9;

 L19: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L20;
    }
  goto L9;

 L20: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 1094 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 7;  /* *conditional_trapdi */
    }
  x1 = XEXP (x0, 0);
  goto L9;

 L10: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 5;  /* trap */
    }
  goto ret0;

 L22: ATTRIBUTE_UNUSED_LABEL
  return recog_15 (x0, insn, pnum_clobbers);

 L9239: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L188;
    case 3:
      goto L260;
    case 4:
      goto L3911;
    case 6:
      goto L6559;
    default:
      break;
    }
 L9256: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1)
    {
      operands[0] = x0;
      goto L4443;
    }
 L9257: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L5036;
  goto ret0;

 L188: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9256;

 L260: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L261;
    case CALL:
      goto L4128;
    default:
     break;
   }
  goto L9256;

 L261: ATTRIBUTE_UNUSED_LABEL
  tem = recog_21 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9256;

 L4128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4129;
  goto L9256;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4130;
    }
 L4143: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4144;
    }
  goto L9256;

 L4130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4131;

 L4131: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4132;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4143;

 L4132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L4133;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4143;

 L4133: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4134;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4143;

 L4134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6523 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 591;  /* call_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4143;

 L4144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4145;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4146;
  goto L9256;

 L4146: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4147;
  goto L9256;

 L4147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 592;  /* call_internal_direct */
    }
  goto L9256;

 L3911: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4481;
    case CALL:
      goto L4156;
    default:
     break;
   }
  goto L9256;

 L4481: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9256;

 L4156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4157;
  goto L9256;

 L4157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4158;
    }
  goto L9256;

 L4158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L4159;

 L4159: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4160;
  goto L9256;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4161;
  goto L9256;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L4162;
  goto L9256;

 L4162: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4163;
  goto L9256;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6554 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 593;  /* call_direct_split */
    }
  goto L9256;

 L6559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L6560;
  goto L9256;

 L6560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6561;
  goto L9256;

 L6561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6562;
  goto L9256;

 L6562: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6563;
    }
  goto L9256;

 L6563: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_uimm6_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6564;
    }
  goto L9256;

 L6564: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6565;
  goto L9256;

 L6565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L6566;
  goto L9256;

 L6566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6567;
  goto L9256;

 L6567: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6568;
  goto L9256;

 L6568: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6569;
  goto L9256;

 L6569: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6570;
  goto L9256;

 L6570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L6571;
  goto L9256;

 L6571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6572;
  goto L9256;

 L6572: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6573;
  goto L9256;

 L6573: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6574;
  goto L9256;

 L6574: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6575;
  goto L9256;

 L6575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6576;
  goto L9256;

 L6576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6577;
  goto L9256;

 L6577: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6578;
  goto L9256;

 L6578: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6579;
  goto L9256;

 L6579: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L6580;
  goto L9256;

 L6580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6581;
  goto L9256;

 L6581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6582;
  goto L9256;

 L6582: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6583;
  goto L9256;

 L6583: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6584;
  goto L9256;

 L6584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == SET)
    goto L6585;
  goto L9256;

 L6585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L6586;
  goto L9256;

 L6586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 146)
    goto L6587;
  goto L9256;

 L6587: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6588;
  goto L9256;

 L6588: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 1091 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 829;  /* mips_wrdsp */
    }
  goto L9256;

 L4443: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4444;
  goto L9257;

 L4444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4445;
    }
  goto L9257;

 L4445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4446;
  goto L9257;

 L4446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4447;
  goto L9257;

 L4447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4448;
    }
  goto L9257;

 L4448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6871 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)))
    {
      return 621;  /* *mips16e_save_restore */
    }
  goto L9257;

 L5036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5037;
  goto ret0;

 L5037: ATTRIBUTE_UNUSED_LABEL
  return recog_27 (x0, insn, pnum_clobbers);

 L9241: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L11009;
    case 2:
      goto L11015;
    default:
      break;
    }
  goto ret0;

 L11009: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 33L:
      goto L2815;
    case 37L:
      goto L2875;
    case 36L:
      goto L2877;
    case 34L:
      goto L2893;
    case 42L:
      goto L4007;
    case 43L:
      goto L4009;
    case 32L:
      goto L4438;
    case 30L:
      goto L4441;
    default:
      break;
    }
  goto ret0;

 L2815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 390;  /* loadgp_blockage */
    }
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 564;  /* blockage */
    }
  goto ret0;

 L2875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5122 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(GENERATE_SYNC))
    {
      return 401;  /* sync */
    }
  goto ret0;

 L2877: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (pmode_register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2878;
    }
  goto ret0;

 L2878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5128 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SYNCI))
    {
      return 402;  /* synci */
    }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT)
    goto L11018;
  goto ret0;

 L11018: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0L)
    goto L11020;
  goto ret0;

 L11020: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 405;  /* clear_hazard_si */
    }
 L11021: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 406;  /* clear_hazard_di */
    }
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 573;  /* mips_di */
    }
  goto ret0;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 574;  /* mips_ehb */
    }
  goto ret0;

 L4438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4439;
    }
  goto ret0;

 L4439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6833 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 619;  /* consttable_float */
    }
  goto ret0;

 L4441: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 620;  /* align */
    }
  goto ret0;

 L11015: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x0, 1) == 31)
    goto L4430;
  goto ret0;

 L4430: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (tls_reloc_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4431;
    }
 L4434: ATTRIBUTE_UNUSED_LABEL
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4435;
    }
  goto ret0;

 L4431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4432;
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L4434;

 L4432: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6813 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16_PCREL_LOADS))
    {
      return 617;  /* consttable_tls_reloc */
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L4434;

 L4435: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4436;
    }
  goto ret0;

 L4436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6821 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 618;  /* consttable_int */
    }
  goto ret0;

 L9246: ATTRIBUTE_UNUSED_LABEL
  return 567;  /* *return */

 L9247: ATTRIBUTE_UNUSED_LABEL
  return 568;  /* *simple_return */

 L4090: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L4091;
  goto ret0;

 L4091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4092;
    }
  goto ret0;

 L4092: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L4093;

 L4093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6419 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 587;  /* sibcall_internal */
    }
 L4125: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 590;  /* call_internal */
    }
 L4139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6523 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 591;  /* call_split */
    }
  goto ret0;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L4302;
    }
 L4306: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L11022;
    case DImode:
      goto L11023;
    default:
      break;
    }
  goto ret0;

 L4302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4303;
    }
  x1 = XEXP (x0, 0);
  goto L4306;

 L4303: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L4304;
    }
  x1 = XEXP (x0, 0);
  goto L4306;

 L4304: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6702 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS))
    {
      return 600;  /* prefetch */
    }
  x1 = XEXP (x0, 0);
  goto L4306;

 L11022: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L4307;
  goto ret0;

 L4307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4308;
    }
  goto ret0;

 L4308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4309;
    }
  goto ret0;

 L4309: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L4310;
    }
  goto ret0;

 L4310: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L4311;
    }
  goto ret0;

 L4311: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6717 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 601;  /* *prefetch_indexed_si */
    }
  goto ret0;

 L11023: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L4314;
  goto ret0;

 L4314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4315;
    }
  goto ret0;

 L4315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4316;
    }
  goto ret0;

 L4316: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L4317;
    }
  goto ret0;

 L4317: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L4318;
    }
  goto ret0;

 L4318: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6717 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 602;  /* *prefetch_indexed_di */
    }
  goto ret0;

 L9251: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0L:
        goto L11024;
      case 1L:
        goto L11025;
      default:
        break;
      }
  goto ret0;

 L11024: ATTRIBUTE_UNUSED_LABEL
  return 603;  /* nop */

 L11025: ATTRIBUTE_UNUSED_LABEL
  return 604;  /* hazard_nop */
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8508;
    }
 L11032: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8520;
    }
 L11035: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8839;
    }
 L11036: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8849;
    }
 L11038: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8889;
    }
 L11041: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L9127;
    }
  goto ret0;

 L8508: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L8509;
  x1 = XEXP (x0, 0);
  goto L11032;

 L8509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L8510;
 L8515: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8516;
    }
  x1 = XEXP (x0, 0);
  goto L11032;

 L8510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8511;
    }
  x2 = XEXP (x1, 0);
  goto L8515;

 L8511: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1223 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_1069 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8515;

 L8516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8517;
    }
  x1 = XEXP (x0, 0);
  goto L11032;

 L8517: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1249 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_1070 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11032;

 L8520: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11078;
  x1 = XEXP (x0, 0);
  goto L11035;

 L11078: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L8521;
    case ZERO_EXTEND:
      goto L8747;
    case AND:
      goto L8752;
    case HIGH:
      goto L8817;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11082;
    case QImode:
      goto L11086;
    case HImode:
      goto L11087;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L11082: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L8522;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8758;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8523;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8524;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8524: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1293 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1071 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8758: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3272 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 3277 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode))))
    {
      return gen_split_1137 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L11086: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8788;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L8768;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8789;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8789: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3384 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3386 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1148 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8768: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3309 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1143 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L11087: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8794;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L8778;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8795;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8795: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3384 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3386 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1149 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8778: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3309 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1145 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8748;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8748: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3112 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS) && 
#line 3116 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1130 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8753;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4294967295L
      && 
#line 3142 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !ISA_HAS_EXT_INS && reload_completed))
    {
      return gen_split_1131 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8818;
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8818: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4014 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 4016 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( epilogue_completed)))
    {
      return gen_split_1171 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11035;

 L8839: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == HIGH)
    goto L8840;
  x1 = XEXP (x0, 0);
  goto L11036;

 L8840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (symbolic_operand_with_high (x2, DImode))
    {
      operands[1] = x2;
      goto L8841;
    }
  x1 = XEXP (x0, 0);
  goto L11036;

 L8841: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4092 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return gen_split_1175 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11036;

 L8849: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11088;
  x1 = XEXP (x0, 0);
  goto L11038;

 L11088: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case HIGH:
      goto L8850;
    case LO_SUM:
      goto L8861;
    case UNSPEC:
      goto L11095;
    case BSWAP:
      goto L9097;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L11090;
    default:
      x1 = XEXP (x0, 0);
      goto L11038;
   }
 L11090: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8871;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L11098;
  x1 = XEXP (x0, 0);
  goto L11038;

 L11098: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8851;
    }
 L11099: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8881;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8851: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4109 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4111 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1177 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11099;

 L8881: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4152 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4154 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1183 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8862;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8863;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8863: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4127 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1179 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L11095: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L11100;
    case 1:
      goto L11101;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L11100: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 15)
    goto L8996;
  x1 = XEXP (x0, 0);
  goto L11038;

 L8996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8997;
 L9018: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9019;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8998;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L9018;

 L8998: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4976 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4978 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1233 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L9018;

 L9019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9020;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L9020: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5019 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5021 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1237 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L11101: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 15L:
      goto L9007;
    case 16L:
      goto L9029;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L9007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L9008;

 L9008: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4993 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4995 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1235 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L9029: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9030;
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L9030: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5040 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 5042 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1239 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L9097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      return gen_split_1258 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8871: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4139 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 4141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1181 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11038;

 L8889: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11103;
  x1 = XEXP (x0, 0);
  goto L11041;

 L11103: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CONST:
      goto L8890;
    case MEM:
      goto L8922;
    case ASHIFT:
      goto L9070;
    case ASHIFTRT:
      goto L9076;
    case LSHIFTRT:
      goto L9082;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11041;

 L8890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 22)
    goto L8891;
  x1 = XEXP (x0, 0);
  goto L11041;

 L8891: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 4207 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1187 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L8922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L8923;
  x1 = XEXP (x0, 0);
  goto L11041;

 L8923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8924;
  x1 = XEXP (x0, 0);
  goto L11041;

 L8924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8925;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L8925: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4314 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_1193 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9071;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9072;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9072: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1253 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9077;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9078;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9078: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1254 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9083;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9084;
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9084: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1255 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11041;

 L9127: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 17)
    goto L9128;
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8954;
    }
  goto ret0;

 L9128: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (move_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9129;
    }
  goto ret0;

 L9129: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6308 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 714 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1284 (insn, operands);
    }
  goto ret0;

 L8954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)))
    {
      return gen_split_1213 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L11030;
    case DImode:
      goto L11031;
    case HImode:
      goto L11039;
    case QImode:
      goto L11040;
    case DFmode:
      goto L11042;
    case V2SFmode:
      goto L11043;
    case V2SImode:
      goto L11044;
    case V4HImode:
      goto L11045;
    case V8QImode:
      goto L11046;
    case TImode:
      goto L11047;
    case TFmode:
      goto L11048;
    default:
      break;
    }
 L8984: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L8985;
    }
  goto ret0;

 L11030: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8496;
    }
 L11033: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8761;
    }
 L11037: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8884;
    }
 L11049: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L9122;
    }
  goto L8984;

 L8496: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11050;
  x1 = XEXP (x0, 0);
  goto L11033;

 L11050: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8497;
    case HIGH:
      goto L8835;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L8498;
 L8503: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8504;
    }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8499;
    }
  x2 = XEXP (x1, 0);
  goto L8503;

 L8499: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1170 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_1067 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8503;

 L8504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8505;
    }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1196 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_1068 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (symbolic_operand_with_high (x2, SImode))
    {
      operands[1] = x2;
      goto L8836;
    }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8836: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4092 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return gen_split_1174 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11033;

 L8761: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11052;
  x1 = XEXP (x0, 0);
  goto L11037;

 L11052: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L8762;
    case HIGH:
      goto L8845;
    case LO_SUM:
      goto L8855;
    case UNSPEC:
      goto L11061;
    case LSHIFTRT:
      goto L9088;
    case BSWAP:
      goto L9093;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L11055;
    default:
      x1 = XEXP (x0, 0);
      goto L11037;
   }
 L11055: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8867;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L11066;
    case HImode:
      goto L11067;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L11066: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8800;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L8763;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8801;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8801: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3404 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3406 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1150 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8763: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3309 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1142 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L11067: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8806;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L8773;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8807;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8807: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3404 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3406 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1151 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8773: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3305 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3309 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1144 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L11068;
  x1 = XEXP (x0, 0);
  goto L11037;

 L11068: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8846;
    }
 L11069: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8876;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8846: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4109 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4111 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1176 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11069;

 L8876: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4152 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4154 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1182 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8856;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8857;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8857: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4125 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4127 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1178 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L11061: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L11070;
    case 1:
      goto L11071;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L11070: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 15)
    goto L8990;
  x1 = XEXP (x0, 0);
  goto L11037;

 L8990: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8991;
 L9012: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9013;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8991: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8992;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L9012;

 L8992: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4976 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4978 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1232 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L9012;

 L9013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9014;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9014: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5019 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5021 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1236 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L11071: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 15L:
      goto L9002;
    case 16L:
      goto L9024;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9002: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L9003;

 L9003: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4993 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4995 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1234 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9024: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9025;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9025: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5040 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 5042 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( mips_must_initialize_gp_p ())))
    {
      return gen_split_1238 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9089;
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_1256 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L9093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return gen_split_1257 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8867: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4139 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 4141 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1180 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11037;

 L8884: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11073;
 L8935: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8936;
    }
  x1 = XEXP (x0, 0);
  goto L11049;

 L11073: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CONST:
      goto L8885;
    case MEM:
      goto L8929;
    case ASHIFT:
      goto L9052;
    case ASHIFTRT:
      goto L9058;
    case LSHIFTRT:
      goto L9064;
    default:
     break;
   }
  goto L8935;

 L8885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 22)
    goto L8886;
  goto L8935;

 L8886: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4207 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed))
    {
      return gen_split_1186 (insn, operands);
    }
  goto L8935;

 L8929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L8930;
  goto L8935;

 L8930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8931;
  goto L8935;

 L8931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8932;
    }
  goto L8935;

 L8932: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4392 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_1203 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L8935;

 L9052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9053;
    }
  goto L8935;

 L9053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9054;
    }
  goto L8935;

 L9054: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1250 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L8935;

 L9058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9059;
    }
  goto L8935;

 L9059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9060;
    }
  goto L8935;

 L9060: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1251 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L8935;

 L9064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9065;
    }
  goto L8935;

 L9065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9066;
    }
  goto L8935;

 L9066: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5343 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1252 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L8935;

 L8936: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4430 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_1204 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11049;

 L9122: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 17)
    goto L9123;
  x1 = XEXP (x0, 0);
  goto L8984;

 L9123: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (move_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9124;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L9124: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6308 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()))
    {
      return gen_split_1283 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11031: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L8984;

 L11039: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L8939;
    }
 L11034: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L8781;
    }
  goto L8984;

 L8939: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == MEM)
    goto L8940;
  x1 = XEXP (x0, 0);
  goto L11034;

 L8940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L8941;
  x1 = XEXP (x0, 0);
  goto L11034;

 L8941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8942;
  x1 = XEXP (x0, 0);
  goto L11034;

 L8942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8943;
    }
  x1 = XEXP (x0, 0);
  goto L11034;

 L8943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4532 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_1206 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L11034;

 L8781: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L8782;
  x1 = XEXP (x0, 0);
  goto L8984;

 L8782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L11109;
  x1 = XEXP (x0, 0);
  goto L8984;

 L11109: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8812;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L8783;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8812: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8813;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8813: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3424 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && !ISA_HAS_EXTS) && 
#line 3426 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1152 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8783: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3350 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3354 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1147 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11040: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L8946;
    }
  goto L8984;

 L8946: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L8947;
  x1 = XEXP (x0, 0);
  goto L8984;

 L8947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L8948;
  x1 = XEXP (x0, 0);
  goto L8984;

 L8948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L8949;
  x1 = XEXP (x0, 0);
  goto L8984;

 L8949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8950;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8950: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4607 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_1208 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11042: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L8957;
    }
  goto L8984;

 L8957: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L8958;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8958: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)))
    {
      return gen_split_1214 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11043: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L8961;
    }
  goto L8984;

 L8961: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L8962;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8962: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 748 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return gen_split_1215 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11044: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L8965;
    }
  goto L8984;

 L8965: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L8966;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8966: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 749 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1216 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11045: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L8969;
    }
  goto L8984;

 L8969: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L8970;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8970: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 750 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1217 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11046: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L8973;
    }
  goto L8984;

 L8973: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L8974;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8974: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4781 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)) && 
#line 751 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1218 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11047: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L8977;
    }
  goto L8984;

 L8977: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L8978;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8978: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4791 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)))
    {
      return gen_split_1219 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L11048: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L8981;
    }
  goto L8984;

 L8981: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L8982;
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8982: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4791 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed && mips_split_move_insn_p (operands[0], operands[1], insn)))
    {
      return gen_split_1220 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L8984;

 L8985: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L8986;
    }
  goto ret0;

 L8986: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4803 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0))
    {
      return gen_split_1221 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_3 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11123;
    case DImode:
      goto L11124;
    default:
      break;
    }
 L9147: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9148;
    }
  goto ret0;

 L11123: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9034;
    }
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8647;
    }
 L11119: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8703;
    }
 L11121: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8908;
    }
 L11125: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    goto L9107;
  goto L9147;

 L9034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 18)
    goto L9035;
  x2 = XEXP (x1, 0);
  goto L9147;

 L9035: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9036;
    }
  x2 = XEXP (x1, 0);
  goto L9147;

 L9036: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9037;
    }
  x2 = XEXP (x1, 0);
  goto L9147;

 L9037: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9038;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L9039;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9039: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5061 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return gen_split_1240 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L8647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == TRUNCATE)
    goto L8648;
  if (splittable_const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8896;
    }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L8649;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8649: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L8650;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8650: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L11127;
  x2 = XEXP (x1, 0);
  goto L11119;

 L11127: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L8651;
    case ZERO_EXTEND:
      goto L8665;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8651: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L8652;
    }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8652: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8653;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8653: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L8654;
    }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8654: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L8655;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8655: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8656;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8657;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8657: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16) && 
#line 2100 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_1096 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8665: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L8666;
    }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8666: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8667;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8667: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L8668;
    }
  x2 = XEXP (x1, 0);
  goto L11119;

 L8668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L8669;
  x2 = XEXP (x1, 0);
  goto L11119;

 L8669: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8670;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8671;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8671: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2098 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_MIPS16) && 
#line 2100 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_1097 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_1188 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11119;

 L8703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11129;
  x2 = XEXP (x1, 0);
  goto L11121;

 L11129: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L8704;
    case UDIV:
      goto L8726;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11121;

 L8704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8705;
    }
  x2 = XEXP (x1, 0);
  goto L11121;

 L8705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8706;
    }
  x2 = XEXP (x1, 0);
  goto L11121;

 L8706: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L8707;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8708;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L8709;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2575 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120 && !TARGET_MIPS16) && 
#line 2577 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1113 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8727;
    }
  x2 = XEXP (x1, 0);
  goto L11121;

 L8727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8728;
    }
  x2 = XEXP (x1, 0);
  goto L11121;

 L8728: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L8729;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8730;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L8731;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8732;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2617 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_1117 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11121;

 L8908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L8909;

 L8909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8910;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11125;

 L8910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8911;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11125;

 L8911: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4229 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return gen_split_1190 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11125;

 L9107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 20)
    goto L9108;
  x2 = XEXP (x1, 0);
  goto L9147;

 L9108: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9109;
  x2 = XEXP (x1, 0);
  goto L9147;

 L9109: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9110;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9111;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9111: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6291 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6293 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
( epilogue_completed)))
    {
      return gen_split_1281 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L11124: ATTRIBUTE_UNUSED_LABEL
  if (cprestore_save_slot_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9043;
    }
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8675;
    }
 L11120: ATTRIBUTE_UNUSED_LABEL
  if (muldiv_target_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8714;
    }
 L11122: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8915;
    }
 L11126: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    goto L9115;
  goto L9147;

 L9043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 18)
    goto L9044;
  x2 = XEXP (x1, 0);
  goto L9147;

 L9044: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9045;
    }
  x2 = XEXP (x1, 0);
  goto L9147;

 L9045: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9046;
    }
  x2 = XEXP (x1, 0);
  goto L9147;

 L9046: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9047;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L9048;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L9048: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5061 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(mips_must_initialize_gp_p ()) && 
#line 726 "../../gcc-4.8.3+os161-2.1/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return gen_split_1241 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9147;

 L8675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11131;
 L8901: ATTRIBUTE_UNUSED_LABEL
  if (splittable_const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8902;
    }
  x2 = XEXP (x1, 0);
  goto L11120;

 L11131: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L8676;
    {
    }
