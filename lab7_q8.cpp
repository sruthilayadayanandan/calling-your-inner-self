#include <iostream>
using namespace std;

int sum(int i,int s){
if(i==0)
{cout<<"sum of digits = "<<s;
return 0;}
else{s+=(i%10);
i=(i/10);
sum(i,s);
return 0;
}
}


int main(){
int a;
cout<<"enter any no. :";
cin>>a;
sum(a,0);
return 0;
}