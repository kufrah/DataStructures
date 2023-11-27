project(Lab05)
cmake_minimum_required(VERSION 3.10)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_library (applibrary Recursion.cpp)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread applibrary) 

add_executable(runTests2 tests2.cpp)
target_link_libraries(runTests2 ${GTEST_LIBRARIES} pthread ) 

add_executable(runTests3 tests3.cpp)
target_link_libraries(runTests3 ${GTEST_LIBRARIES} pthread ) 


add_executable(runMain main.cpp)
target_link_libraries(runMain applibrary)
