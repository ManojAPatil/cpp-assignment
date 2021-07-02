//Find the sum of given array elements
#include<iostream>
using namespace std;

int main(){
    int arr[20],a,sum=0;
    cout<<"How many elements u want to enter :\n";
    cin>>a;
    cout<<"Enter the numbers\n";
    for(int i=0;i<a;i++)
     {
          cin>>arr[i];
		  	
	 }
	 for(int i=0;i<a;i++){
	 sum+=arr[i];}
	 cout<<"Sum is : "<<sum<<endl;
return 0;
}
