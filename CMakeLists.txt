cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 14)
project(demo-cpp-cli VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(demo-cpp-cli
  src/main.cpp
  src/processor/argument-processor-base.cpp
  src/processor/argument-processor.cpp
  src/validator/argument-validator-base.cpp
  src/validator/argument-validator.cpp
  src/generator/password-generator-base.cpp
  src/generator/password-generator.cpp
  src/program/program-base.cpp
  src/program/program.cpp
  src/display/terminal-base.cpp
  src/display/terminal.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
