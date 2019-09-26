int TestMemory3()
{
	// создается указатель buf4 и выделяется 16 байт командой маллок
	// инициализирую область памяти заданным значением для указателя buf4
	// аналогично для buf5
	char* buf4 = (char*)malloc(16);
	memset(buf4, 170, 8);
	char* buf5 = (char*)malloc(4);
	memset(buf5, 170, 4);
	return 0;
}
