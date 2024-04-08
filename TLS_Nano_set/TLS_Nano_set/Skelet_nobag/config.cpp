////////////////////////////////////////////////////////////////////
//DeRap: Skelet_nobag\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:50:31 2024 : 'file' last modified on Sat Apr 30 22:12:07 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ArkaimPack
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class TLS_Nano_Skelet_ColorBase;
	class TLS_Nano_Skelet_nobag: TLS_Nano_Skelet_ColorBase
	{
		scope = 2;
		model = "\TLS_Nano_set\Skelet_nobag\TLS_Nano_skelet_nobag_g.p3d";
		inventorySlot[] = {"Back"};
		itemInfo[] = {"Clothing","Back"};
		heatReduction = 0;
		coldReduction = 0;
		varTempVenomustureInit = 0;
		varTempVenomustureMin = 0;
		varTempVenomustureMax = 1;
		weight = -200000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {0,0};
		quickBarBonus = 2;
		absorbency = 0;
		heatIsolation = 0.1;
		repairableWithKits[] = {7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"TLS"};
		class ClothingTypes
		{
			male = "\TLS_Nano_set\Skelet_nobag\TLS_Nano_skelet_nobag_m.p3d";
			female = "\TLS_Nano_set\Skelet_nobag\TLS_Nano_skelet_nobag_f.p3d";
		};
	};
	class TLS_Nano_Skelet_nobag_250: TLS_Nano_Skelet_nobag
	{
		scope = 2;
		itemsCargoSize[] = {10,25};
		visibilityModifier = 0.75;
		hiddenSelectionsTextures[] = {"\TLS_Nano_set\Skelet_nobag\data\TLS_Nano_skelet_co.paa"};
	};
};
