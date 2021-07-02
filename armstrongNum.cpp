//Armstrong Number
#include<iostream>
using namespace std;

int main(){
    int num,sum=0,nn,a;
     cout<<"Enter the number : \n";
     cin>>num;
     nn=num;
     while(nn!=0)
     {
     	a=nn%10;
     	sum+=a*a*a;
     	nn/=10;
	 }
	 if(sum==num)
     {
     	cout<<"The number is Armstrong numbeer\n";
	 }else
	   {
	   	  cout<<"Number is not Armstrong number\n";
	 }
     
return 0;
}
