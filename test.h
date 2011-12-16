template <typename T>
class Bar
{
};

class Foo
{	
public:
	template<typename T>
	void sayHello(T& msg)
	{
		std::cout << "Normal Version" << std::endl;
	}
};

