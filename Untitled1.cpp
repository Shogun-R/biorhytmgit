#include <iostream>
#include <ctime>

using namespace std;


struct Date
{
	string day;
	string month;
	string year;
}date_of_birth;

int main()
{
	time_t t = time(0);
	tm* now = localtime(&t);
	
	cout<<"Provide your birth date in dd/mm/yy format"<<endl;
	cout<<"Day of birth: ";
	cin>>date_of_birth.day;
	cout<<endl<<"Month of birth: ";
	cin>>date_of_birth.month;
	cout<<endl<<"Year of birth: ";
	cin>>date_of_birth.year;
	cout<<endl;
	
   cout << "Year:" << 1900 + now->tm_year<<endl;
   cout << "Month: "<< 1 + now->tm_mon<< endl;
   cout << "Day: "<< now->tm_mday << endl;
   cout << "Time: "<< 5+now->tm_hour << ":";
   cout << 30+now->tm_min << ":";
   cout << now->tm_sec << endl;
   
   
   
   
   return 0;
}