int TestMemory4(void)
{
	//������� ���������� "a" ���� int ����������� �� �������� 10
	//������� ���������� "b" � ���������� �� �������� 2
	// ��������� �� ������ ����� ���������� �
	// ��������� �b ������ ����� ���������� b
	// ����� ��� ��������� pb � int �� site_tyh
	// ������ hex << address �� ����� � ��������
	int a = 10; 
	int b = 2;
	int *pa = &a; 
	int *pb = &b; 
	size_t address = (size_t)pb;
	std::cout << std::hex << address << std::endl;
	return 0;
}
