#include "stdafx.h"

tGlobalVars::tGlobalVars()
{
    this->IOSettings.ClientModuleName = L"client.dll";
    this->IOSettings.EngineModuleName = L"engine.dll";
    this->IOSettings.TargetProcessName = L"csgo.exe";
    this->IOSettings.SettingsPath = L"C:\\PP-Multi\\Settings.txt";
    this->OverlayWindowSettings.OverlayWindowName = L"Puddin Poppin CSGO Multi-Hack";
    this->OverlayWindowSettings.ReferenceWindowName = L"Counter-Strike: Global Offensive";
}