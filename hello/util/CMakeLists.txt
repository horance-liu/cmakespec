# local_time
add_library(local_time SHARED)

target_sources(local_time
  PRIVATE
    local_time.h
    local_time.cc
)

target_include_directories(local_time
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# string_view
add_library(string_view SHARED)

target_sources(string_view
  PRIVATE
    string_view.h
    string_view.cc
)

target_include_directories(string_view
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# string_view_test
add_executable(string_view_test)

target_sources(string_view_test
  PRIVATE string_view_test.cc
)

target_link_libraries(string_view_test
  PRIVATE 
    string_view 
    ${COMMON_TEST_LIBS}
)

add_test(
  NAME string_view_test 
  COMMAND string_view_test
)