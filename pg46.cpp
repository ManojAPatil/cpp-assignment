/*46. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92*/

#include<iostream>
using namespace std;

int main(){
    int r,h;
    float pi=3.14,result;
	cout<<"Enter the radius : ";
    cin>>r;
    cout<<"Enter the height :";
    cin>>h;
    result=pi*r*r*h;
    cout<<"The volume of cylinder is:"<<result<<endl;

return 0;
}

