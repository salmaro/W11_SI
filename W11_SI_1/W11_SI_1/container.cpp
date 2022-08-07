#include "container.h"



Container::Container(int sizeOfArr) : dynArr{ new int[sizeOfArr] }, index{ 0 }, size{sizeOfArr}
{
}

Container::Container() : dynArr{ new int[4] }, index{ 0 }, size{ 4 }
{
}

Container::~Container()
{	
	delete[] dynArr;
}

void Container::push_back(int inputValue)
{
	if (index < size) {
		dynArr[index] = inputValue;
		index++;
	}
	else{
		int* newArray = new int[size * 2];
		
		for (size_t i{ 0 }; i < size; i++) {
			newArray[i] = dynArr[i];
		}
		dynArr = newArray;
		size *= 2;
	}
}

int Container::get_item(int indexInput)
{
	try{
		 //return return_item(indexInput);
		if (indexInput < index) {
			return dynArr[indexInput];
		}
		else {
			throw std::out_of_range(" InvalidArrayIndex");
		}
	}
	catch (std::out_of_range){
		std::cout << " InvalidArrayIndex !!!" << std::endl;
	}

}

int Container::return_item(int indexInput)
{
	if (indexInput < index) {
		return dynArr[indexInput];
	}
	else {
		throw std::out_of_range(" InvalidArrayIndex");
	}
}
