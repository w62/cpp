cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER  /opt/homebrew/opt/llvm/bin/clang++)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG -march=native)
set(CMAKE_CXX_FLAGS_RELEASE -march=native)
project(myprogram)
set(MYPROGRAM_FILES Database.cpp Employee.cpp)
add_executable( UserInterface UserInterface.cpp ${MYPROGRAM_FILES})
add_executable( EmployeeTest EmployeeTest.cpp ${MYPROGRAM_FILES})
add_executable( DatabaseTest DatabaseTest.cpp ${MYPROGRAM_FILES})
add_subdirectory(spreadsheet)
add_subdirectory(guineapig)
add_subdirectory(c10/00)
add_subdirectory(db)
add_subdirectory(kaleidoscope)
