include_directories(${CMAKE_SOURCE_DIR}/solutions/drafts)

set(SOLUTIONS 1483 1494 0918 0907 2008)

add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
  add_executable(draft-${SOLUTION} ${SOLUTION}.cpp)
  target_link_libraries(draft-${SOLUTION} PRIVATE Catch2::Catch2WithMain)
  catch_discover_tests(draft-${SOLUTION})
endforeach()
