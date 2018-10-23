#include <task2.h>
#include <iostream>

int main(){

	unsigned int value; //проверка числа на простоту
	cout<<"Enter value: ";
	cin>>value;
	cout<<" "<<checkPrime(value)<<endl;
	
	unsigned n; //нахождение n-ого простого числа (в ряду)
	cout<<"Enter n: ";
	cin>>n;
	cout<<" "<<nPrime(n)<<endl;
	
	cout<<"Enter value: ";
	cin>>value;
	cout<<" "<<nextPrime(value)<<endl;
	return 0;
	
}
