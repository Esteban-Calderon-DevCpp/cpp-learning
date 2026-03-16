#include<iostream>

using namespace std;

void swap(int*, int*);

int main(){
	
	int x = 10,y = 5;
	
	swap(&x,&y);
	
	cout<<x<<endl;
	cout<<y<<endl;
	
	return 0;
}
void swap(int* px,int* py){
	
	int* susti;
	*susti = *px;
	*px = *py;
	*py = *susti; 
	
}
