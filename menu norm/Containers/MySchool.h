#include <iostream>
#include "Models/ClassRoom/School.h"
using namespace std;

class MySchool {
public:
	class SchoolIterator {
		friend class MySchool;
	public:
		SchoolIterator(const SchoolIterator& it) : m_school(it.m_school) {}
		bool operator==(const SchoolIterator& it) const {
			return m_school == it.m_school;
		}
		bool operator!=(const SchoolIterator& it) const {
			return m_school != it.m_school;
		}
		SchoolIterator& operator++() {
			++m_school;
			return *this;
		}
		School& operator*() const {
			return *m_school;
		}
	private:
		School* m_school{};
		SchoolIterator(School* p) : m_school(p) {}
	};

	typedef SchoolIterator iterator;
	typedef SchoolIterator const_iterator;

	MySchool() {
		initSchool();
	}
	MySchool(const School school) : MySchool() {
		addSchool(school);
	}
	void addSchool(const School school) {
		School* m_tmp = m_schools;
		m_schools = new School[++m_len]{};
		for (size_t i{}; i < (m_len-1); i++) {
			m_schools[i] = m_tmp[i];
		}
		m_schools[m_len - 1] = school;
		m_end = m_schools + m_len;
		delete[] m_tmp;
	}
	void deleteSchool(int index) {
		School* m_tmp = m_schools;
		m_schools = new School[--m_len]{};
		int i{};
		while (i != index) {
			m_schools[i] = m_tmp[i];
			i++;
		}
		for (int j = index; j < m_len; j++) {
			m_schools[j] = m_tmp[j+1];
		}
		m_end = m_schools + m_len;
		delete[] m_tmp;
	}
	void sortSchool() {
		for (size_t j{}; j < m_len - 1; j++) {
			for (size_t i{}; i < m_len - 1; i++) {
				if (m_schools[i] > m_schools[i + 1]) {
					School tempSchool = m_schools[i + 1];
					m_schools[i + 1] = m_schools[i];
					m_schools[i] = tempSchool;
				}
			}
		}
	}
	void EditSchool(int index) {
		cout << "Введите новые данные:";
		cin >> m_schools[index];
		cout << "Данные изменены.\n";
		system("pause");
	}
///
	School& operator[](size_t index) {
		return m_schools[index % m_len];
	}
	iterator begin() {
		return iterator(m_schools);
	}
	iterator end() {
		return iterator(m_end);
	}
	const_iterator begin() const {
		return const_iterator(m_schools);
	}
	const_iterator end() const {
		return const_iterator(m_end);
	}
	size_t getLen() {
		return m_len;
	}
	void erase() {
		delete[] m_schools;
		initSchool();
	}
	friend ostream& operator<<(ostream& out, const MySchool& school);
private:
	size_t m_len{};
	School* m_schools{};
	School* m_end;
	void initSchool() {
		m_len = 0;
		m_schools = new School[m_len];
		m_end = m_schools + 1;
	}
};
ostream& operator<<(ostream& out, const MySchool& school) {
	out << school.m_schools;
	return out;
}