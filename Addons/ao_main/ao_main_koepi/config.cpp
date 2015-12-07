enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class AO_main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {};
		author[] = {"kOepi"};
		authorUrl = "http://www.armacoopcorps.pl/";
	};
};
class CfgFactionClasses
{
	class AO_BDF
	{
		displayName = "Bornholm Defence Forces @AO";
		author = "kOepi";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 1;
		side = 2; // Independent
	};
	class AO_USMC
	{
		displayName = "US Marine Corps Infantry @AO";
		author = "kOepi";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 1;
		side = 1; // Independent=2, Blufor = 1, Opfor =0, civ=3
	};
};

class CfgVehicleClasses
{
	class AO_BDF_Militia
	{
		displayName = "The Great Militia";
	};	
	class AO_BDF_UrbRes
	{
		displayName = "Urban Resistance";
	};
	class AO_USMC_D_HQ
	{
		displayName = "Platoon HQ desert";
	};	
	class AO_USMC_D_RSquad
	{
		displayName = "Rifle Squad desert";
	};
	class AO_USMC_D_MGSquad
	{
		displayName = "Machine Gun Squad desert";
	};
};