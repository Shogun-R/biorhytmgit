#include <iostream>
#include <ctime>

using namespace std;

float DateCalc(int currentYear, int yearOfBirth);
void test();

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
   test();
   
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
stof - string to float
	Algorhytm for farther calcs year difference between year of birth and current year - full cycle of biorhytm to determine the current cycle day
*/

void test()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	
	int YEAR_BASE = 1900, MONTH_BASE = 1;
	int currentYear, currentMonth, currentDay;
	int calcYear, calcMonth, calcDay;
	float calcYearDays, bioCycle = 23.0f, bioHalf = 11.5f;
	float halfCycles;
	
	
	currentYear = YEAR_BASE + ltm->tm_year;
	currentMonth = MONTH_BASE + ltm->tm_mon;
	currentDay = ltm->tm_mday;
	
	calcYear = currentYear - date_of_birth.year;
	
	cout<<endl<<currentYear
		<<endl<<currentMonth
		<<endl<<currentDay<<endl;
		
	calcYearDays = calcYear * 365;
	
	halfCycles = calcYearDays / bioHalf;
	
	float testday, fullpercentage = 1.0f, xpercentage = 0.5f, combinedpercentage;
//	float adjustment = 10.0f;
	bool cyclestate = true;
	
	testday = (xpercentage * bioHalf) / fullpercentage;
	cout<< testday;
	
	testday = 5.75f;
	xpercentage = (testday * fullpercentage) / bioHalf;
	
	cout<<endl<<xpercentage;
}