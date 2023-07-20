include_directories(${CMAKE_SOURCE_DIR}/solutions/drafts)

set(SOLUTIONS 1483 1494 0918)

add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
    add_executable(${SOLUTION} ${SOLUTION}.cpp)
    target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
    catch_discover_tests(${SOLUTION})
endforeach()