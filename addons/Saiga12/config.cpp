#include "script_component.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class TACGT_Weapons_Saiga12k {
        name = COMPONENT_NAME;
        units[] = { };
        weapons[] = { };
        requiredVersion = 0.1;
        requiredAddons[] = { "TACGT" };
    };
        VERSION_CONFIG;
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnyTopShortMount;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class CUP_sgun_Saiga12K: Rifle_Base_F {
        class Single: Mode_SemiAuto {
        class BaseSoundModeType { };
            sounds[] = { "StandardSound", "SilencedSound" };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {SAIGA12_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {SAIGA12_SOUND_SET};
            };
        };
    };
};
