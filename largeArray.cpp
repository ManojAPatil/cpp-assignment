//Find the largest element in array
#include<iostream>
using namespace std;

int main(){
    int arr[20],a,temp;
    cout<<"How many elements u want to enter :\n";
    cin>>a;
    cout<<"Enter the numbers\n";
    for(int i=0;i<a;i++)
     {
          cin>>arr[i];
		  	
	 }
	 for(int i=0;i<a;i++){
	 if(arr[i]<arr[i+1])
	 {
	 	arr[i]=arr[i+1];
	 }
	 cout<<"The largest element in given array is : "<<arr[0]<<endl;
return 0;
}}
