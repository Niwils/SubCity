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

#include "Scheduler.hpp"

namespace subcity {

  namespace engine {
	
	Scheduler::Scheduler(scTick _tickrate, scTick _currentTick)
	: mTickRate(_tickrate)
	, mNextExec(_currentTick + _tickrate)
	{
	}
		
	Scheduler::~Scheduler()
	{
	}

	bool Scheduler::isPlanned(scTick _currentTick)
	{
		if(mNextExec <= _currentTick)
		{
			return true;
		}

		return false;
	}

	void Scheduler::addSchedulableObject(VSchedulableClass *_schedulableObject)
	{
		mTestClass = _schedulableObject;
	}

	void Scheduler::execute(scTick _currentTick)
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