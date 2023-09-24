//Modify the values of a and b so that a contains the sum of a and b and b contains the absolute difference between them.
#include<iostream>
using namespace std;
void update(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;   
    
    if(*b<0){
        *b=-(*b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int *pa =&a;
    int *pb =&b;
    update(pa, pb);
    cout<<a<<"\n"<<b;
}
