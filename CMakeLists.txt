cmake_minimum_required(VERSION 3.22)

project(gd_macro_bot_android)

find_package(Geode REQUIRED)

add_geode_mod(
    qa.gd_macro_bot_android
    VERSION 1.0.0
    GD ANDROID
    SOURCES main.cpp
)
