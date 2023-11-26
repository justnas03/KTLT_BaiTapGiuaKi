#include<iostream>
#include<string.h>
using namespace std;



//Tim chuoi Palidrome dai nhat
string longestPalindrome(string s){
	int t =0;
	int maxlen=1;
	int len = s.length();
	for(int i=0;i<len;	){
		int j=i,k=i;
		while(k < len-1 && s[k+1]==s[k]) k++;
		i=k+1;
		while(k < len-1 && j>0 && s[k+1]==s[j-1]){
			--j;
			++k;
		}
		
		int len2 = k-j+1;
		if(len2>maxlen){
			t=j;
			maxlen=len2;
		}
	}
	return s.substr(t,maxlen);
}


int main(){
	string s;
	cout<<"Input a string: ";
	cin>>s;
	cout<<"The longest Palindrome is: "<< longestPalindrome(s);
	return 0;
}
