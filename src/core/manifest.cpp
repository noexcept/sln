//
// Created by noexcept on 2024/4/11.
//

#include "manifest.h"
#include "manifest_conf.h"

namespace core::manifest {
    constexpr char8_t *app_name() {
        return conf::app_name;
    }

    constexpr char8_t *app_id() {
        return nullptr;
    }

    constexpr char8_t *app_version_text() {
        return nullptr;
    }

    version app_version() {
        return version();
    }
}
