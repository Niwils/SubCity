#ifndef _ENGINE_VSCHEDULABLECLASS_HPP_
#define _ENGINE_VSCHEDULABLECLASS_HPP_
/**
*   Generic schedulable class definition.
*							
*-------- CHANGELOG --------
*
* 30.04.2016 - v 1.0 - Niels
* Initial draft.
*
*------- LICENSE -------
*
* TODO
*
*/

#pragma once
#include <types/defs.hpp>
#include <engine/VSchedulableClass.hpp>

namespace subcity {

  namespace engine {
	class VSchedulableClass 
	{
		public:
			VSchedulableClass(scCoordinates _coord);
		
			~VSchedulableClass() = 0;

			virtual void execute() = 0;
			
			
	
		protected:
			scTick mTickRate; /*< class tick rate */
			scTick mNextExec; /*< next tick number when the class shall be updated */
	};
  }
}
		

#endif