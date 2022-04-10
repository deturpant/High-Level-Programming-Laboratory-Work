#include "MyMenu.h"
#include <iostream>

namespace KVA {

    MyMenu::MyMenu(char* title, MyMenuItem* items, size_t count) : m_title(title), m_items(items), m_count(count) {}
    MyMenu::MyMenu() {};

    int MyMenu::getSelect() const {
        return m_select;
    }

    bool MyMenu::isRun() const {
        return m_running;
    }

    size_t MyMenu::getCount() const {
        return m_count;
    }

    char *MyMenu::getTitle() {
        return m_title;
    }

    MyMenuItem *MyMenu::getItems() {
        return m_items;
    }

    void MyMenu::print() {
        std::cout << m_title << "\n";
        for (size_t i{}; i < m_count; ++i) {
            std::cout << i + 1 << ". ";
            m_items[i].print();
            std::cout << std::endl;
        }
    }

    int MyMenu::runCommand() {
        print();
        std::cout << "\n   Select >> ";
        std::cin >> m_select;
        return m_items[m_select - 1].run();
    }
    void MyMenu::setMenuPtr(int *ptr) {
        m_ptr = ptr;
    }
}