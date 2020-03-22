project(value)

add_library(value MODULE)

target_sources(value 
  PRIVATE
    value.c
)

target_link_libraries(value
  PRIVATE data
)