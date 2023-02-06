#include <iostream>

#define MONDAY 1
#define MONDAY_NAME "MONDAY"

#define TUESDAY 2
#define TUESDAY_NAME "TUESDAY"

#define WEDNESDAY 3
#define WEDNESDAY_NAME "WEDNESDAY"

#define THORSDAY 4
#define THORSDAY_NAME "THORSDAY"

#define FRIDAY 5
#define FRIDAY_NAME "FRIDAY"

#define SATURDAY 6
#define SATURDAY_NAME "SATURDAY"

#define SUNDAY 7
#define SUNDAY_NAME "SUNDAY"

#define ENDL << std::endl;
#define OUT_NAME(a) std::cout << a ENDL;
#define ERR std::cout << "Invalid date" ENDL;

 
int main()
{
	int day = 0;
	std::cout << "Input number of week: ";
	std::cin >> day;
	switch (day)
	{
	case MONDAY: OUT_NAME(MONDAY_NAME)
		break;
	case TUESDAY: OUT_NAME(TUESDAY_NAME)
		break;
	case WEDNESDAY: OUT_NAME(WEDNESDAY_NAME)
		break;
	case THORSDAY: OUT_NAME(THORSDAY_NAME)
		break;
	case FRIDAY: OUT_NAME(FRIDAY_NAME)
		break;
	case SATURDAY: OUT_NAME(SATURDAY_NAME)
		break;
	case SUNDAY: OUT_NAME(SUNDAY_NAME)
		break;
	default:
		ERR
		break;
	}
	
}