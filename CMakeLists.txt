cmake_minimum_required(VERSION 3.0.0)
project(demo-cpp-cli VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(demo-cpp-cli
  src/main.cpp
  src/argument-processor-base.cpp
  src/argument-processor.cpp
  src/argument-validator-base.cpp
  src/argument-validator.cpp
  src/password-generator-base.cpp
  src/password-generator.cpp
  src/program-base.cpp
  src/program.cpp
  src/terminal-base.cpp
  src/terminal.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
