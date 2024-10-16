cmake_minimum_required(VERSION 3.17)
project(C__Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Project main.cpp )
add_executable(demo1 CSAPP/chapter_two/demo1.c )
add_executable(demo2 CSAPP/chapter_two/demo2.c)
add_executable(chapter_demo1 CSAPP/chapter_three/demo1.cpp CSAPP/chapter_three/Person.cpp CSAPP/chapter_three/Person.h CSAPP/chapter_three/Student.cpp CSAPP/chapter_three/Student.h CSAPP/chapter_three/Log.cpp CSAPP/chapter_three/Log.h CSAPP/chapter_three/Best.h CSAPP/chapter_three/Best.cpp)
add_executable(LeetCode_Main  LeetCode/TwoSum.cpp LeetCode/TwoSum.h LeetCode/MainPro.cpp LeetCode/AssignCookies_Easy.cpp LeetCode/AssignCookies_Easy.h LeetCode/TestSample.cpp LeetCode/TestSample.h)