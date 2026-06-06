#pragma once
class DynamicIntArray
{
	private:
		// Fields
		int* data;
		size_t size;
		size_t capacity;

		// Resizer
		void Resize(size_t newCapacity);

	public:
		// Constructor + Destrutor
		DynamicIntArray(size_t n);
		~DynamicIntArray();

		// Copy Constructor
		DynamicIntArray(const DynamicIntArray& other);

		// Getter + Setter
		const int& Get(int i) const;
		void Set(int i, int v);

		// Add to Array
		void PushBack(int value);

		// Copy Assignment Operator
		DynamicIntArray& operator=(const DynamicIntArray& other);

		// [] Operator Overload
		int& operator[](size_t index);
		const int& operator[](size_t index) const;

		// Size Getter
		size_t Size() const;
};