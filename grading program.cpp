#include <iostream>
#include <math.h>

using namespace std;

//Program to assess a students numerical grade

int grade()
{
	int percent;
	cout << "What number grade did you receive: ";
	cin >> percent;
	
	if (percent < 0 || percent > 100 )
	{
		cout << "You have entered an invalid number!  Please enter another number between (0 - 100): ";
		cin >> percent;
	}	
	else if (percent < 59)
	{
		 cout << "You have received an F" <<endl;
	}
	else if (percent <= 60 || percent <= 69)
	{
		 cout << "You have received an D" << endl;
	} 
	else if (percent <= 70 || percent <= 79)
	{
		 cout << "You have received an C" << endl;
	} 
	else if (percent <= 80 || percent <= 89)
	{
		 cout << "You have received an B" << endl;
	} 
	else if (percent <= 90 || percent <= 99)
	{
		 cout << "You have received an A" << endl;
	}
	else {
		cout << "You received a perfect score!!" << endl;
	}
}

int main()
{
	grade();
	return 0;
}
