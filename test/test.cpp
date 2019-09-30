
#include <iostream>
#include "TestMemory.h"
#include "TestMemory3.h"
#include "TestMemory4.h"
#include "TestForgePathRelative.h"

#pragma comment(lib, "ForgeLib.lib")

int main()
{
	int result = 0;
	// вывожу на экран  "Hello World!" 
	// в консоль
    std::cout << "Hello World!\n";
	//result = TestMemory();
	result = TestMemory4();
	//result = TestForgePathRelative();
}

