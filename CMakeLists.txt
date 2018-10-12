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
	src/myengine/Screen.cpp
	src/myengine/Screen.h
	src/myengine/Resources.cpp
	src/myengine/Resources.h
	src/myengine/MeshRenderer.cpp
	src/myengine/MeshRenderer.h
	src/myengine/Transform.cpp
	src/myengine/Transform.h
	src/myengine/Material.cpp
	src/myengine/Material.h
	src/myengine/MaterialAttribute.cpp
	src/myengine/MaterialAttribute.h
)

target_link_libraries(sandbox myengine)