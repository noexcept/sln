//
// Created by noexcept on 2024/4/11.
//

#include "standard_paths.h"
#include "manifest.h"

std::filesystem::path core::standard_paths::app_path() {
    return std::filesystem::path();
}

std::filesystem::path core::standard_paths::app_exe_path() {
    return std::filesystem::path();
}

std::filesystem::path core::standard_paths::app_data_path() {
    return std::filesystem::path();
}

std::filesystem::path core::standard_paths::desktop_path() {
    return std::filesystem::path();
}

std::filesystem::path core::standard_paths::temp_data_path() {
    return std::filesystem::path();
}

std::filesystem::path core::standard_paths::app_log_path() {
    static std::filesystem::path s_app_log_path = core::standard_paths::app_data_path() / core::manifest::app_id();
    return s_app_log_path;
}


