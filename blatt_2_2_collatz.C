#include <iostream>
#include <cmath>
#include <string>

int number;

int rechnung(int x)
{
	
	if(x%2==0)
	{
		
		int y = x /2;
		
		return y;
	}
	else
	{
		int y = x *3 +1;
		return y;
	}
	
	
}



void collatz(int number)
{
	
	
	for (int i = number ; i != 1 and i != 0 and i != -1 and i != -5 and i != -17 ; i = rechnung(i))
	{
		std::cout << rechnung(i) << std::endl;
	}
}


int main(int argc, char** argv)
{
	std::cin >> number;
	collatz(number);
	
}
