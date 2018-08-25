cmake_minimum_required(VERSION 3.7)

project(hello_crow)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost COMPONENTS system filesystem REQUIRED)

include_directories(${BOOST_INCLUDE_DIRS})
add_executable(hello_crow main.cpp)
target_link_libraries(hello_crow ${Boost_LIBRARIES} pthread)