#include <iostream>
using namespace std;

int main(){
	int a=5;
	int *ptr =  &a;
	cout << "variable point : "<< &a <<endl;
	cout << "variable point : "<< ptr <<endl;
	cout << "variable vaule :" << *ptr <<endl;
	*ptr=6;
	cout <<"a new vaule :"<<a<<endl;
	return 0;
}
