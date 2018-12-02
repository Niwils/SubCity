#ifndef _ENGINE_VSCHEDULABLECLASS_HPP_
#define _ENGINE_VSCHEDULABLECLASS_HPP_
/**
*   Generic schedulable class definition.
*							
*-------- CHANGELOG --------
*
* 24.11.2018 - v 1.0 - Niels
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
#include "VGameElement.hpp"

namespace subcity {

  namespace engine {
	class VSchedulableClass : public VGameElement
	{
		public:
			VSchedulableClass(scTick _tickrate, scTick _starting_tick)
				: VGameElement()
				, mTickRate(_tickrate)
				, mNextExec(_tickrate + _starting_tick)
			{
			}
		
			virtual ~VSchedulableClass() {};

			bool isPlanned(scTick _currentTick)
			{
				return (mNextExec <= _currentTick);
			}

			virtual void execute()
			{
				mNextExec += mTickRate;
			}
			
			
	
		protected:
			scTick mTickRate; /*< class tick rate */
			scTick mNextExec; /*< next tick number when the class shall be updated */
	};
  }
}
		

#endif