/*34. Write a C++ program to display the current date and time. 
Sample Output:
Display the Current Date and Time :
----------------------------------------
seconds = 57
minutes = 33
hours = 12
day of month = 6
month of year = 7
year = 2017
weekday = 4
day of year = 186
daylight savings = 0
Current Date: 6/7/2017
Current Time: 12:33:57*/

#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
    time_t t = time(NULL);
    tm* tptr = localtime(&t);
    cout<<"Current date = "<<(tptr ->tm_mday)<<"/"<<(tptr ->tm_mon)+1<<"/"<<(tptr ->tm_year)+1900<<endl;
    cout<<"Current time = "<<(tptr ->tm_hour)<<":"<<(tptr ->tm_min)<<":"<<(tptr ->tm_sec)<<endl;
return 0;
}
