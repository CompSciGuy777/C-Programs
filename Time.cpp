#include <iostream>
#include <math.h>
using namespace std;

// displays time given hour and minute

void printtime(int hour, int min){
if (hour > 24){
	cout << "please input another hour: " << endl;
	return;
	}
	
else if (min > 59){
	cout << "please inpute another minute number: " <<endl;
	return;	
}
	
else {	
cout << hour;
cout << ":";
cout << min << endl;
}
}


int main()
{

printtime(25, 59);
return 0;

}


