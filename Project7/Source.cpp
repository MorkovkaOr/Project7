#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int size = 10;
	int count_odd=0;
	int count_even=0;
	int* mas = new int[size];
	int* even = new int[0];
	int* odd = new int[0];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] % 2 == 0)
		{
			even[count_even] = mas[i];
			count_even += 1;
		}
		else
		{
			odd[count_odd] = mas[i];
			count_odd += 1;
		}
	}
	cout << "нечетные - ";
	for (int i = 0; i < count_odd; i++)
	{
		cout << odd[i] << " ";
	}
	cout << endl;
	cout << "четные - ";
	for (int i = 0; i < count_even; i++)
	{
		cout << even[i] << " ";
	}
}