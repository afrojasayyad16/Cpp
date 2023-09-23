//accept the number til it is not divisible by two
#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;

do
{
    cout<<n<<endl;
    cin>>n;
}while(n%2!=0);

return 0;
}