#include <iostream>
#include <string.h>
using namespace std;
//tinh do dai chuoi
int string_len(char s[]) {
   int i=0;
 
   while(s[i]!='\0')
      i++;
 
   return i;    
}
 
//dao nguoc chuoi
void string_rev(char s[]) {
   int i, j, len;
   char c;
 
   j = len = string_len(s) - 1;
   i = 0;
 
   while(i < j) {
      c = s[j];
      s[j] = s[i];
      s[i] = c;
      i++;
      j--;
   }
}
 
void XuLy(int n,char c[])
{
	char rev[1000]="";
    char temp[50];
    int i, j;
    
	for(i = 0; i < n; i++) {
 	for(j = 0; i < n && c[i]!=' '; ++i,++j) {
         temp[j] = c[i];
      }   
      temp[j] = '\0';
      string_rev(temp);
      strcat(rev, temp);
      strcat(rev, " ");
   }
   
    cout << "\nChuoi sau khi da dao nguoc:\n" << rev;

}
int main () {
   char c[1000];
   cout << "Input: ";
   gets(c);
   int n = string_len(c);
   XuLy(n,c);
    
   return 0;
}
