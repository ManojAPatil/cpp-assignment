#include<iostream>
#include<string>
using namespace std;

int main(){
     string s,ss;
     int a,temp;
    
     cout<<"Enter the string : ";
     cin>>s;
     ss=s;     
     a=s.length()-1;
     for(int i=0;i<a;i++)
     {
     	temp=s[i];
     	s[i]=s[a];
     	s[a]=temp;
     	a--;
	 }
	 if(ss==s){
	 cout<<"String is Palindrome : "<<endl;
	 }else{cout<<"Not Palindrome";}
return 0;
}
