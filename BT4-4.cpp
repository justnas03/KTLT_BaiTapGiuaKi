#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

void Insertion(char *s, char *a, int pos){
	char c[1000];
	strcpy(c,s+pos);
	
	strcpy(s+pos,a);
	
	strcat(s,c); //Noi chuoi s voi chuoi c
	
	cout << "Chuoi sau khi chen: ";
	
	puts(s);
}

int main(){
	char s1[1000],s2[1000];
	int vitri;
	cout << "Nhap Chuoi: "; gets(s1);
	cout << endl;
	
	
	cout << "Nhap chuoi can chen: "; gets(s2);
	cout << endl;
	
	
	cout << "Nhap vi tri can chen: ";
	cin >> vitri;
	
	
	Insert(s1,s2,vitri);
	return 0;
}
