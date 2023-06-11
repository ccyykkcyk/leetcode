include_directories(${CMAKE_SOURCE_DIR}/solutions/beginner)

set(SOLUTIONS 1480 1342 1672 0412 0876 0383)

# add_compile_definitions(CATCH_CONFIG_FAST_COMPILE)
add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
  add_executable(${SOLUTION} ${SOLUTION}.cpp)
  target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
  catch_discover_tests(${SOLUTION})
endforeach()
