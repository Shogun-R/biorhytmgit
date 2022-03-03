#include <iostream>
#include <ctime>

using namespace std;

float DateCalc(int currentYear, int yearOfBirth);

struct Date
{
	int day;
	int month;
	int year;
}date_of_birth;

int main()
{
	const int YEAR_CONST = 1900;
	const int MONTH_CONST = 1;
	float biorhytm = 23.0f, biorhytmHalf = 11.5f;
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
   
   cout<<"Full days in your birth date to current date difference: "<<DateCalc(currentYear, date_of_birth.year);
   
   
   return 0;
}

float DateCalc(int currentYear, int yearOfBirth)
{
	int fullDays, addedDays; //fullDays is a variable for amount of days pass from birth to current time | addedDays is for long years
	int yearDifference, completeDays;
	
	yearDifference = currentYear - yearOfBirth;
	fullDays = yearDifference * 365;
	addedDays = yearDifference / 4;
	completeDays = fullDays + addedDays;
	
	return completeDays;
}


/*
	Algorhytm for farther calcs year difference between year of birth and current year - full cycle of biorhytm to determine the current cycle day
*/