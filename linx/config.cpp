class CfgPatches
{
    class linx
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods
{
    class linx
    {
        dir = "linx";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "linx";
        credits = "linx";
        author = "linx";
        authorID = "0";
        version = "1.0";
        extra = 0;
        type = "mod";
        dependencies[] = {"World", "Mission"};

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"linx/scripts/4_World"};
            };

            class missionScriptModule
            {
                value = "";
                files[] = {"linx/scripts/5_Mission"};
            };
        };
    };
};
