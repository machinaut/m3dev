
#define IOCON_FUNC_0		(0 << 0)
#define IOCON_FUNC_1		(1 << 0)
#define IOCON_FUNC_2		(2 << 0)
#define IOCON_FUNC_3		(3 << 0)
#define IOCON_PULL_DOWN		(1 << 3)
#define IOCON_PULL_UP		(2 << 3)
#define IOCON_REPEATER		(3 << 3)
#define IOCON_HYSTERESIS	(1 << 5)
#define IOCON_ANALOG		(0 << 7)
#define IOCON_DIGITAL		(1 << 7)
#define IOCON_PSEUDO_OPENDRAIN	(1 << 10)

#define IOCON_PIO0_0		0x40044000
#define   IOCON_PIO0_0_FUNC_RESET		IOCON_FUNC_0
#define   IOCON_PIO0_0_FUNC_PIO0_0		IOCON_FUNC_1

#define IOCON_PIO0_1		0x40044004
#define   IOCON_PIO0_1_FUNC_PIO0_1		IOCON_FUNC_0
#define   IOCON_PIO0_1_FUNC_CLKOUT		IOCON_FUNC_1
#define   IOCON_PIO0_1_FUNC_CT32B0_MAT2	IOCON_FUNC_2
#define   IOCON_PIO0_1_FUNC_USB_FTOGGLE	IOCON_FUNC_3

#define IOCON_PIO0_2		0x40044008
#define   IOCON_PIO0_2_FUNC_PIO0_2		IOCON_FUNC_0
#define   IOCON_PIO0_2_FUNC_SSEL0		IOCON_FUNC_1
#define   IOCON_PIO0_2_FUNC_CT16B0_CAP0	IOCON_FUNC_2

#define IOCON_PIO0_3		0x4004400c
#define   IOCON_PIO0_3_FUNC_PIO0_3		IOCON_FUNC_0
#define   IOCON_PIO0_3_FUNC_USB_VBUS		IOCON_FUNC_1

#define IOCON_PIO0_4		0x40044010
#define   IOCON_PIO0_4_FUNC_PIO0_4		IOCON_FUNC_0
#define   IOCON_PIO0_4_FUNC_I2C_SCL		IOCON_FUNC_1

#define IOCON_PIO0_5		0x40044014
#define   IOCON_PIO0_5_FUNC_PIO0_5		IOCON_FUNC_0
#define   IOCON_PIO0_5_FUNC_I2C_SDA		IOCON_FUNC_1

#define IOCON_PIO0_6		0x40044018
#define   IOCON_PIO0_6_FUNC_PIO0_6		IOCON_FUNC_0
#define   IOCON_PIO0_6_FUNC_USB_CONNECT	IOCON_FUNC_1
#define   IOCON_PIO0_6_FUNC_SCK0		IOCON_FUNC_2

#define IOCON_PIO0_7		0x4004401c
#define   IOCON_PIO0_7_FUNC_PIO0_7		IOCON_FUNC_0
#define   IOCON_PIO0_7_FUNC_CTS		IOCON_FUNC_1

#define IOCON_PIO0_8		0x40044020
#define   IOCON_PIO0_8_FUNC_PIO0_8		IOCON_FUNC_0
#define   IOCON_PIO0_8_FUNC_MISO0		IOCON_FUNC_1
#define   IOCON_PIO0_8_FUNC_CT16B0_MAT0	IOCON_FUNC_2
#define   IOCON_PIO0_8_FUNC_ARM_TRACE_CLK	IOCON_FUNC_3

#define IOCON_PIO0_9		0x40044024
#define   IOCON_PIO0_9_FUNC_PIO0_9		IOCON_FUNC_0
#define   IOCON_PIO0_9_FUNC_MOSI0		IOCON_FUNC_1
#define   IOCON_PIO0_9_FUNC_CT16B0_MAT1	IOCON_FUNC_2
#define   IOCON_PIO0_9_FUNC_ARM_TRACE_SWV	IOCON_FUNC_3

#define IOCON_PIO0_10		0x40044028
#define   IOCON_PIO0_10_FUNC_SWCLK		IOCON_FUNC_0
#define   IOCON_PIO0_10_FUNC_PIO0_10		IOCON_FUNC_1
#define   IOCON_PIO0_10_FUNC_SCK0		IOCON_FUNC_2
#define   IOCON_PIO0_10_FUNC_CT16B0_MAT2	IOCON_FUNC_3

