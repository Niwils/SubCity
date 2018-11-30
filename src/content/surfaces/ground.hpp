#ifndef _SURFACES_GROUND_HPP_
#define _SURFACES_GROUND_HPP_

/**
*    This file defines the generic raw and constructible 
*    surface the players get when they start a new game.
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

class Ground : public Surface {
	public:
		// TODO
		
		Ground(scCoordinates _coordinates);

		~Ground();

		void execute();
};

#endif
