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
	scTick  u32_ticks = 0;
	scTick u32_prev = 0;
	int icpt = 0;

	u32_ticks = SDL_GetTicks();

	subcity::engine::GameObjectScheduler *mScheduler = new subcity::engine::GameObjectScheduler(1000, u32_ticks);
	test::engine::DummySchedulableClass *mObject = new test::engine::DummySchedulableClass(2000, u32_ticks);
	mScheduler->addSchedulableObject(mObject);
	do
	{
		u32_ticks = SDL_GetTicks();
		if(mScheduler->isPlanned(u32_ticks))
		{
			mScheduler->execute(u32_ticks);
			icpt++;
		}

		if(icpt == 10)
		{
			b_quit = true;
		}

	}
	while(!b_quit);

	SDL_Quit();
	delete mObject;
	delete mScheduler;
	return 0;
}