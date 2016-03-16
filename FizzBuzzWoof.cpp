#include<iostream>
using namespace std;
int main() {
	int i = 1;//Intitializing the counter (i) from 1 
	for (i; i <= 50; i++)//Looping from 1 to 50 with an increment of 1 
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0 && (i % 3) != 0)
			cout << "Buzz" << endl;
		else if ((i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz and Buzz" << endl;
		if (i % 7 == 0 && (i % 5) != 0 && (i % 3) != 0)
			cout << "Wolf" << endl;
		else if ((i % 7 == 0) && (i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz , Buzz and wolf " << endl;
	}
}
