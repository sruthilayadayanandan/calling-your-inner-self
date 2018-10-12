//including library
#include<iostream>
using namespace std;

//declaring function
int print (int n, int a)

//applying conditions
{if (a>n)
return 0;
else
{

//printing output
cout<<a<<endl;
a=a+2;

//calling of function
print(n,a);
return 0;
}
}

//using main function 
int main(){
int n;

//asking user for input
cout<<" enter n : "<< endl;
cin>>n;

//calling of function
print(n,2);
return 0;
}
