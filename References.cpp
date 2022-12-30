#include <iostream>
using namespace std;
void changeValue(int &ref){
	ref=2;
}
int main(){
	int a=10;
	int &ref = a;
	ref++;
	cout<<"a new value "<<a<<endl;
	
	changeValue(a);
	cout<<"a started function then : "<<a<<endl;
	
	
	return 0;
}
