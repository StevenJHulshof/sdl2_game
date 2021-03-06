#pragma once

#include <cstdint>
#include <vector>
#include <string>

#define LOG_CONFIG_ENABLED                      1
#define LOG_CONFIG_LEVEL                        2

const std::uint16_t WINDOW_SCREEN_WIDTH =       1280;
const std::uint16_t WINDOW_SCREEN_HEIGHT =      720;

const float WINDOW_REFRESH_RATE_CAP =           120;

extern void add_path(std::vector<std::string>& vector, std::string path);
extern void add_texture_path(std::string path);