#include <iostream>
namespace yawm {

inline auto testGetInt() -> int {
    return 5;
}

inline double testGetdouble() {
    return 2.0;
}

inline auto testGetStr() -> std::string {
    return std::string("tests");
}

}  // namespace yawm
