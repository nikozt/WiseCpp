
int TestMemory()
{
	// создается указатель buff, затем выделяется память 10 байт, 
	// после чего память память присваивается созданному указателю
	char*buf = (char*) malloc(10);
	// освобождаю память которая лежит по указателю buf с помощью фри
	free(buf);
	char* buffer = new char[10];
	const char* str = "Hello";
	// копирую содержимое памяти тз одной области в другую
	memcpy(buffer, str, strlen(str));
	
	delete[] buffer;
	char* buff = (char*)calloc(10,10);

	return 0;
}