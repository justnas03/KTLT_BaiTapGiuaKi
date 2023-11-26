#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

//Ham doi chu thanh so
void WordtoNum(int i, int len, char num[10])
{
	switch (num[i])
	{
		case '0' : if ((len-1-i) % 3 != 1)
				   cout << "Khong "; break;
		case '1' : if ((len-1-i) % 3 != 1)
				   cout << "Mot "; break;
		case '2' : cout << "Hai "; break;
		case '3' : cout << "Ba "; break;
		case '4' : cout << "Bon "; break;
		case '5' : cout << "Nam "; break;
		case '6' : cout << "Sau "; break;
		case '7' : cout << "Bay "; break;
		case '8' : cout << "Tam "; break;
		case '9' : cout << "Chin "; break;
	}
}

//doi don vi
void Unit (int i, int len, char s[20])
{
	switch ((len-1-i) % 3)
	{
		case 0: switch((len-i)/3)
		{
			case 1: cout << "Ngan ";break;
			case 2: cout << "Trieu ";break;
			case 3: cout << "Ty ";break;
		}; break;
		case 1: if (s[i] == '0') cout << "Le ";
				if (s[i] != '0') cout << "Muoi ";
				break;
		case 2: cout << "Tram "; break;
	}
}

int main()
{
	char num[15];
	cout << "Input number: ";
	gets(num);
	int len = strlen(num);
	cout << "Number to Words: \n";
	for (int i = 0; i<len; i++)
	{
		WordtoNum(i,len,num);
		Unit(i,len,num);
	}
	return 0;
}
