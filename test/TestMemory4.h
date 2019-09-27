int TestMemory4(void)
{
	//—оздаем переменную "a" типа int присваиваем ей значение 10
	//—оздаем переменную "b" и присваивае ей значение 2
	// указатель ра хранит адрес переменной а
	// указатель рb хранит адрес переменной b
	// мен€ю тип указател€ pb с int на site_tyh
	// вывожу hex << address на экран в консольв
	int a = 10; 
	int b = 2;
	int *pa = &a; 
	int *pb = &b; 
	size_t address = (size_t)pb;
	std::cout << std::hex << address << std::endl;
	return 0;
}
