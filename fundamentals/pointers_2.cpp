#include<iostream>

using namespace std;

void modificar_funcion(int*);

int main(){
	
	int x = 0;
	
	modificar_funcion(&x);
	
	cout<<x<<endl;
	
	return 0;
}
void modificar_funcion(int *p){
	
	*p = 100;
	
}
