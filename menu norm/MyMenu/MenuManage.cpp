#include "MenuManage.h"
#include "/study/menu norm/menu norm/Models/ClassRoom/School.h"
#include "/study/menu norm/menu norm/Models/UserInheritance/student.h"
#include "/study/menu norm/menu norm/Models/UserInheritance/Teacher.h"
using namespace KVA;

MenuManage::MenuManage(MyMenu mainMenu, MyMenu subMenu) {
	m_mainMenu = mainMenu;
	m_subMenu = subMenu;
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