#define IOCON_PIO0_11		0x4004402c
#define   IOCON_PIO0_11_FUNC_TDI		IOCON_FUNC_0
#define   IOCON_PIO0_11_FUNC_PIO0_11		IOCON_FUNC_1
#define   IOCON_PIO0_11_FUNC_AD0		IOCON_FUNC_2
#define   IOCON_PIO0_11_FUNC_CT32B0_MAT3	IOCON_FUNC_3

#define IOCON_PIO0_12		0x40044030
#define   IOCON_PIO0_12_FUNC_TMS		IOCON_FUNC_0
#define   IOCON_PIO0_12_FUNC_PIO0_12		IOCON_FUNC_1
#define   IOCON_PIO0_12_FUNC_AD1		IOCON_FUNC_2
#define   IOCON_PIO0_12_FUNC_CT32B1_CAP0	IOCON_FUNC_3

#define IOCON_PIO0_13		0x40044034
#define   IOCON_PIO0_13_FUNC_TDO		IOCON_FUNC_0
#define   IOCON_PIO0_13_FUNC_PIO0_13		IOCON_FUNC_1
#define   IOCON_PIO0_13_FUNC_AD2		IOCON_FUNC_2
#define   IOCON_PIO0_13_FUNC_CT32B1_MAT0	IOCON_FUNC_3

#define IOCON_PIO0_14		0x40044038
#define   IOCON_PIO0_14_FUNC_TRST		IOCON_FUNC_0
#define   IOCON_PIO0_14_FUNC_PIO0_14		IOCON_FUNC_1
#define   IOCON_PIO0_14_FUNC_AD3		IOCON_FUNC_2
#define   IOCON_PIO0_14_FUNC_CT32B1_MAT1	IOCON_FUNC_3

#define IOCON_PIO0_15		0x4004403c
#define   IOCON_PIO0_15_FUNC_SWDIO		IOCON_FUNC_0
#define   IOCON_PIO0_15_FUNC_PIO0_15		IOCON_FUNC_1
#define   IOCON_PIO0_15_FUNC_AD4		IOCON_FUNC_2
#define   IOCON_PIO0_15_FUNC_CT32B1_MAT2	IOCON_FUNC_3

#define IOCON_PIO0_16		0x40044040
#define   IOCON_PIO0_16_FUNC_PIO0_16		IOCON_FUNC_0
#define   IOCON_PIO0_16_FUNC_AD5		IOCON_FUNC_1
#define   IOCON_PIO0_16_FUNC_CT32B1_MAT3	IOCON_FUNC_2

#define IOCON_PIO0_17		0x40044044
#define   IOCON_PIO0_17_FUNC_PIO0_17		IOCON_FUNC_0
#define   IOCON_PIO0_17_FUNC_RTS		IOCON_FUNC_1
#define   IOCON_PIO0_17_FUNC_CT32B0_CAP0	IOCON_FUNC_2
#define   IOCON_PIO0_17_FUNC_SCLK		IOCON_FUNC_3

#define IOCON_PIO0_18		0x40044048
#define   IOCON_PIO0_18_FUNC_PIO0_18		IOCON_FUNC_0
#define   IOCON_PIO0_18_FUNC_RXD		IOCON_FUNC_1
#define   IOCON_PIO0_18_FUNC_CT32B0_MAT0	IOCON_FUNC_2

#define IOCON_PIO0_19		0x4004404c
#define   IOCON_PIO0_19_FUNC_PIO0_19		IOCON_FUNC_0
#define   IOCON_PIO0_19_FUNC_TXD		IOCON_FUNC_1
#define   IOCON_PIO0_19_FUNC_CT32B0_MAT1	IOCON_FUNC_2

#define IOCON_PIO0_20		0x40044050
#define   IOCON_PIO0_20_FUNC_PIO0_20		IOCON_FUNC_0
#define   IOCON_PIO0_20_FUNC_CT16B1_CAP0	IOCON_FUNC_1

#define IOCON_PIO0_21		0x40044054
#define   IOCON_PIO0_21_FUNC_PIO0_21		IOCON_FUNC_0
#define   IOCON_PIO0_21_FUNC_CT16B1_MAT0	IOCON_FUNC_1
#define   IOCON_PIO0_21_FUNC_MOSI1		IOCON_FUNC_2

