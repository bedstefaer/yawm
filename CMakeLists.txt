cmake_minimum_required(VERSION 3.18.1)
project(yawm VERSION 0.1)


#--------------------------------------------------------------------
# Add Options
#--------------------------------------------------------------------
option(BUILD_GLFW "Build GLFW libraries" OFF)
option(BUILD_RAPIDJSON "Build rapidjson libraries" ON)
option(BUILD_OWN "Build own source code" OFF)

#--------------------------------------------------------------------
# Set Options
#--------------------------------------------------------------------
set(BUILD_OWN ON)
set(BUILD_RAPIDJSON OFF)
set(BUILD_GLFW ON)
#--------------------------------------------------------------------
# Add subdirectories
#--------------------------------------------------------------------

if(BUILD_OWN)
    message("Building source code")
    add_subdirectory(src)
else()
    message("Skipping building source code")
endif()

if(BUILD_GLFW)
    add_subdirectory(thirdparty/glfw)
endif()

if(BUILD_RAPIDJSON)
    message("Building rapidjson code")
    add_subdirectory(thirdparty/rapidjson)
endif()



