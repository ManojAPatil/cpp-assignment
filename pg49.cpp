/*49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.
Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a*/
 
#include<iostream>
using namespace std;

int main(){
      char a;
      cout<<"Input a character : ";
      cin>>a;
      cout<<"The ASCII value of "<<a<<" is : "<<(int)a<<endl;
      cout<<"The character for the ASCII value "<<(int)a<<" is :"<<(char)((int)a)<<endl;
return 0;
}
