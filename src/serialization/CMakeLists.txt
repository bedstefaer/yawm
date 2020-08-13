add_library(serialization
    serialization.cpp
    serialization.h
)

target_include_directories(serialization PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
)