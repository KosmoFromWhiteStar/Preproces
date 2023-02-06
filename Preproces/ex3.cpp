#include <iostream>

#define INPUT std::cin >> 
#define OUT std::cout <<
#define ENDL << std::endl;

#define TEMP(i, a) INPUT a; counter_Peop(i, a); count += a;
#define CIRCLE_WRITE(a) for(int i = 0; i < 10; ++i) {TEMP(i, a[i])}
#define CIRCLE_OUT()


void counter_Peop(int i, int a)
{
	if (a > 20) {
		OUT "Car: " << i ENDL
		OUT "Count people too mach: " << a ENDL
	}
	if (a <= 0) {
		OUT "Car: " << i ENDL
			OUT "Count people, very malo: " << a ENDL
	}
}
//10 вагонов
//20 пассажиров в каждом

int main()
{
	int count = 0;
	int count_persons[10] = {};
	OUT "Input count persons\n";
	CIRCLE_WRITE(count_persons);
	OUT "Count people " << count ENDL
}