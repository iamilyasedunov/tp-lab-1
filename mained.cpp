#include <iostream>
#include <cmath>
//task1.h
unsigned long nod(unsigned int a,unsigned b);

unsigned long nok(unsigned int n1, unsigned n2);

unsigned long findValue(unsigned int min,unsigned max);
//
//task1.cpp
unsigned long nod(unsigned int a,unsigned b)
{
	    if (b==0) return a;
	        else return nod(b,a%b);
}

unsigned long nok(unsigned int n1, unsigned n2)
{
	    return n1*n2 / nod(n1, n2);
}


unsigned long findValue(unsigned int min,unsigned max){
	    unsigned int s = min, dev;
	    for(;min<max;min++){
		    s = nok(s, min);
	    }
	    return s;
}
//

//task2.cpp
bool numPrime (unsigned int value){
	if (value == 1){
		return false;
	}
	for (int i = 2; i<=sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}

	return true;

}
//
using namespace std;

int main() {
	cout<<"t1"<<endl;
    cout<<findValue(1,20)<<endl;
    cout<<findValue(1,10)<<endl;
    cout<<"t2"<<endl;
	cout<<numPrime(997);
    return 0;
}
