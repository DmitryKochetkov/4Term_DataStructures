#pragma once
template <typename T>
ref class ArraySearch
{
private:
	int size;
	T* m;
public:
	ArraySearch();
	~ArraySearch();
	void Add(T x, int pos);
	void Add(T x);
	void Remove(int pos);
	int LinearSearch(T x);
	int BareerSearch(T x);
	int BinarySearch(T x);
	int BinarySearch_GoldenRatio(T x);
};

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
inline int ArraySearch<T>::LinearSearch(T x)
{
	for (int i = 0; i < size; i++)
		if (m[i] == x)
			return i;
	return -1;
}

template<typename T>
inline int ArraySearch<T>::BareerSearch(T x)
{
	return 0;
}

template<typename T>
inline int ArraySearch<T>::BinarySearch(T x)
{
	int left = 0;
	int right = size;
	int mid;
	return 0;
}

template<typename T>
inline int ArraySearch<T>::BinarySearch_GoldenRatio(T x)
{
	return 0;
}
