#ifndef _ENGINE_SCHEDULER_HPP_
#define _ENGINE_SCHEDULER_HPP_
/**
*   Scheduler class definition.
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

#pragma once
#include "../inc/types/defs.hpp"
#include "VSchedulableClass.hpp"

namespace subcity {
  namespace engine {
	class Scheduler 
	{
		public:
			Scheduler(scTick _tickrate, scTick _currentTick);
		
			~Scheduler();

			bool isPlanned(scTick _currentTick);

			void addSchedulableObject(VSchedulableClass *_schedulableObject);

			void execute(scTick _currentTick);
			
			
	
		protected:
			scTick mTickRate; /*< class tick rate */
			scTick mNextExec; /*< next tick number when the class shall be updated */

			VSchedulableClass *mTestClass;
	};
  }
}
		

#endif