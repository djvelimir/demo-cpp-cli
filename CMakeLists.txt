cmake_minimum_required(VERSION 3.0.0)
project(demo-cpp-cli VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(demo-cpp-cli
  src/main.cpp
  src/argument-processor/argument-processor-base.cpp
  src/argument-processor/argument-processor.cpp
  src/argument-validator/argument-validator-base.cpp
  src/argument-validator/argument-validator.cpp
  src/password-generator/password-generator-base.cpp
  src/password-generator/password-generator.cpp
  src/program/program-base.cpp
  src/program/program.cpp
  src/terminal/terminal-base.cpp
  src/terminal/terminal.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
