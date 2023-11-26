#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string.h>
#include <math.h>
using namespace std;


int Lenght(char s[])
{
	int len=0;
	while (s[len] != '\0')
	{
		len++;
	}
	return len;
}

void cauA(char s[])
{
	int nguyenam = 0, phuam = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            nguyenam++;
        else{
            phuam++;
            if (s[i] == ' ' ) phuam--;
		}	
	}
	cout << "	So nguyen am: " << nguyenam << endl;
	cout << "	So phu am: " << phuam << endl;
}

void cauB(char s[])
{
	cout << "Ma ASCII cua tung ki tu la: ";
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ') i++;
		cout <<  int (s[i]) << " ";
	}
	
	cout << endl;
}


void cauC(char s[])
{
	int a[1000];
	int n=0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		a[i] = int (s[i]);
		n++;
	}
	cout << "Sap xep tang dan theo ma Ascii: ";
	for (int i = 0; i<n-1; i++)
	for (int j = i+1; j<n;j++)
	{
		if (a[i] > a[j]) swap(a[i],a[j]);
	}
	for (int i = 0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//Cau D
//Ham Xoa
void Del(char s[90],int DelPos)
{
	int n=strlen(s);
    for(int i=DelPos;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
//Ham Xoa Khoang trang
void DelSpace(char*s)
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			Del(s,i);
			i--;
		}
    if(s[0]==' ')
		Del(s,0);
    if(s[strlen(s)-1]==' ')
		Del(s,strlen(s)-1);
}

int main()
{
	char s[1000];
	cout << "Input: ";
	gets(s);
	
	cout << "Cau A: \n";
	cauA(s);
	cout << endl;
	
	cout <<"Cau B: \n";
	cauB(s);
	cout << endl;
	
	
	cout <<"Cau C: \n";
	cauC(s);
	cout << endl;
	cout << "Cau D: \n";
	cout << "Chuoi sau khi xoa khoang trang thua: ";
	DelSpace(s);
	cout << s << endl;
	
	system("pause");
	return 0;
}
