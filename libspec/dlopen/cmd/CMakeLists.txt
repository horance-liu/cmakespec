project(cmd)

add_executable(main)

target_sources(main 
  PRIVATE
    main.cc
)

target_link_libraries(main
  PRIVATE dl
)

set_target_properties(main
  PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)