#define IOCON_PIO0_22		0x40044058
#define   IOCON_PIO0_22_FUNC_PIO0_22		IOCON_FUNC_0
#define   IOCON_PIO0_22_FUNC_AD6		IOCON_FUNC_1
#define   IOCON_PIO0_22_FUNC_CT16B1_MAT1	IOCON_FUNC_2
#define   IOCON_PIO0_22_FUNC_MISO1		IOCON_FUNC_3

#define IOCON_PIO0_23		0x4004405c
#define   IOCON_PIO0_23_FUNC_PIO0_32		IOCON_FUNC_0
#define   IOCON_PIO0_23_FUNC_AD7		IOCON_FUNC_1

#define IOCON_PIO1_0		0x40044060
#define   IOCON_PIO1_0_FUNC_PIO1_0		IOCON_FUNC_0
#define   IOCON_PIO1_0_FUNC_CT32B1_MAT0	IOCON_FUNC_1

#define IOCON_PIO1_1		0x40044064
#define   IOCON_PIO1_1_FUNC_PIO1_1		IOCON_FUNC_0
#define   IOCON_PIO1_1_FUNC_CT32B1_MAT1	IOCON_FUNC_1

#define IOCON_PIO1_2		0x40044068
#define   IOCON_PIO1_2_FUNC_PIO1_2		IOCON_FUNC_0
#define   IOCON_PIO1_2_FUNC_CT32B1_MAT2	IOCON_FUNC_1

#define IOCON_PIO1_3		0x4004406c
#define   IOCON_PIO1_3_FUNC_PIO1_3		IOCON_FUNC_0
#define   IOCON_PIO1_3_FUNC_CT32B1_MAT3	IOCON_FUNC_1

#define IOCON_PIO1_4		0x40044070
#define   IOCON_PIO1_4_FUNC_PIO1_4		IOCON_FUNC_0
#define   IOCON_PIO1_4_FUNC_CT32B1_CAP0	IOCON_FUNC_1

#define IOCON_PIO1_5		0x40044074
#define   IOCON_PIO1_5_FUNC_PIO1_5		IOCON_FUNC_0
#define   IOCON_PIO1_5_FUNC_CT32B1_CAP1	IOCON_FUNC_1

#define IOCON_PIO1_7		0x4004407c
#define   IOCON_PIO1_7_FUNC_PIO1_7		IOCON_FUNC_0

#define IOCON_PIO1_8		0x40044080
#define   IOCON_PIO1_8_FUNC_PIO1_8		IOCON_FUNC_0

#define IOCON_PIO1_10		0x40044088
#define   IOCON_PIO1_10_FUNC_PIO1_10		IOCON_FUNC_0

#define IOCON_PIO1_11		0x4004408c
#define   IOCON_PIO1_11_FUNC_PIO1_11		IOCON_FUNC_0

#define IOCON_PIO1_13		0x40044094
#define   IOCON_PIO1_13_FUNC_PIO1_13		IOCON_FUNC_0
#define   IOCON_PIO1_13_FUNC_DTR		IOCON_FUNC_1
#define   IOCON_PIO1_13_FUNC_CT16B0_MAT0	IOCON_FUNC_2
#define   IOCON_PIO1_13_FUNC_TXD		IOCON_FUNC_3

#define IOCON_PIO1_14		0x40044098
#define   IOCON_PIO1_14_FUNC_PIO1_14		IOCON_FUNC_0
#define   IOCON_PIO1_14_FUNC_DSR		IOCON_FUNC_1
#define   IOCON_PIO1_14_FUNC_CT16B0_MAT1	IOCON_FUNC_2
#define   IOCON_PIO1_14_FUNC_RXD		IOCON_FUNC_3

#define IOCON_PIO1_15		0x4004409c
#define   IOCON_PIO1_15_FUNC_PIO1_15		IOCON_FUNC_0
#define   IOCON_PIO1_15_FUNC_DCD		IOCON_FUNC_1
#define   IOCON_PIO1_15_FUNC_CT16B0_MAT2	IOCON_FUNC_2
#define   IOCON_PIO1_15_FUNC_SCK1		IOCON_FUNC_3

#define IOCON_PIO1_16		0x400440a0
#define   IOCON_PIO1_16_FUNC_PIO1_16		IOCON_FUNC_0
#define   IOCON_PIO1_16_FUNC_RI		IOCON_FUNC_1
#define   IOCON_PIO1_16_FUNC_CT16B0_CAP0	IOCON_FUNC_2

