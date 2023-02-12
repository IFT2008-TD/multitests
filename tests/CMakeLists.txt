

set(TEST_TUBA_SOURCES tests_tuba.cpp ${PROJECT_SOURCE_DIR}/Tuba.cpp)

add_executable(
        tests_tuba
        ${TEST_TUBA_SOURCES}
)

target_include_directories(tests_tuba PRIVATE ${PROJECT_SOURCE_DIR} )

target_link_libraries(
        tests_tuba
        gtest_main
        gtest
        pthread
)

set(TEST_TROMPETTE_SOURCES tests_trompette.cpp ${PROJECT_SOURCE_DIR}/Trompette.cpp ${PROJECT_SOURCE_DIR}/Tuba.cpp)

add_executable(
        tests_trompette
        ${TEST_TROMPETTE_SOURCES}
)

target_include_directories(tests_trompette PRIVATE ${PROJECT_SOURCE_DIR} )

target_link_libraries(
        tests_trompette
        gtest_main
        gtest
        pthread
)



include(GoogleTest)
gtest_discover_tests(tests_trompette)
gtest_discover_tests(tests_tuba)