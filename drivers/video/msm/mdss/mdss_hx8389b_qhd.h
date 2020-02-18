#ifndef MDSS_R63319_H
#define MDSS_R63319_H
#include "lcd_effect.h"
#include "mdss_panel.h"

/*********************************** head cmd *************************************/
static char r63319_addr_mode[] = {0x36,0x00};
static char r63319_pixel_format[] = {0x3a,0x70};
static char r63319_mcs_protect_off[]      = {0xb0, 0x04};
static char r63319_nop_command[]          = {0x00};

static struct dsi_cmd_desc r63319_packet_head_cmds[] = {
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_addr_mode)}, r63319_addr_mode},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_pixel_format)}, r63319_pixel_format},
	{{DTYPE_GEN_WRITE2, 1, 0, 0, 0, sizeof(r63319_mcs_protect_off)}, r63319_mcs_protect_off},
	{{DTYPE_DCS_WRITE, 1, 0, 0, 0, sizeof(r63319_nop_command)}, r63319_nop_command},
	{{DTYPE_DCS_WRITE, 1, 0, 0, 0, sizeof(r63319_nop_command)}, r63319_nop_command},
};
/*********************************** ce *************************************/
static char r63319_ce0[] = {0xca,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce1[] = {0xca,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce2[] = {0xca,0x01,0x80,0x88,0x88,0x88,0x84,0x82,0x88,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce3[] = {0xca,0x01,0x80,0x88,0x88,0x88,0x84,0x82,0x88,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce4[] = {0xca,0x01,0x80,0x90,0x90,0x90,0x88,0x84,0x90,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce5[] = {0xca,0x01,0x80,0x90,0x90,0x90,0x88,0x84,0x90,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce6[] = {0xca,0x01,0x80,0x98,0x98,0x98,0x8c,0x86,0x98,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce7[] = {0xca,0x01,0x80,0x98,0x98,0x98,0x8c,0x86,0x98,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce8[] = {0xca,0x01,0x80,0xa0,0xa0,0xa0,0x90,0x88,0xa0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce9[] = {0xca,0x01,0x80,0xa0,0xa0,0xa0,0x90,0x88,0xa0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce10[] = {0xca,0x01,0x80,0xa8,0xa8,0xa8,0x94,0x8a,0xa8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce11[] = {0xca,0x01,0x80,0xa8,0xa8,0xa8,0x94,0x8a,0xa8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce12[] = {0xca,0x01,0x80,0xb0,0xb0,0xb0,0x98,0x8c,0xb0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce13[] = {0xca,0x01,0x80,0xb0,0xb0,0xb0,0x98,0x8c,0xb0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce14[] = {0xca,0x01,0x80,0xb8,0xb8,0xb8,0x9c,0x8e,0xb8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce15[] = {0xca,0x01,0x80,0xb8,0xb8,0xb8,0x9c,0x8e,0xb8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce16[] = {0xca,0x01,0x80,0xc0,0xc0,0xc0,0xa0,0x90,0xc0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce17[] = {0xca,0x01,0x80,0xc0,0xc0,0xc0,0xa0,0x90,0xc0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce18[] = {0xca,0x01,0x80,0xc8,0xc8,0xc8,0xa4,0x92,0xc8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce19[] = {0xca,0x01,0x80,0xc8,0xc8,0xc8,0xa4,0x92,0xc8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce20[] = {0xca,0x01,0x80,0xd0,0xd0,0xd0,0xa8,0x94,0xd0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce21[] = {0xca,0x01,0x80,0xd0,0xd0,0xd0,0xa8,0x94,0xd0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce22[] = {0xca,0x01,0x80,0xd8,0xd8,0xd8,0xac,0x96,0xd8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce23[] = {0xca,0x01,0x80,0xd8,0xd8,0xd8,0xac,0x96,0xd8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce24[] = {0xca,0x01,0x80,0xe0,0xe0,0xe0,0xb0,0x98,0xe0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce25[] = {0xca,0x01,0x80,0xe0,0xe0,0xe0,0xb0,0x98,0xe0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce26[] = {0xca,0x01,0x80,0xe8,0xe8,0xe8,0xb4,0x9a,0xe8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce27[] = {0xca,0x01,0x80,0xe8,0xe8,0xe8,0xb4,0x9a,0xe8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce28[] = {0xca,0x01,0x80,0xf0,0xf0,0xf0,0xb8,0x9c,0xf0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce29[] = {0xca,0x01,0x80,0xf0,0xf0,0xf0,0xb8,0x9c,0xf0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce30[] = {0xca,0x01,0x80,0xf8,0xf8,0xf8,0xbc,0x9e,0xf8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63319_ce31[] = {0xca,0x01,0x80,0xf8,0xf8,0xf8,0xbc,0x9e,0xf8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};

char *r63319_ce[] = {
	r63319_ce0,
	r63319_ce1,
	r63319_ce2,
	r63319_ce3,
	r63319_ce4,
	r63319_ce5,
	r63319_ce6,
	r63319_ce7,
	r63319_ce8,
	r63319_ce9,
	r63319_ce10,
	r63319_ce11,
	r63319_ce12,
	r63319_ce13,
	r63319_ce14,
	r63319_ce15,
	r63319_ce16,
	r63319_ce17,
	r63319_ce18,
	r63319_ce19,
	r63319_ce20,
	r63319_ce21,
	r63319_ce22,
	r63319_ce23,
	r63319_ce24,
	r63319_ce25,
	r63319_ce26,
	r63319_ce27,
	r63319_ce28,
	r63319_ce29,
	r63319_ce30,
	r63319_ce31,
};

static struct dsi_cmd_desc r63319_effect_ce[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_ce0)}, r63319_ce0},
};

struct lcd_effect_cmds r63319_effect_ce_cmd[] = {
	{{r63319_ce, ARRAY_SIZE(r63319_ce)}, {r63319_effect_ce, ARRAY_SIZE(r63319_effect_ce)}},
};
/*********************************** cta *************************************/
static char r63319_cta0[] = {0xC8,0x01,0x00,0x06,0xfd,0x05,0xFC,0x00,0x00,0x08,0xfc,0xfc,0x9e,0x00,0x00,0xfd,0xfe,0xf9,0x37,0x00};
static char r63319_cta1[] = {0xC8,0x01,0x00,0x06,0xfd,0x05,0xFC,0x00,0x00,0x08,0xfc,0xfc,0x9e,0x00,0x00,0xfd,0xfe,0xf9,0x37,0x00};
static char r63319_cta2[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x06,0xfd,0xff,0xa6,0x00,0x00,0xfd,0xfe,0xfa,0x54,0x00};
static char r63319_cta3[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x06,0xfd,0xff,0xa6,0x00,0x00,0xfd,0xfe,0xfa,0x54,0x00};
static char r63319_cta4[] = {0xC8,0x01,0x00,0x04,0xfd,0x06,0xFC,0x00,0x00,0x07,0xfd,0x06,0xb0,0x00,0x00,0xfd,0xfe,0x01,0x6f,0x00};
static char r63319_cta5[] = {0xC8,0x01,0x00,0x04,0xfd,0x06,0xFC,0x00,0x00,0x07,0xfd,0x06,0xb0,0x00,0x00,0xfd,0xfe,0x01,0x6f,0x00};
static char r63319_cta6[] = {0xC8,0x01,0x00,0x04,0xfd,0x06,0xFC,0x00,0x00,0x06,0xfd,0x05,0xbe,0x00,0x00,0xfe,0xfd,0x01,0x8f,0x00};
static char r63319_cta7[] = {0xC8,0x01,0x00,0x04,0xfd,0x06,0xFC,0x00,0x00,0x06,0xfd,0x05,0xbe,0x00,0x00,0xfe,0xfd,0x01,0x8f,0x00};
static char r63319_cta8[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x0a,0xfc,0x04,0xc9,0x00,0x00,0x00,0xfe,0x07,0xa2,0x00};
static char r63319_cta9[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x0a,0xfc,0x04,0xc9,0x00,0x00,0x00,0xfe,0x07,0xa2,0x00};
static char r63319_cta10[] = {0xC8,0x01,0x00,0x06,0xfd,0x05,0xFC,0x00,0x00,0x0a,0xfc,0x04,0xd2,0x00,0x00,0x00,0xff,0x0d,0xb3,0x00};
static char r63319_cta11[] = {0xC8,0x01,0x00,0x06,0xfd,0x05,0xFC,0x00,0x00,0x0a,0xfc,0x04,0xd2,0x00,0x00,0x00,0xff,0x0d,0xb3,0x00};
static char r63319_cta12[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x09,0xfd,0x04,0xda,0x00,0x00,0x00,0xff,0x0b,0xcb,0x00};
static char r63319_cta13[] = {0xC8,0x01,0x00,0x05,0xfd,0x05,0xFC,0x00,0x00,0x09,0xfd,0x04,0xda,0x00,0x00,0x00,0xff,0x0b,0xcb,0x00};
static char r63319_cta14[] = {0xC8,0x01,0x00,0x04,0xfd,0x05,0xFC,0x00,0x00,0x09,0xfc,0x04,0xe4,0x00,0x00,0x00,0x00,0x0b,0xe1,0x00};
static char r63319_cta15[] = {0xC8,0x01,0x00,0x04,0xfd,0x05,0xFC,0x00,0x00,0x09,0xfc,0x04,0xe4,0x00,0x00,0x00,0x00,0x0b,0xe1,0x00};
static char r63319_cta16[] = {0xC8,0x01,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0x00};
static char r63319_cta17[] = {0xC8,0x01,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0x00};
static char r63319_cta18[] = {0xC8,0x01,0x00,0x06,0xfc,0xfb,0xf7,0x00,0x00,0x08,0xfc,0xf9,0xe4,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta19[] = {0xC8,0x01,0x00,0x06,0xfc,0xfb,0xf7,0x00,0x00,0x08,0xfc,0xf9,0xe4,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta20[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xe9,0x00,0x00,0x08,0xfc,0xf9,0xd8,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta21[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xe9,0x00,0x00,0x08,0xfc,0xf9,0xd8,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta22[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xdb,0x00,0x00,0x08,0xfc,0xf8,0xcc,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta23[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xdb,0x00,0x00,0x08,0xfc,0xf8,0xcc,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta24[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xdb,0x00,0x00,0x08,0xfc,0xf8,0xcc,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta25[] = {0xC8,0x01,0x00,0x06,0xfc,0xfa,0xdb,0x00,0x00,0x08,0xfc,0xf8,0xcc,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta26[] = {0xC8,0x01,0x00,0x06,0xfc,0xfc,0xbd,0x00,0x00,0x07,0xfe,0xfb,0xb0,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta27[] = {0xC8,0x01,0x00,0x06,0xfc,0xfc,0xbd,0x00,0x00,0x07,0xfe,0xfb,0xb0,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta28[] = {0xC8,0x01,0x00,0x05,0xfe,0xff,0xac,0x00,0x00,0x09,0xfd,0xfb,0xa5,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta29[] = {0xC8,0x01,0x00,0x05,0xfe,0xff,0xac,0x00,0x00,0x09,0xfd,0xfb,0xa5,0x00,0x00,0x01,0x00,0x00,0xfc,0x00};
static char r63319_cta30[] = {0xC8,0x01,0x00,0x06,0xfd,0xff,0xa9,0x00,0x00,0x07,0xfe,0xfb,0xa2,0x00,0x00,0x01,0x00,0x00,0xFC,0x00};
static char r63319_cta31[] = {0xC8,0x01,0x00,0x06,0xfd,0xff,0xa9,0x00,0x00,0x07,0xfe,0xfb,0xa2,0x00,0x00,0x01,0x00,0x00,0xFC,0x00};

char *r63319_cta[] = {
	r63319_cta0,
	r63319_cta1,
	r63319_cta2,
	r63319_cta3,
	r63319_cta4,
	r63319_cta5,
	r63319_cta6,
	r63319_cta7,
	r63319_cta8,
	r63319_cta9,
	r63319_cta10,
	r63319_cta11,
	r63319_cta12,
	r63319_cta13,
	r63319_cta14,
	r63319_cta15,
	r63319_cta16,
	r63319_cta17,
	r63319_cta18,
	r63319_cta19,
	r63319_cta20,
	r63319_cta21,
	r63319_cta22,
	r63319_cta23,
	r63319_cta24,
	r63319_cta25,
	r63319_cta26,
	r63319_cta27,
	r63319_cta28,
	r63319_cta29,
	r63319_cta30,
	r63319_cta31,
};

static struct dsi_cmd_desc r63319_effect_cta[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_cta0)}, r63319_cta0},
};
struct lcd_effect_cmds r63319_effect_cta_cmd[] = {
	{{r63319_cta, ARRAY_SIZE(r63319_cta)}, {r63319_effect_cta, ARRAY_SIZE(r63319_effect_cta)}},
};
/************************************ cabc ***********************************/
static char r63319_cabc0[] = {0x55, 0x00};
static char r63319_cabc1[] = {0x55, 0x01};
static char r63319_cabc2[] = {0x55, 0x02};
static char r63319_cabc3[] = {0x55, 0x03};

char *r63319_cabc[] = {
	r63319_cabc0,
	r63319_cabc1,
	r63319_cabc2,
	r63319_cabc3,
};
#if 0
static char r63319_blc0[] = {0xb8,0x00,0x00,0x00,0x00,0x00,0x00};
static char r63319_blc1[] = {0xb8,0x07,0x88,0x25,0x18,0x00,0x31};
static char r63319_blc2[] = {0xb9,0x07,0x75,0x61,0x20,0x16,0x87};
static char r63319_blc3[] = {0xba,0x07,0x6f,0x81,0x20,0x48,0xbb};

static char *r63319_blc[] = {
	r63319_blc0,
	r63319_blc1,
	r63319_blc2,
	r63319_blc3,
};

static struct dsi_cmd_desc r63319_effect_blc[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_blc0)}, r63319_blc0},
};
#endif
static struct dsi_cmd_desc r63319_effect_cabc[] = {
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_cabc0)}, r63319_cabc0},
};
struct lcd_effect_cmds r63319_effect_cabc_cmd[] = {
	//{{r63319_blc, ARRAY_SIZE(r63319_blc)}, {r63319_effect_blc, ARRAY_SIZE(r63319_effect_blc)}},
	{{r63319_cabc, ARRAY_SIZE(r63319_cabc)}, {r63319_effect_cabc, ARRAY_SIZE(r63319_effect_cabc)}},
};
/*************************************  aco ***********************************/
static char r63319_aco0[] = {0xba,0x07,0xb0,0x00,0x00,0x00,0x87};
static char r63319_aco1[] = {0xba,0x07,0xb0,0x00,0x00,0x00,0x87};
static char r63319_aco2[] = {0xba,0x07,0xa3,0x10,0x04,0x10,0x87};
static char r63319_aco3[] = {0xba,0x07,0xa3,0x10,0x04,0x10,0x87};
static char r63319_aco4[] = {0xba,0x07,0xa0,0x16,0x06,0x16,0x87};
static char r63319_aco5[] = {0xba,0x07,0xa0,0x16,0x06,0x16,0x87};
static char r63319_aco6[] = {0xba,0x07,0x9c,0x1c,0x08,0x1c,0x87};
static char r63319_aco7[] = {0xba,0x07,0x9c,0x1c,0x08,0x1c,0x87};
static char r63319_aco8[] = {0xba,0x07,0x99,0x22,0x0a,0x22,0x87};
static char r63319_aco9[] = {0xba,0x07,0x99,0x22,0x0a,0x22,0x87};
static char r63319_aco10[] = {0xba,0x07,0x96,0x28,0x0c,0x28,0x87};
static char r63319_aco11[] = {0xba,0x07,0x96,0x28,0x0c,0x28,0x87};
static char r63319_aco12[] = {0xba,0x07,0x93,0x2e,0x0e,0x2e,0x87};
static char r63319_aco13[] = {0xba,0x07,0x93,0x2e,0x0e,0x2e,0x87};
static char r63319_aco14[] = {0xba,0x07,0x90,0x34,0x10,0x34,0x87};
static char r63319_aco15[] = {0xba,0x07,0x90,0x34,0x10,0x34,0x87};
static char r63319_aco16[] = {0xba,0x07,0x8d,0x3a,0x12,0x3a,0x87};
static char r63319_aco17[] = {0xba,0x07,0x8d,0x3a,0x12,0x3a,0x87};
static char r63319_aco18[] = {0xba,0x07,0x8a,0x40,0x15,0x40,0x87};
static char r63319_aco19[] = {0xba,0x07,0x8a,0x40,0x15,0x40,0x87};
static char r63319_aco20[] = {0xba,0x07,0x87,0x46,0x18,0x46,0x87};
static char r63319_aco21[] = {0xba,0x07,0x87,0x46,0x18,0x46,0x87};
static char r63319_aco22[] = {0xba,0x07,0x84,0x4c,0x1b,0x4c,0x87};
static char r63319_aco23[] = {0xba,0x07,0x84,0x4c,0x1b,0x4c,0x87};
static char r63319_aco24[] = {0xba,0x07,0x81,0x52,0x1e,0x52,0x87};
static char r63319_aco25[] = {0xba,0x07,0x81,0x52,0x1e,0x52,0x87};
static char r63319_aco26[] = {0xba,0x07,0x7e,0x58,0x27,0x58,0x87};
static char r63319_aco27[] = {0xba,0x07,0x7e,0x58,0x27,0x58,0x87};
static char r63319_aco28[] = {0xba,0x07,0x78,0x64,0x30,0x64,0x87};
static char r63319_aco29[] = {0xba,0x07,0x78,0x64,0x30,0x64,0x87};
static char r63319_aco30[] = {0xba,0x07,0x70,0x70,0x3a,0x70,0x87};
static char r63319_aco31[] = {0xba,0x07,0x70,0x70,0x3a,0x70,0x87};

static char *r63319_aco[] = {
	r63319_aco0,
	r63319_aco1,
	r63319_aco2,
	r63319_aco3,
	r63319_aco4,
	r63319_aco5,
	r63319_aco6,
	r63319_aco7,
	r63319_aco8,
	r63319_aco9,
	r63319_aco10,
	r63319_aco11,
	r63319_aco12,
	r63319_aco13,
	r63319_aco14,
	r63319_aco15,
	r63319_aco16,
	r63319_aco17,
	r63319_aco18,
	r63319_aco19,
	r63319_aco20,
	r63319_aco21,
	r63319_aco22,
	r63319_aco23,
	r63319_aco24,
	r63319_aco25,
	r63319_aco26,
	r63319_aco27,
	r63319_aco28,
	r63319_aco29,
	r63319_aco30,
	r63319_aco31,
};
#if 0
static char *r63319_aco_blc[] = {
	r63319_blc1,
};
#endif
static char r63319_aco_cabc0[] = {0x55,0x03};
static char *r63319_aco_cabc[] = {
	r63319_aco_cabc0,
};
#if 0
static struct dsi_cmd_desc r63319_effect_aco_blc[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_blc1)}, r63319_blc1},
};
#endif

static struct dsi_cmd_desc r63319_effect_aco_cabc[] = {
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_aco_cabc0)}, r63319_aco_cabc0},
};

static struct dsi_cmd_desc r63319_effect_aco[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_aco0)}, r63319_aco0},
};

struct lcd_effect_cmds r63319_effect_aco_cmd[] = {
	//{{r63319_aco_blc, ARRAY_SIZE(r63319_aco_blc)}, {r63319_effect_aco_blc, ARRAY_SIZE(r63319_effect_aco_blc)}},
	{{r63319_aco_cabc, ARRAY_SIZE(r63319_aco_cabc)}, {r63319_effect_aco_cabc, ARRAY_SIZE(r63319_effect_aco_cabc)}},
	{{r63319_aco, ARRAY_SIZE(r63319_aco)}, {r63319_effect_aco, ARRAY_SIZE(r63319_effect_aco)}},
};

/************************************* cr ***********************************/
#if 1
static char r63319_cr0[] = {0x00,0x00,0x00,0x00};
static char r63319_cr1[] = {0xbb,0x00,0x00,0x00};
static char r63319_cr2[] = {0xbb,0x00,0x00,0x08};
static char r63319_cr3[] = {0xbb,0x00,0x00,0x10};
static char r63319_cr4[] = {0xbb,0x00,0x00,0x18};
static char r63319_cr5[] = {0xbb,0x00,0x00,0x20};
static char r63319_cr6[] = {0xbb,0x00,0x00,0x28};
static char r63319_cr7[] = {0xbb,0x00,0x00,0x30};
static char r63319_cr8[] = {0xbb,0x00,0x00,0x38};
static char r63319_cr9[] = {0xbb,0x00,0x00,0x40};
static char r63319_cr10[] = {0xbb,0x00,0x00,0x48};
static char r63319_cr11[] = {0xbb,0x00,0x00,0x50};
static char r63319_cr12[] = {0xbb,0x00,0x00,0x58};
static char r63319_cr13[] = {0xbb,0x00,0x00,0x60};
static char r63319_cr14[] = {0xbb,0x00,0x00,0x68};
static char r63319_cr15[] = {0xbb,0x00,0x00,0x70};

char *r63319_cr[] = {
	r63319_cr0,
	r63319_cr1,
	r63319_cr2,
	r63319_cr3,
	r63319_cr4,
	r63319_cr5,
	r63319_cr6,
	r63319_cr7,
	r63319_cr8,
	r63319_cr9,
	r63319_cr10,
	r63319_cr11,
	r63319_cr12,
	r63319_cr13,
	r63319_cr14,
	r63319_cr15,
};
static char r63319_cr_cabc0[] = {0x55, 0x00};
static char *r63319_cr_cabc[] = {
	r63319_cr_cabc0,
};
static struct dsi_cmd_desc r63319_effect_cr[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_cr0)}, r63319_cr0},
};
static struct dsi_cmd_desc r63319_effect_cr_cabc[] = {
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_cr_cabc0)}, r63319_cr_cabc0},
};


struct lcd_effect_cmds r63319_effect_cr_cmd[] = {
	{{r63319_cr, ARRAY_SIZE(r63319_cr)}, {r63319_effect_cr, ARRAY_SIZE(r63319_effect_cr)}},
	{{r63319_cr_cabc, ARRAY_SIZE(r63319_cr_cabc)}, {r63319_effect_cr_cabc, ARRAY_SIZE(r63319_effect_cr_cabc)}},
};

/************************************* sre ***********************************/
static char r63319_sre0[]={0x00,0x00,0x00,0x00};
static char r63319_sre1[]={0xbb,0x00,0x1f,0x00};
static char r63319_sre2[]={0xbb,0x00,0x2f,0x00};
static char r63319_sre3[]={0xbb,0x00,0x3f,0x00};
static char r63319_sre4[]={0xbb,0x00,0x4f,0x00};
static char r63319_sre5[]={0xbb,0x00,0x5f,0x00};
static char r63319_sre6[]={0xbb,0x00,0x6f,0x00};
static char r63319_sre7[]={0xbb,0x00,0x7f,0x00};
static char r63319_sre8[]={0xbb,0x00,0x8f,0x00};
static char r63319_sre9[]={0xbb,0x00,0x9f,0x00};
static char r63319_sre10[]={0xbb,0x00,0xaf,0x00};
static char r63319_sre11[]={0xbb,0x00,0xbf,0x00};
static char r63319_sre12[]={0xbb,0x00,0xcf,0x00};
static char r63319_sre13[]={0xbb,0x00,0xdf,0x00};
static char r63319_sre14[]={0xbb,0x00,0xef,0x00};
static char r63319_sre15[]={0xbb,0x00,0xff,0x00};

char *r63319_sre[] = {
	r63319_sre0,
	r63319_sre1,
	r63319_sre2,
	r63319_sre3,
	r63319_sre4,
	r63319_sre5,
	r63319_sre6,
	r63319_sre7,
	r63319_sre8,
	r63319_sre9,
	r63319_sre10,
	r63319_sre11,
	r63319_sre12,
	r63319_sre13,
	r63319_sre14,
	r63319_sre15,
};

static char r63319_sre_cabc0[] = {0x00, 0x00};
static char *r63319_sre_cabc[] = {
	r63319_sre_cabc0,
};
static struct dsi_cmd_desc r63319_effect_sre_cabc[] = {
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(r63319_sre_cabc0)}, r63319_sre_cabc0},
};
static struct dsi_cmd_desc r63319_effect_sre[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_sre0)}, r63319_sre0},
};

struct lcd_effect_cmds r63319_effect_sre_cmd[] = {
	{{r63319_sre_cabc, ARRAY_SIZE(r63319_sre_cabc)}, {r63319_effect_sre_cabc, ARRAY_SIZE(r63319_effect_sre_cabc)}},
	{{r63319_sre, ARRAY_SIZE(r63319_sre)}, {r63319_effect_sre, ARRAY_SIZE(r63319_effect_sre)}},
};
#endif
/************************************** video mode **************************************/
static char video_mode_cmd0[] = {0xc8,0x01,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00};
static char video_mode_cmd1[] = {0xca,0x01,0x80,0xf0,0xf0,0xf0,0xc0,0xa0,0xf0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char video_mode_cmd2[] = {0xb8,0x07,0x83,0x3a,0x12,0x3a,0x31};
static char video_mode_cmd3[] = {0xbb,0x00,0x00,0x00};
static char video_mode_cmd4[] = {0x55,0x03};
static struct dsi_cmd_desc video_mode_cmds[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(video_mode_cmd0)}, video_mode_cmd0},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(video_mode_cmd1)}, video_mode_cmd1},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(video_mode_cmd2)}, video_mode_cmd2},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(video_mode_cmd3)}, video_mode_cmd3},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(video_mode_cmd4)}, video_mode_cmd4},
};
/************************************** comfort mode **************************************/
static char comfort_mode_cmd0[] = {0xca,0x00,0x80,0xf8,0xf8,0xf8,0xf8,0xf8,0xf8,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char comfort_mode_cmd1[] = {0x55,0x03};
static char comfort_mode_cmd2[] = {0xba,0x07,0x75,0x61,0x20,0x16,0x87};
static char comfort_mode_cmd3[] = {0xc8,0x01,0x8c,0x06,0xfd,0x05,0xfc,0x00,0x8c,0x08,0xfc,0xfc,0x9e,0x00,0x8c,0xfd,0xfe,0xf9,0x37,0x00};

static struct dsi_cmd_desc comfort_mode_cmds[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(comfort_mode_cmd0)}, comfort_mode_cmd0},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(comfort_mode_cmd1)}, comfort_mode_cmd1},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(comfort_mode_cmd2)}, comfort_mode_cmd2},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(comfort_mode_cmd3)}, comfort_mode_cmd3},
};

