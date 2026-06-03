#include "DynamicIntArray.h"

DynamicIntArray::DynamicIntArray(size_t n) 
{
	size = n;
	capacity = n;
	data = new int[capacity];

	for (size_t i = 0; i < size; i++) 
	{
		data[i] = 0;
	}
}

DynamicIntArray::~DynamicIntArray() 
{
	delete[] data;
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

int& DynamicIntArray::Get(int i) 
{
	return data[i];
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