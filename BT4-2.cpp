#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string.h>
#include <math.h>
using namespace std;

void CauA(char s[])
{
	char c[1000];
	char b[1000];
	int j = 0, maxlength = 0;
	for(int i = 0; i <= strlen(s); i++){
        if(s[i] != 32 && s[i] != '\0'){
	    b[j++] = s[i];
	}else{
            b[j] = '\0';
            if(strlen(b) > maxlength){
                strcpy(c, b);	
                maxlength = strlen(b);
            }
            j = 0;
        }
    }
    cout << strlen(c);
}
void CauB(char s[])
{
	char c[1000];
	char b[1000];
	int j = 0, maxlength = 0;
	for(int i = 0; i <= strlen(s); i++){
        if(s[i] != 32 && s[i] != '\0'){
	    b[j++] = s[i];
	}else{
            b[j] = '\0';
            if(strlen(b) > maxlength){
                strcpy(c, b);	
                maxlength = strlen(b);
            }
            j = 0;
        }
    }
    puts(c);
}

void CauC(char s[])
{
	int k, j = 0;
	int dem = 0;
	char b[1000];
	
	cout << "\nInput K: ";
	cin >> k;
	
	for(int i = 0; i <= strlen(s); i++){
        if(s[i] != 32 && s[i] != '\0'){
	    b[j++] = s[i];
	}else{
            b[j] = '\0';
            if(strlen(b) == k){
               dem++;
            }
            j = 0;
        }
    }	
    cout << "Tu co " << k << " ki tu xua hien "<< dem <<" lan";
}
void CauD(string s,int len){
	
	//xoa tu dau
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			s.erase(s.begin()+0,s.begin() +(i+1));
			break;
		}
	}
	
	//xoa tu cuoi
 	int a;
	for(int i=0;i<len;i++){
		if(s[i]==32){
			a=i;
		}
	}
	int len2=s.length();
	for(int i=0;i<len2;i++){
		if(i==a){
			s.erase(s.begin()+a,s.begin() + len2);
			break;
		}
	}
	
	//in ra
	cout << "chuoi sau khi xoa tu dau va tu cuoi: ";
	cout << s;
}
int main()
{
	char s[1000];
	cout << "Input a string: ";
	gets(s);
	int len = strlen(s);

	cout << "Cau A: ";
	CauA(s);
	cout << endl;
	
	cout <<"Cau B: ";
	CauB(s);
	
	cout << "Cau C: ";
	CauC(s);
	cout << endl;
	
	cout << "Cau D: \n";
	CauD(s, len);

	return 0;
}
