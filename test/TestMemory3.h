int TestMemory3()
{
	// ��������� ��������� buf4 � ���������� 16 ���� �������� ������
	// ������������� ������� ������ �������� ��������� ��� ��������� buf4
	// ���������� ��� buf5
	char* buf4 = (char*)malloc(16);
	memset(buf4, 170, 8);
	char* buf5 = (char*)malloc(4);
	memset(buf5, 170, 4);
	return 0;
}
