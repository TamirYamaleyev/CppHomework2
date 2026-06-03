#include "DynamicIntArray.h"
#include <iostream>

DynamicIntArray::DynamicIntArray(size_t n) 
{
	size = n;
	capacity = n;
	data = new int[capacity];

	for (size_t i = 0; i < size; i++) 
	{
		data[i] = 0;
	}

	std::cout << "Created an array with size: " << n << std::endl;
}

DynamicIntArray::~DynamicIntArray() 
{
std::cout << "Deleting array" << std::endl;
	delete[] data;
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& other) 
{
	std::cout << "Copying array" << std::endl;

	size = other.size;
	capacity = other.capacity;
	data = new int[capacity];

	for (size_t i = 0; i < size; i++)
	{
		data[i] = other.data[i];
	}
}

void DynamicIntArray::Resize(size_t newCapacity)
{
	int* newData = new int[newCapacity];

	for (size_t i = 0; i < size; i++) 
	{
		newData[i] = data[i];
	}

	delete[] data;
	data = newData;
	capacity = newCapacity;
}

const int& DynamicIntArray::Get(int i) const
{
	return data[i];
}

void DynamicIntArray::Set(int i, int v)
{
	data[i] = v;
}

void DynamicIntArray::PushBack(int value)
{
	if (size >= capacity)
	{
		size_t newCapacity = (capacity == 0) ? 1 : capacity * 2;
		Resize(newCapacity);
	}

	data[size] = value;
	size++;
}

DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& other)
{
	if (this == &other)
	{
		return *this;
	}

	delete[] data;

	size = other.size;
	capacity = other.capacity;

	data = new int[capacity];

	for (size_t i = 0; i < size; i++)
	{
		data[i] = other.data[i];
	}

	return *this;
}

int& DynamicIntArray::operator[](size_t index)
{
	return data[index];
}

const int& DynamicIntArray::operator[](size_t index) const
{
	return data[index];
}

size_t DynamicIntArray::Size() const
{
	return size;
}