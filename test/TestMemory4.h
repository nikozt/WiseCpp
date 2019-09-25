int TestMemory4(void)
{
	int a = 10; // Создаем переменную "a" типа int присваиваем ей значение 10
	int b = 2; // Создаем переменную "b" и присваивае ей значение 2
	int *pa = &a; // указатель ра хранит адрес переменной а
	int *pb = &b; // указатель рb хранит адрес переменной b
	size_t address = (size_t)pa;
	std::cout << std::hex << address << std::endl;
	return 0;
}
