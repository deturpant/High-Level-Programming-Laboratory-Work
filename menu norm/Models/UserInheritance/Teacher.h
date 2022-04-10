#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string>
#include "User.h"
using namespace std;

class Teacher : public User {
private:
	string m_subject;
public:
	Teacher();
	Teacher(string name, string surname, string subject);
	string getSubject();
	void setSubject(string subject);
	void print();
	friend ostream& operator<<(ostream& out, Teacher& obj);
	friend istream& operator>>(istream& in, Teacher& obj);
	bool operator==(const Teacher& other);
	bool operator>(const Teacher& other);
	Teacher& operator=(const Teacher& other);
};

#endif