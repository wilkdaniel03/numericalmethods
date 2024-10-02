cmake_minimum_required(VERSION 3.30.3)
project(numerical_methods)
set(
	SOURCES
	./src/main.cpp
	./src/taylor.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
