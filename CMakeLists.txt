cmake_minimum_required(VERSION 3.26)
project(cpp_playground)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(cpp_playground
#        chapter2/hello_world.cpp
#        chapter2/using.cpp
#        chapter2/cout.cpp
#        chapter2/cin.cpp
#        chapter2/fn.cpp
#        chapter3/limits.cpp
#        chapter3/exceed.cpp
#        chapter3/hexoct.cpp
#        chapter3/chartype.cpp
#        chapter3/morechar.cpp
#        chapter3/bondini.cpp
#        chapter4/strtype3.cpp
#        chapter4/structur.cpp
#        chapter4/union.cpp
#        chapter16/vect1.cpp
#        chapter10/class.cpp
#        chapter17/fileio.cpp
#        other/ptr.c
#        lambda/lambda.cpp
#        thread/create_thread.cpp
#        thread/mutex.cpp
        opencv/show_image.cpp
)


target_link_libraries(cpp_playground ${OpenCV_LIBS})