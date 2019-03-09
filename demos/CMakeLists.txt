
aux_source_directory(./YWTest YW_TEST_DEMO)
add_executable (YWTestDemo ${YW_TEST_DEMO})
target_link_libraries(YWTestDemo YWFoundation)
target_link_libraries(YWTestDemo YWPhysics)

aux_source_directory(./YWHelloWorld YW_HELLOWORLD_DEMO)
add_executable (YWHelloWorldDemo ${YW_HELLOWORLD_DEMO})
target_link_libraries(YWHelloWorldDemo YWFoundation)
target_link_libraries(YWHelloWorldDemo YWPhysics)