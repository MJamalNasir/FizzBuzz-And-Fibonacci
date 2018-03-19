#include <iostream>
using namespace std;
 
int main()
{
	int fizz = 3;
	int buzz = 5;
	int endNumber = 100;
	int fizzBuzz = fizz * buzz; 
 
	for(int currentNumber=1; currentNumber <= endNumber; ++currentNumber)
	{
		if(currentNumber % fizzBuzz == 0) 
		{
			cout<<"FIZZ BUZZ!!\n";
		}
		else if(currentNumber % fizz == 0) 
		{
			cout<<"FIZZ\n";
		}
		else if(currentNumber % buzz == 0)
		{
			cout<<"BUZZ\n";
		}
		else 
		{
			cout<<currentNumber<<endl;
		}
	}
	return 0;
}