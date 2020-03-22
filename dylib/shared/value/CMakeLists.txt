project(value)

add_library(value SHARED)

target_sources(value 
  PRIVATE
    value.h
    value.c
)

target_include_directories(value
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(value
  PRIVATE data
)