#define IOCON_PIO1_17		0x400440a4
#define   IOCON_PIO1_17_FUNC_PIO1_17		IOCON_FUNC_0
#define   IOCON_PIO1_17_FUNC_CT16B0_CAP1	IOCON_FUNC_1
#define   IOCON_PIO1_17_FUNC_RXD		IOCON_FUNC_2

#define IOCON_PIO1_18		0x400440a8
#define   IOCON_PIO1_18_FUNC_PIO1_18		IOCON_FUNC_0
#define   IOCON_PIO1_18_FUNC_CT16B1_CAP1	IOCON_FUNC_1
#define   IOCON_PIO1_18_FUNC_TXD		IOCON_FUNC_2

#define IOCON_PIO1_19		0x400440ac
#define   IOCON_PIO1_19_FUNC_PIO1_19		IOCON_FUNC_0
#define   IOCON_PIO1_19_FUNC_DTR		IOCON_FUNC_1
#define   IOCON_PIO1_19_FUNC_SSEL1		IOCON_FUNC_2

#define IOCON_PIO1_20		0x400440b0
#define   IOCON_PIO1_20_FUNC_PIO1_20		IOCON_FUNC_0
#define   IOCON_PIO1_20_FUNC_DSR		IOCON_FUNC_1
#define   IOCON_PIO1_20_FUNC_SCK1		IOCON_FUNC_2

#define IOCON_PIO1_21		0x400440b4
#define   IOCON_PIO1_21_FUNC_PIO1_21		IOCON_FUNC_0
#define   IOCON_PIO1_21_FUNC_DCD		IOCON_FUNC_1
#define   IOCON_PIO1_21_FUNC_MISO1		IOCON_FUNC_2

#define IOCON_PIO1_22		0x400440b8
#define   IOCON_PIO1_22_FUNC_PIO1_22		IOCON_FUNC_0
#define   IOCON_PIO1_22_FUNC_RI		IOCON_FUNC_1
#define   IOCON_PIO1_22_FUNC_MOSI1		IOCON_FUNC_2

#define IOCON_PIO1_23		0x400440bc
#define   IOCON_PIO1_23_FUNC_PIO1_23		IOCON_FUNC_0
#define   IOCON_PIO1_23_FUNC_CT16B1_MAT1	IOCON_FUNC_1
#define   IOCON_PIO1_23_FUNC_SSEL1		IOCON_FUNC_2

#define IOCON_PIO1_24		0x400440c0
#define   IOCON_PIO1_24_FUNC_PIO1_24		IOCON_FUNC_0
#define   IOCON_PIO1_24_FUNC_CT32B0_MAT0	IOCON_FUNC_1

#define IOCON_PIO1_25		0x400440c4
#define   IOCON_PIO1_25_FUNC_PIO1_25		IOCON_FUNC_0
#define   IOCON_PIO1_25_FUNC_CT32B0_MAT1	IOCON_FUNC_1

#define IOCON_PIO1_26		0x400440c8
#define   IOCON_PIO1_26_FUNC_PIO1_26		IOCON_FUNC_0
#define   IOCON_PIO1_26_FUNC_CT32B0_MAT2	IOCON_FUNC_1
#define   IOCON_PIO1_26_FUNC_RXD		IOCON_FUNC_2

#define IOCON_PIO1_27		0x400440cc
#define   IOCON_PIO1_27_FUNC_PIO1_27		IOCON_FUNC_0
#define   IOCON_PIO1_27_FUNC_CT32B0_MAT3	IOCON_FUNC_1
#define   IOCON_PIO1_27_FUNC_TXD		IOCON_FUNC_2

#define IOCON_PIO1_28		0x400440d0
#define   IOCON_PIO1_28_FUNC_PIO1_28		IOCON_FUNC_0
#define   IOCON_PIO1_28_FUNC_CT32B0_CAP0	IOCON_FUNC_1
#define   IOCON_PIO1_28_FUNC_SCLK		IOCON_FUNC_2

#define IOCON_PIO1_29		0x400440d4
#define   IOCON_PIO1_29_FUNC_PIO1_29		IOCON_FUNC_0
#define   IOCON_PIO1_29_FUNC_SCK0		IOCON_FUNC_1
#define   IOCON_PIO1_29_FUNC_CT32B0_CAP1	IOCON_FUNC_2

#define IOCON_PIO1_31		0x400440dc
#define   IOCON_PIO1_31_FUNC_PIO1_31		IOCON_FUNC_0

