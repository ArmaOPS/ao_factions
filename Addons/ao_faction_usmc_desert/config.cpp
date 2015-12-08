class CfgPatches 
{
	class AO_USMC
	{
		units[] = 
		{
			"AO_USMC_D_HQ_PL",
			"AO_USMC_D_HQ_PS",
			"AO_USMC_D_HQ_FRO",
			"AO_USMC_D_HQ_HM",
			
			"AO_USMC_D_RSquad_SL",
			"AO_USMC_D_RSquad_TL",
			"AO_USMC_D_RSquad_AR",
			"AO_USMC_D_RSquad_AAR",
			"AO_USMC_D_RSquad_RO",
			"AO_USMC_D_RSquad_MM",
			
			"AO_USMC_D_MGSquad_TL",
			"AO_USMC_D_MGSquad_MG",
			"AO_USMC_D_MGSquad_AMG"
		};
		weapons[] = 
		{AO_USMC_M16ACOG
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
