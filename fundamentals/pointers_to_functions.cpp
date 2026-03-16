#include<iostream>

using namespace std;

int suma(int,int);
int resta(int,int);
int multiplicacion(int,int);

int main(){

	int (*operaciones[3])(int,int) = {suma,resta,multiplicacion};
	
	int a = 2;
	int b = 3;
	
	cout<<operaciones[0](a,b);
	

	return 0;
}
int suma(int a,int b){
	int suma = 0;
	
	suma = a + b;
	
	return suma; 
}
int resta(int a,int b){
	int resta = 0;
	
	resta = a - b;
	
	return resta; 	
}
int multiplicacion(int a,int b){
	int multiplicacion = 0;
	
	multiplicacion = a * b;
	
	return multiplicacion;
	
}
