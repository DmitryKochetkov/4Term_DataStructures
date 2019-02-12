#pragma once
template <typename T>
ref class ArraySearch
{
private:
	int size;
	T* m;
	void quicksort(int l, int r);
public:
	ArraySearch();
	~ArraySearch();
	void Add(T x, int pos);
	void Add(T x);
	void Remove(int pos);
	void Sort();
	int LinearSearch(T x);
	int BarrierSearch(T x);
	int BinarySearch(T x);
	int BinarySearch_GoldenRatio(T x);
};

template<typename T>
inline void ArraySearch<T>::quicksort(int l, int r)
{
	int i = l; int j = r;
	int mid = m[(l + r) / 2];

	do {
		while (m[i] < mid) i++;
		while (m[i] > mid) j++;

		if (i <= j) {
			if (m[i] > m[j])
			{
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	} while (i <= j);

	if (i < r)
		quicksort(i, r);
	if (l < j)
		quicksort(l, j);
}

template<typename T>
inline ArraySearch<T>::ArraySearch()
{
	size = 0;
	m = new T[size];
}

template<typename T>
inline ArraySearch<T>::~ArraySearch()
{
	delete[] m;
}

template<typename T>
inline void ArraySearch<T>::Add(T x, int pos)
{
	if (pos > size)
		return;
	T* temp = new T[size + 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = m[i];
	}
	temp[pos] = x;
	for (int i = pos + 1; i < size + 1; i++)
	{
		temp[i] = m[i];
	}
	delete[] m;
	m = temp;
	size++;
}

template<typename T>
inline void ArraySearch<T>::Add(T x)
{
	Add(x, size);
}

template<typename T>
inline void ArraySearch<T>::Remove(int pos)
{
	if (pos > size)
		return;
	T* temp = new T[size - 1];
	for (int i = 0; i < pos; i++)
		temp[i] = m[i];
	for (int i = pos + 1; i < size; i++)
		temp[i] = m[i];
	delete[] m;
	m = temp;
	size--;
}

template<typename T>
inline void ArraySearch<T>::Sort()
{
	quicksort(0, size - 1);
}

template<typename T>
inline int ArraySearch<T>::LinearSearch(T x)
{
	for (int i = 0; i < size; i++)
		if (m[i] == x)
			return i;
	return -1;
}

template<typename T>
inline int ArraySearch<T>::BarrierSearch(T x)
{
	Add(x);
	int i = 0;
	while (m[i] != x)
		i++;
	if (i != size)
		return i;
	else return -1;
}

template<typename T>
inline int ArraySearch<T>::BinarySearch(T x)
{
	Sort();
	int left = 0;
	int right = size;
	int mid;
	return 0;
}

template<typename T>
inline int ArraySearch<T>::BinarySearch_GoldenRatio(T x)
{
	Sort();
	return 0;
}
