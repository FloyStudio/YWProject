
aux_source_directory(. APP_SRC_ROOT)
add_executable (YWApplication ${APP_SRC_ROOT})
target_link_libraries(YWApplication YWFoundation)
target_link_libraries(YWApplication YWPhysics)