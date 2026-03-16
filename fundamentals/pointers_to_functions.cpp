#include<iostream>

using namespace std;

int suma(int,int);

int main(){

	int (*ptr)(int,int);
	int a = 2;
	int b = 3;
	
	ptr = suma;
	
	cout<<ptr(a,b);

	return 0;
}
int suma(int a,int b){
	int suma = 0;
	
	suma = a + b;
	
	return suma; 
	
}
