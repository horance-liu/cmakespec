cmake_minimum_required(VERSION 3.14)

project(hello_cmake LANGUAGES CXX)

option(ENABLE_TESTING "If ON, test cases will be run." OFF)

if(ENABLE_TESTING)
  include(CTest)
  enable_testing()

  list(APPEND COMMON_TEST_LIBS
    cctest_main
    cctest
  )
endif()

add_subdirectory(greet)
add_subdirectory(util)
add_subdirectory(cmd)
