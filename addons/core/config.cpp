#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "COUP Team";
        authorUrl = "https://github.com/lambdatiger/COUP";
    };
};

class CfgMods {
    class PREFIX {
        dir = "@COUP";
        name = "Community Optics Upgrade Project";
        picture = "";
        hidePicture = "false";
        hideName = "false";
        actionName = "Website";
        action = "https://github.com/lambdatiger/COUP";
        description = "";
    };
};
