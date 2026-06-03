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

		// Getter + Setter
		int& Get(int i);
		void Set(int i, int v);

		// Add to Array
		void PushBack(int value);

		// [] Operator Overload
		int& operator[](size_t index);
		const int& operator[](size_t index) const;

		// Size Getter
		size_t Size() const;
};