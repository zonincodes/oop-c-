include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(sample_test sample_test.cpp)
add_executable(chapter_1 chapter_1.cpp)
target_link_libraries(sample_test GTest::GTest sample)
target_link_libraries(chapter_1 GTest::GTest class_obj)
add_test(sample_test sample_test)
add_test(chapter_1_test chapter_1)