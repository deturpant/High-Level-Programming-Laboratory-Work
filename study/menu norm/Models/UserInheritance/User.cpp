#include "User.h"
#include <iostream>
#include <string>
using namespace std;


int User::getAge() {
	return m_age;
}
string User::getLogin() {
	return m_login;
}
string User::getName() {
	return m_name;
}
string User::getPassword() {
	return m_password;
}
string User::getSurname() {
	return m_surname;
}

void User::setAge(int age) {
	m_age = age;
}
void User::SetLogin(string login) {
	m_login = login;
}
void User::setName(string name) {
	m_name = name;
}
void User::SetPassword(string password) {
	m_password = password;
}
void User::setSurname(string surname) {
	m_surname = surname;
}

void User::print() {
	cout << "Surname: " << m_surname << "\n";
	cout << "Name: " << m_name << "\n";
	cout << "Age: " << m_age << "\n";
	cout << "Login: " << m_login << "\n";
	cout << "Password: " << m_password << "\n";
}