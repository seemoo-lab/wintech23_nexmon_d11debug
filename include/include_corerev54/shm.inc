#ifndef SHARED_MEMORY_H_
#define SHARED_MEMORY_H_

/* SHM (Shared Memory) offsets */

 /* Macro to convert a host-SHM-address to a microcode-SHM-address.
 * This also asserts that the address is word aligned. */
#define SHM(address)            (((address) / 2) +              \ 
                                 (%assert((address & 1) == 0))) 
/* Macro to convert a byte-offset into a microcode-SHM-word-offset.
 * This does the same as SHM(), but is used to mark offsets that are not
 * based on absolute zero, but relative. */
#define SHM_OFFSET(offset)      SHM(offset)

/* BEGIN ABI: Start of the driver ABI definitions */

#define SHM_BOM_REV_MAJOR	SHM(0x000)
#define SHM_BOM_REV_MINOR	SHM(0x002)
#define SHM_DOT11_PHDRDUR	SHM(0x00C)
#define SHM_DOT11_SIFS	SHM(0x00E)
#define SHM_DOT11_SLOT	SHM(0x010)
#define SHM_DOT11_DTIMPERIOD	SHM(0x012)
#define SHM_SHM_BYT_CNT	SHM(0x014)
#define SHM_MACHW_VER	SHM(0x016)
#define SHM_BCN0_FRM_BYTESZ	SHM(0x018)
#define SHM_BCN1_FRM_BYTESZ	SHM(0x01A)
#define SHM_BCN_TXTSF_OFFSET	SHM(0x01C)
#define SHM_TIMBPOS_INBEACON	SHM(0x01E)
#define SHM_MAXRXFRM_LEN	SHM(0x020)
#define SHM_PMQADDINT_THSD	SHM(0x02A)
#define SHM_WATCHDOG_8TU	SHM(0x03C)
#define SHM_UCODE_DBGST	SHM(0x040)
#define SHM_SFRMTXCNTFBRTHSD	SHM(0x044)
#define SHM_LFRMTXCNTFBRTHSD	SHM(0x046)
#define SHM_SSID_BYTESZ	SHM(0x048)
#define SHM_PRS_FRM_BYTESZ	SHM(0x04A)
#define SHM_POSTDTIM0_NOSLPTIME	SHM(0x04C)
#define SHM_PHYVER	SHM(0x050)
#define SHM_PHYTYPE	SHM(0x052)
#define SHM_MAX_ANTCNT	SHM(0x05C)
#define SHM_HOST_FLAGS	SHM(0x05E)
#define SHM_HOST_FLAGS2	SHM(0x060)
#define SHM_HOST_FLAGS3	SHM(0x062)
#define SHM_RADAR_REG	SHM(0x066)
#define SHM_PRS_MAXTIME	SHM(0x074)
#define SHM_HOST_FLAGS4	SHM(0x078)
#define SHM_AGING_THRSH	SHM(0x07C)
#define SHM_MBURST_SIZE	SHM(0x080)
#define SHM_MBURST_TXOP	SHM(0x082)
#define SHM_MBURST_CNT	SHM(0x084)
#define SHM_MBURST_TSTAMP	SHM(0x086)
#define SHM_JSSI_AUX	SHM(0x08C)
#define SHM_BTCX_BLK_PTR	SHM(0x092)
#define SHM_SYNTHPU_DELAY	SHM(0x094)
#define SHM_PRETBTT	SHM(0x096)
#define SHM_CURCHANNEL	SHM(0x0A0)
#define SHM_BCMC_FID	SHM(0x0A8)
#define SHM_NRATE_TBL_PTR	SHM(0x0AC)
#define SHM_P2P_BLK_PTR	SHM(0x0AE)
#define SHM_PS_MORE_DTIM_TBTT	SHM(0x0B6)
#define SHM_CTS_DURATION	SHM(0x0B8)
#define SHM_MIMO_MAXSYM	SHM(0x0BA)
#define SHM_PRQFIFO_RPTR	SHM(0x0BC)
#define SHM_PRQFIFO_WPTR	SHM(0x0BE)
#define SHM_MACHW_CAP_L	SHM(0x0C0)
#define SHM_MACHW_CAP_H	SHM(0x0C2)
#define SHM_HOST_FLAGS5	SHM(0x0D4)
#define SHM_MFGTEST_NUM	SHM(0x0D8)
#define SHM_MFGTEST_IO1	SHM(0x0DA)
#define SHM_MFGTEST_FRMCNT_LO	SHM(0x0DC)
#define SHM_MFGTEST_FRMCNT_HI	SHM(0x0DE)
#define SHM_TXFRAME_CNT	SHM(0x0E0)
#define SHM_TXRTSFRM_CNT	SHM(0x0E2)
#define SHM_TXCTSFRM_CNT	SHM(0x0E4)
#define SHM_TXACKFRM_CNT	SHM(0x0E6)
#define SHM_TXDNLFRM_CNT	SHM(0x0E8)
#define SHM_TXBCNFRM_CNT	SHM(0x0EA)
#define SHM_SMPL_COL_BMP	SHM(0x1c7*2)
#define SHM_SMPL_COL_CTL	SHM(0x1c8*2)
#define SHM_RCTS_DOT11DUR	SHM(0x1c9*2)
#define SHM_TXFRM_TIME	SHM(0x1e9*2)
#define SHM_EPA_DELAY	SHM(0x1f4*2)
#define SHM_RXFRM_THRSH	SHM(0x1f5*2)
#define SHM_P2P_RXFRM_BSSINDX	SHM(0x28a*2)
#define SHM_P2P_TXFRM_BSSINDX	SHM(0x28b*2)
#define SHM_P2P_SLPTIME_L	SHM(0x3a2*2)
#define SHM_P2P_SLPTIME_H	SHM(0x3a3*2)
#define SHM_P2P_WAKE_ONLYMAC	SHM(0x589*2)
#define SHM_P2P_INTR_IND	SHM(0x58a*2)
#define SHM_P2P_GO_NOSLP	SHM(0x58b*2)
#define SHM_P2P_NXTOVR_WKTIME	SHM(0x594*2)
#define SHM_P2P_RXPERBSS_PTR	SHM(0x595*2)
#define SHM_OPT_SLEEP_TIME	SHM(0x5b9*2)
#define SHM_OPT_SLEEP_WAKETIME	SHM(0x5ba*2)
#define SHM_SLOWTIMER_L	SHM(0x5bb*2)
#define SHM_SLOWTIMER_H	SHM(0x64d*2)
#define SHM_RSP_FRMTYPE	SHM(0x65b*2)
#define SHM_PRSRETX_CNT	SHM(0x65c*2)
#define SHM_NOISE_TSTAMP	SHM(0x65d*2)
#define SHM_TXCRSEND_TSTAMP	SHM(0x65e*2)
#define SHM_CCA_TSF0	SHM(0x65f*2)
#define SHM_CCA_TSF1	SHM(0x660*2)
#define SHM_GOOD_RXANT	SHM(0x661*2)
#define SHM_CUR_RXF_INDEX	SHM(0x662*2)
#define SHM_BYTES_LEFT	SHM(0x663*2)
#define SHM_MM_XTRADUR	SHM(0x664*2)
#define SHM_NXTNOISE_T	SHM(0x665*2)
#define SHM_RFAWARE_TSTMP	SHM(0x666*2)
#define SHM_TSFTMRVALTMP_WD3	SHM(0x667*2)
#define SHM_TSFTMRVALTMP_WD2	SHM(0x668*2)
#define SHM_TSFTMRVALTMP_WD1	SHM(0x669*2)
#define SHM_TSFTMRVALTMP_WD0	SHM(0x66a*2)
#define SHM_IDLE_DUR_L	SHM(0x66b*2)
#define SHM_IDLE_DUR_H	SHM(0x66c*2)
#define SHM_CTS_STRT_TIME	SHM(0x66d*2)
#define SHM_CURR_ANTPAT	SHM(0x66e*2)
#define SHM_BTCX_PREEMPT_CNT	SHM(0x66f*2)
#define SHM_BTCX_PREEMPT_LMT	SHM(0x6af*2)
#define SHM_BTCX_DELLWAR	SHM(0xaea*2)
#define SHM_MPDUNUM_LEFT	SHM(0xaeb*2)
#define SHM_MBURST_LASTCNT	SHM(0xc2c*2)
#define SHM_AMUERR_CNT	SHM(0xc2d*2)
#define SHM_CCA_FLGS	SHM(0xc2e*2)
#define SHM_PHY_ANTDIV_REG	SHM(0xc2f*2)
#define SHM_PHY_ANTDIV_MASK	SHM(0xc30*2)
#define SHM_PHY_EXTLNA_OVR	SHM(0xc31*2)
#define SHM_EDLO_DEF	SHM(0xc32*2)
#define SHM_EDHI_DEF	SHM(0xc33*2)
#define SHM_RADAR_TSTAMP	SHM(0xc34*2)
#define SHM_PREV_SCRS_PIFS_TIME	SHM(0xc35*2)
#define SHM_SEC_IDLE_DUR	SHM(0xc4f*2)
#define SHM_CFRM_RESPBW	SHM(0xc89*2)
#define SHM_IVLOC	SHM(0xc8d*2)
#define SHM_SLEEP_TIME_L	SHM(0xcab*2)
#define SHM_SLEEP_TIME_ML	SHM(0xcb1*2)
#define SHM_TSF_ACTV_L	SHM(0xcb2*2)
#define SHM_TSF_ACTV_H	SHM(0xcb3*2)
#define SHM_LNA_STATE	SHM(0xcb4*2)
#define SHM_IFS_PRI20	SHM(0xcb5*2)
#define SHM_CCA_RXBW	SHM(0xcb6*2)
#define SHM_XMTFIFORDY_FB	SHM(0xcb7*2)
#define SHM_BTCX_PRED_RFA_T	SHM(0xcb8*2)
#define SHM_LASTTX_TSF	SHM(0xcb9*2)
#define SHM_BTCX_TXCONF_STRT_L	SHM(0xcba*2)
#define SHM_BTCX_TXCONF_STRT_H	SHM(0xcbb*2)
#define SHM_MFGTEST_RXSEQ	SHM(0xcbc*2)
#define SHM_RTG_GRT_CNT	SHM(0xcbd*2)
#define SHM_RTG_ACK_CNT	SHM(0xcbe*2)
#define SHM_BCMCROLL_TSTMP	SHM(0xcbf*2)
#define SHM_DBG_TXPS_CNT	SHM(0xcc5*2)
#define SHM_DBG_TXSUSP_CNT	SHM(0xcc6*2)
#define SHM_TXCRSWAR_CNT	SHM(0xcc7*2)
#define SHM_NDP_LATCH_PHYRS_0	SHM(0xce2*2)
#define SHM_NDP_PHYRS_0	SHM(0xce3*2)
#define SHM_SLEEP_MAX	SHM(0xce4*2)
#define SHM_IQEST_TOUT_CTR	SHM(0xce5*2)
#define SHM_BPHYPEAKEN_VAL	SHM(0xce6*2)
#define SHM_PHY_SAMPLECMD	SHM(0xce7*2)
#define SHM_KEY_INDX	SHM(0xcf2*2)
#define SHM_MBURST_REMDUR	SHM(0xcf3*2)
#define SHM_REV_L	SHM(0x004)
#define SHM_REV_H	SHM(0x006)
#define SHM_UDIFFS1	SHM(0x008)
#define SHM_UCODE_FEATURES	SHM(0x00A)
#define SHM_TXDC_BYTESZ	SHM(0x022)
#define SHM_PAPDOFF_MCS	SHM(0x024)
#define SHM_BCMC_TIMEOUT	SHM(0x026)
#define SHM_PRS_RETRY_THR	SHM(0x028)
#define SHM_PMQCTLWD	SHM(0x02C)
#define SHM_AMT_INFO_PTR	SHM(0x02E)
#define SHM_SECKINDX_PTR	SHM(0x030)
#define SHM_BCNRX_COREMASK	SHM(0x032)
#define SHM_TKIP_TTAK_PTR	SHM(0x034)
#define SHM_CCASTATS_PTR	SHM(0x036)
#define SHM_PSM2HOST_EXT_PTR	SHM(0x038)
#define SHM_BCN_TPLBLK_BSZ	SHM(0x03A)
#define SHM_UCODE_SWCAP	SHM(0x03E)
#define SHM_PRS_TPLBLK_BSZ	SHM(0x042)
#define SHM_BCMCROLL_TMOUT	SHM(0x04E)
#define SHM_WLCX_BLK_PTR	SHM(0x054)
#define SHM_SECKEYS_PTR	SHM(0x056)
#define SHM_TSSI_0	SHM(0x058)
#define SHM_IFS_PRICRS	SHM(0x05A)
#define SHM_DIAG_FLAGS	SHM(0x064)
#define SHM_UNUSED52	SHM(0x068)
#define SHM_UNUSED53	SHM(0x06A)
#define SHM_CUR_TXF_INDEX	SHM(0x06C)
#define SHM_PHY_NOISE	SHM(0x06E)
#define SHM_UTRACE_SPTR	SHM(0x070)
#define SHM_UTRACE_EPTR	SHM(0x072)
#define SHM_INV_DTIMPERIOD	SHM(0x076)
#define SHM_AMP_STATS_PTR	SHM(0x07A)
#define SHM_TXFL_BMAP	SHM(0x07E)
#define SHM_NOISE_TMOUT	SHM(0x088)
#define SHM_TOF_BLK_PTR	SHM(0x08A)
#define SHM_PHY_PLCPTX_DLY	SHM(0x08E)
#define SHM_DEBUGBLK_PTR	SHM(0x090)
#define SHM_RSP_TXPCTL0	SHM(0x098)
#define SHM_RSP_TXPCTL1	SHM(0x09A)
#define SHM_RSP_TXPCTL2	SHM(0x09C)
#define SHM_ARM_PSO_BLK_PTR	SHM(0x09E)
#define SHM_WAPIMICKEYS_PTR	SHM(0x0A2)
#define SHM_TXDUTY_RATIOX16_CCK	SHM(0x0A4)
#define SHM_PHY_PLCPRX_DLY	SHM(0x0A6)
#define SHM_TXBCN_DUR	SHM(0x0AA)
#define SHM_BFCFG_PTR	SHM(0x0B0)
#define SHM_TKMICKEYS_PTR	SHM(0x0B2)
#define SHM_TXDUTY_RATIOX16_OFDM	SHM(0x0B4)
#define SHM_AID_NBIT	SHM(0x0C4)
#define SHM_SWDIV_BLK_PTR	SHM(0x0C6)
#define SHM_RTS_DURTHRSH	SHM(0x0C8)
#define SHM_TIMBC_OFFSET	SHM(0x0CA)
#define SHM_BCN_TXPCTL0	SHM(0x0CC)
#define SHM_BCN_TXPCTL1	SHM(0x0CE)
#define SHM_BCN_TXPCTL2	SHM(0x0D0)
#define SHM_RTG_SIZE	SHM(0x0D2)
#define SHM_DUTY_STRTRATE	SHM(0x0D6)
#define SHM_PWRIND_MAP0	SHM(0x3A0)
#define SHM_PWRIND_MAP1	SHM(0x3A2)
#define SHM_PWRIND_MAP2	SHM(0x3A4)
#define SHM_PWRIND_MAP3	SHM(0x3A6)
#define SHM_PWRIND_MAP4	SHM(0x3A8)
#define SHM_PWRIND_MAP5	SHM(0x3AA)
#define SHM_PWRIND_MAP6	SHM(0x3AC)
#define SHM_PWRIND_MAP7	SHM(0x3AE)
#define SHM_PWRIND_MAP8	SHM(0x3B0)
#define SHM_TXF0UNFL_CNT	SHM(0x0EC)
#define SHM_TXF1UNFL_CNT	SHM(0x0EE)
#define SHM_TXF2UNFL_CNT	SHM(0x0F0)
#define SHM_TXF3UNFL_CNT	SHM(0x0F2)
#define SHM_TXF4UNFL_CNT	SHM(0x0F4)
#define SHM_TXF5UNFL_CNT	SHM(0x0F6)
#define SHM_TXAMPDU_CNT	SHM(0x0F8)
#define SHM_TXMPDU_CNT	SHM(0x0FA)
#define SHM_TXTPLUNFL_CNT	SHM(0x0FC)
#define SHM_TXPHYERR_CNT	SHM(0x0FE)
#define SHM_RXGOODUCAST_CNT	SHM(0x100)
#define SHM_RXGOODOCAST_CNT	SHM(0x102)
#define SHM_RXFRMTOOLONG_CNT	SHM(0x104)
#define SHM_RXFRMTOOSHRT_CNT	SHM(0x106)
#define SHM_RXANYERR_CNT	SHM(0x108)
#define SHM_RXBADFCS_CNT	SHM(0x10A)
#define SHM_RXBADPLCP_CNT	SHM(0x10C)
#define SHM_RXCRSGLITCH_CNT	SHM(0x10E)
#define SHM_RXSTRT_CNT	SHM(0x110)
#define SHM_RXDFRMUCASTMBSS_CNT	SHM(0x112)
#define SHM_RXMFRMUCASTMBSS_CNT	SHM(0x114)
#define SHM_RXCFRMUCAST_CNT	SHM(0x116)
#define SHM_RXRTSUCAST_CNT	SHM(0x118)
#define SHM_RXCTSUCAST_CNT	SHM(0x11A)
#define SHM_RXACKUCAST_CNT	SHM(0x11C)
#define SHM_RXDFRMOCAST_CNT	SHM(0x11E)
#define SHM_RXMFRMOCAST_CNT	SHM(0x120)
#define SHM_RXCFRMOCAST_CNT	SHM(0x122)
#define SHM_RXRTSOCAST_CNT	SHM(0x124)
#define SHM_RXCTSOCAST_CNT	SHM(0x126)
#define SHM_RXDFRMMCAST_CNT	SHM(0x128)
#define SHM_RXMFRMMCAST_CNT	SHM(0x12A)
#define SHM_RXCFRMMCAST_CNT	SHM(0x12C)
#define SHM_RXBEACONMBSS_CNT	SHM(0x12E)
#define SHM_RXDFRMUCASTOBSS_CNT	SHM(0x130)
#define SHM_RXBEACONOBSS_CNT	SHM(0x132)
#define SHM_RXRSPTMOUT_CNT	SHM(0x134)
#define SHM_BCNTXCANCL_CNT	SHM(0x136)
#define SHM_RXNODELIM_CNT	SHM(0x138)
#define SHM_RXF0OVFL_CNT	SHM(0x13A)
#define SHM_RXF1OVFL_CNT	SHM(0x13C)
#define SHM_RXHLOVFL_CNT	SHM(0x13E)
#define SHM_MISSBCN_CNT	SHM(0x140)
#define SHM_PMQOVFL_CNT	SHM(0x142)
#define SHM_RXCGPRQFRM_CNT	SHM(0x144)
#define SHM_RXCGPRSQOVFL_CNT	SHM(0x146)
#define SHM_TXCGPRSFAIL_CNT	SHM(0x148)
#define SHM_TXCGPRSSUC_CNT	SHM(0x14A)
#define SHM_PREWDS_CNT	SHM(0x14C)
#define SHM_TXRTSFAIL_CNT	SHM(0x14E)
#define SHM_TXUCAST_CNT	SHM(0x150)
#define SHM_TXINRTSTXOP_CNT	SHM(0x152)
#define SHM_RXBACK_CNT	SHM(0x154)
#define SHM_TXBACK_CNT	SHM(0x156)
#define SHM_BPHYGLITCH_CNT	SHM(0x158)
#define SHM_RXDROP20S_CNT	SHM(0x15A)
#define SHM_RXTOOLATE_CNT	SHM(0x15C)
#define SHM_RXBPHY_BADPLCP_CNT	SHM(0x15E)
#define SHM_TXNDPA_CNT	SHM(0xD10)
#define SHM_TXNDP_CNT	SHM(0xD12)
#define SHM_TXSF_CNT	SHM(0xD14)
#define SHM_TXCWRTS_CNT	SHM(0xD16)
#define SHM_TXCWCTS_CNT	SHM(0xD18)
#define SHM_TXBFM_CNT	SHM(0xD1A)
#define SHM_RXNDPAUCAST_CNT	SHM(0xD1C)
#define SHM_BFERPTRDY_CNT	SHM(0xD1E)
#define SHM_RXSFUCAST_CNT	SHM(0xD20)
#define SHM_RXCWRTSUCAST_CNT	SHM(0xD22)
#define SHM_RXCWCTSUCAST_CNT	SHM(0xD24)
#define SHM_RX20S_CNT	SHM(0xD26)
#define SHM_BCNTRIM_CNT	SHM(0xD28)
#define SHM_BTCX_RFACT_CTR_L	SHM(0xD2A)
#define SHM_BTCX_RFACT_CTR_H	SHM(0xD2C)
#define SHM_BTCX_TXCONF_CTR_L	SHM(0xD2E)
#define SHM_BTCX_TXCONF_CTR_H	SHM(0xD30)
#define SHM_BTCX_TXCONF_DURN_L	SHM(0xD32)
#define SHM_BTCX_TXCONF_DURN_H	SHM(0xD34)
#define SHM_SECRSSI0	SHM(0xD36)
#define SHM_SECRSSI1	SHM(0xD38)
#define SHM_SECRSSI2	SHM(0xD3A)
#define SHM_CCA_RXPRI_LO	SHM(0xD3C)
#define SHM_CCA_RXPRI_HI	SHM(0xD3E)
#define SHM_CCA_RXSEC20_LO	SHM(0xD40)
#define SHM_CCA_RXSEC20_HI	SHM(0xD42)
#define SHM_CCA_RXSEC40_LO	SHM(0xD44)
#define SHM_CCA_RXSEC40_HI	SHM(0xD46)
#define SHM_CCA_RXSEC80_LO	SHM(0xD48)
#define SHM_CCA_RXSEC80_HI	SHM(0xD4A)
#define SHM_BCNTRIM_RSSI	SHM(0xD4C)
#define SHM_BCNTRIM_CHAN	SHM(0xD4E)
#define SHM_HWACI_STATUS	SHM(0xD50)
#define SHM_TXBFPOLL_CNT	SHM(0xD52)
#define SHM_RXBFPOLLUCAST_CNT	SHM(0xD54)
#define SHM_RXGAININFO_ANT0	SHM(0xD56)
#define SHM_RXAUXGAININFO_ANT0	SHM(0xD58)
#define SHM_MACSUSP_CNT	SHM(0xD5A)
#define SHM_RXNDPAMCAST_CNT	SHM(0xD5C)
#define SHM_ARTENTRY0_ADDR	SHM(0x570)
#define SHM_ARTENTRY1_ADDR	SHM(0x584)
#define SHM_ARTENTRY2_ADDR	SHM(0x598)
#define SHM_ARTENTRY3_ADDR	SHM(0x5AC)
#define SHM_ARTENTRY4_ADDR	SHM(0x5C0)
#define SHM_ARTENTRY5_ADDR	SHM(0x5D4)
#define SHM_ARTENTRY6_ADDR	SHM(0x5E8)
#define SHM_ARTENTRY7_ADDR	SHM(0x5FC)
#define SHEND_OF_ARATETBL	SHM(0x610)
#define SHM_BRTENTRY0_ADDR	SHM(0x610)
#define SHM_BRTENTRY1_ADDR	SHM(0x62C)
#define SHM_BRTENTRY2_ADDR	SHM(0x648)
#define SHM_BRTENTRY3_ADDR	SHM(0x664)
#define SHEND_OF_BRATETBL	SHM(0x680)
#define SHM_NRTENTRY0_ADDR	SHM(0x680)
#define SHM_NRTENTRY1_ADDR	SHM(0x686)
#define SHM_NRTENTRY2_ADDR	SHM(0x68C)
#define SHM_NRTENTRY3_ADDR	SHM(0x692)
#define SHM_NRTENTRY4_ADDR	SHM(0x698)
#define SHM_NRTENTRY5_ADDR	SHM(0x69E)
#define SHM_NRTENTRY6_ADDR	SHM(0x6A4)
#define SHM_NRTENTRY7_ADDR	SHM(0x6AA)
#define SHM_NRTENTRY8_ADDR	SHM(0x6B0)
#define SHM_NRTENTRY9_ADDR	SHM(0x6B6)
#define SHEND_OF_NRATETBL	SHM(0x6BC)
#define SHM_CTX0_BLK	SHM(0x748)
#define SHM_CTX1_BLK	SHM(0x788)
#define SHM_CTX2_BLK	SHM(0x7C8)
#define SHM_CTX3_BLK	SHM(0x808)
#define SHM_CTX4_BLK	SHM(0x848)
#define SHM_CTX5_BLK	SHM(0x888)
#define SHM_RXFRM_BASE_ADDR	SHM(0xB9A)
#define SHM_BMCLPB_BQID	SHM(0xBA0)
#define SHM_BMCLPB_BLK	SHM(0xBA2)
#define SHM_TKIP_WEPSEED0	SHM(0xD60)
#define SHM_TKIP_WEPSEED1	SHM(0xD62)
#define SHM_TKIP_PPK0	SHM(0xD64)
#define SHM_TKIP_PPK1	SHM(0xD66)
#define SHM_TKIP_PPK2	SHM(0xD68)
#define SHM_TKIP_PPK3	SHM(0xD6A)
#define SHM_TKIP_PPK4	SHM(0xD6C)
#define SHM_TKIP_PPK5	SHM(0xD6E)
#define SHM_EDCF_QINFO0	SHM(0x240)
#define SHM_EDCF_QINFO1	SHM(0x260)
#define SHM_EDCF_QINFO2	SHM(0x280)
#define SHM_EDCF_QINFO3	SHM(0x2A0)
#define SHM_EDCF_CUR_GAP	SHM(0x2C0)
#define SHM_EDCF_CUR_INDEX	SHM(0x2C2)
#define SHM_EDCF_CUR_ADDR	SHM(0x2C4)
#define SHM_EDCF_CUR_BCTX	SHM(0x2C6)
#define SHM_EDCF_NEW_GAP	SHM(0x2C8)
#define SHM_EDCF_NEW_INDEX	SHM(0x2CA)
#define SHM_EDCF_NEW_ADDR	SHM(0x2CC)
#define SHM_EDCF_NEW_BCTX	SHM(0x2CE)
#define SHM_EDCF_PRE_INDEX	SHM(0x2D0)
#define SHM_EDCF_PRE_GAP	SHM(0x2D2)
#define SHM_EDCF_PRE_ADDR	SHM(0x2D4)
#define SHM_EDCF_PRE_BCTX	SHM(0x2D6)
#define SHM_EDCF_TIE_COUNT	SHM(0x2D8)
#define SHM_EDCF_TIE_MAP	SHM(0x2DA)
#define SHM_EDCF_QRDY_MAP	SHM(0x2DC)
#define SHM_EDCF_BOFF_CTR	SHM(0x2DE)
#define SHM_RFLDO_ON_L	SHM(0x2FC)
#define SHM_RFLDO_ON_H	SHM(0x2FE)
#define SHM_MBS_SSID_0	SHM(0x160)
#define SHM_MBS_BSSID0	SHM(0x308)
#define SHM_MBS_BSSID1	SHM(0x30A)
#define SHM_MBS_BSSID2	SHM(0x30C)
#define SHM_MBS_NBCN	SHM(0x30E)
#define SHM_MBS_PRQBASE	SHM(0x310)
#define SHM_MBS_PRETBTT	SHM(0x31A)
#define SHM_MBS_BCN_STRTINDX	SHM(0x31C)
#define SHM_MBS_BSSIDNUM	SHM(0x320)
#define SHM_MBS_PIO_BCBMP	SHM(0x322)
#define SHM_MBS_PRS_TPLPTR	SHM(0x324)
#define SHM_MBS_SSID_1	SHM(0x328)
#define SHM_MBS_SSID_2	SHM(0x348)
#define SHM_MBS_SSID_3	SHM(0x368)
#define SHM_TXDC_IDX	SHM(0x8C8)
#define SHM_DTFRM_DOT11DUR	SHM(0x8CA)
#define SHM_LTX_DREAD_FIDX	SHM(0x8CC)
#define SHM_LTX_RSVD	SHM(0x8CE)
#define SHM_LTX_HDR_WAR	SHM(0x8D0)
#define SHM_LTX_HDR	SHM(0x8D4)
#define SHM_TXFRM	SHM(0x93C)
#define SHM_LTX_BLK_END	SHM(0xA32)
#define SHM_AGGMPDU_HISTO	SHM(0x17B8)
#define SHM_AGGSTOP_HISTO	SHM(0x1838)
#define SHM_MBURST_HISTO	SHM(0x1848)
#define SHM_AGG_STATS_END	SHM(0x1856)
#define SHM_CCA_TXDUR_L	SHM(0xCE0)
#define SHM_CCA_TXDUR_H	SHM(0xCE2)
#define SHM_CCA_INBSS_L	SHM(0xCE4)
#define SHM_CCA_INBSS_H	SHM(0xCE6)
#define SHM_CCA_OBSS_L	SHM(0xCE8)
#define SHM_CCA_OBSS_H	SHM(0xCEA)
#define SHM_CCA_NOCTG_L	SHM(0xCEC)
#define SHM_CCA_NOCTG_H	SHM(0xCEE)
#define SHM_CCA_NOPKT_L	SHM(0xCF0)
#define SHM_CCA_NOPKT_H	SHM(0xCF2)
#define SHM_MAC_SLPDUR_L	SHM(0xCF4)
#define SHM_MAC_SLPDUR_H	SHM(0xCF6)
#define SHM_CCA_TXOP_L	SHM(0xCF8)
#define SHM_CCA_TXOP_H	SHM(0xCFA)
#define SHM_CCA_GDTXDUR_L	SHM(0xCFC)
#define SHM_CCA_GDTXDUR_H	SHM(0xCFE)
#define SHM_CCA_BDTXDUR_L	SHM(0xD00)
#define SHM_CCA_BDTXDUR_H	SHM(0xD02)
#define SHM_CCA_SUSP_L	SHM(0xD04)
#define SHM_CCA_SUSP_H	SHM(0xD06)
#define SHM_CCA_WIFI_L	SHM(0xD08)
#define SHM_CCA_WIFI_H	SHM(0xD0A)
#define SHM_CCA_EDCRSDUR_L	SHM(0xD0C)
#define SHM_CCA_EDCRSDUR_H	SHM(0xD0E)
#define SHM_P2P_INTR_BLK	SHM(0xA34)
#define SHM_P2P_HPS	SHM(0xA54)
#define SHM_P2P_RSVD_BLK	SHM(0xA56)
#define SHM_P2P_PERBSS_BLK	SHM(0xA6E)
#define SHM_P2P_TSF_OFFSET_BLK	SHM(0xACE)
#define SHM_P2P_GO_CHANNEL	SHM(0xAEE)
#define SHM_P2P_GO_IND_BMP	SHM(0xAF0)
#define SHM_P2P_PRETBTT_BLK	SHM(0xAF2)
#define SHM_P2P_TSF_DRIFT_BLK	SHM(0xAFA)
#define SHM_P2P_TXSTOP_T_BLK	SHM(0xB02)
#define SHM_PSO_ENBL_FLGS	SHM(0xB2C)
#define SHM_DEFER_RXCNT	SHM(0xB2E)
#define SHM_RXF0_SUPR_PTRS	SHM(0xB30)
#define SHM_TXS_FIFO_RPTR	SHM(0xB34)
#define SHM_TXS_FIFO_WPTR	SHM(0xB36)
#define SHM_TXS_FIFO_BLK	SHM(0xB38)
#define SHM_MBS_BCNLEN_BLK	SHM(0x160)
#define SHM_MBS_PRSLEN_BLK	SHM(0x328)
#define SHM_MBS_BCFID_BLK	SHM(0x348)
#define SHM_MBS_SSIDLEN_BLK	SHM(0x368)
#define SHM_MBS_NPRS	SHM(0x312)
#define SHM_MBS_BSSID_MASK	SHM(0x314)
#define SHM_MBS_LGCYPRS_TPLBLK_BSZ	SHM(0x316)
#define SHM_MBS_LGCYPRS_LEN_PTR	SHM(0x318)
#define SHM_BTCX_MIN_PROT_SCO	SHM(0x15D8)
#define SHM_BTCX_MIN_PROT	SHM(0x15DA)
#define SHM_BTCX_BT_DUR	SHM(0x15DC)
#define SHM_BTCX_ANT_DLY	SHM(0x15DE)
#define SHM_BTCX_PRED_PER	SHM(0x15E0)
#define SHM_BTCX_PRED_ADV	SHM(0x15E2)
#define SHM_BTCX_BCN_LOSS_LMT	SHM(0x15E4)
#define SHM_BTCX_PRQ_END	SHM(0x15E6)
#define SHM_BTCX_ACL_MAX_DELAY	SHM(0x15E8)
#define SHM_BTCX_MIN_PROT_SL	SHM(0x15EA)
#define SHM_BTCX_PRED_ADV_JITTER	SHM(0x15EC)
#define SHM_BTCX_CONF_DELAY	SHM(0x15EE)
#define SHM_BTCX_LAST_SCO	SHM(0x15F0)
#define SHM_BTCX_BLE_SCAN_GRANT_THRESH	SHM(0x15F2)
#define SHM_BTCX_NEXT_SCO	SHM(0x15F4)
#define SHM_BTCX_REQ_START	SHM(0x15F6)
#define SHM_BTCX_DATA_TOUT	SHM(0x15F8)
#define SHM_BTCX_PROTECT_TIME	SHM(0x15FA)
#define SHM_BTCX_ACTIVE_TIME	SHM(0x15FC)
#define SHM_BTCX_BCN_CNT	SHM(0x15FE)
#define SHM_BTCX_PRED_DUR	SHM(0x1600)
#define SHM_BTCX_SCO_TOUT	SHM(0x1602)
#define SHM_BTCX_ACL_TOUT	SHM(0x1604)
#define SHM_BTCX_LAST_DATA	SHM(0x1606)
#define SHM_BTCX_DEFER_DELAY	SHM(0x1608)
#define SHM_BTCX_PROT_CNT	SHM(0x160A)
#define SHM_BTCX_PROT_START_TIME	SHM(0x160C)
#define SHM_BTCX_BT_TYPE	SHM(0x160E)
#define SHM_BTCX_PSPOLL_PERIOD	SHM(0x1610)
#define SHM_BTCX_PSPOLL_NEXT	SHM(0x1612)
#define SHM_BTCX_A2DP_BUFFER	SHM(0x1614)
#define SHM_BTCX_PROT_DELAY_AVG	SHM(0x1616)
#define SHM_BTCX_PROT_DELAY_SUM	SHM(0x1618)
#define SHM_BTCX_A2DP_BUFFER_HIMARK	SHM(0x161A)
#define SHM_BTCX_ECI0	SHM(0x161C)
#define SHM_BTCX_ECI1	SHM(0x161E)
#define SHM_BTCX_ECI2	SHM(0x1620)
#define SHM_BTCX_ECI3	SHM(0x1622)
#define SHM_BTCX_LAST_A2DP	SHM(0x1624)
#define SHM_BTCX_ABORT_CNT	SHM(0x1626)
#define SHM_BTCX_A2DP_BUFFER_LOWMARK	SHM(0x1628)
#define SHM_BTCX_BT_RX_MODE	SHM(0x162A)
#define SHM_BTCX_A2DP_IDLE_WAIT	SHM(0x162C)
#define SHM_BTCX_PROT_CCK_FALLBACK	SHM(0x162E)
#define SHM_BTCX_PROT_OFDM_FALLBACK	SHM(0x1630)
#define SHM_BTCX_PROT_LIMIT	SHM(0x1632)
#define SHM_BTCX_PAGE_PROTECT	SHM(0x1634)
#define SHM_BTCX_LAST_PAGE	SHM(0x1636)
#define SHM_BTCX_PS_DELAY	SHM(0x1638)
#define SHM_BTCX_PS_DELAY_END	SHM(0x163A)
#define SHM_BTCX_CRITICAL_MAP_LO	SHM(0x163C)
#define SHM_BTCX_CRITICAL_MAP_HI	SHM(0x163E)
#define SHM_BTCX_PRED_ADV_OVR	SHM(0x1640)
#define SHM_BTCX_TMR_ADJ	SHM(0x1642)
#define SHM_BTCX_LATENCY_CNT	SHM(0x1644)
#define SHM_BTCX_PS_GUARD_DELAY	SHM(0x1646)
#define SHM_BTCX_PS_GUARD_CNT	SHM(0x1648)
#define SHM_BTCX_SLEEP_ADJ	SHM(0x164A)
#define SHM_BTCX_HOLDSCO_LIMIT_HI	SHM(0x164C)
#define SHM_BTCX_SCO_GRANT_HOLD_RATIO_HI	SHM(0x164E)
#define SHM_BTCX_HOLDSCO_HI_THRESH	SHM(0x1650)
#define SHM_BTCX_A2DP_BUFFER_MIDMARK	SHM(0x1652)
#define SHM_BTCX_PS_GUARD_THRESHOLD	SHM(0x1654)
#define SHM_BTCX_PRED_ADV_PM	SHM(0x1656)
#define SHM_BTCX_PRI_MAP_LO	SHM(0x1658)
#define SHM_BTCX_PRI_MAP_HI	SHM(0x165A)
#define SHM_BTCX_PER_LIMIT	SHM(0x165C)
#define SHM_BTCX_HOLDSCO_CNT	SHM(0x165E)
#define SHM_BTCX_HOLDSCO_LIMIT	SHM(0x1660)
#define SHM_BTCX_SCO_GRANT_CNT	SHM(0x1662)
#define SHM_BTCX_SCO_GRANT_HOLD_RATIO	SHM(0x1664)
#define SHM_BTCX_PER_HIGHLIMIT	SHM(0x1666)
#define SHM_BTCX_PRED_COUNT	SHM(0x1668)
#define SHM_BTCX_PROT_RSSI_THRESH	SHM(0x166A)
#define SHM_BTCX_AMDPUTX_RSSI_THRESH	SHM(0x166C)
#define SHM_BTCX_AMPDURX_RSSI_THRESH	SHM(0x166E)
#define SHM_BTCX_PRI_DELAY	SHM(0x1670)
#define SHM_BTCX_SNIFF_GRANT	SHM(0x1672)
#define SHM_BTCX_SNIFF_MAX_DELAY	SHM(0x1674)
#define SHM_BTCX_PRSEQ_DEFER_SCO_CNTS	SHM(0x1676)
#define SHM_BTCX_PRSEQ_DEFER_SCO_LMT	SHM(0x1678)
#define SHM_BTCX_SNIFF_GRANT_H	SHM(0x167A)
#define SHM_BTCX_HOST_FLAGS	SHM(0x167C)
#define SHM_BTCX_SNIFF_DELAY_HI_LATENCY	SHM(0x167E)
#define SHM_BTCX_SNIFF_DELAY_LO_LATENCY	SHM(0x1680)
#define SHM_BTCX_SNIFF_LAST_ACK_TS	SHM(0x1682)
#define SHM_BTCX_SNIFF_ACTIVE_TO	SHM(0x1684)
#define SHM_BTCX_A2DP_MAX_DELAY	SHM(0x1686)
#define SHM_BTCX_A2DP_ADV_JITTER	SHM(0x1688)
#define SHM_BTCX_DIVERSITY_SAVE	SHM(0x168A)
#define SHM_BTCX_PRSEQ_DEFER_SCO_TS	SHM(0x168C)
#define SHM_BTCX_PRSEQ_DEFER_SCO_INTVL	SHM(0x168E)
#define SHM_BTCX_SUSP_TSF_ML	SHM(0x1690)
#define SHM_BTCX_TXBCN_LOSS_LMT	SHM(0x1692)
#define SHM_BTCX_PRED_CRT_THRSH	SHM(0x1694)
#define SHM_BTCX_SNIFF_GRANT_THRESH	SHM(0x1696)
#define SHM_BTCX_MIN_BT_DATA_DUR	SHM(0x1698)
#define SHM_BTCX_BT_START	SHM(0x169A)
#define SHM_BTCX_BT_MAX_SYNC_WAIT	SHM(0x169C)
#define SHM_BTCX_DCSN_BM	SHM(0x169E)
#define SHM_BTCX_HIGH_THRESH	SHM(0x16A0)
#define SHM_BTCX_LOW_THRESH	SHM(0x16A2)
#define SHM_BTCX_STATE	SHM(0x16A4)
#define SHM_BTCX_CONFIG	SHM(0x16A6)
#define SHM_BTCX_TXBCN_CNT	SHM(0x16A8)
#define SHM_BTCX_LAST_INQ_L	SHM(0x16AA)
#define SHM_BTCX_INQ_DEFER_LMT	SHM(0x16AC)
#define SHM_BTCX_INQ_DEFER_EXT_LMT	SHM(0x16AE)
#define SHM_BTCX_RFSWMSK_BT	SHM(0x16B0)
#define SHM_BTCX_RFSWMSK_WL	SHM(0x16B2)
#define SHM_BTCX_REFRESH_REQ	SHM(0x16B4)
#define SHM_BTCX_REFRESH_DELAY	SHM(0x16B6)
#define SHM_BTCX_REQ_START_H	SHM(0x16B8)
#define SHM_BTCX_HOST_FLAGS2	SHM(0x16BA)
#define SHM_BTCX_BLE_CONN_ANCHOR_END_TS	SHM(0x16BC)
#define SHM_BTCX_BLE_LAST_SCAN_TS	SHM(0x16BE)
#define SHM_BTCX_BT_TASKS_BM_LOW	SHM(0x16C0)
#define SHM_BTCX_BT_TASKS_BM_HI	SHM(0x16C2)
#define SHM_BTCX_BT_TXPWR	SHM(0x16C4)
#define SHM_BTCX_PKTABORTCTL_VAL	SHM(0x16C6)
#define SHM_BTCX_RSSI	SHM(0x16C8)
#define SHM_BTCX_LAST_BLE	SHM(0x16CA)
#define SHM_BTCX_BLE_BADBUDDY_LOW	SHM(0x16CC)
#define SHM_BTCX_BLE_BADBUDDY_HIGH	SHM(0x16CE)
#define SHM_BTCX_AGG_OFF_BM	SHM(0x16D0)
#define SHM_BTCX_DYNAGG_DURN_OFFSET	SHM(0x16D2)
#define SHM_BTCX_UNUSED126	SHM(0x16D4)
#define SHM_BTCX_UNUSED127	SHM(0x16D6)
#define SHM_BTCX_AGG_OFF_PER_LMT	SHM(0x16D8)
#define SHM_BTCX_DBG_VAR1	SHM(0x16DA)
#define SHM_BTCX_DBG_VAR2	SHM(0x16DC)
#define SHM_BTCX_BLE_SCAN_DENIAL	SHM(0x16DE)
#define SHM_LTECX_TXBCN_LOSS_LMT	SHM(0x16E0)
#define SHM_LTECX_CRTI_INTERVAL_TOUT	SHM(0x16E2)
#define SHM_LTECX_CRTI_MSG	SHM(0x16E4)
#define SHM_LTECX_CRTI_INTERVAL	SHM(0x16E6)
#define SHM_LTECX_CRTI_REPEATS	SHM(0x16E8)
#define SHM_LTECX_NOISE_DELTA	SHM(0x16EA)
#define SHM_LTECX_T1_RSP_TOUT_DUR	SHM(0x16EC)
#define SHM_LTECX_T1_RSP_TOUT_TS	SHM(0x16EE)
#define SHM_LTECX_RXPRI_THRESH	SHM(0x16F0)
#define SHM_LTECX_ECI3_PREV	SHM(0x16F2)
#define SHM_LTECX_PWRCP_C1	SHM(0x16F4)
#define SHM_LTECX_SCANPROT_TOUT_TS	SHM(0x16F6)
#define SHM_LTECX_SCANPROT_TOUT	SHM(0x16F8)
#define SHM_LTECX_RT_SIGS_RAW_CUR	SHM(0x16FA)
#define SHM_LTECX_MWSSCAN_BM_LO	SHM(0x16FC)
#define SHM_LTECX_RT_SIGS_CUR	SHM(0x16FE)
#define SHM_LTECX_ECI0_PREV	SHM(0x1700)
#define SHM_LTECX_SECIOUT_FNSEL	SHM(0x1702)
#define SHM_LTECX_FLAGS	SHM(0x1704)
#define SHM_LTECX_FRAMESYNC_TS	SHM(0x1706)
#define SHM_LTECX_WCI2_TST_LPBK_NBYTES_TX	SHM(0x1708)
#define SHM_LTECX_INACTIVE_TS	SHM(0x170A)
#define SHM_LTECX_PWRCP_C0_FSANT	SHM(0x170C)
#define SHM_LTECX_STATE1	SHM(0x170E)
#define SHM_LTECX_STATE	SHM(0x1710)
#define SHM_LTECX_HOST_FLAGS	SHM(0x1712)
#define SHM_LTECX_TX_START_TS	SHM(0x1714)
#define SHM_LTECX_TX_END_TS	SHM(0x1716)
#define SHM_LTECX_TX_JITTER_DUR	SHM(0x1718)
#define SHM_LTECX_SET_PROT_TOUT	SHM(0x171A)
#define SHM_LTECX_CLR_PROT_TOUT	SHM(0x171C)
#define SHM_LTECX_TX_LOOKAHEAD_DUR	SHM(0x171E)
#define SHM_LTECX_PROT_ADV_TIME	SHM(0x1720)
#define SHM_LTECX_IDLE_TIMEOUT	SHM(0x1722)
#define SHM_LTECX_IDLE_WAIT_DUR	SHM(0x1724)
#define SHM_LTECX_ACTUALTX_DURATION	SHM(0x1726)
#define SHM_LTECX_ACTUALTX_END_TS	SHM(0x1728)
#define SHM_LTECX_FS_OFFSET	SHM(0x172A)
#define SHM_LTECX_TXNOISE_TS	SHM(0x172C)
#define SHM_LTECX_TXNOISE_CNT	SHM(0x172E)
#define SHM_LTECX_TYPE6_PROT_ADV_TIME	SHM(0x1730)
#define SHM_LTECX_PRQ_END	SHM(0x1732)
#define SHM_LTECX_PRQ_DUR	SHM(0x1734)
#define SHM_LTECX_NOISE_THRESH	SHM(0x1736)
#define SHM_LTECX_TYPE1_RESEND_INTERVAL	SHM(0x1738)
#define SHM_LTECX_CFE_TOUT	SHM(0x173A)
#define SHM_LTECX_PROT_END_TS	SHM(0x173C)
#define SHM_LTECX_NEXT_SAMPLE_TS	SHM(0x173E)
#define SHM_LTECX_SPCL_SF_DUR	SHM(0x1740)
#define SHM_LTECX_WCI2_TST_MSG	SHM(0x1742)
#define SHM_LTECX_WCI2_TST_LPBK_NBYTES_ERR	SHM(0x1744)
#define SHM_LTECX_MWSSCAN_BM_HI	SHM(0x1746)
#define SHM_LTECX_WCI2_TST_LPBK_NBYTES_RX	SHM(0x1748)
#define SHM_LTECX_TST1	SHM(0x174A)
#define SHM_LTECX_TST2	SHM(0x174C)
#define SHM_LTECX_TST3	SHM(0x174E)
#define SHM_LTECX_TST4	SHM(0x1750)
#define SHM_LTECX_PWR_LIMIT_BCN_LOSS_LMT	SHM(0x1752)
#define SHM_LTECX_PWRCP_C0	SHM(0x1754)
#define SHM_LTECX_PWRCP_C0_FS	SHM(0x1756)
#define SHM_LTECX_PWRCP_C1_FS	SHM(0x1758)
#define SHM_LTECX_TYPE1_TIMER	SHM(0x175A)
#define SHM_LTECX_LTETX_ESFN	SHM(0x175C)
#define SHM_LTECX_ECI0	SHM(0x175E)
#define SHM_LTECX_ECI1	SHM(0x1760)
#define SHM_LTECX_ECI2	SHM(0x1762)
#define SHM_LTECX_ECI3	SHM(0x1764)
#define SHM_LTECX_TYPE4_CURRENT	SHM(0x1766)
#define SHM_NCAL_LTECX_BACKUP	SHM(0x1768)
#define SHM_BTCX_TST1	SHM(0x1790)
#define SHM_BTCX_TST2	SHM(0x1792)
#define SHM_BTCX_TST3	SHM(0x1794)
#define SHM_BTCX_SUCC_PM_PROTECT_CNT	SHM(0x1796)
#define SHM_BTCX_SUCC_CTS2A_CNT	SHM(0x1798)
#define SHM_BTCX_WLAN_TX_PREEMPT_CNT	SHM(0x179A)
#define SHM_BTCX_WLAN_RX_PREEMPT_CNT	SHM(0x179C)
#define SHM_BTCX_APTX_AFTER_PM_CNT	SHM(0x179E)
#define SHM_BTCX_PERAUD_CUMU_GRANT_CNT	SHM(0x17A0)
#define SHM_BTCX_PERAUD_CUMU_DENY_CNT	SHM(0x17A2)
#define SHM_BTCX_A2DP_CUMU_GRANT_CNT	SHM(0x17A4)
#define SHM_BTCX_A2DP_CUMU_DENY_CNT	SHM(0x17A6)
#define SHM_BTCX_SNIFF_CUMU_GRANT_CNT	SHM(0x17A8)
#define SHM_BTCX_SNIFF_CUMU_DENY_CNT	SHM(0x17AA)
#define SHM_CURR_RXANTSEL	SHM(0xC9C)
#define SHM_CURR_TXANTSEL	SHM(0xC9E)
#define SHM_COREMASK_BPHY	SHM(0x394)
#define SHM_COREMASK_OFDM	SHM(0x396)
#define SHM_COREMASK_BFM	SHM(0x398)
#define SHM_COREMASK_BFM1	SHM(0x39A)
#define SHM_COREMASK_RSVD	SHM(0x39C)
#define SHM_COREMASK_BTRESP	SHM(0x39E)
#define SHM_AMPDU_RXPER	SHM(0x3E0)
#define SHM_AMPDU_TXPER	SHM(0x3E2)
#define SHM_AMPDU_RXPER_CNT	SHM(0x3E4)
#define SHM_AMPDU_TXPER_CNT	SHM(0x3E6)
#define SHM_BFI_BLK_PTR	SHM(0x3EC)
#define SHM_BFI_REFRESH_THR	SHM(0x3EE)
#define SHM_BFI_NDPA_TXLMT	SHM(0x3F0)
#define SHM_BFI_NRXC	SHM(0x3F2)
#define SHM_BFI_MLBF_LUT	SHM(0x3F4)
#define SHM_BFI_NDP_RTBL	SHM(0x414)
#define SHM_BFCFG_END	SHM(0x432)
#define SHM_BFI_IMPBF_BLK	SHM(0x518)
#define SHM_BFE_RPTOFF	SHM(0x520)
#define SHM_BFE_RTPTR	SHM(0x522)
#define SHM_BFEFB_DOT11FRM	SHM(0x524)
#define SHM_BFI_BFEADDR	SHM(0x544)
#define SHM_BFI_HTNDP_PLCP12	SHM(0x546)
#define SHM_BFI_VHTNDP_PLCP12	SHM(0x54A)
#define SHM_BFI_NDP_SIGB20	SHM(0x54E)
#define SHM_BFI_NDP_SIGB40	SHM(0x552)
#define SHM_BFI_NDP_SIGB80	SHM(0x556)
#define SHM_BFI_INTERNAL_END	SHM(0x558)
#define SHM_BFI0_BLK	SHM(0x434)
#define SHM_BFI1_BLK	SHM(0x454)
#define SHM_BFI2_BLK	SHM(0x474)
#define SHM_BFI3_BLK	SHM(0x494)
#define SHM_BFI4_BLK	SHM(0x4B4)
#define SHM_BFI5_BLK	SHM(0x4D4)
#define SHM_BFI6_BLK	SHM(0x4F4)
#define SHM_TXERR_NOWRITE	SHM(0x187C)
#define SHM_TXERR_REASON	SHM(0x187E)
#define SHM_TXERR_PCTL0	SHM(0x1880)
#define SHM_TXERR_PCTL1	SHM(0x1882)
#define SHM_TXERR_PCTL2	SHM(0x1884)
#define SHM_TXERR_LSIG0	SHM(0x1886)
#define SHM_TXERR_LSIG1	SHM(0x1888)
#define SHM_TXERR_PLCP0	SHM(0x188A)
#define SHM_TXERR_PLCP1	SHM(0x188C)
#define SHM_TXERR_PLCP2	SHM(0x188E)
#define SHM_TXERR_SIGB0	SHM(0x1890)
#define SHM_TXERR_SIGB1	SHM(0x1892)
#define SHM_TXERR_RXESTATS2	SHM(0x1894)
#define SHM_TXERR_CTXTST	SHM(0x1896)
#define SHM_TXERR_TM	SHM(0x1898)
#define SHM_TXERR_TXBYTES	SHM(0x189A)
#define SHM_TXERR_REASON2	SHM(0x189C)
#define SHM_FCBS_TEMPLATE_LENS	SHM(0x3B4)
#define SHM_FCBS_BPHY_CTRL	SHM(0x3BC)
#define SHM_FCBS_TEMPLATE_PTR	SHM(0x3BE)
#define SHM_FCBS_RSVD	SHM(0x3C0)
#define SHM_ILP_PER_H	SHM(0x191C)
#define SHM_ILP_PER_L	SHM(0x191E)
#define SHM_PWR_DN_BLK	SHM(0x1924)
#define SHM_PWR_UP_BLK	SHM(0x193A)
#define SHM_RREG_PLL_VCOCAL13	SHM(0x1950)
#define SHM_RREG_PLL_CFG2	SHM(0x1952)
#define SHM_RREG_RFCTRLOVERRIDERXPUS0	SHM(0x1954)
#define SHM_SEQNUM_TID	SHM(0x3C4)
#define SHM_REPCNT_TID	SHM(0x3C6)
#define SHM_USEQ_PWRUP_PTR	SHM(0x180)
#define SHM_USEQ_PWRDN_PTR	SHM(0x182)
#define SHM_SLP_RDY_INT	SHM(0x184)
#define SHM_HOST_FLAGS6	SHM(0x186)
#define SHM_PHYPREEMPT_VAL	SHM(0x188)
#define SHM_SECRSSI0_MIN	SHM(0x18A)
#define SHM_SECRSSI1_MIN	SHM(0x18C)
#define SHM_RSPBW20_RSSI	SHM(0x18E)
#define SHM_LPF_PASSIVE_RC_OFDM	SHM(0x190)
#define SHM_LPF_PASSIVE_RC_CCK	SHM(0x192)
#define SHM_IMPBF_RSSI_THR	SHM(0x194)
#define SHM_BCNTRIM_PER	SHM(0x196)
#define SHM_BCNTRIM_TIMEND	SHM(0x198)
#define SHM_BCNTRIM_TSFLMT	SHM(0x19A)
#define SHM_MODE_CORE	SHM(0x19C)
#define SHM_WRDCNT_RXF1OVFL_THRSH	SHM(0x19E)
#define SHM_WRDCNT_RXF0OVFL_THRSH	SHM(0x1A0)
#define SHM_PMU_L	SHM(0x1A2)
#define SHM_PMU_H	SHM(0x1A4)
#define SHM_TXPWRCAP_BLK_PTR	SHM(0x1AE)
#define SHM_SLP_TIMEOUT	SHM(0x1B0)
#define SHM_ASSERT_REASON	SHM(0x1B6)
#define SHM_RXCORE_STATE	SHM(0x1B8)
#define SHM_TPCNNUM_INTG_LOG2	SHM(0x1BA)
#define SHM_TSSI_SENS_LMT1	SHM(0x1BC)
#define SHM_TSSI_SENS_LMT2	SHM(0x1BE)
#define SHM_SWDIV_EN	SHM(0x1958)
#define SHM_SWDIV_PREF_ANT	SHM(0x195A)
#define SHM_SWDIV_TX_PREF_ANT	SHM(0x195C)
#define SHM_SWDIV_GPIO_MASK	SHM(0x195E)
#define SHM_SWDIV_GPIO_NUM	SHM(0x1960)
#define SHM_BCNTRIM_CUR	SHM(0x190C)
#define SHM_BCNTRIM_PREVLEN	SHM(0x190E)
#define SHM_BCNTRIM_TIMLEN	SHM(0x1910)
#define SHM_TOF_CMD	SHM(0x18A0)
#define SHM_TOF_RSP	SHM(0x18A2)
#define SHM_TOF_CHNSM_0	SHM(0x18A4)
#define SHM_TOF_DOT11DUR	SHM(0x18A6)
#define SHM_TOF_PHYCTL0	SHM(0x18A8)
#define SHM_TOF_PHYCTL1	SHM(0x18AA)
#define SHM_TOF_PHYCTL2	SHM(0x18AC)
#define SHM_TOF_LSIG	SHM(0x18AE)
#define SHM_TOF_VHTA0	SHM(0x18B0)
#define SHM_TOF_VHTA1	SHM(0x18B2)
#define SHM_TOF_VHTA2	SHM(0x18B4)
#define SHM_TOF_VHTB0	SHM(0x18B6)
#define SHM_TOF_VHTB1	SHM(0x18B8)
#define SHM_TOF_AMPDU_CTL	SHM(0x18BA)
#define SHM_TOF_AMPDU_DLIM	SHM(0x18BC)
#define SHM_TOF_AMPDU_LEN	SHM(0x18BE)
#define SHM_TOF_SEQ_BLK	SHM(0x18A8)
#define SHM_TOF_FLAGS	SHM(0x190A)
#define SHM_AFE_SPUR_WAR_BLK	SHM(0x18A8)
#define SHM_NCAL_ACTIVE_CORES	SHM(0x19B0)
#define SHM_NCAL_CFG_BMP	SHM(0x19B2)
#define SHM_NCAL_RFCTRLOVR_0	SHM(0x19B4)
#define SHM_NCAL_RXGAINOVR_0	SHM(0x19B6)
#define SHM_NCAL_RXLPFOVR_0	SHM(0x19B8)
#define SHM_NCAL_RXGAIN_HI	SHM(0x19BA)
#define SHM_NCAL_RXGAIN_LO	SHM(0x19BC)
#define SHM_NCAL_LPFGAIN_HI	SHM(0x19BE)
#define SHM_NCAL_LPFGAIN_LO	SHM(0x19C0)
#define SHM_NCAL_RFCTRLOVR_VAL	SHM(0x19C2)
#define SHM_BTCX_IBSS_TSF_L	SHM(0x3CC)
#define SHM_BTCX_IBSS_TSF_ML	SHM(0x3CE)
#define SHM_BTCX_IBSS_TSF_SCO_L	SHM(0x3D0)
#define SHM_CN04_BSSID_TA0	SHM(0x1914)
#define SHM_CN04_BSSID_TA1	SHM(0x1916)
#define SHM_CN04_BSSID_TA2	SHM(0x1918)
#define SHM_TXERR_COND	SHM(0x1980)
#define SHM_TXERR_RAND	SHM(0x1982)
#define SHM_TXERR_TMP	SHM(0x1984)
#define SHM_SRVAL_TMP0	SHM(0x1986)
#define SHM_SRVAL_TMP1	SHM(0x1988)
#define SHM_CORE0_EDVAL	SHM(0xC6E)
#define SHM_MACSUSP_STRT_L	SHM(0xC72)
#define SHM_MACSUSP_STRT_ML	SHM(0xC74)
#define SHM_SR_BRWK_REGS	SHM(0xC54)
#define SHM_PHY_RXFECTRL1	SHM(0xC76)
#define SHM_TXPWRCAP_C0	SHM(0x19D0)
#define SHM_TXPWRCAP_C1	SHM(0x19D2)
#define SHM_TXPWRCAP_C2	SHM(0x19D4)
#define SHM_TXPWRCAP_C0_FS	SHM(0x19D6)
#define SHM_TXPWRCAP_C1_FS	SHM(0x19D8)
#define SHM_TXPWRCAP_C2_FS	SHM(0x19DA)
#define SHM_TXPWRCAP_C0_FSANT	SHM(0x19DC)
#define SHM_TXPWRCAP_BT_C0	SHM(0x19DE)
#define SHM_TXPWRCAP_BT_C1	SHM(0x19E0)
#define SHM_TXPWRCAP_BT_C2	SHM(0x19E2)
#define SHM_IDLE_TMOUT_L	SHM(0xcf5*2)
#endif /* SHARED_MEMORY_H_ */