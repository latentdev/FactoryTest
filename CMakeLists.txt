cmake_minimum_required(VERSION 3.28)

project(FactoryTest)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(FactoryTest 
	src/main.cpp 
	src/ConfigManager.cpp
)