cmake_minimum_required(VERSION 3.12)

project(MxEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(MXENGINE_BUILD_SAMPLES "build sample projects" ON)
option(MXENGINE_BUILD_SHIPPING "shipping build for end user" OFF)
option(MXENGINE_NO_BOOST "forcely disable boost library" OFF)

if(MXENGINE_BUILD_SHIPPING)
    set(CMAKE_BUILD_TYPE "Release")
    add_compile_definitions(MXENGINE_SHIPPING)
endif()
add_compile_definitions(MXENGINE_CMAKE_BUILD)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
    message(WARNING "Build type is not set, using Debug by default")
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options("/MP")
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_options("/MDd")
        add_compile_options("/Zi")
    else()
        add_compile_options("/MD")
    endif()
endif()

add_subdirectory(src)

set(MxEngine_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(MxEngine_CMAKE_UTILS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

get_directory_property(HAS_PARENT_SCOPE PARENT_DIRECTORY)
if(HAS_PARENT_SCOPE)
    set(MxEngine_ROOT_DIR ${MxEngine_ROOT_DIR} PARENT_SCOPE)
    set(MxEngine_CMAKE_UTILS_DIR ${MxEngine_CMAKE_UTILS_DIR} PARENT_SCOPE)
    set(MxEngine_SHARED_LIBRARIES ${MxEngine_SHARED_LIBRARIES} PARENT_SCOPE)
    set(MxEngine_INCLUDE_DIR ${MxEngine_INCLUDE_DIR} PARENT_SCOPE)
    set(MxEngine_BINARY_DIR ${MxEngine_BINARY_DIR} PARENT_SCOPE)
endif()

if (MXENGINE_BUILD_SAMPLES)
    add_subdirectory(samples/SandboxApplication)
    add_subdirectory(samples/OfflineRendererSample)
    add_subdirectory(samples/PhysicsSample)
    add_subdirectory(samples/ProjectTemplate)
    add_subdirectory(samples/SoundSample)
    add_subdirectory(samples/VRCameraSample)
    add_subdirectory(samples/GrassSample)
    add_subdirectory(samples/Sponza)
    add_subdirectory(samples/PBR)
    add_subdirectory(samples/PathTracing)
    add_subdirectory(samples/Particles)
    add_subdirectory(samples/Doom)
    
    # not implemnted yet
    #add_subdirectory(samples/FluidSimulation)
endif()
