#pragma once

#include <string>
#include <vector>

namespace Io {
    enum class InputAction : int {
        MoveForward,  // = 0
        MoveBackwards,
        TurnLeft,
        TurnRight,
        Yell,
        Jump,
        Combat,
        CastReady,
        Attack,
        EventTrigger,
        Cast,
        Pass,
        CharCycle,
        Quest,
        QuickRef,
        Rest,
        TimeCal,
        Autonotes,
        Mapbook,
        AlwaysRun,
        LookUp,
        LookDown,
        CenterView,
        ZoomIn,
        ZoomOut,
        FlyUp,
        FlyDown,
        Land,
        StrafeLeft,
        StrafeRight,
        QuickSave,
        QuickLoad,
        History,
        Stats,
        Skills,
        Inventory,
        Awards,
        NewGame,
        SaveGame,
        LoadGame,
        ExitGame,
        ReturnToGame,
        Controls,
        Options,
        Credits,
        Clear,
        Return,
        Minus,
        Plus,
        Yes,
        No,
        Rest8Hours,
        WaitTillDawn,
        WaitHour,
        Wait5Minutes,
        Screenshot,
        Console,
        ToggleMouseGrab,
        ToggleBorderless,
        ToggleFullscreen,
        ToggleResizable,
        CycleFilter,
        ReloadShaders,
        SelectChar1,
        SelectChar2,
        SelectChar3,
        SelectChar4,
        SelectNPC1,
        SelectNPC2,
        DialogUp,
        DialogDown,
        DialogLeft,
        DialogRight,
        DialogSelect,
        Escape,
        ToggleMouseLook,

        Count,
        Invalid = Count,
    };
}  // namespace Io

const std::vector<Io::InputAction> AllInputActions();
const std::vector<Io::InputAction> VanillaInputActions();
std::string GetDisplayName(Io::InputAction action);
