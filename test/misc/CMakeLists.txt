include_directories(${CMAKE_SOURCE_DIR}/solutions/misc)

set(SOLUTIONS 0015 0053)

add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
  add_executable(${SOLUTION} ${SOLUTION}.cpp)
  target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
  catch_discover_tests(${SOLUTION})
endforeach()
