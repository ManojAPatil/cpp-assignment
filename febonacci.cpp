//Febonacci series
#include<iostream>
using namespace std;

int main(){
      int n,a=0,b=1,sum;
      cout<<"Enter the element number : ";
      cin>>n;
      cout<<"Febonacci series is :\n";
      cout<<a<<endl;
	  cout<<b<<endl;
	  for(int i=2;i<n;i++)
      {
        sum=a+b;
        cout<<sum<<endl;
	    a=b;
        b=sum;
      }
        
        
return 0;
}
