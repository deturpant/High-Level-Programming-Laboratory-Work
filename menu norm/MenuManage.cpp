#include "MenuManage.h"
#include "Models/ClassRoom/School.h"
#include "Models/UserInheritance/student.h"
#include "Models/UserInheritance/Teacher.h"
using namespace KVA;

MenuManage::MenuManage(MyMenu mainMenu, MyMenu subMenu, School* school, Student* student, Teacher* teacher) {
	m_mainMenu = mainMenu;
	m_subMenu = subMenu;
	m_school = school;
	m_student = student;
	m_teacher = teacher;
}
int MenuManage::runMainMenu() {
	MenuManage::m_mainMenu.runCommand();
	return 1;
}
int MenuManage::runSubMenu() {
	MenuManage::m_subMenu.runCommand();
	return 1;
}
int MenuManage::getMain_select() {
	return MenuManage::m_mainMenu.getSelect();
}
int MenuManage::getSub_select() {
	return MenuManage::m_subMenu.getSelect();
}
School MenuManage::getSchool() {
	return *m_school;
}
Student MenuManage::getStudent() {
	return *m_student;
}
Teacher MenuManage::getTeacher() {
	return *m_teacher;
}
