#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher() {

}
Teacher::Teacher(string name, string surname, string subject) {
	m_name = name;
	m_surname = surname;
	m_subject = subject;
}

string Teacher::getSubject() {
	return m_subject;
}

void Teacher::setSubject(string subject) {
	m_subject = subject;
}

void Teacher::print() {
	cout << "Surname: " << m_surname << "\n";
	cout << "Name: " << m_name << "\n";
	cout << "Subject: " << m_subject << "\n";
}

ostream& operator<<(ostream& out, Teacher& obj) {
	obj.print();
	return out;
}

istream& operator>>(istream& in, Teacher& obj) {
	cout << "\n¬ведите фамилию: ";
	in >> obj.m_surname;
	cout << "¬ведите им€: ";
	in >> obj.m_name;
	cout << "¬ведите предмет учител€: ";
	in >> obj.m_subject;
	cout << endl;
	return in;
}

bool Teacher::operator==(const Teacher& other) {
	return m_surname == other.m_surname && m_name == other.m_name && m_subject == other.m_subject;
}

bool Teacher::operator>(const Teacher& other) {
	return m_surname[0] > other.m_surname[0];
}

Teacher& Teacher::operator=(const Teacher& other) {
	m_surname = other.m_surname;
	m_name = other.m_name;
	m_subject = other.m_subject;
	return *this;
}