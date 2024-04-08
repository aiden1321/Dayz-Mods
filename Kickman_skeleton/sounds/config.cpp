////////////////////////////////////////////////////////////////////
//DeRap: sounds\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Apr 08 11:55:54 2024 : 'file' last modified on Sat Jan 08 16:55:44 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Sounds_Effects
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgSoundSets
{
	class kickman_skeletonAttack_soundset
	{
		soundShaders[] = {"kck_skeletonAttack"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class kickman_skeletonAgr_soundset
	{
		soundShaders[] = {"kck_skeletonAgr"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class kickman_skeletonCalm_soundset
	{
		soundShaders[] = {"kck_Skeleton_calm"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class kck_skeletonBegom_Soundset
	{
		soundShaders[] = {"kck_SkeletonRun"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class kickman_skeletonOnhit_soundset
	{
		soundShaders[] = {"kck_SkeletonOnHit"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class kck_skeletonAttack
	{
		samples[] = {{"kickman_skeleton\sounds\Uron",0.125}};
		volume = 0.3;
		range = 60;
	};
	class kck_skeletononhit
	{
		samples[] = {{"kickman_skeleton\sounds\dead",0.125},{"kickman_skeleton\sounds\Uron",0.125},{"kickman_skeleton\sounds\Uron2",0.125}};
		volume = 1;
		range = 60;
	};
	class kck_skeletonAgr
	{
		samples[] = {{"kickman_skeleton\sounds\agr",0.125}};
		volume = 1;
		range = 60;
	};
	class kck_skeleton_Calm
	{
		samples[] = {{"kickman_skeleton\sounds\vz1",1}};
		volume = 1;
		range = 65;
	};
	class kck_skeletonRun
	{
		samples[] = {{"kickman_skeleton\sounds\vz2",0.125}};
		volume = 1.4;
		range = 70;
	};
};
