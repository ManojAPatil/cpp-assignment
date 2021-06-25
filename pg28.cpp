 /*Write a program in C++ to find the area of Scalene Triangle.
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
      float a,b,c,result;
      cout<<"Input the length of a side of the triangle :\n ";
      cin>>a;
      cout<<"Input the length of another side of the triangle:\n";
      cin>>b;
      cout<<"Input the angle between these sides of the triangle :"<<endl;
      cin>>c;
      result=((a*b)/2)*sin(c);
      cout<<"The area of the Scalene Triangle is :"<<result<<endl;
return 0;
}
