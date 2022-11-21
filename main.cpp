#include <iostream>
#include <Stdlib.h>
#include <Windows.h>
using namespace std;

void step(int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << " ";
	}
}

void bus(int move)
{
	char slide = 92;
	step(move);
	cout << " _________________________" << endl;
	step(move);
	cout << "|   |     |     |    | |  " << slide << endl;
	step(move);
	cout << "|___|_____|_____|____| |___" << slide << endl;
	step(move);
	cout << "|                    | |    " << slide << endl;
	step(move);
	cout << "`--(o)(o)--------------(o)--'";
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		system("CLS");
		bus(i);
		Sleep(10);
	}

	return 0;
}