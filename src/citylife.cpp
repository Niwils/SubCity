#include "citylife.hpp"
#include <iostream>
#include <SDL.h>

int main(void)
{
	if(0 != SDL_Init(SDL_INIT_VIDEO))
	{
		std::cout << "ERROR: Cannot start SDL" << std::endl;
		return 1;
	}

	bool b_quit = false; 
	uint32_t  u32_ticks = 0;
	uint32_t u32_prev = 0;
	int icpt = 0;
	do
	{
		u32_ticks = SDL_GetTicks();
		if(1000 < (u32_ticks - u32_prev))
		{
			u32_prev = u32_ticks;
			std::cout <<  "Top!" << std::endl;
			icpt++;
		}

		if(icpt == 10)
		{
			b_quit = true;
		}

	}
	while(!b_quit);

	SDL_Quit();
	return 0;
}