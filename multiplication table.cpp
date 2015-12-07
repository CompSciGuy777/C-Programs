#include<iostream>
#include<math.h>
#include<cstdlib>
#include<cstdio>

using namespace std;

int n;

int printline (int n) {
    for(int i = 1; i <= n; i++){
		cout << n*i << " ";
		}		
}

int printmultable (int high){
	for(int n = 1; n <= high; n++){
		printline(6);
	}
}

int main (){
	printmultable(6);
	cout << endl;
	system("PAUSE");
	return 0;
}
