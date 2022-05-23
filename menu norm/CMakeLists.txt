cmake_minimum_required(VERSION 3.17)
project(MyMenu)

set(CMAKE_CXX_STANDARD 14)

add_executable(MyMenu main.cpp "MyMenu/MyMenu.cpp" "MyMenu/MyMenu.h" "MyMenu/MyMenuItem.cpp" "MyMenu/MyMenuItem.h" "Models/UserInheritance/User.cpp" "Models/UserInheritance/User.h" "Models/UserInheritance/Teacher.cpp" "Models/UserInheritance/Teacher.h" "Models/ClassRoom/School.h" "Models/ClassRoom/School.cpp" "Models/UserInheritance/student.cpp" "Models/UserInheritance/student.h" "MyMenu/MenuManage.h" "MyMenu/MenuManage.cpp"    "Containers/MyVector.h")