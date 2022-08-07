#pragma once
#include <iostream>
#include <stdexcept>

class Container
{

	int index;
	int* dynArr;
	int size;
public:
	Container(int sizeOfArr);
	Container();
	~Container();
	void push_back(int);
	int get_item(int index);
	void set_item(int index, int value);
	int return_item(int index);
};

