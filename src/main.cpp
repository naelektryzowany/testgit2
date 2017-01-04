#include <iostream>
#include "./Hello.hpp"

int main()
{
	std::string name = "Marek";
	std::ostream& stream = std::cout;

	Hello myHello;

	myHello.sayHello(stream, name);
	
	return 0;
}
