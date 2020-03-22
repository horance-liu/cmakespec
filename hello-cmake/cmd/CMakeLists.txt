add_executable(hello_cmake)

target_sources(hello_cmake
  PRIVATE
    main.cc
)

target_link_libraries(hello_cmake
  PRIVATE 
    hello_greet
    string_view
)
