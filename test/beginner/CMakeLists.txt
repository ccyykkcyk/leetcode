include_directories(${CMAKE_SOURCE_DIR}/solutions/beginner)

set(SOLUTIONS 1480 1342 1672)

add_compile_definitions(CATCH_CONFIG_FAST_COMPILE)

foreach(SOLUTION ${SOLUTIONS})
  add_executable(${SOLUTION} ${SOLUTION}.cpp)
  target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
  catch_discover_tests(${SOLUTION})
endforeach()