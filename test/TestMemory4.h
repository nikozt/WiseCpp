int TestMemory4(void)
{
	int a = 10; // ������� ���������� "a" ���� int ����������� �� �������� 10
	int b = 2; // ������� ���������� "b" � ���������� �� �������� 2
	int *pa = &a; // ��������� �� ������ ����� ���������� �
	int *pb = &b; // ��������� �b ������ ����� ���������� b
	size_t address = (size_t)pa;
	std::cout << std::hex << address << std::endl;
	return 0;
}
