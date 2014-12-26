#include "iostream"
#include <stdlib.h>     /* srand, rand */

//main program starts from here
int main(){
	std::cout << "Hello World" << std::endl;
	int Random_Number;
	Random_Number = rand() % 1000 + 1;
	std::cout << "Random value generated is : " << Random_Nember << std:endl;
	system("Pause");
	return 0;
}