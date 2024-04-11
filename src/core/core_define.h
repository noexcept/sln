//
// Created by noexcept on 2024/1/4.
//
#pragma once

#if defined(_WIN32)
    #ifdef CORE_EXPORTS
        #define CORE_API __declspec(dllexport)
    #else  // !CORE_EXPORTS
        #define CORE_API __declspec(dllimport)
    #endif
#else  // !defined(_WIN32)
    #define CORE_API __attribute__((visibility("default")))
#endif
