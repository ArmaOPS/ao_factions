class CfgPatches 
{
	class AO_USMC
	{
		units[] = 
		{
			"AO_Taliban_RSquad_SL",
			"AO_Taliban_RSquad_AR",
			"AO_Taliban_RSquad_R",
			"AO_Taliban_RSquad_G",
			"AO_Taliban_RSquad_MM",
			"AO_Taliban_RSquad_AT",
			
			"AO_Taliban_MGSquad_TL",
			"AO_Taliban_MGSquad_MG",
			"AO_Taliban_MGSquad_AMG",
			"AO_Taliban_RSquad_MM"
		};
		weapons[] = 
		{
		};
		requiredVersion = 1.32;
		requiredAddons[] = 
		{
			A3_Soft_F,
			A3_Characters_F,
			A3_Weapons_F,
			rhs_c_troops,
			rhs_c_weapons,
			rhsusf_c_troops,
			rhsusf_c_weapons,
			RHS_US_A2_AirImport
		};
		author[] = {"kOepi"};
		authorUrl = "http://armaops.io";
	};
};

class WeaponCloudsMGun;	// External class reference

class cfgWeapons 
{
	#include "CfgWeapons.hpp"
};
class CfgVehicles 
{
	#include "CfgInfantry.hpp"
	#include "CfgBackpacks.hpp"
};
#include "CfgGroups.hpp"
