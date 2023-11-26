#include <iostream>
#include <string.h>

using namespace std;

int DemChuoi(char s[], char s2[]){
	int dem = 0;
	bool check = true;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == s2[0]){
            check = true;
            for (int j = 0; j < strlen(s2); j++)
				if (s2[j] != s[i + j]) {
				check = false; 
				break;
				}
				
            if (check) 
			    dem++;
	    }
	}
	return dem;
}

int main(){
	int temp[1000];
	char s[256];
	
	//nhap chuoi s
	cout<< "nhap chuoi: ";
	cin.getline(s,256);
	
	//nhap k
	int k;
	cout<< "k = ";
	cin >> k;
	char s1[k], s2[k];
	
	//xuly
	int max = 1;
	int len = strlen(s) - k + 1;
	int z=0, h=0;
	
	
	for(int i=0; i < len; i++){
		z=0;
		h++;
		
		for(int j=0; j<k; j++){
			s1[z]=s[i+j];
			z++;
		}
		
		temp[h] = DemChuoi(s,s1);
		//tim max trong temp
		if( temp[h] > max ){
			
			max=temp[h];
			strcpy(s2,s1);
		    s2[k]='\0';	
		    
		}
	}
	cout<< "Chuoi xuat hien nhieu nhat: ";
	cout << s2 << endl;
	return 0;
}


