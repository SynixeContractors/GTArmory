class CfgWeapons {
    class CUP_H_OpsCore_Green;
    class CLASS(OpsCore_Medic): CUP_H_OpsCore_Green {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Medic)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_medic_co.paa),
            QPATHTOF(data\cup_opscore_medic_1_co.paa),
            QPATHTOF(data\cup_opscore_medic_2_co.paa),
            ""
        };
    };
    class CUP_H_OpsCore_Black;
    class CLASS(OpsCore_Grijs): CUP_H_OpsCore_Black {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Grijs)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_grijs_co.paa),
            QPATHTOF(data\cup_opscore_grijs_1_co.paa),
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            ""
        };
    };
    class CUP_H_OpsCore_Black_NoHS;
    class CLASS(OpsCore_Grijs_NoHS): CUP_H_OpsCore_Black_NoHS {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Grijs, No Headset)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_grijs_co.paa),
            QPATHTOF(data\cup_opscore_grijs_1_co.paa),
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            ""
        };
    };

    class CUP_H_USA_Cap_AU_DEF;
    class CLASS(Cap_DEF_NYMets): CUP_H_USA_Cap_AU_DEF {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap w/DEF (New York Mets)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_def_nymets_co.paa)};
    };

    class CLASS(Cap_DEF_ASU): CUP_H_USA_Cap_AU_DEF {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap w/DEF (Arizona State)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_def_asu_co.paa)};
    };
};
