cmake_minimum_required(VERSION 3.10)

# set the project name
project(CppTemplate)

enable_language(CXX)

enable_testing()
find_package(GTest REQUIRED)

# find_package(OpenSSL REQUIRED)
# include_directories(${OPENSSL_INCLUDE_DIR})

# find_package(ZLIB REQUIRED)
# find_package(OpenSSL REQUIRED)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(MainLib src/main.cpp)
# target_link_libraries(MainLib ZLIB::ZLIB OpenSSL::SSL OpenSSL::Crypto)

include(GoogleTest)
add_executable(MainTest src/test_main.cpp)
target_link_libraries(MainTest MainLib  GTest::gtest_main) #GTest::gtest GTest::gmock

# gtest_add_tests(TARGET MainTest)
