void 
TestMemory()
{
#include <iostream>

	class DateClass
	{
	public:
		int m_day;
		int m_month;
		int m_year;

		void print()
		{
			std::cout << m_day << "/" << m_month << "/" << m_year;
		}
	};

	int main()
	{
		DateClass today{ 12, 11, 2018 };

		today.m_day = 18; d ������ ��� ������ ����������-����� ������� today ������ DateClass
		today.print(); // ���������� �������� ������ ������ ��� ������ ������ ������� today ������ DateClass

		return 0;
	}
}
//