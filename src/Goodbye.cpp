#include <iostream>
#include <./Hello.hpp>

void Hello::sayHello(std::ostream& stream, std::string& who)
{
	stream << "Hello " << who << "!" << std::endl;
}
