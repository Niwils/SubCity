/**
*   Scheduler class implementation.
*							
*-------- CHANGELOG --------
*
* 25.11.2018 - v 1.0 - Niels
* Initial draft.
*
*------- LICENSE -------
*
* TODO
*
*/

#include "GameObjectScheduler.hpp"

namespace subcity {

  namespace engine {
	
	GameObjectScheduler::GameObjectScheduler(scTick _tickrate, scTick _currentTick)
	: mTickRate(_tickrate)
	, mNextExec(_currentTick + _tickrate)
	{
	}
		
	GameObjectScheduler::~GameObjectScheduler()
	{
	}

	bool GameObjectScheduler::isPlanned(scTick _currentTick)
	{
		if(mNextExec <= _currentTick)
		{
			return true;
		}

		return false;
	}

	void GameObjectScheduler::addSchedulableObject(VSchedulableClass *_schedulableObject)
	{
		mTestClass = _schedulableObject;
	}

	void GameObjectScheduler::execute(scTick _currentTick)
	{
	 	// TODO

	 	if(nullptr == mTestClass)
	 	{
	 		for(;;);
	 	}

		 if(mTestClass->isPlanned(_currentTick))
		 {
		 	mTestClass->execute();
		 }

		mNextExec += mTickRate;
	}

  }
}