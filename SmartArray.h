#pragma once

template <class T,int sz >
class SmartArray
{
private:
	T* mas;
	int size;
public:
	SmartArray();
	void show_array();
};

template<class T,int sz>
SmartArray<T,sz>::SmartArray()
{
	this->mas = new T[sz];
	for (int i = 0; i < sz; i++)
		mas[i] = (T)i/2;
	this->size = sz;
}

template <class T,int sz>
void SmartArray<T,sz>::show_array()
{
	for (int i = 0; i < size; i++)
		
		std::cout << mas[i] << ' ';
		std::cout << std::endl;
}