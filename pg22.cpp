/* Write a program in C++ to find the third angle of a triangle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90*/


#include<iostream>
using namespace std;

int main(){
         float a,b,c;
         cout<<"Input the 1st angle of the triangle:\n";
         cin>>a;
         cout<<"Input the 2nd angle of the triangle:\n";
         cin>>b;
         c=180-(a+b);
         cout<<"The 3rd angle of the triangle is:"<<c<<endl;
 return 0;
}

