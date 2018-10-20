#include <task2.h>
#include <iostream>

int main(){
	unsigned int value; //проверка числа на простоту
	std::cout<<"Enter value: "
	std::cin>>value;
	std::cout<<" "<<checkPrime(value)<<endl;
	
	unsigned n; //нахождение n-ого простого числа (в ряду)
	std::cout<<"Enter n: "
	std::cin>>n;
	std::cout<<" "<<nPrime(n)<<endl;
	
	unsigned int value; //нахождение ближайшего следующего простого числа к value.
	std::cout<<"Enter value: "
	std::cin>>value;
	std::cout<<" "<<nextPrime(value)<<endl;
	return 0;
}
