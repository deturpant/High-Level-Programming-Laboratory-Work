#include "School.h"
#include <iostream>
#include <string>
using namespace std;

School::School() {

}

School::School(string nameClass, string smena, string profSub) {
	m_nameClass = nameClass;
	m_smena = smena;
	m_profSub = profSub;
}

string School::getNameClass() {
	return m_nameClass;
}
string School::getProfSub() {
	return m_profSub;
}
string School::getSmena() {
	return m_smena;
}

void School::setNameClass(string nameClass) {
	m_nameClass = nameClass;
}
void School::setProfSub(string profSub) {
	m_profSub = profSub;
}
void School::setSmena(string smena) {
	m_smena = smena;
}

void School::print() {
	cout << "Name of School Class: " << m_nameClass << "\n";
	cout << "Prof Subject: " << m_profSub << "\n";
	cout << "Smena: " << m_smena << "\n";
}

ostream& operator<<(ostream& out, School& obj) {
	obj.print();
	return out;
}

istream& operator>>(istream& in, School& obj) {
	cout << "\n¬ведите название класса: ";
	in >> obj.m_nameClass;
	cout << "¬ведите профильный предмет: ";
	in >> obj.m_profSub;
	cout << "¬ведите смену класса: ";
	in >> obj.m_smena;
	cout << endl;
	return in;
}

bool School::operator==(const School& other) {
	return m_nameClass == other.m_nameClass && m_profSub == other.m_profSub && m_smena == other.m_smena;
}

bool School::operator>(const School& other) {
	return m_nameClass[0] > other.m_nameClass[0];
}
School& School::operator=(const School& other) {
	m_nameClass = other.m_nameClass;
	m_profSub = other.m_profSub;
	m_smena = other.m_smena;
	return *this;
}