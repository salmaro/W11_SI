#include <iostream>
#include "container.h"


int main() {

	Container test;

	test.push_back(1);
	test.display();
	test.push_back(2);
	test.display();
	test.get_item(3);
	test.push_back(3);
	test.display();
	test.push_back(4);
	test.display();
	test.push_back(5);
	test.display();
	return 0;
}