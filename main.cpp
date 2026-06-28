#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontRun) {
        if (!PlayLayer::init(level, useReplay, dontRun)) return false;
        
        auto botMode = Mod::get()->getSettingValue<std::string>("bot-mode");
        
        if (botMode == "Record") {
            log::info("Bot Mode: Recording started!");
        } else if (botMode == "Playback") {
            log::info("Bot Mode: Playback started!");
        }

        return true;
    }
};
