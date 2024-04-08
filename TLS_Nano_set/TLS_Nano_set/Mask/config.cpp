////////////////////////////////////////////////////////////////////
//DeRap: Mask\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:06 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class GasMask;
	class GP5GasMask;
	class TLS_Nano_Mask_ful: GasMask
	{
		scope = 2;
		displayName = "Маска-противогаз Нанокостюма";
		descriptionShort = "Маска-противогаз Нанокостюма. (практически, бесконечная работоспособность)";
		model = "\TLS_Nano_set\Mask\TLS_Nano_Mask_g.p3d";
		inventorySlot[] = {"Mask"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		repairableWithKits[] = {8,6};
		repairCosts[] = {30,25};
		rotationFlags = 2;
		weight = -22000;
		itemSize[] = {2,2};
		varWetMax = 0.49;
		heatIsolation = 0.6;
		visibilityModifier = 0.9;
		noHelmet = 1;
		noEyewear = 1;
		varQuantityInit = 22500;
		varQuantityMin = 0;
		varQuantityMax = 22500;
		quantityBar = 1;
		stackedUnit = "ml";
		varQuantityDestroyOnMin = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1520;
					healthLevels[] = {{1,{"DZ\characters\masks\data\GasMask.rvmat","DZ\characters\masks\data\GasMask_Glass.rvmat"}},{0.7,{"DZ\characters\masks\data\GasMask.rvmat","DZ\characters\masks\data\GasMask_Glass.rvmat"}},{0.5,{"DZ\characters\masks\data\GasMask_damage.rvmat","DZ\characters\masks\data\GasMask_Glass_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\GasMask_damage.rvmat","DZ\characters\masks\data\GasMask_Glass_damage.rvmat"}},{0,{"DZ\characters\masks\data\GasMask_destruct.rvmat","DZ\characters\masks\data\GasMask_Glass_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
			female = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
		};
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "TLS_Nano_Mask";
		soundVoicePriority = 5;
	};
	class TLS_Nano_Mask: GasMask
	{
		scope = 2;
		displayName = "Маска-противогаз Нанокостюма";
		descriptionShort = "Маска-противогаз Нанокостюма";
		model = "\TLS_Nano_set\Mask\TLS_Nano_Mask_g.p3d";
		inventorySlot[] = {"Mask"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		repairableWithKits[] = {8,6};
		repairCosts[] = {30,25};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {3,4};
		varWetMax = 0.49;
		heatIsolation = 0.6;
		visibilityModifier = 0.9;
		noHelmet = 1;
		noEyewear = 1;
		varQuantityInit = 225;
		varQuantityMin = 0;
		varQuantityMax = 225;
		quantityBar = 1;
		stackedUnit = "ml";
		varQuantityDestroyOnMin = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1,{"DZ\characters\masks\data\GasMask.rvmat","DZ\characters\masks\data\GasMask_Glass.rvmat"}},{0.7,{"DZ\characters\masks\data\GasMask.rvmat","DZ\characters\masks\data\GasMask_Glass.rvmat"}},{0.5,{"DZ\characters\masks\data\GasMask_damage.rvmat","DZ\characters\masks\data\GasMask_Glass_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\GasMask_damage.rvmat","DZ\characters\masks\data\GasMask_Glass_damage.rvmat"}},{0,{"DZ\characters\masks\data\GasMask_destruct.rvmat","DZ\characters\masks\data\GasMask_Glass_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
			female = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
		};
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
	class TLS_Nano_Mask_filter: GP5GasMask
	{
		scope = 2;
		displayName = "Маска-противогаз Нанокостюма";
		descriptionShort = "Маска-противогаз Нанокостюма с встраиваемыми фильтрами";
		model = "\TLS_Nano_set\Mask\TLS_Nano_Mask_g.p3d";
		inventorySlot[] = {"Mask"};
		attachments[] = {"GasMaskFilter"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		itemSize[] = {3,3};
		weight = 1090;
		varWetMax = 0.249;
		heatIsolation = 0.7;
		repairableWithKits[] = {8,6};
		repairCosts[] = {30,25};
		visibilityModifier = 0.95;
		noHelmet = 1;
		noEyewear = 1;
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GP5GasMask_white_co.paa","\dz\characters\masks\data\GP5GasMask_white_co.paa","\dz\characters\masks\data\GP5GasMask_white_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1080;
					healthLevels[] = {{1,{"DZ\characters\masks\data\GP5GasMask.rvmat"}},{0.7,{"DZ\characters\masks\data\GP5GasMask.rvmat"}},{0.5,{"DZ\characters\masks\data\GP5GasMask_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\GP5GasMask_damage.rvmat"}},{0,{"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
			female = "\TLS_Nano_set\Mask\TLS_Nano_Mask_m.p3d";
		};
		class Protection
		{
			biological = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
};
