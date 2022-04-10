#include "student.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student(){
}
Student::Student(string surname, string name, int grade, string nameClass) {
	m_name = name;
	m_surname = surname;
	m_grade = grade;
	m_nameClass = nameClass;
}

void Student::setGrade(int grade) {
	m_grade = grade;
}
void Student::setNameClass(string nameClass) {
	m_nameClass = nameClass;
}
int Student::getGrade() {
	return m_grade;
}
string Student::getNameClass() {
	return m_nameClass;
}
void Student::print() {
	cout << "Surname: " << m_surname << "\n";
	cout << "Name: " << m_name << "\n";
	cout << "Name Class: " << m_nameClass << "\n";
	cout << "Grade: " << m_grade << "\n";
}
ostream& operator<<(ostream& out, Student& obj) {
	obj.print();
	return out;
}

istream& operator>>(istream& in, Student& obj) {
	cout << "\n¬ведите фамилию: ";
	in >> obj.m_surname;
	cout << "¬ведите им€: ";
	in >> obj.m_name;
	cout << "¬ведите название класса: ";
	in >> obj.m_nameClass;
	cout << "¬ведите отметку: ";
	in >> obj.m_grade;
	cout << endl;
	return in;
}
bool Student::operator==(const Student& other) {
	return m_surname == other.m_surname && m_name == other.m_name && m_nameClass == other.m_nameClass && m_grade == other.m_grade;
}
bool Student::operator>(const Student& other) {
	return m_surname[0] > other.m_surname[0];
}

Student& Student::operator=(const Student& other) {
	m_surname = other.m_surname;
	m_name = other.m_name;
	m_nameClass = other.m_nameClass;
	m_grade = other.m_grade;
	return *this;
}