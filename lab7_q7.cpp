#include <iostream>
using namespace std;

int reverse(int i,int j, int k){

if (j==0)
{if(k==i)
{cout<<" is a palindrome";
return 0;}
else 
{cout<<" is not a palindrome.";
return 0;}
}
else
{

k=(k*10)+(j%10);
j=j/10;
reverse(i,j,k);
return 0;
}

}

int main(){
int a;
cout<<endl<<"enter a no to find its palindrome :"<<endl;
cin>>a;
reverse(a,a,0);

return 0;
}