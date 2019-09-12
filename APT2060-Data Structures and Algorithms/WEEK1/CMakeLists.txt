cmake_minimum_required(VERSION 3.14)
project(WEEK1)

set(CMAKE_CXX_STANDARD 14)

add_executable( WEEK1 main.cpp scorePrompt.cpp)

add_executable(main main.cpp)
add_executable(scorePrompt scorePrompt.cpp)
add_executable(ask-user-if-to-enter-score-again ask-user-if-to-enter-score-again.cpp)
add_executable(addition addition.cpp)
add_executable(operations operations.cpp)
add_executable(ask-to-repeat-operation ask-to-repeat-operation.cpp)
add_executable(empClass empClass.cpp)
add_executable(classStudent classStudent.cpp)