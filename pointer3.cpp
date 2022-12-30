#include <iostream>
using namespace std;

int main(){
	int  array[]={1,2,3,4,5};
	cout<< array<<endl;
	cout<< array+6<<endl;
	
	int *ptr = array;
	cout << ptr <<endl;
	cout << ptr+1 <<endl;
	ptr=ptr+1;
	cout <<"new point :"<< ptr <<endl;
	
	int *ptrtwice = array+2; // OR int *ptrtwice =  &array[2];
	cout << ptrtwice <<endl;
	
	string arraytwo[]={"ayberk","catal","developer"};
	string *stringptr =arraytwo;
	cout<< *stringptr <<" = "<< stringptr <<endl;
	cout<< *(stringptr + 1) <<" = "<< stringptr+1 <<endl;
	
	cout<< stringptr[2]<<endl;
	cout<< arraytwo[2]<<endl;
	
	return 0;
}
