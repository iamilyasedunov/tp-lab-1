#include <task1.h>

int main(){
	unsigned min,max;
	std::cout<<"Enter the boundaries of the search range: ";
	std::cin>>min>>max;
	std::cout<<findValue(min, max);
	return 0;
}
