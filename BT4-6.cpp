#include <iostream>
#include <string>
using namespace std;

void InsertS(string s, int i){
	int a;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i] == ' ') a=i;
	}
	for(int i=0;i<s.length();i++)
	{
		if(i==a)
		{
			s.erase(s.begin()+a, s.begin() + s.length());
			break;
		}
	}
	cout <<"Result: "<<s;
}

int main()
{
    string s;
    string s1;
    string s2;
    cout<<"Input a string: ";
    getline(cin, s);
    int len = s.length();
    int i= len-1;
    //lay tu cuoi cua chuoi s (theo chieu nguoc) bo vao s1
    while(true) 
    {
        s1 += s[i];
        i--;
        if(s[i] == ' ') break;
    }
    s2 += ' ';// chen khoang trang truoc chuoi s2
    for(int i=s1.length()-1; i>=0; i--) //lay tu cuoi cua chuoi s (theo chieu xuoi) bo vao s2
    {
        s2+= s1[i];
    }
    for(int j=0; j<len-1; j++)
    {
        if(s[j] == ' ')
        {
            s.insert(j, s2);
            break;
        }
    }
    //ghep chuoi
	InsertS(s,i);

}


