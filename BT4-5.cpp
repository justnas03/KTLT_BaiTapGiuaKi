#include<iostream>
#include<string.h>
using namespace std;



int main(){
	int n;
	//nhap so tu
	cout<<"Input Number of Words : ";
	cin >> n;
	
	
	char s[n][100];
	char t[100];
	//Nhap tu
	cout << "Input Words: ";
	
	for(int i=0; i< n;i++){
		cin >> s[i];
	}
	
	//xu ly
	for (int i = 1; i < n; i++){
      for (int j = 1; j < n; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) { // so sanh s[j-1] voi s[j]
         
         	//swap
            strcpy(t, s[j - 1]); 
            strcpy(s[j - 1], s[j]);   
            strcpy(s[j], t);
        
         	}
      	}
  	}
  	
  	//ket qua
  	cout<<"Sorted: ";
 	for(int i=0; i< n;i++){
 		cout<<s[i]<<" ";
	 }
  	
  	return 0;
}
