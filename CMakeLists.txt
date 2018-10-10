cmake_minimum_required(VERSION 2.6)
project(MYENGINE)

include_directories(
	src
)

add_executable(sandbox
	src/sandbox/main.cpp
)

add_library(myengine
	src/myengine/Entity.cpp
	src/myengine/Entity.h
	src/myengine/Component.cpp
	src/myengine/Component.h
	src/myengine/Core.cpp
	src/myengine/Core.h
	src/myengine/Environment.cpp
	src/myengine/Environment.h
	src/myengine/Keyboard.cpp
	src/myengine/Keyboard.h
)

target_link_libraries(sandbox myengine)