#include <iostream>
#include <ctime>

using namespace std;

float DateCalc(int currentYear, int yearOfBirth);

struct Date
{
	string day;
	string month;
	string year;
}date_of_birth;

int main()
{
	const int YEAR_CONST = 1900;
	const int MONTH_CONST = 1;
	time_t t = time(0);
	tm* now = localtime(&t);
	int currentYear = YEAR_CONST + now->tm_year;
	
	cout<<"Provide your birth date in dd/mm/yy format"<<endl;
	cout<<"Day of birth: ";
	cin>>date_of_birth.day;
	cout<<endl<<"Month of birth: ";
	cin>>date_of_birth.month;
	cout<<endl<<"Year of birth: ";
	cin>>date_of_birth.year;
	cout<<endl;
	
   cout << "Year:" << YEAR_CONST + now->tm_year<<endl;
   cout << "Month: "<< MONTH_CONST + now->tm_mon<< endl;
   cout << "Day: "<< now->tm_mday << endl;
   cout << "Time: "<< now->tm_hour << ":";
   cout << now->tm_min << ":";
   cout << now->tm_sec << endl;
   
   
   
   
   return 0;
}

/*float DateCalc(int currentYear, int yearOfbirth)
{
	
}*/