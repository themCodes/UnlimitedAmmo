class CfgPatches
{
	class UnlimitedAmmo
	{
		requiredAddons[]=
		{
			// ""
		};
	};
};

class CfgMods
{
	
	class UnlimitedAmmo
	{
		dir		=	"UnlimitedAmmo";
		name		=	"UnlimitedAmmo";
		credits		=	"Martin";
		author		=	"Martin";
		version		=	"2.0";
		extra		=	0;
		type		=	"mod";
	
		dependencies[]	=	{"World"};
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"UnlimitedAmmo/4_world"};
			};
		};
	};
};
