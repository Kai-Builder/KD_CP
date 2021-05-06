cmake_minimum_required(VERSION 3.19)
project(KD_RP)

set(CMAKE_CXX_STANDARD 14)



# Add Executable
add_executable(keen main.cpp
        userdata/user_handle.cpp shared/relapse.cpp
        shared/TrueLoadingService.cpp
        shared/GameCreator.cpp)


# Target & Link the user handlers for the main thingies
# like mail and stuff
target_link_libraries(keen curl)
