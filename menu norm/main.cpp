#include <iostream>
#include <cstdlib>
#include <string>
#include "MyMenu/MenuManage.h"
#include "MyMenu/MyMenu.h"
#include "MyMenu/MyMenuItem.h"
#include "Models/UserInheritance/User.h"
#include "Models/ClassRoom/School.h"
#include "Models/UserInheritance/student.h"
#include "Models/UserInheritance/Teacher.h"
#include "Containers/MySchool.h"
#include "Containers/MyStudent.h"

const int AR_SIZE = 10;
const int maxCount = 50;
const int runMenuUsers = 6;

#pragma region
int sqr25() {
    system("cls");
    std::cout << "Запущена функция вычисления корня из 25.";
    std::cout << "\nРезультат: " << sqrt(25) << "\n\n";
    return 1;
}

int new_array() {
    system("cls");
    std::cout << "Запущена функция формирования матрицы.\n\nArray:\n";
    int arr[AR_SIZE][AR_SIZE]{};
    for (int i = 0; i < AR_SIZE; i++) {
        for (int j = 0; j < AR_SIZE; j++) {
            arr[i][j] = rand() % 1000;
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << "\n\n";
    return 2;
}


int star() {
    system("cls");
    std::cout << "Запущена функция вывода звездочки.\n\n";
    std::cout << "__________________________$\n";
    std::cout << "_________________________$$$\n";
    std::cout << "________________________$$$$$\n";
    std::cout << "_______________________$$$$$$$\n";
    std::cout << "______________________$$$$$$$$$\n";
    std::cout << "_____________________$$$$$$$$$$$\n";
    std::cout << "____$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    std::cout << "______$$$$$$$$$$$$ !!! $$$$$$$$$ !!! $$$$$$$$$$$$$\n";
    std::cout << "________$$$$$$$$$$$ @ $$$$$$$$$$ @ $$$$$$$$$$$\n";
    std::cout << "__________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    std::cout << "____________$$$$$$$$$$$$$$ @ $$$$$$$$$$$\n";
    std::cout << "______________$$$$$__$$$$$$$$$$$$__$$$$\n";
    std::cout << "_______________$$$$$$$__$$$$$$__$$$$$$\n";
    std::cout << "______________$$$$$$$$$$$___$$$$$$$$$$$\n";
    std::cout << "_____________$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    std::cout << "____________$$$$$$$$$$$$_____$$$$$$$$$$$$\n";
    std::cout << "___________$$$$$$$$$$___________$$$$$$$$$$\n";
    std::cout << "__________$$$$$$$$_________________$$$$$$$$$\n";
    std::cout << "_________$$$$$$$_______________________$$$$$$\n";
    std::cout << "_______ $$$$$____________________________$$$$$\n";
    std::cout << "_______$$$_________________________________$$$$\n";
    std::cout << "______$$____________________________________$$$$\n";
    std::cout << "_____$_________________________________________$$\n\n\n";
    return 3;
}

int exitProgram() {
    system("cls");
    std::cout << "Запущена функция выхода из программы.\n\n";
    system("pause");
    exit(0);
}
const int items_number = 5;


namespace KVA {

    int c1{};
    int c2{};
    int c3{};
}

void addSchool(MySchool* school) {
    using namespace KVA;
    int count{};
    cout << "\nВведите кол-во объектов класса School: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса School:";
        School tmp_school{};
        cin >> tmp_school;
        school->addSchool(tmp_school);
    }
    system("pause");
    system("cls");
}
void addStudent(MyStudent* student) {
    int count{};
    cout << "Введите кол-во объектов класса Student: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        Student tmp_student{};
        cin >> tmp_student;
        student->addStudent(tmp_student);
    }
    system("pause");
    system("cls");
}
void addTeacher(Teacher* teacher) {
    int count{};
    using namespace KVA;
    cout << "Введите кол-во объектов класса Teacher: ";
    cin >> count;
    for (int i = c3; i < (c3 + count); i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        cin >> teacher[i];
    }
    c3 += count;
    system("pause");
    system("cls");
}
void addUser(MySchool* school, MyStudent* student, Teacher* teacher) {
    system("cls");
    using namespace KVA;
    cout << "Выберите класс для добавления:\n1. School\n2. Student\n3. Teacher\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
    case 1:
        addSchool(school);
        break;
    case 2:
        addStudent(student);
        break;
    case 3:
        addTeacher(teacher);
        break;
    }
}

void printSchool(MySchool* school) {
    int i{};
    for (School it: *school) {
        cout << "\n\nВывод информации об объектах класса School номер " << i + 1 << "\n";
        cout << it;
        i++;
    }
    system("pause");
    cout << "\n\n";
}
void printStudent(MyStudent* student) {
    int i{};
    for (Student it : *student) {
        cout << "\n\nВывод информации об объектах класса Student номер " << i + 1 << "\n";
        cout << it;
        i++;
    }
    system("pause");
    cout << "\n\n";
}
void printTeacher(Teacher* teacher) {
    using namespace KVA;
    for (int i = 0; i < c3; i++) {
        cout << "\n\nВывод информации об объектах класса Teacher номер " << i + 1 << "\n";
        cout << teacher[i] << endl;
    }
    system("pause");
    cout << "\n\n";
}
void printUser(MySchool* school, MyStudent* student, Teacher* teacher) {
    system("cls");
    cout << "Выберите класс для вывода информации:\n1. School\n2. Student\n3. Teacher\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
    case 1:
        printSchool(school);
        break;
    case 2:
        printStudent(student);
        break;
    case 3:
        printTeacher(teacher);
        break;
    }
}

