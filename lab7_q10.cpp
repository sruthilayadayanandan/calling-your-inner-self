//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function
int fibo(int i,int j=1,int s=1,int s1=0){
	
//loop terminator
	if(j==i)
	{	cout<<" The "<<i<<"th term of the fibonacci series is "<<s;}
	else{   

          //fibonacci logic
		int t=s;
		s+=s1;
		s1=t;
		j++;
		
            //recursive call
		fibo(i,j,s,s1);
		return 0;
	}
	return 0;
}

//using main function
int main(){
	//asking  user for input
	int a;	
	cout<<"program to find n th term of the fibonacci series ";
	cout<<"Enter n ";
	cin>>a;
	//calling  of the recursive function
	fibo(a);
	return 0;	
}