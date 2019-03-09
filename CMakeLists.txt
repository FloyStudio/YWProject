cmake_minimum_required(VERSION 3.12)

if (NOT DEFINED YW_BUILD_TYPE)
  message(STATUS "YW_BUILD_TYPE not provided")
  set(YW_BUILD_TYPE "macOS")
endif()

set(DEV_PROJECT_NAME "YWEngine")

project(${DEV_PROJECT_NAME})

set (LIB_ROOT_DIR libs)
set (THIRD_SDK_ROOT_DIR thirdsdk)

######configuration 
set (CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "My multi config types" FORCE)

####### support Windows or MacOS
if (WIN32)
	MESSAGE(STATUS "Now is Windows system")
else (APPLE)
	MESSAGE(STATUS "Now is Apple system")
	set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++11")
	set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")

	#set(CMAKE_OSX_ARCHITECTURES "$(ARCHS_STANDARD)")
	set(CMAKE_OSX_DEPLOYMENT_TARGET "10.14")
endif ()

####set include dir
include_directories (${SRC_ROOT_DIR})
include_directories (${LIB_ROOT_DIR})
include_directories (${THIRD_SDK_ROOT_DIR})

#### add src sub dir
add_subdirectory(libs)
add_subdirectory(demos)
add_subdirectory(app)