void deleteSchool(MySchool* school) {
    printSchool(school);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    school->deleteSchool(deleteNum-1);
}
void deleteTeacher(Teacher* teacher) {
    using namespace KVA;
    printTeacher(teacher);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    for (int i = (deleteNum - 1); i < (maxCount-1); i++) {
        teacher[i] = teacher[i + 1];
    }
    c3--;
    cout << "\n\n";
}
void deleteStudent(MyStudent* student) {
    printStudent(student);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    student->deleteStudent(deleteNum - 1);
}
void deleteUser(MySchool* school, MyStudent* student, Teacher *teacher) {
    system("cls");
    cout << "Выберите класс для удаления информации:\n1. School\n2. Student\n3. Teacher\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
    case 1:
        deleteSchool(school);
        break;
    case 2:
        deleteStudent(student);
        break;
    case 3:
        deleteTeacher(teacher);
        break;
    }

}
void sortSchool(MySchool* school) {
    system("cls");
    school->sortSchool();
    printSchool(school);
}
void sortStudent(MyStudent* student) {
    system("cls");
    student->sortStudent();
    printStudent(student);
}
void sortTeacher(Teacher* teacher) {
    using namespace KVA;
    system("cls");
    for (int i = 0; i < c3 - 1; i++) {
        if (teacher[i] > teacher[i + 1]) {
            Teacher tempTeacher = teacher[i + 1];
            teacher[i + 1] = teacher[i];
            teacher[i] = tempTeacher;
        }
    }
    printTeacher(teacher);
}
void sortUser(MySchool *school, MyStudent *student, Teacher *teacher) {
    system("cls");
    cout << "Выберите класс для соритровки информации:\n1. School\n2. Student\n3. Teacher\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
    case 1:
        sortSchool(school);
        break;
    case 2:
        sortStudent(student);
        break;
    case 3:
        sortTeacher(teacher);
        break;
    }
}
void editSchool(MySchool* school) {
    system("cls");
    int index{};
    printSchool(school);
    cout << "Введите индекс элемента для изменения:";
    cin >> index;
    school->EditSchool(index - 1);
}
void editStudent(MyStudent* student) {
    system("cls");
    int index{};
    printStudent(student);
    cout << "Введит индекс элемента для изменения:";
    cin >> index;
    student->EditStudent(index - 1);
}
void editUser(MySchool* school, MyStudent* student) {
    system("cls");
    cout << "Выберите класс для изменения информации:\n1. School\n2. Student\n3. Teacher\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
    case 1:
        editSchool(school);
        break;
    case 2:
        editStudent(student);
        break;
    case 3:
        //sortTeacher(teacher);
        break;
    }
}


int Users() {
    return 4;
}
int addUser() {
    return 1;
}
int printUser() {
    return 2;
}
int deleteUser() {
    return 3;
}
int sortUser() {
    return 4;
}
int editUser() {
    return 5;
}
int backMainMenu() {
    return 6;
}
#pragma endregion

int main() {
    using namespace KVA;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    MyStudent* studentArray = new MyStudent;
    Teacher* teacher = new Teacher[maxCount];
    MySchool* schoolArray = new MySchool;
    MyMenuItem items[items_number]
    { 
        MyMenuItem{"Sqrt from 25", sqr25}, 

        MyMenuItem{"Create Matrix", new_array}, 
        MyMenuItem{"Out Star", star},  
        MyMenuItem{"Users Menu", Users}, 
        MyMenuItem{"Exit", exitProgram} 
    };
    MyMenu menu("Main Menu Programm.", items, items_number);
    MyMenuItem items_user[runMenuUsers]
    { 
        MyMenuItem{"Add Users", addUser}, 
        MyMenuItem{"Out Users", printUser}, 
        MyMenuItem{"Delete Users", deleteUser}, 
        MyMenuItem{"Sort Users", sortUser}, 
        MyMenuItem{"Edit Users", editUser},
        MyMenuItem{"Back to Main Menu", backMainMenu} 
    };
    MyMenu menu_user("Users Menu", items_user, runMenuUsers);
    MenuManage managerOfMenu(menu, menu_user);
    while (managerOfMenu.runMainMenu()) {
        if (managerOfMenu.getMain_select() == Users()) {
            do {
                system("cls");
                managerOfMenu.runSubMenu();
                if (managerOfMenu.getSub_select() == addUser()) {
                    addUser(schoolArray, studentArray, teacher);
                }
                else if (managerOfMenu.getSub_select() == printUser()) {
                    printUser(schoolArray, studentArray, teacher);
                }
                else if (managerOfMenu.getSub_select() == deleteUser()) {
                    deleteUser(schoolArray, studentArray, teacher);
                }
                else if (managerOfMenu.getSub_select() == sortUser()) {
                    sortUser(schoolArray, studentArray, teacher);
                }
                else if (managerOfMenu.getSub_select() == editUser()) {
                    editUser(schoolArray, studentArray);
                }
            } while (managerOfMenu.getSub_select() != backMainMenu());
            system("cls");
        }
    };
    return 0;
}