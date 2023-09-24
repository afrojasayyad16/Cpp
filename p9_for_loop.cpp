//For each integer n, in the inclusive interval [a,b]:

//If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
//Else if n>9 and it is an even number, then print "even".
//Else if n>9 and it is an odd number, then print "odd".
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n1,n2;
   cin>>n1>>n2;
   string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
   for(int i=n1;i<=n2;i++){
       if(i<=9){
           cout<<arr[i-1]<<endl;
       }
       else{
           if(i%2==0){
               cout<<"even"<<endl;
           }
           else{
               cout<<"odd"<<endl;
           }
       }
   }
    return 0;
}
