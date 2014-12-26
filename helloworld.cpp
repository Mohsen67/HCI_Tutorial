#include "iostream"
<<<<<<< HEAD
//main program starts from here
int main(){
	std::cout << "Hello World" << std::endl;
=======
#include <stdlib.h>     /* srand, rand */

//main program starts from here
int main(){
	std::cout << "Hello World" << std::endl;
	int Random_Number;
	Random_Number = rand() % 1000 + 1;
	std::cout << "Random value generated is : " << Random_Nember << std:endl;
>>>>>>> b978e6fa8329224e0aa915544747fc80e28e18ee
	system("Pause");
	return 0;
}