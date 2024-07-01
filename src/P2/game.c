#include <game.h>

INCLUDE_ASM(const s32, "P2/game", StartupGame__Fv);
INCLUDE_ASM(const s32, "P2/game", func_00160090);

INCLUDE_ASM(const s32, "P2/game", search_level_by_load_data);

INCLUDE_ASM(const s32, "P2/game", search_level_by_id);

INCLUDE_ASM(const s32, "P2/game", PchzFriendlyFromWid);
INCLUDE_ASM(const s32, "P2/game", func_00160178);

INCLUDE_ASM(const s32, "P2/game", call_search_level_by_id);

INCLUDE_ASM(const s32, "P2/game", FFindLevel);
INCLUDE_ASM(const s32, "P2/game", func_001601D0);

INCLUDE_ASM(const s32, "P2/game", get_level_completion_by_id);

INCLUDE_ASM(const s32, "P2/game", tally_world_completion);

INCLUDE_ASM(const s32, "P2/game", check_game_completion);

INCLUDE_ASM(const s32, "P2/game", UnlockIntroCutsceneFromWid);

INCLUDE_ASM(const s32, "P2/game", DefeatBossFromWid);

INCLUDE_ASM(const s32, "P2/game", UnlockEndgameCutscenesFromFgs);

INCLUDE_ASM(const s32, "P2/game", PlayEndingFromCompletionFlags);

INCLUDE_ASM(const s32, "P2/game", InitGameState);

INCLUDE_ASM(const s32, "P2/game", FUN_00160650);

INCLUDE_ASM(const s32, "P2/game", SetupGame);

INCLUDE_ASM(const s32, "P2/game", UpdateGameState);

INCLUDE_ASM(const s32, "P2/game", LsFromWid);

INCLUDE_ASM(const s32, "P2/game", GrflsFromWid);

INCLUDE_ASM(const s32, "P2/game", UnloadGame);

INCLUDE_ASM(const s32, "P2/game", RetryGame);

INCLUDE_ASM(const s32, "P2/game", StartGame__Fv);

INCLUDE_ASM(const s32, "P2/game", FUN_00160948);

INCLUDE_ASM(const s32, "P2/game", calculate_percent_completion);

INCLUDE_ASM(const s32, "P2/game", SetCcharm);

INCLUDE_ASM(const s32, "P2/game", FCharmAvailable);

INCLUDE_ASM(const s32, "P2/game", func_00160C90);

INCLUDE_ASM(const s32, "P2/game", PfLookupDialog);

INCLUDE_ASM(const s32, "P2/game", clr_8_bytes_1);

INCLUDE_ASM(const s32, "P2/game", FUN_00160ce8);

INCLUDE_ASM(const s32, "P2/game", OnGameAlarmTriggered);

INCLUDE_ASM(const s32, "P2/game", OnGameAlarmDisabled);

INCLUDE_ASM(const s32, "P2/game", grfvault_something);

INCLUDE_ASM(const s32, "P2/game", GetBlueprintInfo);

int CcharmMost()
{
    return 2;
}

INCLUDE_ASM(const s32, "P2/game", reload_post_death);
