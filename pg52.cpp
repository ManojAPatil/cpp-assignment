/*52. Write a program in C++ to enter two angles of a triangle and find the third angle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 35
Input the 2nd angle of the triangle : 35
The 3rd of the triangle is : 110*/

#include<iostream>
using namespace std;

int main(){
       int a,b,result;
       cout<<"Input the 1st angle of the triangle :";
       cin>>a;
       cout<<"Input the 2nd angle of the triangle :";
       cin>>b;
       result=180-(a+b);
       cout<<"The 3rd angle of the triangle is :"<<result<<endl;
return 0;
}