/************************************** outside mode **************************************/
static char outside_mode_cmd0[] = {0xca,0x01,0x80,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char outside_mode_cmd1[] = {0x55,0x03};
static char outside_mode_cmd2[] = {0xba,0x07,0x90,0xa0,0x00,0x00,0x00};
static char outside_mode_cmd3[] = {0xc8,0x01,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00};
static struct dsi_cmd_desc outside_mode_cmds[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(outside_mode_cmd0)}, outside_mode_cmd0},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(outside_mode_cmd1)}, outside_mode_cmd1},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(outside_mode_cmd2)}, outside_mode_cmd2},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(outside_mode_cmd3)}, outside_mode_cmd3},
};

/************************************** normal mode **************************************/
static char normal_mode_cmd0[] = {0x55,0x03};
static char normal_mode_cmd1[] = {0xba,0x07,0x8d,0x3a,0x12,0x3a,0x87};
static char normal_mode_cmd2[] = {0xca,0x01,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char normal_mode_cmd3[] = {0xc8,0x01,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00};

static struct dsi_cmd_desc normal_mode_cmds[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_aco0)}, r63319_aco0},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(normal_mode_cmd2)}, normal_mode_cmd2},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(normal_mode_cmd3)}, normal_mode_cmd3},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(normal_mode_cmd1)}, normal_mode_cmd1},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(normal_mode_cmd0)}, normal_mode_cmd0},
};
/************************************** ultra bitght mode **************************************/
static char ultra_mode_cmd0[] = {0x55,0x03};
static char ultra_mode_cmd1[] = {0xba,0x07,0x8d,0x3a,0x12,0x3a,0x87};
static char ultra_mode_cmd2[] = {0xca,0x01,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x20,0x20,0x20,0x80,0xd1,0x42,0x44,0x80,0x69,0xda,0x08,0x08,0x08,0x06,0x08,0x04,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char ultra_mode_cmd3[] = {0xc8,0x01,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0xfc,0x00};

static struct dsi_cmd_desc ultra_mode_cmds[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(r63319_aco0)}, r63319_aco0},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(ultra_mode_cmd2)}, ultra_mode_cmd2},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(ultra_mode_cmd3)}, ultra_mode_cmd3},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(ultra_mode_cmd1)}, ultra_mode_cmd1},
	{{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(ultra_mode_cmd0)}, ultra_mode_cmd0},
};

