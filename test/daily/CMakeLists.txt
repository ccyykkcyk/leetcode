include_directories(${CMAKE_SOURCE_DIR}/solutions/daily)

set(SOLUTIONS
    1375
    2481
    1254
    0167
    0860
    0141
    0142
    2656
    2760
    2342
    0053
    2216
    2304
    1410
    2824
    1457
    1670
    2336)

add_link_options(-fuse-ld=lld)

foreach(SOLUTION ${SOLUTIONS})
  add_executable(${SOLUTION} ${SOLUTION}.cpp)
  target_link_libraries(${SOLUTION} PRIVATE Catch2::Catch2WithMain)
  catch_discover_tests(${SOLUTION})
endforeach()
