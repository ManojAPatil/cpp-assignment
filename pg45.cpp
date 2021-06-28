/*45. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125*/

#include<iostream>
using namespace std;

int main(){
	int a,result;
    	cout<<"Input the length of cube : ";
        cin>>a;
        result=a*a*a;
        cout<<"The volume of cube is : "<<result<<endl;

return 0;
}
