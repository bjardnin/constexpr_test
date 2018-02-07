cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++11)
add_executable(server main.cpp)
target_link_libraries(server -lpthread)
