#include<iostream>
using namespace std;

int main(){
      int n=5,k=5;
     for(int a=1;a<=n;a++ ){
	  for(int i=1;i<k;i++)
      {
      	cout<<" ";
	  }k--;
  	  for(int j=1;j<=a;j++){
      	cout<<"*";
	  }
	  cout<<endl;
	 
     }
 return 0;
}
/*output:
    *
   **
  ***
 ****
*****
*/
