// helping users make a selection for a beverage machine
// switch version

#include<iostream>
#include <cstdio>
#include <cstdlib>
#include<math.h>
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

if (select>=5 || select < 1){
     cout << "input invalid.  Here is your money back." << endl;	
}
else{
switch (select){
	case 4:
		cout << "Enjoy your Red Wine" <<endl;
	case 3:
		cout << "Enjoy your Kombucha Tea" <<endl;
	case 2:
		cout << "Enjoy your Coffee" << endl;
	case 1:
		cout <<  "Enjoy your Water"<< endl;
}
}
return;
}

int main(){
cola();
system("PAUSE");
return 0;
}
