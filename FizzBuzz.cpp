/*=========================================================================================================

	FizzBuzz[FizzBuzz.cpp]
													Author	: Jamal Nasir
-----------------------------------------------------------------------------------------------------------
Å°Update
	*
==========================================================================================================*/
#include <iostream>
using namespace std;
 
int main()
{
	// declare variables
	int fizz = 3;
	int buzz = 5;
	int endNumber = 100;
	int fizzBuzz = fizz * buzz; 
	// The numbers divisible by 3 and 5 are also divisible by 3 * 5
 
	// start the loop
	// Goes till the 'end'
	for(int currentNumber=1; currentNumber <= endNumber; ++currentNumber)
	{
		if(currentNumber % fizzBuzz == 0) // divisible by 3 and 5
		{
			cout<<"FIZZ BUZZ!!\n";
		}
		else if(currentNumber % fizz == 0) // divisible by 3
		{
			cout<<"FIZZ\n";
		}
		else if(currentNumber % buzz == 0)// divisible by 5
		{
			cout<<"BUZZ\n";
		}
		else // not divisible by 3 or 5
		{
			cout<<currentNumber<<endl;
		}
	}
	return 0;
}