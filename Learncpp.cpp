#include <iostream>

void doNothing(int & p) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << '\n';

	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;

	return 0;
}
