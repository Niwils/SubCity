/**
*   Test for Scheduler and VSchedulableObject classes.
*							
*-------- CHANGELOG --------
*
* 01.12.2018 - v 1.0 - Niels
* Initial draft.
*
*------- LICENSE -------
*
* TODO
*
*/

#include "TestScheduler.hpp"
#include <SDL.h>

namespace subcity {
	test::TestScheduler::TestScheduler()
	{
		CxxTest::TestSuite();
		scTick u32_ticks = SDL_GetTicks();
		mGameScheduler = new engine::GameObjectScheduler(1000, u32_ticks);
		mDummySchedulableObject = new ::test::DummySchedulableClass(2000, u32_ticks);
		mGameScheduler->addSchedulableObject(mDummySchedulableObject);
	}

	test::TestScheduler::~TestScheduler()
	{
		delete mGameScheduler;
		delete mDummySchedulableObject;
	}

	void test::TestScheduler::testScheduler()
	{
		scTick startup_ticks = SDL_GetTicks();
		scTick current_ticks = startup_ticks;

		while(10000 > (current_ticks-startup_ticks))
		{
			current_ticks = SDL_GetTicks();

			if(mGameScheduler->isPlanned(current_ticks))
			{
				mGameScheduler->execute(current_ticks);
			}

		}

		TS_ASSERT_EQUALS(mDummySchedulableObject->getNbExecution(), 5);
	}
}