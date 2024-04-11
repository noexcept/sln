//
// Created by noexcept on 2023/12/21.
//
#include "core/log.h"
#include "core/crash.h"

int main(int argc, const char *argv[])
{
    core::log::init();
    core::crash::init();
    return 0;
}