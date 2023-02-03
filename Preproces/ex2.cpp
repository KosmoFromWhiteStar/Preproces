#include <iostream>

#define WINTER 0
#define SPRING 0
#define SUMMER 0
#define AUTUMN 0


#define OUT std::cout <<

#if WINTER
int main()
{
	OUT "Winter";
}
#endif

#if SPRING
int main()
{
	OUT "Spring";
}
#endif

#if SUMMER
int main()
{
	OUT "Summer";
}
#endif

#if AUTUMN
int main()
{
	OUT "Autumn";
}
#endif