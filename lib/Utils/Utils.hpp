#pragma once

#include <sstream>

namespace Utils {

int64_t timeInMs();

template <class T>
inline std::string to_string(const T& t) {
    std::stringstream ss;
    ss << t;
    return ss.str();
}

}
