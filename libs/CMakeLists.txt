
set(YW_FOUNDATION_LIB ./YWFoundation)
set(YW_PHYSICS_LIB ./YWPhysics)
set(YW_RENDER_LIB ./YWRender)

file(GLOB_RECURSE YW_FOUNDATION_DIR_CPP_LIST "${YW_FOUNDATION_LIB}/*.cpp")
file(GLOB_RECURSE YW_FOUNDATION_DIR_HPP_LIST "${YW_FOUNDATION_LIB}/*.hpp" "${YW_FOUNDATION_LIB}/*.h")
add_library(YWFoundation STATIC ${YW_FOUNDATION_DIR_HPP_LIST} ${YW_FOUNDATION_DIR_CPP_LIST})

file(GLOB_RECURSE YW_PHYSICS_DIR_CPP_LIST "${YW_PHYSICS_LIB}/*.cpp")
file(GLOB_RECURSE YW_PHYSICS_DIR_HPP_LIST "${YW_PHYSICS_LIB}/*.hpp" "${YW_PHYSICS_LIB}/*.h")
add_library(YWPhysics STATIC ${YW_PHYSICS_DIR_HPP_LIST} ${YW_PHYSICS_DIR_CPP_LIST})

file(GLOB_RECURSE YW_RENDER_DIR_CPP_LIST "${YW_RENDER_LIB}/*.cpp")
file(GLOB_RECURSE YW_RENDER_DIR_HPP_LIST "${YW_RENDER_LIB}/*.hpp" "${YW_RENDER_LIB}/*.h")
add_library(YWRender STATIC ${YW_RENDER_DIR_HPP_LIST} ${YW_RENDER_DIR_CPP_LIST})

