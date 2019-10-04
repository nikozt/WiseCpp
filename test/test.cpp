
#include <iostream>
#include "TestMemory.h"
//#include "TestMemory2.h"
#include "TestMemory3.h"
#include "TestMemory4.h"
#include "TestForgePathRelative.h"
#include "task1.h"
#pragma comment(lib, "ForgeLib.lib")

int main()
{
	int result = 0;
	// вывожу на экран  "successfully" 
	// в консоль
    std::cout << "1.Successfully\n";
	//result = TestMemory();
	//result = TestMemory4();
	char* memory = (char*)malloc(20);
	memset(memory, 0xAA, 20);
	result = GetNumber(memory, 10);
	//result = TestForgePathRelative();
   
}

