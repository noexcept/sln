//
// Created by noexcept on 2024/4/11.
//
#pragma once

#include "core_define.h"
#include <filesystem>

namespace core::standard_paths {
    CORE_API std::filesystem::path app_path();
    CORE_API std::filesystem::path app_exe_path();
    CORE_API std::filesystem::path app_log_path();
    CORE_API std::filesystem::path desktop_path();
    CORE_API std::filesystem::path app_data_path();
    CORE_API std::filesystem::path temp_data_path();
}
