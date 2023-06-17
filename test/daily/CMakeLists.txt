include_directories(${CMAKE_SOURCE_DIR}/solutions/daily)

set(SOLUTIONS 1375 2481)

add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
    add_executable(${SOLUTION} ${SOLUTION}.cpp)
    target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
    catch_discover_tests(${SOLUTION})
endforeach()
