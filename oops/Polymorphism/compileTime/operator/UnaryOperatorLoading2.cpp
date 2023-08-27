#include <iostream>
using namespace std;
class Increment
{
private:
	int i = 10;

public:
	Increment(int x)
	{
		i = x;
	}

	void operator++()
	{
		i = i + 1;
	}

	void display()
	{
		cout << "i Value: " << i << endl;
	}
};

int main()
{
	Increment Inc(20);
	Inc.display();
	++Inc;
	Inc.display();
	return 0;
}
