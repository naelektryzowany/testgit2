#include <string>
#include <ostream>

class HelloBase
{
	virtual void sayHello(std::ostream& stream, std::string& who) = 0;
};

class Hello : HelloBase
{
	public:
	void sayHello(std::ostream& stream, std::string& who) override;
};
