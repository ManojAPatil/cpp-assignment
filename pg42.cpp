/*42. Write a language program in C++ which accepts the user's first and last
name and print them in reverse order with a space between them.
Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra*/

#include<iostream>
#include<string>
using namespace std;

int main(){
       string firstName="Alexandra";
       string lastName="Abramov";
       string reverse;
       cout<<"Input First Name : "<<firstName<<endl;
       cout<<"Input Last Name : "<<lastName<<endl;
       reverse=firstName;
       firstName=lastName;
       lastName=reverse;
       cout<<"Name in reverse is :"<<firstName<<" "<<lastName<<endl;
return 0;
}

