cmake_minimum_required(VERSION 3.20.0)
cmake_policy(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)
project(demo-cpp-cli VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(demo-cpp-cli
  src/main.cpp
  src/processor/argument_processor.cpp
  src/validator/argument_validator.cpp
  src/generator/password_generator.cpp
  src/generator/random_character_generator.cpp
  src/program/program.cpp
  src/display/terminal.cpp
  src/shuffler/string_shuffler.cpp
)

target_include_directories(demo-cpp-cli PRIVATE include)

target_compile_options(demo-cpp-cli PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -Wconversion
    -Wshadow
    -Wnon-virtual-dtor
    -Werror
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
