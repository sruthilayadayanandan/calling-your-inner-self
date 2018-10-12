//including library
#include<iostream>
using namespace std;

//declaring function
int print(int n, int a)

//giving conditions
{if(a>n)
return 0;
else{

//printing the output  
cout<<a<<endl;
a++;

//calling function
print(n,a);
return 0;
}
}

//using main function
int main(){
int n;

//asking user for input
cout<<" enter n : ";
cin>>n;

//calling of function
print(n,1);
return 0;
}

