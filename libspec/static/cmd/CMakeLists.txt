project(cmd)

add_executable(main)

target_sources(main 
  PRIVATE
    main.cc
)

target_link_libraries(main
  PRIVATE value
)