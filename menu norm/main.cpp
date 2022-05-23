#include <iostream>
#include <cstdlib>
#include <string>
#include "../menu norm/MyMenu/MenuManage.h"
#include "../menu norm/MyMenu/MyMenu.h"
#include "../menu norm/MyMenu/MyMenuItem.h"
#include "../menu norm/Models/UserInheritance/User.h"
#include "../menu norm/Models/ClassRoom/School.h"
#include "../menu norm/Models/UserInheritance/student.h"
#include "../menu norm/Models/UserInheritance/Teacher.h"
#include "../menu norm/Containers/MyVector.h"

const int AR_SIZE = 10;
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



void addSchool(MyVector<School>* school) {
    int count{};
    cout << "\nВведите кол-во объектов класса School: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса School:";
        School tmp_school{};
        cin >> tmp_school;
        school->addVector(tmp_school);
    }
    system("pause");
    system("cls");
}
void addStudent(MyVector<Student>* student) {
    int count{};
    cout << "Введите кол-во объектов класса Student: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        Student tmp_student{};
        cin >> tmp_student;
        student->addVector(tmp_student);
    }
    system("pause");
    system("cls");
}
void addTeacher(MyVector<Teacher>* teacher) {
    int count{};
    cout << "Введите кол-во объектов класса Teacher: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        Teacher tmp_teacher{};
        cin >> tmp_teacher;
        teacher->addVector(tmp_teacher);
    }
    system("pause");
    system("cls");
}
void addUser(MyVector<School>* school, MyVector<Student>* student, MyVector<Teacher>* teacher) {
    system("cls");
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

void printSchool(MyVector<School>* school) {
    int i{};
    for (School it: *school) {
        cout << "\n\nВывод информации об объектах класса School номер " << i + 1 << "\n";
        cout << it;
        i++;
    }
    system("pause");
    cout << "\n\n";
}
void printStudent(MyVector<Student>* student) {
    int i{};
    for (Student it : *student) {
        cout << "\n\nВывод информации об объектах класса Student номер " << i + 1 << "\n";
        cout << it;
        i++;
    }
    system("pause");
    cout << "\n\n";
}
void printTeacher(MyVector<Teacher>* teacher) {
    int i{};
    for (Teacher it: *teacher) {
        cout << "\n\nВывод информации об объектах класса Teacher номер " << i + 1 << "\n";
        cout << it << endl;
        i++;
    }
    system("pause");
    cout << "\n\n";
}
void printUser(MyVector<School>* school, MyVector<Student>* student, MyVector<Teacher>* teacher) {
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

void deleteSchool(MyVector<School>* school) {
    printSchool(school);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    school->deleteVector(deleteNum-1);
    cout << "Удаление завершено.";
    system("pause");
}
void deleteTeacher(MyVector<Teacher>* teacher) {
    printTeacher(teacher);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    teacher->deleteVector(deleteNum - 1);
    cout << "Удаление завершено.";
    system("pause");
}
void deleteStudent(MyVector<Student>* student) {
    printStudent(student);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    student->deleteVector(deleteNum - 1);
    cout << "Удаление завершено.";
    system("pause");
}
void deleteUser(MyVector<School>* school, MyVector<Student>* student, MyVector<Teacher> *teacher) {
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
void sortSchool(MyVector<School>* school) {
    system("cls");
    school->sortVector();
    printSchool(school);
}
void sortStudent(MyVector<Student>* student) {
    system("cls");
    student->sortVector();
    printStudent(student);
}
void sortTeacher(MyVector<Teacher>* teacher) {
    system("cls");
    teacher->sortVector();
    printTeacher(teacher);
}
void sortUser(MyVector<School> *school, MyVector<Student>* student, MyVector<Teacher> *teacher) {
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
void editSchool(MyVector<School>* school) {
    system("cls");
    int index{};
    printSchool(school);
    cout << "Введите индекс элемента для изменения:";
    cin >> index;
    school->editVector(index - 1);
}
void editStudent(MyVector<Student>* student) {
    system("cls");
    int index{};
    printStudent(student);
    cout << "Введит индекс элемента для изменения:";
    cin >> index;
    student->editVector(index - 1);
}
void editTeacher(MyVector<Teacher>* teacher) {
    system("cls");
    int index{};
    printTeacher(teacher);
    cout << "Введит индекс элемента для изменения:";
    cin >> index;
    teacher->editVector(index - 1);
}
void editUser(MyVector<School>* school, MyVector<Student>* student, MyVector<Teacher>* teacher) {
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
        editTeacher(teacher);
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
    MyVector<Student>* studentArray = new MyVector<Student>;
    MyVector<Teacher>* teacherArray = new MyVector<Teacher>;
    MyVector<School>* schoolArray = new MyVector<School>;
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
                    addUser(schoolArray, studentArray, teacherArray);
                }
                else if (managerOfMenu.getSub_select() == printUser()) {
                    printUser(schoolArray, studentArray, teacherArray);
                }
                else if (managerOfMenu.getSub_select() == deleteUser()) {
                    deleteUser(schoolArray, studentArray, teacherArray);
                }
                else if (managerOfMenu.getSub_select() == sortUser()) {
                    sortUser(schoolArray, studentArray, teacherArray);
                }
                else if (managerOfMenu.getSub_select() == editUser()) {
                    editUser(schoolArray, studentArray, teacherArray);
                }
            } while (managerOfMenu.getSub_select() != backMainMenu());
            system("cls");
        }
    };
    return 0;
}