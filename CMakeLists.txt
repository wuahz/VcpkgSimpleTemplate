cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0167 NEW) # 消除构建警告，保持兼容性

project(hello-vcpkg)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置vcpkg并行下载线程数（按需调整，如 4）
set(VCPKG_MAX_CONCURRENCY=4)  

add_executable(main main.cpp)

find_package(Boost REQUIRED COMPONENTS system)  # 按需添加Boost组件（如system、lexical_cast等）
find_package(jsoncpp REQUIRED)

target_link_libraries(main 
    PRIVATE 
    Boost::system  # Boost组件（根据实际使用的模块调整）
    jsoncpp_lib    # Jsoncpp库（vcpkg安装的目标名固定为jsoncpp_lib）
)