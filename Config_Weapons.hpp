/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Waffenhändler";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_Signal_F", "", 2500, 250 },
            { "hgun_Rook40_F", "", 35000, 1500 },
            { "hgun_Pistol_heavy_02_F", "", 50000, -1 },
            { "hgun_ACPC2_F", "", 40000, -1 },
            { "hgun_PDW2000_F", "", 75000, -1 },
            { "SMG_01_F", "", 100000, -1 },
			{ "optic_ACO_grn_smg", "", 10000, -1 },
			{ "optic_Aco_smg", "", 10000, -1 },
			{ "optic_MRD", "", 10000, -1 },
			{ "optic_Yorris", "", 10000, -1 }
        };
        mags[] = {
			{ "6Rnd_GreenSignal_F", "", 25 },
			{ "6Rnd_RedSignal_F", "", 25 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_Signal_F", "", 25000, 2500 },
            { "arifle_TRG20_F", "", 150000, 15000 },
			{ "arifle_TRG21_F", "", 175000, 17500 },
            { "arifle_Katiba_F", "", 200000, 20000 },
            { "srifle_DMR_01_F", "", 400000, 40000 },
            { "arifle_SDAR_F", "", 200000, 20000 },
			{ "arifle_Mk20C_F", "", 180000, 18000 },
			{ "arifle_Mk20_F", "", 200000, 20000 },
			{ "srifle_DMR_06_camo_F", "", 200000, 20000 },
            { "optic_ACO_grn", "", 20000, 2000 },
            { "optic_Aco_smg", "", 20000, 2000 },
			{ "optic_Holosight", "", 20000, 2000 },
			{ "optic_DMS", "", 200000, 20000 },
			{ "optic_Arco", "", 50000, 5000 },
            { "optic_Hamr", "", 50000, 5000 },
			{ "optic_MRCO", "", 30000, 3000 },
            { "acc_flashlight", "", 25000, 2500 },
			{ "acc_pointer_IR", "", 25000, 2500 },
			{ "SmokeShell", "", 10000, 1000 },
			{ "SmokeShellGreen", "", 10000, 1000 },
			{ "SmokeShellRed", "", 10000, 1000 },
			{ "Chemlight_green", "", 1000, 100 },
			{ "Chemlight_red", "", 1000, 100 },
			{ "Chemlight_yellow", "", 1000, 100 },
			{ "Chemlight_blue", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 1500 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 1000 },
            { "30Rnd_65x39_caseless_green", "", 2000 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 1500 },
            { "10Rnd_762x54_Mag", "", 4000 },
			{ "20Rnd_762x51_Mag", "", 5000 },
			{ "6Rnd_GreenSignal_F", "", 250 },
			{ "6Rnd_RedSignal_F", "", 250 },
            { "20Rnd_556x45_UW_mag", "", 2000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 5000, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 2000, 200 },
            { "FirstAidKit", "", 1000, 100 },
            { "NVGoggles", "", 10000, 1000 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 1000, 100 },
            { "NVGoggles", "", 10000, 1000 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "HandGrenade_Stone", "Blendgranate", 1700, -1 },
            { "SmokeShell", "Smoke Grenade (White)", 1700, -1 },
            { "SmokeShellRed", "Smoke Grenade (Red)", 1700, -1 },
            { "Binocular", "", 5000, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 2000, 200 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 1000, 100 },
            { "Medikit", "", 2000, 200 },
            { "NVGoggles", "", 10000, 1000 }
        };
    };

    class cop_PA {
        name = "Ordnungsamt";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Du bist kein Angehöriger des Ordnungsamt." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "SMG_02_F", "", 2500, -1 },
			{ "30Rnd_9x21_Mag", "", 50, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 }
        };
    };

    class cop_PM {
        name = "Polizei Meister";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Du bist kein Polizei Meister." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "arifle_Mk20_F", "", 1000, -1 },
			{ "arifle_TRG21_F", "", 1000, -1 },
			{ "30Rnd_556x45_Stanag", "", 125, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_MRCO", "", 3000, -1 }
        };
    };

    class cop_POM {
        name = "Polizei Ober Meister";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Du bist kein Polizei Ober Meister." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "arifle_MX_Black_F", "", 30000, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "muzzle_snds_H", "", -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
        };
    };
	
    class cop_PHM {
        name = "Polizei Haupt Meister";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Du bist kein Polizei Haupt Meister." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "arifle_MXM_Black_F", "", 15000, -1 },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_AMS", "", 9000, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
        };
    };

	class cop_PK {
        name = "Polizei Kommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Du bist kein Polizei Kommissar." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "arifle_MXM_Black_F", "", 10000, -1 },
			{ "srifle_EBR_F", "",20000, 1- },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },	
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "muzzle_snds_B", "", 7500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
        };
    };
	
	class cop_POK {
        name = "Polizei Ober Kommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Du bist kein Polizei Ober Kommissar." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "srifle_EBR_F", "",20000, 1- },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
			
        };
    };
	
	class cop_PHK {
        name = "Polizei Haupt Kommissar";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Du bist kein Polizei Haupt Kommissar." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "arifle_MX_SW_Black_F", "", 30000, -1 },
			{ "srifle_EBR_F", "",20000, 1- },
			{ "srifle_DMR_03_F", "",40000, 1- },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },			
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
			
			
        };
    };
	
	class cop_PR {
        name = "Polizei Rat";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Du bist kein Polizei Rat." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "arifle_MX_SW_Black_F", "", 30000, -1 },
			{ "LMG_Mk200_F", "", 100000},
			{ "srifle_EBR_F", "",20000, 1- },
			{ "srifle_DMR_03_F", "",40000, 1- },
			{ "200Rnd_65x39_cased_Box", "", 1500, -1 },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },			
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
			
        };
    };
	
	class cop_POR {
        name = "Polizei Ober Rat";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Du bist kein Polizei Ober Rat." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "arifle_MX_SW_Black_F", "", 30000, -1 },
			{ "LMG_Zafir_F", "", 105000},
			{ "srifle_EBR_F", "", 20000, 1- },
			{ "srifle_DMR_03_F", "", 40000, 1- },
			{ "150Rnd_762x54_Box", 2000, -1 },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },			
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
			
        };
    };
	
	class cop_PD {
        name = "Polizei Direktor";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Du bist kein Polizei Direktor." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "arifle_MX_SW_Black_F", "", 30000, -1 },
			{ "LMG_Zafir_F", "", 105000},
			{ "srifle_EBR_F", "", 20000, 1- },
			{ "srifle_DMR_03_F", "", 40000, 1- },
			{ "150Rnd_762x54_Box", 2000, -1 },
			{ "20Rnd_762x51_Mag", "",950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },			
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "muzzle_snds_H_MG", "", 4500, -1},			
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
			
        };
    };
	
	class cop_LPD {
        name = "Leitender Polizei Direktor";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "Du bist kein Leitender Polizei Direktor." };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "arifle_MX_SW_Black_F", "", 90000, -1 },
			{ "arifle_MXC_Black_F", "",30000, -1 },
			{ "LMG_Zafir_F", "", 105000},
			{ "MMG_02_black_F", "", 700000},
			{ "srifle_EBR_F", "", 20000, 1- },
			{ "srifle_DMR_03_F", "", 400000, 1- },
			{ "srifle_DMR_02_F", "", 500000, -1 },
			{ "10Rnd_338_Mag","", 4000, -1 },
			{ "130Rnd_338_Mag", "", 5000, -1 },
			{ "150Rnd_762x54_Box", "", 2000, -1 },
			{ "20Rnd_762x51_Mag", "", 950, 1- },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },			
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "muzzle_snds_H_MG", "", 4500, -1},			
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 10000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 }
        };
    };

	class cop_SEK {
        name = "Sonder Einsatz Komanndo";
        side = "cop";
        license = "sek";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "srifle_DMR_06_olive_F", "Taser Rifle", 2500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "20Rnd_762x51_Mag", "Taser Rifle Magazin", 950, -1 },
			{ "arifle_MXC_Black_F", "", 10000, -1 },
		    { "MMG_02_black_F", "",100000, -1 },
			{ "SMG_02_ACO_F", "", 30000, -1 },
			{ "srifle_EBR_F", "",100000, -1 },
			{ "LMG_Zafir_F", "", 10000, -1 },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
			{ "arifle_MX_Black_F", "", 15000, -1 },	
			{ "arifle_MX_SW_Black_F", "", 30000, -1 },
			{ "arifle_MXM_Black_F", "", 40000, -1 },
			{ "30Rnd_9x21_Mag", "", 150, -1 },
		    { "130Rnd_338_Mag", "", 500, -1 },
			{ "150Rnd_762x54_Box", "", 250, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 125, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 150, -1 },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, -1 },
			{ "ItemWatch", "", 50, -1 },
			{ "ItemCompass", "", 100, -1 },
			{ "ItemGPS", "", 250, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "B_UavTerminal", "", 10000, -1 },
			{ "Binocular", "", 300, -1 },
            { "Rangefinder", "", 300, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "muzzle_snds_H", "", 4500, -1 },
			{ "muzzle_snds_H_MG", "", 4500, -1},
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_ACO_grn", "", 2500, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_MRCO", "", 10000, -1 },
			{ "optic_Hamr", "", 15000, -1 },
            { "optic_AMS", "", 10000, -1 },
			{ "acc_flashlight", "", 800, -1 },
			{ "acc_pointer_IR", "", 1500, -1 },
			{ "bipod_01_F_blk", "", 5000, -1 },
			{ "arifle_MX_GL_Black_F", "", 50000, -1 },
			{ "1Rnd_Smoke_Grenade_shell", "", 500, -1 },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 500, -1 },
			{ "1Rnd_SmokeBlue_Grenade_shell", "", 500, -1 }
		};
	};
	
	class cop_SEK_Sniper {
        name = "SEK Sniper";
        side = "cop";
        license = "sek_sniper";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_GM6_F", "",100000, -1 },
			{ "hgun_P07_snds_F", "Taser Pistol", 1500, -1 },
			{ "16Rnd_9x21_Mag", "Taser Magazin", 50, -1 },
			{ "5Rnd_127x108_APDS_Mag", "", 1850, -1 },
			{ "5Rnd_127x108_Mag", "", 500, -1 },
			{ "NVGoggles_OPFOR", "", 1500, -1 },
            { "B_UavTerminal", "", 10000, -1 },
			{ "optic_NVS", "", 10000, -1 },
			{ "optic_LRPS", "", 10000, -1 },
            { "optic_tws", "", 100000, -1 },
			{ "Laserdesignator", "", 2000, -1 },
			{ "Laserbatteries", "", 200, -1 },
			{ "FirstAidKit", "", 250, -1 },
			{ "Medikit", "", 2500, -1 },
			{ "ToolKit", "", 500, -1 }
		};
	};

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 5000, -1 },
            { "ToolKit", "", 2000, 200 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 10, 1 },
            { "NVGoggles", "", 1200, 980 },
            { "SmokeShellRed", "", 250, 50},
            { "SmokeShellOrange", "", 250, 50},
            { "SmokeShellBlue", "", 250, 50}
        };
        mags[] = {};
    };
};
