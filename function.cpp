#include <iostream>
using namespace std;

void sayHi();

void factorial(int sayi){
	int factorial=1;
	for(int i=2 ; i <= sayi ; i++){
		factorial*=i;
	}
	cout<<"factorial : "<< factorial<<endl;
}

int main(){
	sayHi();
	
	int number;
	cout<<"input number : ";
	cin>>number;
	factorial(number);
	return 0;
}
void sayHi(){
	cout<<"hi"<<endl;
	cout<<"how are you"<<endl;
}
