////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 09:27:23 2024 : 'file' last modified on Sun Jun 27 14:44:47 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NeonM_Lights_Models
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NeonM_Lights_Models
	{
		dir = "NeonM_Lights_Models";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NeonM_Lights_Models";
		credits = "NeonMurder";
		author = "NeonMurder";
		authorID = "76561198102181067";
		version = 0.1;
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Fireplace;
	class PortableGasLamp;
	class NM_KeroseneLamp: PortableGasLamp
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\KeroseneLamp.p3d";
		attachments[] = {};
		class GUIInventoryAttachmentsProps{};
	};
	class NM_KeroseneLamp_2: PortableGasLamp
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\KeroseneLamp_2.p3d";
		attachments[] = {};
		class GUIInventoryAttachmentsProps{};
	};
	class NM_CampFire_Empty: Fireplace
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\CampfireEmpty.p3d";
		itemsCargoSize[] = {10,50};
		attachments[] = {};
		class GUIInventoryAttachmentsProps{};
	};
	class NM_CampFire: Fireplace
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\Campfire.p3d";
		itemsCargoSize[] = {10,50};
		attachments[] = {};
		class GUIInventoryAttachmentsProps{};
	};
	class NM_Torch: HouseNoDestruct
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\Torch.p3d";
	};
	class NM_StreetLamp: HouseNoDestruct
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\StreetLamp.p3d";
		oldpower = 0;
		inputRange = 8;
		useEntityHierarchy = "true";
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.15;
			attachmentAction = 1;
		};
	};
	class NM_Lamp: HouseNoDestruct
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\Lamp.p3d";
		oldpower = 0;
		inputRange = 8;
		useEntityHierarchy = "true";
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.15;
			attachmentAction = 1;
		};
	};
	class NM_IndustrialLamp: HouseNoDestruct
	{
		scope = 2;
		model = "NeonM_Lights_Models\Models\IndustrialLamp.p3d";
		oldpower = 0;
		inputRange = 8;
		useEntityHierarchy = "true";
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.15;
			attachmentAction = 1;
		};
	};
};
