#include <iostream>
#include "Models/UserInheritance/Student.h"
using namespace std;

class MyStudent {
public:
	class StudentIterator {
		friend class MyStudent;
	public:
		StudentIterator(const StudentIterator& it) : m_student(it.m_student) {}
		bool operator==(const StudentIterator& it) const {
			return m_student == it.m_student;
		}
		bool operator !=(const StudentIterator& it) const {
			return m_student != it.m_student;
		}
		StudentIterator& operator++() {
			++m_student;
			return *this;
		}
		Student& operator*() const {
			return *m_student;
		}
	private:
		Student* m_student{};
		StudentIterator(Student *p) : m_student(p) {}
	};
	typedef StudentIterator iterator;
	typedef StudentIterator const_iterator;

	MyStudent() {
		initStudent();
	}
	MyStudent(const Student student) : MyStudent() {
		addStudent(student);
	}
	void addStudent(const Student student) {
		Student* m_tmp = m_students;
		m_students = new Student[++m_len]{};
		for (size_t i{}; i < m_len - 1; i++) {
			m_students[i] = m_tmp[i];
		}
		m_students[m_len - 1] = student;
		m_end = m_students + m_len;
		delete[] m_tmp;
	}
	void deleteStudent(int index) {
		Student* m_tmp = m_students;
		m_students = new Student[--m_len]{};
		int i{};
		while (i != index) {
			m_students[i] = m_tmp[i];
			i++;
		}
		for (int j = index; j < m_len; j++) {
			m_students[j] = m_tmp[j + 1];
		}
		m_end = m_students + m_len;
		delete[] m_tmp;
	}
	void sortStudent() {
		for (size_t j{}; j < m_len - 1; j++) {
			for (size_t i{}; i < m_len - 1; i++) {
				if (m_students[i] > m_students[i + 1]) {
					Student tmpStudent = m_students[i + 1];
					m_students[i + 1] = m_students[i];
					m_students[i] = tmpStudent;
				}
			}
		}
	}
	void EditStudent(int index) {
		cout << "Введите новые данные:";
		cin >> m_students[index];
		cout << "Данные изменены.";
		system("pause");
	}
	Student& operator[](size_t index) {
		return m_students[index & m_len];
	}
	iterator begin() {
		return iterator(m_students);
	}
	iterator end() {
		return iterator(m_end);
	}
	const_iterator begin() const {
		return const_iterator(m_students);
	}
	const_iterator end() const {
		return const_iterator(m_end);
	}
	size_t getLen() {
		return m_len;
	}
	void erase() {
		delete[] m_students;
		initStudent();
	}
	friend ostream& operator<<(ostream& out, const MyStudent& student);
private:
	size_t m_len{};
	Student* m_students{};
	Student* m_end;
	void initStudent() {
		m_len = 0;
		m_students = new Student[m_len];
		m_end = m_students + 1;
	}
};

ostream& operator<<(ostream& out, const MyStudent& student) {
	out << student.m_students;
	return out;
}