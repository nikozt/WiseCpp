int TestMemory4(void)
{
	//Создаем переменную "a" типа int присваиваем ей значение 10
	//Создаем переменную "b" и присваивае ей значение 2
	// указатель ра хранит адрес переменной а
	// указатель рb хранит адрес переменной b
	// меняю тип указателя pb с int на site_t
	// вывожу hex << address на экран в консоль
	int a = 10; 
	int b = 2;
	int *pa = &a; 
	int *pb = &b; 
	size_t address = (size_t)pb;
	std::cout << std::hex << address << std::endl;
	return 0;
}
