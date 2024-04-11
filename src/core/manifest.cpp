//
// Created by noexcept on 2024/4/11.
//

#include "manifest.h"
#include "manifest_conf.h"

const char *core::manifest::app_name() {
    return conf::app_name;
}

const char *core::manifest::app_id() {
    return nullptr;
}

const char *core::manifest::app_version_str() {
    return conf::app_version_str;
}

core::manifest::version core::manifest::app_version() {
    return version{
        .major = conf::version_major,
        .minor = conf::version_minor,
        .patch = conf::version_patch,
        .tweak = conf::version_tweak
    };
}
