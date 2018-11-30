#ifndef _ENGINE_VGAMEELEMENT_HPP_
#define _ENGINE_VGAMEELEMENT_HPP_
/**
*   Generic game element object.
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
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

namespace subcity {

  namespace engine {
	class VGameElement 
	{
		public:
			VGameElement()
				: mUuid(boost::uuids::random_generator()())
			{
			}
		
			virtual ~VGameElement() {};	

			void setEngine()
			{
				// TODO
			}		
			
	
		protected:
			scUuid mUuid; /*< Object UUID */
	};
  }
}
		

#endif