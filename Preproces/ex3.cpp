#include <iostream>
#define INPUT std::cin >> 
#define OUT std::cout <<

#define CHEK_PERSONS(a) ((a) > (20))
#define CIRCLE_WRITE( a ) for (int i = 0; i < 10; i++) { INPUT a[i]; if(CHEK_PERSONS(a[i])) {OUT "Too much. try again"; i--;} }

#define ENDL << std::endl;
#define EMPTY_SIT(a) if(a =< 0) OUT "EPMTY"

#define CIRCLE_OUT(a) for (int i = 0; i < 10; i++) { OUT "Vagon: " << a[i] ENDL EMPTY_SIT(a[i]); }


//10 вагонов
//20 пассажиров в каждом

int main()
{
	int count_persons[10] = {};
	OUT "Input count persons\n";
	CIRCLE_WRITE(count_persons);
	CIRCLE_OUT(count_persons)

}