//Given two input strings ,print length of both strings & concatenation of strings.
//Also print both strings with first character swapped. 
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1,s2;
    cin>>s1;
    cin>>s2;
    int s1_len= s1.size();
    int s2_len=s2.size();
    cout<<s1_len<<" "<<s2_len<<endl;
    string c= s1+s2;
    cout<<c<<endl;
  
    char temp;
    temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout<<s1<<" "<<s2;
    return 0;
    }
