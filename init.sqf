StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\radartrap.sqf";
nul=[] execVM "scripts\intlight.sqf";

StartProgress = true;