#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
//tool
int WordCount(char s[], int len)
{
    int dem = (s[0] != ' ');
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            dem++;
        }
    }
    return dem;
} 
//bai lam
void CauA(char s[])
{
	int j = 0;
	int dem = 0;
	char b[1000];
	
	for(int i = 0; i <= strlen(s); i++){
        if(s[i] != 32 && s[i] != '\0'){
	    b[j++] = s[i];
	}else{
            b[j] = '\0';
            if(strlen(b) == 3){
               dem++;
            }
            j = 0;
        }
    }	
    cout << "Tu co 3 ki tu xuat hien "<< dem <<" lan";
    cout << endl;
}

void CauB(char s[]){
	cout << "\nNhap ki tu n: ";
	char n;
	cin >> n;
	int dem=0;
	int i=0;
	//chay khi chua gap ki tu NULL
	while(s[i]!='\0'){
		if(s[i]==n)	dem++;
		i++;
	}
	if(dem>0){	
		cout << "Ki tu "<< n << " xuat hien "<< dem <<" lan\n";	
	}
	else
	{
		cout<<"khong co!\n";
	}
}
void CauC(char s[], int len)
{
	int c1=WordCount(s,len);
	char c[c1][1000];
	char temp[100];
	cout << "\nNhap lai chuoi de sort: ";
	for (int i = 0; i < c1; i++)
	{
		cin >> c[i];
	}
	//swap
	for (int i = 1; i < c1; i++){
      for (int j = 1; j < c1; j++) {
         if (strcmp(c[j - 1], c[j]) > 0) {
         	//buoc swap
            strcpy(temp, c[j - 1]);
            strcpy(c[j - 1],c[j]);
            strcpy(c[j], temp);
            
         	}
      	}
  	}
  	cout<<"Sorted: "<<endl;
 	for(int i=0; i< c1;i++){
 		cout << c[i] <<" ";
	 }
}
int main()
{
	char s[1000];
	cout << "Input a string: ";
	gets(s);
	int len = strlen(s) - 1; 
	
	cout << "Cau A: ";
	CauA(s);

	
	cout << "Cau B: ";
	CauB(s);
	
	cout << "Cau C: ";
	CauC(s,len);
  	
	cout << endl;

}
