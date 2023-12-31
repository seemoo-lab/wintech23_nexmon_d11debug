#ifndef SCRATCH_REGISTER_H_
#define SCRATCH_REGISTER_H_
#define SCR_RSV0 r0
#define SCR_RSV1 r1
#define SCR_RSV2 r2
#define SCR_DOT11_CONSTANTS_CWMIN r3
#define SCR_DOT11_CONSTANTS_CWMAX r4
#define SCR_DOT11_CONSTANTS_CWCUR r5
#define SCR_DOT11_CONSTANTS_SRC_LMT r6
#define SCR_DOT11_CONSTANTS_LRC_LMT r7
#define SCR_DOT11_CONSTANTS_DTIMCOUNT r8
#define SCR_TX_SEQ_NUM r9
#define SCR_TX_SEQ_NUM_FRAG r10 //free for debug patch
#define SCR_TX_FRM_RETX_CNT r11
#define SCR_TX_PHYTYPE_old_sta_short_retry_cnt r12
#define SCR_TX_PHYVER_old_sta_long_retry_cnt r13
#define SCR_TX_EXPECTED_RESPONSE_FRM r14
#define SCR_TX_BEACON_INDX_old_remaining_backoff r15
#define SCR_TX_PRS_INDX_old_cw_window r16
#define SCR_TX_TXE_CTL r17
#define SCR_TX_CTX_TYPE_SUBTYPE r18
#define SCR_RX_TYPE_SUBTYPE_RXFRAME r19
#define SCR_STATE_STORAGE_REG1 r20
#define SCR_TXPWR_SUM r21
#define SCR_TXPWR_ITER r22
#define SCR_RX_FRM_TYPE r23
#define SCR_THIS_AGG_AMSDU r24 //free
#define SCR_KEY_INDX r25
#define SCR_RX_FRM_MPDU_LEN r26
#define SCR_RX_TSF_TIMER_VAL_WD3 r27
#define SCR_RX_TSF_TIMER_VAL_WD2 r28
#define SCR_RX_TSF_TIMER_VAL_WD1 r29
#define SCR_RX_TSF_TIMER_VAL_WD0 r30
#define SCR_RX_START_SEQUENCE_NUM_AMPDU_BA r31 //free
#define SCR_RX_QOS_FLD r32
#define SCR_TMP0 r33
#define SCR_TMP1 r34
#define SCR_TMP2 r35
#define SCR_TMP3 r36
#define SCR_TMP4 r37
#define SCR_TMP5 r38
#define SCR_PROBE_RESPONSE_QUEUE_PENALTY_CTR r39
#define SCR_NOSUCCESS_ATTEMPT_ANT_CNT r40
#define SCR_SYMBOL r41
#define SCR_RX_FRAME_TYPE r42
#define SCR_STATE_STORAGE_REG2 r43
#define SCR_STATE_STORAGE_REG3 r44
#define SCR_STATE_STORAGE_REG4 r45
#define SCR_STATE_STORAGE_REG5 r46
#define SCR_NITRO_TXT r47
#define SCR_NITRO_RXAID r48 //free
#define SCR_ADJPWR_IDX r49 //free
#define SCR_CUR_PTR r50
#define SCR_S_BTCX_BT_DUR_old_revid4 r51
#define SCR_INDX r52 //free
#define SCR_ADDR0 r53 //free
#define SCR_ADDR1 r54 //free
#define SCR_ADDR2 r55 //free
#define SCR_ADDR3 r56 //free
#define SCR_ADDR4 r57
#define SCR_ADDR5 r58 //free
#define SCR_TMP6 r59
#define SCR_KEYINDX_BACKUP r60
#define SCR_MFGTEST_TMP0 r61 //free
#define SCR_RX_END_SEQUENCE_NUM_AMPDU_BA r62 //used
#define SCR_STATE_STORAGE_REG6 r63
#endif /* SCRATCH_REGISTER_H_ */
