project(fsbenchmark)

set(CMAKE_CXX_FLAGS "--std=c++11")

set(SRC_FILES
    TestRunner.cpp
    Environment.cpp
    main.cpp
    )

add_executable(fsbenchmark ${SRC_FILES})

set_target_properties(fsbenchmark
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )
