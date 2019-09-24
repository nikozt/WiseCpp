int TestMemory3()
{
	char* buf4 = (char*)malloc(16); // создается указатель в виде блока п
		memset(buf4, 170, 8);
		char* buf5 = (char*)malloc(4);
			memset(buf5, 170, 4);
		return 0;
}
