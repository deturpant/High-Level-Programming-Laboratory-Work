#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
	string m_surname;
	string m_name;
	int m_age{};
	string m_login;
	string m_password;
public:
	string getName();
	string getSurname();
	int getAge();
	string getLogin();
	string getPassword();
	void setName(string name);
	void setSurname(string name);
	void setAge(int age);
	void SetLogin(string login);
	void SetPassword(string password);
	virtual void print() = 0;
};
#endif