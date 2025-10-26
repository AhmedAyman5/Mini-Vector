#pragma once

//Template class
template <class T>
class MiniVector
{
private:
	T* arr;
	int size, currentIndex, actualLength;

public:
	//Constructor
	MiniVector(int size)
	{
		this->size = size;
		this->arr = new T[size];
		this->currentIndex = 0;
		this->actualLength = size;
	}

	//Functions:
	void Add(T data)
	{
		if (this->currentIndex < this->size)
		{
			arr[currentIndex++] = data;
			if (this->actualLength < this->size)
			{
				this->actualLength++;
			}
		}
		else
		{
			//T* newArr = new T[this->size + 1];
			int newSize = this->size * 2;
			T* newArr = new T[newSize];
			//copy old array:
			for (int i = 0; i < this->size; ++i)
			{
				newArr[i] = this->arr[i];
			}
			//add new element:
			newArr[currentIndex++] = data;

			//assign to original array:
			delete[] arr;
			this->arr = newArr;
			this->size = newSize;
			this->actualLength++;
		}
	}
	//
	int Length()
	{
		return this->actualLength;
	}
	//
	void Display()
	{
		for (int i = 0; i < this->currentIndex; ++i)
		{
			cout << arr[i] << ' ';
		}
	}
	//
	//operator overloading for []
	T& operator[](int index) //& to return by reference
	{
		//check
		if (index < 0 || index >= this->currentIndex)
		{
			throw std::out_of_range("Index out of range!");
		}

		return this->arr[index];
	}

	//Destructor
	~MiniVector()
	{
		delete[] arr;
	}
};