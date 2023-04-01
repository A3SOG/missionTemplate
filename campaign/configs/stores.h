class SOG_CfgStores {
	class stores {
		class store1 {
			className = "Land_CashDesk_F";
			pos[] = {4815, 8075, 0};
			dir = 0;
			storeCategories[] = {
				"storeBackpacks",
				"storeGoggles",
				"storeHeadgear",
				"storeItems",
				"storeMagazines",
				"storeUniforms",
				"storeVests",
				"storeWeapons"
			};
			storeRestrictedCategories[] = {
				"storeAircraft",
				"storeArmored",
				"storeChopper",
				"storeMarine",
				"storeStatic",
				"storeUAV",
				"storeUGV",
				"storeWheeled"
			};
			storeModset[] = {
				"STOCK",
				"ACE3",
				"RHS",
				"SMA",
				"TFAR"
			};
			storeName = "General Military Surplus Store";
			storeBackpacks[] = {
				{"B_AssaultPack_rgr", 250, "STOCK"},
				{"B_AssaultPack_blk", 250, "STOCK"}
			};
			storeGoggles[] = {};
			storeHeadgear[] = {
				{"H_Cap_blk_ION", 100, "STOCK"}
			};
			storeItems[] = {
				{"Binocular", 335, "STOCK"},
				{"ItemCompass", 50, "STOCK"},
				{"ItemMap", 20, "STOCK"},
				{"ItemWatch", 50, "STOCK"},
				{"ToolKit", 450, "STOCK"},
				{"Chemlight_blue", 2, "STOCK"},
				{"Chemlight_green", 2, "STOCK"},
				{"Chemlight_red", 2, "STOCK"},
				{"Chemlight_yellow", 2, "STOCK"},
				{"ACE_MapTools", 525, "ACE3"},
				{"ACE_CableTie", 2, "ACE3"},
				{"ACE_EarPlugs", 1, "ACE3"},
				{"ACE_wirecutter", 65, "ACE3"},
				{"ACE_SpareBarrel", 300, "ACE3"},
				{"rhsusf_acc_ACOG3_USMC", 300, "RHS"}
			};
			storeMagazines[] = {
				{"rhsusf_mag_15Rnd_9x19_JHP", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk318_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk262_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M193_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M200_Stanag", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull", 10, "RHS"},
				{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger", 10, "RHS"},
				{"rhsusf_8Rnd_00Buck", 10, "RHS"},
				{"rhsusf_8Rnd_Slug", 10, "RHS"},
				{"rhsusf_8Rnd_HE", 10, "RHS"},
				{"rhsusf_8Rnd_FRAG", 10, "RHS"},
				{"rhsgref_1Rnd_00Buck", 10, "RHS"},
				{"rhsgref_1Rnd_Slug", 10, "RHS"},
				{"rhsusf_5Rnd_00Buck", 10, "RHS"},
				{"rhsusf_5Rnd_Slug", 10, "RHS"},
				{"rhsusf_5Rnd_HE", 10, "RHS"},
				{"rhsusf_5Rnd_FRAG", 10, "RHS"},
				{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag", 10, "RHS"},
				{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag", 10, "RHS"},
				{"rhsusf_20Rnd_762x51_SR25_m993_Mag", 10, "RHS"},
				{"rhsusf_20Rnd_762x51_SR25_m62_Mag", 10, "RHS"}
			};
			storeUniforms[] = {
				{"U_BG_Guerrilla_6_1", 500, "STOCK"}
			};
			storeVests[] = {
				{"V_Chestrig_rgr", 500, "STOCK"},
				{"V_PlateCarrier2_rgr", 2000, "STOCK"}
			};
			storeWeapons[] = {
				{"rhs_weap_m4", 1000, "RHS"},
				{"rhs_weap_m16a4", 1500, "RHS"},
				{"rhs_weap_sr25", 10000, "RHS"},
				{"rhs_weap_m240B", 25000, "RHS"},
				{"rhs_weap_m249_pip_L", 25000, "RHS"},
				{"rhs_weap_XM2010", 11500, "RHS"},
				{"rhs_weap_M590_5RD", 550, "RHS"},
				{"rhs_weap_M590_8RD", 750, "RHS"},
				{"rhs_weap_M320", 40000, "RHS"},
				{"rhs_weap_M136", 40000, "RHS"},
				{"rhsusf_weap_glock17g4", 500, "RHS"},
				{"rhsusf_weap_m1911a1", 800, "RHS"},
				{"rhsusf_weap_m9", 500, "RHS"}
			};
			storeAircraft[] = {};
			storeArmored[] = {
				{"B_APC_Wheeled_01_cannon_F", 10000, "STOCK"},
				{"B_MBT_01_TUSK_F", 10000, "STOCK"}
			};
			storeChopper[] = {
				{"B_T_VTOL_01_infantry_F", 10000, "STOCK"},
				{"B_T_VTOL_01_vehicle_F", 10000, "STOCK"},
				{"B_T_VTOL_01_armed_F", 10000, "STOCK"},
				{"B_Heli_Transport_03_F", 10000, "STOCK"},
				{"B_Heli_Attack_01_F", 10000, "STOCK"},
				{"B_Heli_Transport_01_F", 10000, "STOCK"},
				{"B_Heli_Light_01_F", 10000, "STOCK"},
				{"B_Heli_Light_01_armed_F", 10000, "STOCK"},
				{"B_Heli_Light_01_stripped_F", 10000, "STOCK"}
			};
			storeMarine[] = {};
			storeStatic[] = {};
			storeUAV[] = {};
			storeUGV[] = {};
			storeWheeled[] = {
				{"B_MRAP_01_F", 10000, "STOCK"},
				{"B_MRAP_01_gmg_F", 10000, "STOCK"},
				{"B_MRAP_01_hmg_F", 10000, "STOCK"},
				{"B_Quadbike_01_F", 10000, "STOCK"},
				{"B_Truck_01_transport_F", 10000, "STOCK"},
				{"B_Truck_01_covered_F", 10000, "STOCK"},
				{"B_Truck_01_mover_F", 10000, "STOCK"},
				{"B_Truck_01_box_F", 10000, "STOCK"},
				{"B_Truck_01_Repair_F", 10000, "STOCK"},
				{"B_Truck_01_ammo_F", 10000, "STOCK"},
				{"B_Truck_01_fuel_F", 10000, "STOCK"},
				{"B_Truck_01_medical_F", 10000, "STOCK"},
				{"B_LSV_01_armed_F", 10000, "STOCK"},
				{"B_LSV_01_AT_F", 10000, "STOCK"},
				{"B_LSV_01_unarmed_F", 10000, "STOCK"},
				{"B_Truck_01_fuel_F", 10000, "STOCK"}
			};
		};
	};
};