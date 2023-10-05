#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike", "Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
#include "Effects.hpp"
