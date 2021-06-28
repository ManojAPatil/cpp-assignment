/*57. Write a program in C++ to print the area of a hexagon.
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
        double a,result,b,pi=3.14;
        cout<<"Input the side of the hexagon : ";
        cin>>a;
        result=(6*(a*a))/(4*tan(pi/6));
        cout<<"The area of the hexagon is : "<<result<<endl;
return 0;
}
