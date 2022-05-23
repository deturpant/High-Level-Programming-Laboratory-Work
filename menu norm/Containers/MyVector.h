#include <iostream>
using namespace std;

template<typename T>
class MyVector {
public:
	class Iterator {
		friend class MyVector;
	public:
		Iterator(const Iterator& it) : m_vector_i(it.m_vector_i) {}
		bool operator==(const Iterator& it) const {
			return m_vector_i == it.m_vector_i;
		}
		bool operator!=(const Iterator& it) const {
			return m_vector_i != it.m_vector_i;
		}
		Iterator& operator++() {
			++m_vector_i;
			return *this;
		}
		T& operator*() const {
			return *m_vector_i;
		}

	private:
		T* m_vector_i{};
		Iterator(T* p) : m_vector_i(p) {}
	};
	typedef Iterator iterator;
	typedef Iterator const_iterator;
	MyVector() {
		initVector();
	}
	MyVector(const T vectorr) : MyVector() {
		addVector(vectorr);
	}
	void addVector(const T vectorr) {
		T* m_tmp = m_vector;
		m_vector = new T[++m_len]{};
		for (size_t i{}; i < m_len - 1; i++) {
			m_vector[i] = m_tmp[i];
		}
		m_vector[m_len - 1] = vectorr;
		m_end = m_vector + m_len;
		delete[] m_tmp;
	}
	void deleteVector(int index) {
		T* m_tmp = m_vector;
		m_vector = new T[--m_len]{};
		int i{};
		while (i != index) {
			m_vector[i] = m_tmp[i];
		}
		for (int j = index; j < m_len; j++) {
			m_vector[j] = m_tmp[j + 1];
		}
		m_end = m_vector + m_len;
		delete[] m_tmp;
	}
	void sortVector() {
		for (size_t j{}; j < m_len - 1; j++) {
			for (size_t i{}; i < m_len - 1; i++) {
				if (m_vector[i] > m_vector[i + 1]) {
					T tempVector = m_vector[i + 1];
					m_vector[i + 1] = m_vector[i];
					m_vector[i] = tempVector;
				}
			}
		}
	}
	void editVector(int index) {
		cout << "Введите новые данные:";
		cin >> m_vector[index];
		cout << "Данные изменены.\n";
		system("pause");
	}
	T& operator[](size_t index) {
		return m_vector[index % m_len];
	}
	iterator begin() {
		return iterator(m_vector);
	}
	iterator end() {
		return iterator(m_end);
	}
	const_iterator begin() const {
		return const_iterator(m_vector);
	}
	const_iterator end() const {
		return const_iterator(m_end);
	}
	size_t getLen() {
		return m_len;
	}
	void erase() {
		delete[] m_vector;
		initVector();
	}
	friend ostream& operator<<(ostream& out, const MyVector<T>& vectorr) {
		out << vectorr.m_vector;
		return out;
	}
private:
	size_t m_len{};
	T* m_vector{};
	T* m_end;
	void initVector() {
		m_len = 0;
		m_vector = new T[m_len];
		m_end = m_vector + 1;
	}
};
