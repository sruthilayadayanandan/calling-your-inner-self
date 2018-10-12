//including library
#include <iostream>
using namespace std;

//declaring function
int print(int n,int a, int s)
{if (a>n)
{
//printing the output
cout<<"the sum of all odd no is "<<s<<endl;
return 0;}

else
{
s=s+a;
a=a+2;
//calling the function
print(n,a,s);
}
return 0;
}

//using main function
int main(){
int n;

//asking user for the input
cout<<" enter a no n : "<<endl;
cin>>n;

//calling of the function
print(n,1,0);
return 0;
}
