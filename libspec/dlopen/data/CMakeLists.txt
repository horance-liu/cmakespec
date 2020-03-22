project(data)

add_library(data STATIC)

target_sources(data 
  PRIVATE
    data.h
    data.c
)

target_include_directories(data
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)