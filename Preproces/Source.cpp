#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THORSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7
 
int main()
{
	int day = 0;
	std::cin >> day;
	switch (day)
	{
	case MONDAY: std::cout << "Monday\n";
		break;
	case TUESDAY: std::cout << "Tuesday\n";
		break;
	case WEDNESDAY: std::cout << "Wednesday\n";
		break;
	case THORSDAY: std::cout << "THORSDAY\n";
		break;
	case FRIDAY: std::cout << "FRIDAY\n";
		break;
	case SATURDAY: std::cout << "SATURDAY\n";
		break;
	case SUNDAY: std::cout << "SUNDAY\n";
		break;
	}
	
}