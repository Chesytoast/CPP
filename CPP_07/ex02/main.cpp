#include <iostream>
#include "Array.hpp"
#include <cmath>

#define MAX_VAL 750
int main(int, char**)
{
	int *a = new int[10];
	for (int i = 0;i<10;++i)
		std::cout << *a << " ";
	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	try{
	Array<int> test;

	std::cout << test.size() << std::endl;
	std::cout << test[0] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------" << std::endl;
	try{
	Array<int> test(151);
	Array<int> copyy(test);

	std::cout << test.size() << std::endl;
	std::cout << "test array: " <<test[7] << std::endl;
	std::cout << "copyy array: " <<copyy[7] << std::endl;
	test[7] = 10;
	std::cout << "test array: " <<test[7] << std::endl;
	std::cout << "copyy array: " <<copyy[7] << std::endl;
	std::cout << test[151] << std::endl;

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//main from the intra

    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    // 	std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    return 0;
}