
int TestMemory()
{
	// ��������� ��������� buff, ����� ���������� ������ 10 ����, 
	// ����� ���� ������ ������ ������������� ���������� ���������
	char*buf = (char*) malloc(10);
	// ���������� ������ ������� ����� �� ��������� buf � ������� ���
	free(buf);
	char* buffer = new char[10];
	const char* str = "Hello";
	// ������� ���������� ������ �� ����� ������� � ������
	memcpy(buffer, str, strlen(str));
	
	delete[] buffer;
	char* buff = (char*)calloc(10,10);

	return 0;
}