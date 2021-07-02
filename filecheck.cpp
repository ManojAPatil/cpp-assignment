#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string mytext;
      ifstream MyReadFile("File.txt");
      while(getline(MyReadFile,mytext))
      cout<<mytext;
      MyReadFile.close();
return 0;
}