/*********************************** all effect ************************************/

struct lcd_effect r63319_effect[] = {
	{"cabc", ARRAY_SIZE(r63319_cabc), 0, {r63319_effect_cabc_cmd, ARRAY_SIZE(r63319_effect_cabc_cmd)}},
	//{"ce", ARRAY_SIZE(r63319_ce), 0, {r63319_effect_ce_cmd, ARRAY_SIZE(r63319_effect_ce_cmd)}},
	//{"cta", ARRAY_SIZE(r63319_cta), 0, {r63319_effect_cta_cmd, ARRAY_SIZE(r63319_effect_cta_cmd)}},
	//{"aco", ARRAY_SIZE(r63319_aco), 0, {r63319_effect_aco_cmd, ARRAY_SIZE(r63319_effect_aco_cmd)}},
	//{"gamma", ARRAY_SIZE(r63319_sre), 0, {r63319_effect_sre_cmd, ARRAY_SIZE(r63319_effect_sre_cmd)}},
};
/**************************************************************************************/

/************************************** all mode **************************************/
struct lcd_mode r63319_mode[] = {
	{"custom_mode", 0, {normal_mode_cmds, ARRAY_SIZE(normal_mode_cmds)}},
	{"auto_mode", 0, {normal_mode_cmds, ARRAY_SIZE(normal_mode_cmds)}},
	{"normal_mode", 0, {normal_mode_cmds, ARRAY_SIZE(normal_mode_cmds)}},
	{"comfort_mode", 0, {comfort_mode_cmds, ARRAY_SIZE(comfort_mode_cmds)}},
	{"outside_mode", 1, {outside_mode_cmds, ARRAY_SIZE(outside_mode_cmds)}},
	{"ultra_mode", 1, {ultra_mode_cmds, ARRAY_SIZE(ultra_mode_cmds)}},
	{"camera_mode", 0, {video_mode_cmds, ARRAY_SIZE(video_mode_cmds)}},
};
/**************************************************************************************/
static struct lcd_cmds r63319_head_cmds = 
	{r63319_packet_head_cmds, ARRAY_SIZE(r63319_packet_head_cmds)};

static struct lcd_effect_data r63319_effect_data = 
	{r63319_effect, &r63319_head_cmds, ARRAY_SIZE(r63319_effect)};

static struct lcd_mode_data r63319_mode_data = 
	{r63319_mode, &r63319_head_cmds, ARRAY_SIZE(r63319_mode), 0};

/**************************************************************************************/
struct panel_effect_data lcd_data = {
	&r63319_effect_data, 
	&r63319_mode_data, 
};

#endif
