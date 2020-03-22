add_library(hello_greet SHARED)

target_sources(hello_greet
  PRIVATE
    hello_greet.h
    hello_greet.cc
)

target_include_directories(hello_greet
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(hello_greet
  PRIVATE local_time
)
