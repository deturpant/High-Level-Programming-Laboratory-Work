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

const int AR_SIZE = 10;
const int maxCount = 50;

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

void addSchool(School* school) {
    using namespace KVA;
    int count{};
    cout << "\nВведите кол-во объектов класса School: ";
    cin >> count;
    for (int i = c1; i < (c1 + count); i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        cin >> school[i];
    }
    c1 += count;
    system("pause");
    system("cls");
}
void addStudent(Student* student) {
    int count{};
    using namespace KVA;
    cout << "Введите кол-во объектов класса Student: ";
    cin >> count;
    for (int i = c2; i < (c2 + count); i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        cin >> student[i];
    }
    c2 += count;
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
void addUser(School* school, Student* student, Teacher* teacher) {
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

void printSchool(School* school) {
    using namespace KVA;
    for (int i = 0; i < c1; i++) {
        cout << "\n\nВывод информации об объектах класса School номер " << i + 1 << "\n";
        cout << school[i] << endl;
    }
    system("pause");
    cout << "\n\n";
}
void printStudent(Student* student) {
    using namespace KVA;
    for (int i = 0; i < c2; i++) {
        cout << "\n\nВывод информации об объектах класса Student номер " << i + 1 << "\n";
        cout << student[i] << endl;
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
void printUser(School* school, Student* student, Teacher* teacher) {
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

void deleteSchool(School* school) {
    using namespace KVA;
    printSchool(school);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    for (int i = (deleteNum - 1); i < (maxCount-1); i++) {
        school[i] = school[i + 1];
    }
    c1--;
    cout << "\n\n";
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
void deleteStudent(Student* student) {
    using namespace KVA;
    printStudent(student);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    for (int i = (deleteNum - 1); i < (maxCount-1); i++) {
        student[i] = student[i + 1];
    }
    c2--;
    cout << "\n\n";
}
void deleteUser(School* school, Student* student, Teacher *teacher) {
    using namespace KVA;
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
void sortSchool(School *school) {
    using namespace KVA;
    system("cls");
    for (int i = 0; i < c1 - 1; i++) {
        if (school[i] > school[i + 1]) {
            School tempSchool = school[i + 1];
            school[i + 1] = school[i];
            school[i] = tempSchool;
        }
    }
    printSchool(school);
}
void sortStudent(Student* student) {
    using namespace KVA;
    system("cls");
    for (int i = 0; i < c2 - 1; i++) {
        if (student[i] > student[i + 1]) {
            Student tempStudent = student[i + 1];
            student[i + 1] = student[i];
            student[i] = tempStudent;
        }
    }
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
void sortUser(School *school, Student *student, Teacher *teacher) {
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
int backMainMenu() {
    return 5;
}
#pragma endregion

int main() {
    using namespace KVA;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    Student* student = new Student[maxCount];
    Teacher* teacher = new Teacher[maxCount];
    School* school = new School[maxCount];
    MyMenuItem items[items_number]{ MyMenuItem{"Sqrt from 25", sqr25}, MyMenuItem{"Create Matrix", new_array}, MyMenuItem{"Out Star", star},  MyMenuItem{"Users Menu", Users}, MyMenuItem{"Exit", exitProgram} };
    MyMenu menu("Main Menu Programm.", items, items_number);
    const int runMenuUsers = 5;
    MyMenuItem items_user[runMenuUsers]{ MyMenuItem{"Add Users", addUser}, MyMenuItem{"Out Users", printUser}, MyMenuItem{"Delete Users", deleteUser}, MyMenuItem{"Sort Users", sortUser}, MyMenuItem{"Back to Main Menu", backMainMenu} };
    MyMenu menu_user("Users Menu", items_user, runMenuUsers);
    MenuManage managerOfMenu(menu, menu_user);
    while (managerOfMenu.runMainMenu()) {
        if (managerOfMenu.getMain_select() == Users()) {
            do {
                system("cls");
                managerOfMenu.runSubMenu();
                if (managerOfMenu.getSub_select() == addUser()) {
                    addUser(school, student, teacher);
                }
                else if (managerOfMenu.getSub_select() == printUser()) {
                    printUser(school, student, teacher);
                }
                else if (managerOfMenu.getSub_select() == deleteUser()) {
                    deleteUser(school, student, teacher);
                }
                else if (managerOfMenu.getSub_select() == sortUser()) {
                    sortUser(school, student, teacher);
                }
            } while (managerOfMenu.getSub_select() != backMainMenu());
            system("cls");
        }
    };
    return 0;
}