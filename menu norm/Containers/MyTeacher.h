#include <iostream>
#include "Models/UserInheritance/Teacher.h"
using namespace std;

class MyTeacher {
public:
	class TeacherIterator {
		friend class MyTeacher;
	public:
		TeacherIterator(const TeacherIterator& it) : m_teacher(it.m_teacher) {}
		bool operator==(const TeacherIterator& it) const {
			return m_teacher == it.m_teacher;
		}
		bool operator!=(const TeacherIterator& it) const {
			return m_teacher != it.m_teacher;
		}
		TeacherIterator& operator++() {
			++m_teacher;
			return *this;
		}
		Teacher& operator*() const {
			return *m_teacher;
		}

	private:
		Teacher* m_teacher{};
		TeacherIterator(Teacher* p) : m_teacher(p) {}
	};
	typedef TeacherIterator iterator;
	typedef TeacherIterator const_iterator;
	MyTeacher() {
		initTeacher();
	}
	MyTeacher(const Teacher teacher) : MyTeacher() {
		addTeacher(teacher);
	}
	void addTeacher(const Teacher teacher) {
		Teacher* m_tmp = m_teachers;
		m_teachers = new Teacher[++m_len]{};
		for (size_t i{}; i < m_len - 1; i++) {
			m_teachers[i] = m_tmp[i];
		}
		m_teachers[m_len - 1] = teacher;
		m_end = m_teachers + m_len;
		delete m_tmp;
	}
	void deleteTeacher(int index) {
		Teacher* m_tmp = m_teachers;
		m_teachers = new Teacher[--m_len]{};
		int i{};
		while (i != index) {
			m_teachers[i] = m_tmp[i];
		}
		for (int j = index; j < m_len; j++) {
			m_teachers[j] = m_tmp[j + 1];
		}
		m_end = m_teachers + m_len;
		delete[] m_tmp;
	}
	void sortTeacher() {
		for (size_t j{}; j < m_len - 1; j++) {
			for (size_t i{}; i < m_len - 1; i++) {
				if (m_teachers[i] > m_teachers[i + 1]) {
					Teacher tempTeacher = m_teachers[i + 1];
					m_teachers[i + 1] = m_teachers[i];
					m_teachers[i] = tempTeacher;
				}
			}
		}
	}
	void editTeacher(int index) {
		cout << "Введите новые данные:";
		cin >> m_teachers[index];
		cout << "Данные изменены.\n";
		system("pause");
	}
	Teacher& operator[](size_t index) {
		return m_teachers[index % m_len];
	}
	iterator begin() {
		return iterator(m_teachers);
	}
	iterator end() {
		return iterator(m_end);
	}
	const_iterator begin() const {
		return const_iterator(m_teachers);
	}
	const_iterator end() const {
		return const_iterator(m_end);
	}
	size_t getLen() {
		return m_len;
	}
	void erase() {
		delete[] m_teachers;
		initTeacher();
	}
	friend ostream& operator<<(ostream& out, const MyTeacher& teacher);
private:
	size_t m_len{};
	Teacher* m_teachers{};
	Teacher* m_end;
	void initTeacher() {
		m_len = 0;
		m_teachers = new Teacher[m_len];
		m_end = m_teachers + 1;
	}
};

ostream& operator<<(ostream& out, const MyTeacher& teacher) {
	out << teacher.m_teachers;
	return out;
}