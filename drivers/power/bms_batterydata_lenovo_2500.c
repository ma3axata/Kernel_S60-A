#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20,0,25,40,60},
	.y		= {2570,2582,2582,2580,2573},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 31,
	.cols		= 5,
	.row_entries		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.sf		= {
				{1532,293,100,82,77},
				{1530,292,100,82,77},
				{1428,296,100,82,77},
				{1357,298,102,83,77},
				{1314,301,105,85,78},
				{1220,312,110,86,78},
				{1204,292,111,87,80},
				{1189,285,119,92,82},
				{1183,281,117,94,85},
				{1195,276,102,85,79},
				{1216,275,98,82,77},
				{1246,276,99,81,77},
				{1282,280,99,83,78},
				{1325,286,101,85,80},
				{1385,297,101,83,80},
				{1454,311,99,80,76},
				{1559,328,99,81,77},
				{1701,348,100,82,77},
				{1775,356,99,82,76},
				{1820,365,100,82,77},
				{1955,377,101,82,77},
				{2116,392,102,83,79},
				{2310,410,105,85,82},
				{2544,429,108,87,83},
				{2823,448,111,87,82},
				{3206,465,108,85,79},
				{3726,494,109,87,81},
				{4469,546,113,89,85},
				{5704,623,124,98,90},
				{9114,7529,203,145,172},
				{96947,49565,30525,13803,29951}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.ocv		= {
				{4340,4338,4332,4328,4322},
				{4232,4261,4265,4262,4258},
				{4162,4202,4208,4205,4201},
				{4104,4148,4152,4150,4147},
				{4052,4097,4101,4098,4095},
				{3970,4048,4054,4050,4046},
				{3924,3980,4000,4002,4002},
				{3882,3936,3962,3964,3961},
				{3849,3899,3919,3921,3920},
				{3824,3864,3873,3874,3872},
				{3806,3835,3842,3842,3840},
				{3790,3810,3818,3818,3816},
				{3776,3792,3800,3800,3798},
				{3762,3777,3784,3784,3782},
				{3746,3764,3770,3766,3760},
				{3729,3750,3754,3746,3733},
				{3708,3732,3734,3726,3712},
				{3688,3714,3712,3704,3690},
				{3668,3699,3691,3682,3670},
				{3651,3690,3684,3677,3666},
				{3641,3686,3683,3676,3664},
				{3629,3682,3681,3674,3662},
				{3614,3676,3678,3672,3660},
				{3598,3668,3674,3667,3654},
				{3576,3654,3663,3654,3639},
				{3550,3625,3633,3622,3605},
				{3515,3580,3586,3576,3558},
				{3468,3518,3524,3514,3497},
				{3398,3428,3440,3429,3416},
				{3279,3294,3316,3306,3283},
				{3000,3000,3000,3000,3000}
	}
};
struct ibat_temp_acc_lut ibat_temp_acc = {
				.rows				= 4,
				.cols				= 3,
				.temp				= {-20,0,25},
				.ibat				= {0,250,500,1000},
			//	.cutoff_mv			= 3400,
				.acc				= {
								{2519,2542,2530},
								{986,2483,2524},
								{384,2308,2510},
								{28,1734,2471},
								},
				};
struct bms_battery_data lenovo_2500_data = {
	.fcc				= 2500,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.ibat_acc_lut           = &ibat_temp_acc,
//	.pc_sf_lut				= &pc_sf,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 142,
	.battery_type = "lenovo_b219",
	.flat_ocv_threshold_uv	= 3800000,
	.rbatt_capacitive_mohm = 15
};
// Charge voltage in mV
// CHARGE_VOLTAGE=4350
// Charge complete current in mA
// CHARGE_COMPLETE_CURRENT=80
// Discharge voltage in mV
// DISCHARGE_VOLTAGE=3000
// Battery ID resistance in kOhm
// BATTERY_ID_RESISTANCE=10
// Rbat capacitive in mOhm
// RBAT_CAPACITIVE=5000000
