cmake_minimum_required(VERSION 3.0.0)
project(demo-cpp-cli VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(demo-cpp-cli
  main.cpp
  include/argument-processor-base.cpp
  include/argument-processor.cpp
  include/argument-validator-base.cpp
  include/argument-validator.cpp
  include/password-generator-base.cpp
  include/password-generator.cpp
  include/program-base.cpp
  include/program.cpp
  include/terminal-base.cpp
  include/terminal.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
