//Print each element on a new line in the same order it was received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
#include <iostream>
using namespace std;
int main() {
   int a;
   long b;
   char c;
   float d;
   double e;
   cin>>a>>b>>c>>d>>e;
   printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",*&a,*&b,*&c,*&d,*&e);
    return 0;
}
