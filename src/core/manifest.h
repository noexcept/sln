//
// Created by noexcept on 2024/4/11.
//
#pragma once

#include "core_define.h"
#include <cstdint>

namespace core::manifest {
    struct CORE_API version {
        uint32_t major = 0;
        uint32_t minor = 0;
        uint32_t patch = 0;
        uint32_t tweak = 0;
    };
    // 应用名字
    CORE_API const char* app_name();
    // 应用id，用于定义appdata存放数据的根路径
    CORE_API const char* app_id();
    // 应用版本号
    CORE_API const char* app_version_str();
    // 应用版本号
    CORE_API version app_version();
}
