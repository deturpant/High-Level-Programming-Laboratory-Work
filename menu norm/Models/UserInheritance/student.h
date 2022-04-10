#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "User.h"
using namespace std;

class Student : public User {
private:
	string m_nameClass;
	int m_grade{};
public:
	Student();
	Student(string name, string surname, int grade, string nameClass);
	void setGrade(int grade);
	void setNameClass(string nameClass);
	string getNameClass();
	int getGrade();
	void print();
	friend ostream& operator<<(ostream& out, Student& obj);
	friend istream& operator>>(istream& in, Student& obj);
	bool operator==(const Student& other);
	bool operator>(const Student& other);
	Student& operator=(const Student& other);
};

#endif