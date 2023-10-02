#ifndef SPECIAL_PURPOSE_REGISTER_H_
#define SPECIAL_PURPOSE_REGISTER_H_
#define IHR_SHM_BUF_BASE		spr001
#define IHR_SHM_BYT_CNT		spr002
#define IHR_RCV_FIFO_CTL		spr003
#define IHR_RCV_CTL		spr004
#define IHR_RCV_FRM_CNT		spr005
#define IHR_RCV_STATUS_LEN		spr006
#define IHR_RCV_SHM_STADDR		spr007
#define IHR_RCV_SHM_STCNT		spr008
#define IHR_RXE_PHYRS_0		spr009
#define IHR_RXE_PHYRS_1		spr00a
#define IHR_RXE_COND		spr00b
#define IHR_RXE_RXCNT		spr00c
#define IHR_RXE_STATUS1		spr00d
#define IHR_RXE_STATUS2		spr00e
#define IHR_RXE_PLCP_LEN		spr00f
#define IHR_RCV_FRM_CNT_Q0		spr010
#define IHR_RCV_FRM_CNT_Q1		spr011
#define IHR_RCV_WRD_CNT_Q0		spr012
#define IHR_RCV_WRD_CNT_Q1		spr013
#define IHR_RCV_RXFIFO_WRBURST		spr014
#define IHR_RCV_PHYFIFO_WRDCNT		spr015
#define IHR_RCV_BM_STARTPTR_Q0		spr016
#define IHR_RCV_BM_ENDPTR_Q0		spr017
#define IHR_EXT_IHR_ADDR		spr018
#define IHR_EXT_IHR_DATA		spr019
#define IHR_RXE_PHYRS_2		spr01a
#define IHR_RXE_PHYRS_3		spr01b
#define IHR_PHY_MODE		spr01c
#define IHR_RCV_BM_STARTPTR_Q1		spr01d
#define IHR_RCV_BM_ENDPTR_Q1		spr01e
#define IHR_RCV_COPYCNT_Q1		spr01f
#define IHR_RXE_PHYRS_ADDR		spr020
#define IHR_RXE_PHYRS_DATA		spr021
#define IHR_RXE_PHYRS_4		spr022
#define IHR_RXE_PHYRS_5		spr023
#define IHR_rxe_errval		spr024
#define IHR_rxe_status3		spr026
#define IHR_SHM_RXE_ADDR		spr027
#define IHR_RcvAMPDUCtl0		spr028
#define IHR_RcvAMPDUCtl1		spr029
#define IHR_RcvCtl1		spr02a
#define IHR_RcvLFIFOStatus		spr02b
#define IHR_RcvAMPDUStatus		spr02c
#define IHR_radioihrAddr		spr030
#define IHR_radioihrData		spr031
#define IHR_PSM_SLEEP_TMR		spr040
#define IHR_PSM_MAC_CTLH		spr041
#define IHR_PSM_MAC_INTSTAT_L		spr042
#define IHR_PSM_MAC_INTSTAT_H		spr043
#define IHR_PSM_MAC_INTMASK_L		spr044
#define IHR_PSM_MAC_INTMASK_H		spr045
#define IHR_PSM_ERR_PC		spr046
#define IHR_PSM_MACCOMMAND		spr047
#define IHR_PSM_BRC_0		spr048
#define IHR_PSM_PHY_CTL		spr049
#define IHR_PSM_INTSEL_0		spr04a
#define IHR_PSM_INTSEL_1		spr04b
#define IHR_PSM_INTSEL_2		spr04c
#define IHR_PSM_GPIOIN		spr04d
#define IHR_PSM_GPIOOUT		spr04e
#define IHR_PSM_GPIOEN		spr04f
#define IHR_PSM_BRED_0		spr050
#define IHR_PSM_BRED_1		spr051
#define IHR_PSM_BRED_2		spr052
#define IHR_PSM_BRED_3		spr053
#define IHR_PSM_BRCL_0		spr054
#define IHR_PSM_BRCL_1		spr055
#define IHR_PSM_BRCL_2		spr056
#define IHR_PSM_BRCL_3		spr057
#define IHR_PSM_BRPO_0		spr058
#define IHR_PSM_BRPO_1		spr059
#define IHR_PSM_BRPO_2		spr05a
#define IHR_PSM_BRPO_3		spr05b
#define IHR_PSM_BRWK_0		spr05c
#define IHR_PSM_BRWK_1		spr05d
#define IHR_PSM_BRWK_2		spr05e
#define IHR_PSM_BRWK_3		spr05f
#define IHR_BASE0		spr060
#define IHR_BASE1		spr061
#define IHR_BASE2		spr062
#define IHR_BASE3		spr063
#define IHR_BASE4		spr064
#define IHR_BASE5		spr065
#define IHR_BASE6		spr066
#define IHR_PSM_OHR_ERR		spr067
#define IHR_Subroutine_Stack_Status		spr068
#define IHR_Subroutine_Stack_RdPtr		spr069
#define IHR_Subroutine_Stack_RdData		spr06a
#define IHR_PSM_PC_REG_3		spr06b
#define IHR_PSM_BRC_1		spr06c
#define IHR_PSM_MUL		spr06d
#define IHR_PSM_MACCONTROL1		spr06e
#define IHR_PSMSrchCtrlStatus		spr070
#define IHR_PSMSrchBase		spr071
#define IHR_PSMSrchLimit		spr072
#define IHR_PSMSrchAddress		spr073
#define IHR_PSMSrchData		spr074
#define IHR_SBRegAddr		spr075
#define IHR_SBRegDataL		spr076
#define IHR_SBRegDataH		spr077
#define IHR_PSMCoreCtlStat		spr078
#define IHR_PSMWorkaround		spr079
#define IHR_SbAddrLL		spr07a
#define IHR_SbAddrL		spr07b
#define IHR_SbAddrH		spr07c
#define IHR_SbAddrHH		spr07d
#define IHR_GpioOut		spr07e
#define IHR_PSM_TXMEM_PDA		spr07f
#define IHR_TXE_CTL		spr080
#define IHR_TXE_AUX		spr081
#define IHR_TXE_TS_LOC		spr082
#define IHR_TXE_TIME_OUT		spr083
#define IHR_TXE_WM_0		spr084
#define IHR_TXE_WM_1		spr085
#define IHR_TXE_PHYCTL		spr086
#define IHR_TXE_STATUS		spr087
#define IHR_TXE_MMPLCP0		spr088
#define IHR_TXE_MMPLCP1		spr089
#define IHR_TXE_PHYCTL1		spr08a
#define IHR_TXE_PHYCTL2		spr08b
#define IHR_TXE_FRMSTAT_ADDR		spr08c
#define IHR_TXE_FRMSTAT_DATA		spr08d
#define IHR_XmtFIFOFullThreshold		spr090
#define IHR_XmtFifoFrameCnt		spr091
#define IHR_BMCReadReq		spr093
#define IHR_BMCReadOffset		spr094
#define IHR_BMCReadLength		spr095
#define IHR_BMCReadStatus		spr096
#define IHR_XmtShmAddr		spr097
#define IHR_PsmMSDUAccess		spr098
#define IHR_MSDUEntryBufCnt		spr099
#define IHR_MSDUEntryStartIdx		spr09a
#define IHR_MSDUEntryEndIdx		spr09b
#define IHR_SMP_PTR_H		spr09c
#define IHR_SCP_CURPTR_H		spr09d
#define IHR_BMCCmd1		spr09e
#define IHR_BMCDynAllocStatus		spr09f
#define IHR_BMCCTL		spr0a0
#define IHR_BMCConfig		spr0a1
#define IHR_BMCStartAddr		spr0a2
#define IHR_BMCSize		spr0a3
#define IHR_BMCCmd		spr0a4
#define IHR_BMCMaxBuffers		spr0a5
#define IHR_BMCMinBuffers		spr0a6
#define IHR_BMCAllocCtl		spr0a7
#define IHR_BMCDescrLen		spr0a8
#define IHR_SCP_STRTPTR		spr0a9
#define IHR_SCP_STOPPTR		spr0aa
#define IHR_SCP_CURPTR		spr0ab
#define IHR_SaveRestoreStartPtr		spr0ac
#define IHR_SPP_STRTPTR		spr0ad
#define IHR_SPP_STOPPTR		spr0ae
#define IHR_XmtDMABusy		spr0af
#define IHR_XmtTemplateDataLo		spr0b0
#define IHR_XmtTemplateDataHi		spr0b1
#define IHR_XmtTemplatePtr		spr0b2
#define IHR_XmtSuspFlush		spr0b3
#define IHR_XmtFifoRqPrio		spr0b4
#define IHR_BMCStatCtl		spr0b5
#define IHR_BMCStatData		spr0b6
#define IHR_BMCMSDUFifoStat		spr0b7
#define IHR_XMT_AMPDU_CTL		spr0b8
#define IHR_XMT_AMPDU_LEN		spr0b9
#define IHR_XMT_AMPDU_CRC		spr0ba
#define IHR_TXE_CTL1		spr0bb
#define IHR_TXE_STATUS1		spr0bc
#define IHR_TXAMPDUDelim		spr0bf
#define IHR_TXE_BM_0		spr0c0
#define IHR_TXE_BM_1		spr0c1
#define IHR_TXE_BM_2		spr0c2
#define IHR_TXE_BM_3		spr0c3
#define IHR_TXE_BM_4		spr0c4
#define IHR_TXE_BM_5		spr0c5
#define IHR_TXE_BM_6		spr0c6
#define IHR_TXE_BM_7		spr0c7
#define IHR_TXE_BM_8		spr0c8
#define IHR_TXE_BM_9		spr0c9
#define IHR_TXE_BM_10		spr0ca
#define IHR_TXE_BM_11		spr0cb
#define IHR_TXE_BM_12		spr0cc
#define IHR_TXE_BM_13		spr0cd
#define IHR_TXE_BM_14		spr0ce
#define IHR_TXE_BM_15		spr0cf
#define IHR_TXE_BM_16		spr0d0
#define IHR_TXE_BM_17		spr0d1
#define IHR_TXE_BM_18		spr0d2
#define IHR_TXE_BM_19		spr0d3
#define IHR_TXE_BM_20		spr0d4
#define IHR_TXE_BM_21		spr0d5
#define IHR_TXE_BM_22		spr0d6
#define IHR_TXE_BM_23		spr0d7
#define IHR_TXE_BM_24		spr0d8
#define IHR_TXE_BM_25		spr0d9
#define IHR_TXE_BM_26		spr0da
#define IHR_TXE_BM_27		spr0db
#define IHR_TXE_BM_28		spr0dc
#define IHR_TXE_BM_29		spr0dd
#define IHR_TXE_BM_30		spr0de
#define IHR_TXE_BM_31		spr0df
#define IHR_TXE_BV_0		spr0e0
#define IHR_TXE_BV_1		spr0e1
#define IHR_TXE_BV_2		spr0e2
#define IHR_TXE_BV_3		spr0e3
#define IHR_TXE_BV_4		spr0e4
#define IHR_TXE_BV_5		spr0e5
#define IHR_TXE_BV_6		spr0e6
#define IHR_TXE_BV_7		spr0e7
#define IHR_TXE_BV_8		spr0e8
#define IHR_TXE_BV_9		spr0e9
#define IHR_TXE_BV_10		spr0ea
#define IHR_TXE_BV_11		spr0eb
#define IHR_TXE_BV_12		spr0ec
#define IHR_TXE_BV_13		spr0ed
#define IHR_TXE_BV_14		spr0ee
#define IHR_TXE_BV_15		spr0ef
#define IHR_TXE_BV_16		spr0f0
#define IHR_TXE_BV_17		spr0f1
#define IHR_TXE_BV_18		spr0f2
#define IHR_TXE_BV_19		spr0f3
#define IHR_TXE_BV_20		spr0f4
#define IHR_TXE_BV_21		spr0f5
#define IHR_TXE_BV_22		spr0f6
#define IHR_TXE_BV_23		spr0f7
#define IHR_TXE_BV_24		spr0f8
#define IHR_TXE_BV_25		spr0f9
#define IHR_TXE_BV_26		spr0fa
#define IHR_TXE_BV_27		spr0fb
#define IHR_TXE_BV_28		spr0fc
#define IHR_TXE_BV_29		spr0fd
#define IHR_TXE_BV_30		spr0fe
#define IHR_TXE_BV_31		spr0ff
#define IHR_TSF_CTL		spr100
#define IHR_TSF_STAT		spr101
#define IHR_TSF_CFP_STRT_L		spr102
#define IHR_TSF_CFP_STRT_H		spr103
#define IHR_TSF_CFP_END_L		spr104
#define IHR_TSF_CFP_END_H		spr105
#define IHR_TSF_CFP_MAX_DUR		spr106
#define IHR_TSF_CFP_REP_L		spr107
#define IHR_TSF_CFP_REP_H		spr108
#define IHR_TSF_CFP_PRE_TBTT		spr109
#define IHR_TSF_CFP_CFP_D0_L		spr10a
#define IHR_TSF_CFP_CFP_D0_H		spr10b
#define IHR_TSF_CFP_CFP_D1_L		spr10c
#define IHR_TSF_CFP_CFP_D1_H		spr10d
#define IHR_TSF_CFP_CFP_D2_L		spr10e
#define IHR_TSF_CFP_CFP_D2_H		spr10f
#define IHR_TSF_CFP_TXOP_SQS_L		spr110
#define IHR_TSF_CFP_TXOP_SQS_H		spr111
#define IHR_TSF_CFP_TXOP_PQS		spr112
#define IHR_TSF_CFP_TXOP_SQD_L		spr113
#define IHR_TSF_CFP_TXOP_SQD_H		spr114
#define IHR_TSF_CFP_TXOP_PQD		spr115
#define IHR_TSF_FES_DUR		spr116
#define IHR_TSF_CLK_FRAC_L		spr117
#define IHR_TSF_CLK_FRAC_H		spr118
#define IHR_TSF_TMR_TSF_L		spr119
#define IHR_TSF_TMR_TSF_ML		spr11a
#define IHR_TSF_TMR_TSF_MU		spr11b
#define IHR_TSF_TMR_TSF_H		spr11c
#define IHR_TSF_TMR_TX_OFFSET		spr11d
#define IHR_TSF_TMR_RX_OFFSET		spr11e
#define IHR_TSF_TMR_RX_TS		spr11f
#define IHR_TSF_TMR_TX_TS		spr120
#define IHR_TSF_TMR_RX_END_TS		spr121
#define IHR_TSF_TMR_DELTA		spr122
#define IHR_TSF_GPT_0_STAT		spr123
#define IHR_TSF_GPT_1_STAT		spr124
#define IHR_TSF_GPT_0_CTR_L		spr125
#define IHR_TSF_GPT_1_CTR_L		spr126
#define IHR_TSF_GPT_0_CTR_H		spr127
#define IHR_TSF_GPT_1_CTR_H		spr128
#define IHR_TSF_GPT_0_VAL_L		spr129
#define IHR_TSF_GPT_1_VAL_L		spr12a
#define IHR_TSF_GPT_0_VAL_H		spr12b
#define IHR_TSF_GPT_1_VAL_H		spr12c
#define IHR_TSF_RANDOM		spr12d
#define IHR_RAND_SEED_0		spr12e
#define IHR_RAND_SEED_1		spr12f
#define IHR_RAND_SEED_2		spr130
#define IHR_TSF_ADJUST		spr131
#define IHR_TSF_PHY_HDR_TM		spr132
#define IHR_TSF_GPT_2_STAT		spr133
#define IHR_TSF_GPT_2_CTR_L		spr134
#define IHR_TSF_GPT_2_CTR_H		spr135
#define IHR_TSF_GPT_2_VAL_L		spr136
#define IHR_TSF_GPT_2_VAL_H		spr137
#define IHR_TSF_GPT_ALL_STAT		spr138
#define IHR_TSF_ADJ_CTL		spr139
#define IHR_TSF_ADJ_PORTAL		spr13a
#define IHR_IFS_SIFS_RX_TX_TX		spr140
#define IHR_IFS_SIFS_NAV_TX		spr141
#define IHR_IFS_SLOT		spr142
#define IHR_IFS_EIFS		spr143
#define IHR_IFS_CTL		spr144
#define IHR_IFS_BOFF_CTR		spr145
#define IHR_IFS_SLOT_CTR		spr146
#define IHR_IFS_FREE_SLOTS		spr147
#define IHR_IFS_STAT		spr148
#define IHR_IFS_MEDBUSY_CTR		spr149
#define IHR_IFS_TX_DUR		spr14a
#define IHR_IFS_RIFS_TIME		spr14b
#define IHR_IFS_STAT1		spr14c
#define IHR_IFS_EDCAPRI		spr14d
#define IHR_IFS_AIFSN		spr14e
#define IHR_IFS_CTL1		spr14f
#define IHR_SLOW_CTL		spr150
#define IHR_SLOW_TIMER_L		spr151
#define IHR_SLOW_TIMER_H		spr152
#define IHR_SLOW_FRAC		spr153
#define IHR_FAST_PWRUP_DLY		spr154
#define IHR_SLOW_PER		spr155
#define IHR_SLOW_PER_FRAC		spr156
#define IHR_SLOW_CALTIMER_L		spr157
#define IHR_SLOW_CALTIMER_H		spr158
#define IHR_IFS_STAT2		spr159
#define IHR_BTCX_CTL		spr15a
#define IHR_BTCX_STAT		spr15b
#define IHR_BTCX_TRANSCTL		spr15c
#define IHR_BTCX_PRIORITYWIN		spr15d
#define IHR_BTCX_TXCONFTIMER		spr15e
#define IHR_BTCX_PRISELTIMER		spr15f
#define IHR_BTCX_PRV_RFACT_TIMER		spr160
#define IHR_BTCX_CUR_RFACT_TIMER		spr161
#define IHR_BTCX_RFACT_DUR_TIMER		spr162
#define IHR_IFS_CTL_SEL_PRICRS		spr163
#define IHR_IfsCtlSelSecCrs		spr164
#define IHR_IfStatEdCrs160M		spr165
#define IHR_CRSEDCntrCtrl		spr166
#define IHR_CRSEDCntrAddr		spr167
#define IHR_CRSEDCntrData		spr168
#define IHR_EXT_STAT_EDCRS160M		spr169
#define IHR_ERCXControl		spr16a
#define IHR_ERCXStatus		spr16b
#define IHR_ERCXTransCtl		spr16c
#define IHR_ERCXPriorityWin		spr16d
#define IHR_ERCXConfTimer		spr16e
#define IHR_ERCX_PRISELTIMER		spr16f
#define IHR_ERCXPrvRfActTimer		spr170
#define IHR_ERCXCurRfActTimer		spr171
#define IHR_ERCXActDurTimer		spr172
#define IHR_BTCX_ECI_ADDR		spr178
#define IHR_BTCX_ECI_DATA		spr179
#define IHR_BTCX_ECI_MASK_ADDR		spr17a
#define IHR_BTCX_ECI_MASK_DATA		spr17b
#define IHR_COEX_IO_MASK		spr17c
#define IHR_BTCX_ECI_EVENT_ADDR		spr17d
#define IHR_BTCX_ECI_EVENT_DATA		spr17e
#define IHR_NAV_CTL		spr180
#define IHR_NAV_STAT		spr181
#define IHR_NAV_CNTR_L		spr182
#define IHR_NAV_CNTR_H		spr183
#define IHR_NAV_TBTT_NOW_L		spr184
#define IHR_WEP_CTL		spr1e0
#define IHR_WEP_STAT		spr1e1
#define IHR_WEP_HDRLOC		spr1e2
#define IHR_WEP_PSDULEN		spr1e3
#define IHR_WEP_KEY_ADDR		spr1e4
#define IHR_WEP_KEY_DATA		spr1e5
#define IHR_WEP_REG_ADDR		spr1e6
#define IHR_WEP_REG_DATA		spr1e7
#define IHR_PMQ_CTL		spr1f0
#define IHR_PMQ_STATUS		spr1f1
#define IHR_PMQ_PAT_0		spr1f2
#define IHR_PMQ_PAT_1		spr1f3
#define IHR_PMQ_PAT_2		spr1f4
#define IHR_PMQ_DAT		spr1f5
#define IHR_PMQ_DAT_OR_MAT		spr1f6
#define IHR_PMQ_DAT_OR_ALL		spr1f7
#define IHR_pmqdataor_mat1		spr1f8
#define IHR_pmqdataor_mat2		spr1f9
#define IHR_pmqdataor_mat3		spr1fa
#define IHR_pmq_auxsts		spr1fb
#define IHR_pmq_ctl1		spr1fc
#define IHR_pmq_status1		spr1fd
#define IHR_pmq_addthr		spr1fe
#define IHR_AQMConfig		spr200
#define IHR_AQMFifoDef		spr201
#define IHR_AQMMaxIdx		spr202
#define IHR_AQMRcvdBA0		spr203
#define IHR_AQMRcvdBA1		spr204
#define IHR_AQMRcvdBA2		spr205
#define IHR_AQMRcvdBA3		spr206
#define IHR_AQMBaSSN		spr207
#define IHR_AQMRefSN		spr208
#define IHR_AQMMaxAggLenLow		spr209
#define IHR_AQMMaxAggLenHi		spr20a
#define IHR_AQMAggParams		spr20b
#define IHR_AQMMinMpduLen		spr20c
#define IHR_AQMMacAdjLen		spr20d
#define IHR_DebugBusCtrl		spr20e
#define IHR_MinConsCnt		spr20f
#define IHR_AQMAggStats		spr210
#define IHR_AQMAggLenLow		spr211
#define IHR_AQMAggLenHi		spr212
#define IHR_AQMIdx		spr213
#define IHR_AQMMpduLen		spr214
#define IHR_AQMTxCnt		spr215
#define IHR_AQMUpdBA0		spr216
#define IHR_AQMUpdBA1		spr217
#define IHR_AQMUpdBA2		spr218
#define IHR_AQMUpdBA3		spr219
#define IHR_AQMAckCnt		spr21a
#define IHR_AQMConsCnt		spr21b
#define IHR_AQMFifoReady		spr21c
#define IHR_AQMStartLoc		spr21d
#define IHR_AQMAggRptr		spr21e
#define IHR_AQMTxcntRptr		spr21f
#define IHR_TDCCTL		spr220
#define IHR_TDC_Plcp0		spr221
#define IHR_TDC_Plcp1		spr222
#define IHR_TDC_FrmLen0		spr223
#define IHR_TDC_FrmLen1		spr224
#define IHR_TDC_Txtime		spr225
#define IHR_TDC_VhtSigB0		spr226
#define IHR_TDC_VhtSigB1		spr227
#define IHR_TDC_LSigLen		spr228
#define IHR_TDC_NSym0		spr229
#define IHR_TDC_NSym1		spr22a
#define IHR_TDC_VhtPsduLen0		spr22b
#define IHR_TDC_VhtPsduLen1		spr22c
#define IHR_TDC_VhtMacPad		spr22d
#define IHR_AQMCurTxcnt		spr22f
#define IHR_ShmDma_Ctl		spr230
#define IHR_ShmDma_TxdcAddr		spr231
#define IHR_ShmDma_ShmAddr		spr232
#define IHR_ShmDma_XferCnt		spr233
#define IHR_Txdc_Addr		spr234
#define IHR_Txdc_Data		spr235
#define IHR_TXE_VASIP_INTSTS		spr238
#define IHR_MHP_Status		spr240
#define IHR_MHP_FC		spr241
#define IHR_MHP_DUR		spr242
#define IHR_MHP_SC		spr243
#define IHR_MHP_QOS		spr244
#define IHR_MHP_HTC_H		spr245
#define IHR_MHP_HTC_L		spr246
#define IHR_MHP_Addr1_H		spr247
#define IHR_MHP_Addr1_M		spr248
#define IHR_MHP_Addr1_L		spr249
#define IHR_MHP_Addr2_H		spr250
#define IHR_MHP_Addr2_M		spr251
#define IHR_MHP_Addr2_L		spr252
#define IHR_MHP_Addr3_H		spr253
#define IHR_MHP_Addr3_M		spr254
#define IHR_MHP_Addr3_L		spr255
#define IHR_MHP_Addr4_H		spr256
#define IHR_MHP_Addr4_M		spr257
#define IHR_MHP_Addr4_L		spr258
#define IHR_MHP_CFC		spr259
#define IHR_DAGG_CTL2		spr260
#define IHR_DAGG_BYTESLEFT		spr261
#define IHR_DAGG_SH_OFFSET		spr262
#define IHR_DAGG_STAT		spr263
#define IHR_DAGG_LEN		spr264
#define IHR_TXBA_CTL		spr265
#define IHR_TXBA_DataSel		spr266
#define IHR_TXBA_Data		spr267
#define IHR_DAGG_LEN_THR		spr268
#define IHR_AMT_CTL		spr270
#define IHR_AMT_Status		spr271
#define IHR_AMT_Limit		spr272
#define IHR_AMT_Attr		spr273
#define IHR_AMT_Match1		spr274
#define IHR_AMT_Match2		spr275
#define IHR_AMT_Table_Addr		spr276
#define IHR_AMT_Table_Data		spr277
#define IHR_AMT_Table_Val		spr278
#define IHR_AMT_DBG_SEL		spr279
#define IHR_RoeCtrl		spr280
#define IHR_RoeStatus		spr281
#define IHR_RoeIPChkSum		spr282
#define IHR_RoeTCPUDPChkSum		spr283
#define IHR_RoeStatus1		spr284
#define IHR_PSOCtl		spr290
#define IHR_PSORxWordsWatermark		spr291
#define IHR_PSORxCntWatermark		spr292
#define IHR_PSOCurRxFramePtrs		spr293
#define IHR_OBFFCtl		spr298
#define IHR_OBFFRxWordsWatermark		spr299
#define IHR_OBFFRxCntWatermark		spr29a
#define IHR_PSOOBFFStatus		spr29b
#define IHR_LtrRxTimer		spr29c
#define IHR_LtrRxWordsWatermark		spr29d
#define IHR_LtrRxCntWatermark		spr29e
#define IHR_RcvHdrConvCtrlSts		spr29f
#define IHR_RcvHdrConvSts		spr2a0
#define IHR_RcvHdrConvSts1		spr2a1
#define IHR_RCVLB_DAGG_CTL		spr2a2
#define IHR_RcvFifo0Len		spr2a3
#define IHR_RcvFifo1Len		spr2a4
#define IHR_CRSStatus		spr2b0
#define IHR_OtherMac_HWStatus_Lo		spr2b1
#define IHR_OtherMac_HWStatus_Hi		spr2b2
#define IHR_phyOOBSts		spr2b3
#define IHR_phyoobAddr		spr2b4
#define IHR_phyoobData		spr2b5
#define IHR_ToECTL		spr300
#define IHR_ToERst		spr301
#define IHR_ToECSumNZ		spr302
#define IHR_ToEChannelState		spr303
#define IHR_TxSerialCtl		spr320
#define IHR_TxPlcpLSig0		spr321
#define IHR_TxPlcpLSig1		spr322
#define IHR_TxPlcpHtSig0		spr323
#define IHR_TxPlcpHtSig1		spr324
#define IHR_TxPlcpHtSig2		spr325
#define IHR_TxPlcpVhtSigB0		spr326
#define IHR_TxPlcpVhtSigB1		spr327
#define IHR_MacHdrFromShmLen		spr329
#define IHR_TxPlcpLen		spr32a
#define IHR_TxBFRptLen		spr32c
#define IHR_BytCntInTxFrmLo		spr32d
#define IHR_BytCntInTxFrmHi		spr32e
#define IHR_TXBFCtl		spr330
#define IHR_BfmRptOffset		spr331
#define IHR_BfmRptLen		spr332
#define IHR_TXBFBfeRptRdCnt		spr333
#define IHR_PhyDebugL		spr334
#define IHR_PhyDebugH		spr335
#define IHR_PSM_ALT_MAC_INTSTATUS_L		spr342
#define IHR_PSM_ALT_MAC_INTSTATUS_H		spr343
#define IHR_PSM_ALT_MAC_INTMASK_L		spr344
#define IHR_PSM_ALT_MAC_INTMASK_H		spr345
#define IHR_PsmMboxAddr		spr346
#define IHR_PsmMboxData		spr347
#define IHR_PsmMboxOutSts		spr348
#define IHR_PsmMboxEvent		spr349
#define IHR_PSM_BASE_0		spr350
#define IHR_PSM_BASE_1		spr351
#define IHR_PSM_BASE_2		spr352
#define IHR_PSM_BASE_3		spr353
#define IHR_PSM_BASE_4		spr354
#define IHR_PSM_BASE_5		spr355
#define IHR_PSM_BASE_6		spr356
#define IHR_PSM_BASE_7		spr357
#define IHR_PSM_BASE_8		spr358
#define IHR_PSM_BASE_9		spr359
#define IHR_PSM_BASE_10		spr35a
#define IHR_PSM_BASE_11		spr35b
#define IHR_PSM_BASE_12		spr35c
#define IHR_PSM_BASE_13		spr35d
#define IHR_StrtCmdPtrIHR		spr360
#define IHR_StrtDataPtrIHR		spr361
#define IHR_UcodeCtrlStsReg		spr362
#define IHR_FastExtIHRAddr		spr363
#define IHR_FastExtIHRData		spr364
#define IHR_FastRadioIHRAddr		spr365
#define IHR_FastRadioIHRData		spr366
#define IHR_UcodeFcbsRunTimeCnt		spr367
#define IHR_MAC_MEM_INFO_0		spr368
#define IHR_MAC_MEM_INFO_1		spr369
#define IHR_MAC_BANKX_INDEX		spr36a
#define IHR_MAC_BANKX_SIZE		spr36b
#define IHR_MAC_BANKX_INFO		spr36c
#define IHR_MAC_BANKX_CTRL		spr36d
#define IHR_MAC_BANKX_ACTIVE_PDA		spr36e
#define IHR_MAC_BANKX_SLEEP_PDA		spr36f
#define IHR_CLK_GATE_REQ0		spr370
#define IHR_CLK_GATE_REQ1		spr371
#define IHR_CLK_GATE_REQ2		spr372
#define IHR_CLK_GATE_UCODE_REQ0		spr373
#define IHR_CLK_GATE_UCODE_REQ1		spr374
#define IHR_CLK_GATE_UCODE_REQ2		spr375
#define IHR_CLK_GATE_STRETCH0		spr376
#define IHR_CLK_GATE_STRETCH1		spr377
#define IHR_CLK_GATE_MISC		spr378
#define IHR_CLK_GATE_DIV_CTRL		spr379
#define IHR_CLK_GATE_PHY_CLK_CTRL		spr37a
#define IHR_CLK_GATE_STS		spr37b
#define IHR_CLK_GATE_EXT_REQ0		spr37c
#define IHR_CLK_GATE_EXT_REQ1		spr37d
#define IHR_CLK_GATE_EXT_REQ2		spr37e
#define IHR_CLK_GATE_UCODE_PHY_CLK_CTRL		spr37f
#define IHR_RXMapFifoSize		spr380
#define IHR_RXMapStatus		spr381
#define IHR_MsduThreshold		spr382
#define IHR_DebugTxFlowCtl		spr383
#define IHR_XmtDPQSuspFlush		spr384
#define IHR_MSDUIdxFifoConfig		spr385
#define IHR_MSDUIdxFifoDef		spr386
#define IHR_BMCCore0TXAllMaxBuffers		spr387
#define IHR_BMCCore1TXAllMaxBuffers		spr388
#define IHR_BMCDynAllocStatus1		spr389
#define IHR_DMAMaxOutStBuffers		spr38a
#define IHR_SCS_MASK_L		spr38b
#define IHR_SCS_MASK_H		spr38c
#define IHR_SCM_MASK_L		spr38d
#define IHR_SCM_MASK_H		spr38e
#define IHR_SCM_VAL_L		spr38f
#define IHR_SCM_VAL_H		spr390
#define IHR_SCT_MASK_L		spr391
#define IHR_SCT_MASK_H		spr392
#define IHR_SCT_VAL_L		spr393
#define IHR_SCT_VAL_H		spr394
#define IHR_SCX_MASK_L		spr395
#define IHR_SCX_MASK_H		spr396
#define IHR_SMP_CTRL		spr397
#define IHR_Core0BMCAllocStatusTID7		spr398
#define IHR_Core1BMCAllocStatusTID7		spr399
#define IHR_MsduFifoReachThreshold		spr39a
#define IHR_BMVpConfig		spr39b
#define IHR_TXE_DBG_BMC_STATUS		spr39c
#define IHR_XmtTemplatePtrOffset		spr39d
#define IHR_DebugLLMConfig		spr39e
#define IHR_DebugLLMStatus		spr39f
#endif /* SPECIAL_PURPOSE_REGISTER_H_ */