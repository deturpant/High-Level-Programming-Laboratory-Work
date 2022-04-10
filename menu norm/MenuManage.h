#ifndef MENUMANAGE_MENUMANAGE_H
#define MENUMANAGE_MENUMANAGE_H

#include "MyMenu/MyMenu.h"
#include "MyMenu/MyMenuItem.h"
#include "Models/ClassRoom/School.h"
#include "Models/UserInheritance/student.h"
#include "Models/UserInheritance/Teacher.h"

using namespace KVA;
class MenuManage {
public:
	MenuManage(MyMenu mainMenu, MyMenu subMenu);
	int runMainMenu();
	int runSubMenu();
	int getMain_select();
	int getSub_select();
private:
	MyMenu m_mainMenu;
	MyMenu m_subMenu;

};

#endif