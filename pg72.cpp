/*72. Write a C++ program to which reads n digits chosen from 0 to 9 and counts
the number of combinations where the sum of the digits equals to given number. 
Do not use the same digits in a combination. 
For example, the combinations where n = 2 and s = 5 are as follows:
0 + 5 = 5
1 + 4 = 5
3 + 2 = 5*/

#include<iostream>
using namespace std;

int main(){
     int a[10]={0,1,2,3,4,5,6,7,8,9};
     int n;
	 cin>>n;
	 for(int i=0;i<10;i++)
	 {
	 	if(a[i]+a[i+1] = n)
	 	 {
	 	 	cout<<a[i]<<"+"<<a[i+1]<<"="<<n;
		  }
	 /*for(int i=0;i<10;i++)
     {
	    cout<<a[i]<<endl;
     }*/
return 0;
}
