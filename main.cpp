#include <iostream>
using namespace std;

int main() {
   int n=0,a=0,b=1,c=a+b;
   cin>>n;
   
   cout<<b<<endl;
   for (int i=0;i<n;i++) {
      if (c<=n){
         cout<<c<<endl;
         a=b;
         b=c;
         c=a+b;
      }
      
      }     
   return 0;
}
