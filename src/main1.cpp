#include <task1.h>

int main(){
	unsigned min,max;
	std::cout<<"Enter the boundaries of the search range: "
	std::cin>>min>>max;
	std::cout<<findvalue(min, max);
	return 0;
}
