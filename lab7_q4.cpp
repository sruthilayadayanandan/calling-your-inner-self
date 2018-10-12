//including library
#include<iostream>
using namespace std;

//declaring function
int print(int n, int a, int s)
{

//giving conditions
if (a>n)
//printing the output
{cout<<"\n sum is "<<s;
return 0;}
 else{
s=s+a;
a++;

//calling function
print(n,a,s);
return 0;

}

}

//using main function
int main(){
int n;
cin>>n;

//calling function
print(n,1,0);
return 0;
}