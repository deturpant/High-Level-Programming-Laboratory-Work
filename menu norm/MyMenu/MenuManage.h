#ifndef MENUMANAGE_MENUMANAGE_H
#define MENUMANAGE_MENUMANAGE_H

#include "MyMenu.h"
#include "MyMenuItem.h"
#include "/study/menu norm/menu norm/Models/ClassRoom/School.h"
#include "/study/menu norm/menu norm/Models/UserInheritance/student.h"
#include "/study/menu norm/menu norm/Models/UserInheritance/Teacher.h"

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