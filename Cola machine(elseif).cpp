// helping users make a selection for a beverage machine
// else....if version

#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
using namespace std;

void cola()
{
int select;

cout << "Welcome to the Healthy Beverage Machine" << endl;
cout << "Please note the selection and corresponding number" << endl;
cout << " 1 - Water" << endl;
cout << " 2 - Kombucha Tea" << endl;
cout << " 3 - Coffee" << endl;
cout << " 4 - Red Wine" << endl;
cin >> select;

if (select < 1 || select >= 5){
	cout << "input invalid.  Here is your money back." << endl;
}	

else if (select == 1) {
	cout << "Enjoy your Water" << endl;
}		

else if (select ==2){
	cout << "Enjoy your Kombucha Tea" << endl;
}		

else if (select ==3){
	cout << "Enjoy your Coffee" << endl;
}	

else{
	cout << "Enjoy your Red Wine" << endl;
  } 
return;
}
int main(){
cola();
system("PAUSE");
return 0;
}

		

