include_directories(${CMAKE_SOURCE_DIR})

project(tests)

add_subdirectory(googletest-main)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} ${CMAKE_SOURCE_DIR})

add_executable(tests runAllTests.cpp
        UserTest.cpp
        ../User.cpp
        ../Chat.cpp
        ../Message.cpp
        ../ChatLog.cpp
        MessageTest.cpp
        ChatTest.cpp
        ChatLogTest.cpp
)

target_link_libraries(tests gtest gtest_main)