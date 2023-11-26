#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
	char s[1000];
	cout << "Input a string: ";
	gets(s);
	
	int k;
	cout << "Input number distance of encryption k: ";
	cin >> k;
	
	
	int len = strlen(s);
	int asc;
	int A[1000];
	cout << "Encrypt: ";
	for (int i = 0; i < len; i++)
	{
		if(s[i]!=' ')
		{
			asc = int(s[i]);
		 	asc = asc + k;
		 	//neu asc > 122 -> gioi han lai kho cho vuot qua ki tu 'z'
			if (asc > 122)
			{
		 			//dong vong tron
		 			asc = asc - 29;
			}
			//cho vao mang a
			A[i] = asc;

			//chuyen ma ascii thanh ki tu
			cout << char(A[i]) ;
		}
		else{
			cout<<" ";
		}
		 
	}
	
	return 0;
}
