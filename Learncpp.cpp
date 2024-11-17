#include <iostream>

void doNothing(int & p) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
	std::cout << "Enter an integer: ";

	return 0;
}
