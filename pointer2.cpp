#include <iostream>
using namespace std;
void changeValuePoint(int *ptr){
	*ptr=30;
	cout <<"value from changeValuePoint-function : "<<*ptr<<endl;
}
void changeValue(int b){
	b=20;
	cout <<"vaule from function : "<<b <<endl;
	
}

int main(){
	int a=402;
	cout<<"a value : "<<a<<endl;
	changeValue(a);
	cout<<"changeValue-function finshed then a value : "<<a<<endl; 
	
	changeValuePoint(&a);
	cout<<"changeValuePoint-function finshed then a value : "<<a<<endl; 
	return 0;
}
