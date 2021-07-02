#include<iostream>
using namespace std;

int main(){
   int year,n;
   cout<<"Enter the Year : ";
   cin>>year;
   n=year%4;
   if(n==0)
   {
   	cout<<"This is Leap year\n";
   }else{
         cout<<"This is not Leap year\n";
   }
return 0;
}
