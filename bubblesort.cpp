//bubble sort
#include<iostream>
using namespace std;

int main(){
      int a[20],temp,n;
      cout<<"Enter  elements :\n";
      cin>>n;
      cout<<"Enter numbers\n";
      for(int i=0;i<n;i++)
      {
      	cin>>a[i];
	  }
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<n-1;j++)
	  	{
  		  if(a[j]>a[j+1])
  		  {
	  		temp=a[j];
	  		a[j]=a[j+1];
	  		a[j+1]=temp;
  		  }
		}
	  }
	  cout<<"Sorting Values is : ";
	  for(int i=0;i<n;i++)
	  {
	  	cout<<a[i]<<endl;
	  }
return 0;
}
