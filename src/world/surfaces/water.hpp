#ifndef _SURFACES_WATER_HPP_
#define _SURFACES_WATER_HPP_

/**
*    This file defines the water surfaces. 
*    A water surface can be part of seas, lakes, or rivers.
*	
*	TODO: eventually, add physics and chemistry attributes related
*		  to the water.
*
*------- CHANGELOG --------
*
* 30.04.2016 - v 1.0 (draft)
* First draft (Niels)
*
*------- LICENSE -------
* TODO
*
*/

#include "../inc/defs.hpp"

namespace subcity {

  namespace world {
	class Water : public Surface {
		public:
			// TODO
			
			Water(scCoordinates _coordinates, scWaterType _waterType);

			~Water();

			void execute();

		private:
			scWaterType waterType;
	};
  };
};

#endif
