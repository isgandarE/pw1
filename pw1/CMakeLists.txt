cmake_minimum_required(VERSION 3.0)
project(pw1 LANGUAGES C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

file(GLOB SOURCES main.c)

add_executable(${PROJECT_NAME} ${SOURCES})
# target_link_libraries(${PROJECT_NAME} m)
# set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 99)

# add_executable(elnur.out ${SOURCES})


# Testing

# file(GLOB SOURCES test.c lifo.c)

# add_executable(testing ${SOURCES})
# set_property(TARGET testing PROPERTY C_STANDARD 99)
# target_link_libraries(testing m cunit)
# enable_testing()
# add_test(NAME test1 COMMAND $<TARGET_FILE:testing>)