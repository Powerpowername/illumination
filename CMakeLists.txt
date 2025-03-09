cmake_minimum_required(VERSION 3.31)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)
project(APP)
set(CMAKE_VERSION 3.31)


set(HEADER ${CMAKE_SOURCE_DIR}/include  E:/lib_c/glad/include E:\\OpenglLeraning\\illumination E:\\lib_c\\glfw-3.4\\include )

set(SRC ${CMAKE_SOURCE_DIR}/src/main.cpp E:/lib_c/glad/src/glad.c)
# message(FATAL_ERROR "GLAD library not found in ${SRC}")

add_executable(app ${SRC})
# 头文件路径
target_include_directories(app PUBLIC ${HEADER})



# 链接库
find_package(OpenGL REQUIRED)
if(OPENGL_FOUND)
    target_link_libraries(app PUBLIC ${OPENGL_LIBRARIES})
endif()

find_library(GLFW_LIBRARY NAMES glfw3 PATHS "E:/lib_c/glfw-3.4/build_mingw/src" NO_DEFAULT_PATH)
target_link_libraries(app PUBLIC ${GLFW_LIBRARY})



