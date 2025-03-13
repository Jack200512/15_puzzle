cmake_minimum_required(VERSION 3.10) #声明最低需要的版本，每个版本功能略有差异

project(Game) #自定义项目名字

#file(GLOB_RECURSE SOURCES "*.cpp") 这样也行

file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/*.cpp")

#上面这段使用文件夹内全局搜索，搜索对应的.cpp文件
#也可以用另一种方法手动罗列所有需要编译的.cpp文件 gpt。


#不知道为什么会错误的包含一个文件，导致main函数重定义（报错中说的）
#所以需要排除cmake产生的文件，加入如下代码

set(CMAKE EXE LINKER FLAGS "-static-libgcc -static-libstdc++")

list(FILTER SOURCES EXCLUDE REGEX "CMakeFiles")

#list(FILTER SOURCES EXCLUDE REGEX "CMakeFiles/.*") 这个也行

add_executable(game ${SOURCES})
#生成可执行文件 hello_world.exe 