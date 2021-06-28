/*56. Write a program in C++ to show the manipulation of a string.
Sample Output:
Show the manipulation of a string:
-------------------------------------
The string:: welcome, w3resource
The length of the string:: 19
The char at index 1 of the string:: e
The char at index 1 of the string [using array ]:: e
Is the string empty:: 0
Retrieve the sub-string from 3rd position for 4 characters:: come
The sub-string replace by 'went':: welwent, w3resource
Append a string 'end' at last of the string:: welwent, w3resource end
Append a string 'end' at last of the string using operator:: welwent, w3resource end end
The string 'insert' inserting at 3rd position of the string:: wel inse rt went, w3resource end
The new string is:: wel insert went, w3resource end
Input a sentence:: The quick brown fox jumps over the lazy dog.
The quick brown fox jumps over the lazy dog.*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str="welcome, w3resource";
	
	cout<<"The string::"<<str<<endl;
	cout<<"The length of string is::"<<str.length()<<endl;
	cout<<"The char at index 1 of the string:: "<<str.at(1)<<endl;
	cout<<"The char at index 1 of the string[using array]::"<<str[1]<<endl;
	cout<<"Is the string empty::"<<str.empty()<<endl;
	cout<<"Retrieve the sub-string from 3rd position for 4 characters::"<<str[3]<<str[4]<<str[5]<<str[6]<<endl;
	str[3]='w';str[4]='e';str[5]='n';str[6]='t';
	cout<<"The sub-string replace by 'went'::"<<str<<endl;
	str.append("end");
	cout<<"Append a string 'end' at last of the string::"<<str<<endl;
	cout<<"Append a string 'end' at last of the string using operator::"<<str+"end"<<endl;
	cout<<"The string 'insert' inserting at 3rd position of the string::"<<str.insert(3,"insert")<<endl;
	cout<<"The new string is::"<<str<<endl;
	cout<<"Input a sentence::";
	getline(cin,str);
    cout<<str<<endl;
return 0;
}
