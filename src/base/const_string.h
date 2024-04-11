//
// Created by noexcept on 2024/4/11.
//
#pragma once

#include <string_view>

namespace base {

class const_string final : public std::string_view {
public:
    using std::string_view::string_view;
};

}

inline constexpr base::const_string operator""_cs(const char *data, std::size_t size)
{
    return { data, size };
}
