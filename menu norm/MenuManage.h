#ifndef MENUMANAGE_MENUMANAGE_H
#define MENUMANAGE_MENUMANAGE_H

#include "MyMenu/MyMenu.h"
#include "MyMenu/MyMenuItem.h"
#include "Models/ClassRoom/School.h"
#include "Models/UserInheritance/student.h"
#include "Models/UserInheritance/Teacher.h"

using namespace KVA;
const int maxCount = 50;
class MenuManage {
public:
	MenuManage(MyMenu mainMenu, MyMenu subMenu, School* school, Student* student, Teacher* teacher);
	int runMainMenu();
	int runSubMenu();
	int getMain_select();
	int getSub_select();
	School getSchool();
	Student getStudent();
	Teacher getTeacher();
private:
	MyMenu m_mainMenu;
	MyMenu m_subMenu;
	School* m_school = new School[maxCount];
	Student* m_student = new Student[maxCount];
	Teacher* m_teacher = new Teacher[maxCount];

};

#endif