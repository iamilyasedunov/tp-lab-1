#include <task2.h>
#include <task3.h>


int main(){
	
	unsigned int hbound; //сумма всех чисел до hbound (не включая его)
	cout<<"Enter hbound: ";
	cin>>hbound;
	cout<<" "<<sumPrime(hbound)<<endl;
	
	return 0;
}
