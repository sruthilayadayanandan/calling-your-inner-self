#include <iostream>
using namespace std;
int power(int a, int b, int i=1,int j=1){
if(i>b)
{cout<<a<<" to the power."<<b<<"="<<j;}
else {
j*=a;
i++;
power(a,b,i,j);
}
return 0;
}

int main(){
int a,b;
cout<<"program to find the a to the b. ";
cout<<"enter a and b :";
cin>>a>>b;
power(a,b);
return 0;
}