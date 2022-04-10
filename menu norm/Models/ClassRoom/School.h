#ifndef SCHOOL_H
#define SCHOOL_H
#include <string>
using namespace std;

class School {
private:
	string m_nameClass;
	string m_smena;
	string m_profSub;
public:
	School();
	School(string nameClass, string smena, string profSub);
	string getNameClass();
	string getSmena();
	string getProfSub();
	void setNameClass(string nameClass);
	void setSmena(string smena);
	void setProfSub(string profSub);
	void print();
	friend ostream& operator<<(ostream& out, School& obj);
	friend istream& operator>>(istream& in, School& obj);
	bool operator==(const School& other);
	bool operator>(const School& other);
	School& operator=(const School& other);
};

#endif
