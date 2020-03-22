add_executable(hello)

target_sources(hello
  PRIVATE
    main.cc
)

target_link_libraries(hello
  PRIVATE 
    hello_greet
    string_view
)
