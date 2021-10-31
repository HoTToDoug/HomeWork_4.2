#include <iostream>
#include <vector>
#include<cassert>
#include <algorithm>

using namespace std;

class ArInt {
private:
	int* m_data;
	int m_lenght;
public:
	ArInt(int lenght) : m_lenght(lenght) {
		m_data = new int[lenght];
	};
	~ArInt() {
		delete[] m_data;
	};
	int size() const {
		return m_lenght;
	};
	int& operator[] (int index) {
		return m_data[index];
	};
	int d_last() {
		for (int i = m_lenght; i > 0; i--) {
			if (m_data[i] != 0)
			{
				m_data[i] = 0;
			};
			break;
		};
	};
	int d_first() {
		for (int i = 0; i < m_lenght; i++) {
			if (m_data[i] != 0)
			{
				m_data[i] = 0;
			};
			break;
		};
	};
	int a_sort() {
		for (int i = 0; i < (m_lenght - 1); ++i) {
			
			int smallestIndex = i;

			for (int a = i + 1; a < m_lenght; a++) {
				
				if (m_data[a] < m_data[smallestIndex]);

				smallestIndex = a;
			};

			swap(m_data[i], m_data[smallestIndex]);
		};
	};
	int print() {
		for (int i = 0; i < m_lenght; i++) {
			if (m_data[i] != 0) {
				cout << m_data[i];
			};
		};
	};
};

int main()
{
	ArInt arr(10);
	cout << arr.size() << endl;
	for (size_t i = 0; i < 10; i++) {
		arr[i] = i;
	};
	arr.print();

	return 0;
};
