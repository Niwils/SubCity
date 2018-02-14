#ifndef _SURFACES_SURFACE_HPP_
#define _SURFACES_SURFACE_HPP_
/**
*   Generic tile definition. Must be extended as water or any ground surface.	*
*							*
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

namespace subcity {

  namespace world {
	class Surface {
		public:
			Surface(scCoordinates _coord);
		
			~Surface() = 0;

			void execute() = 0;
			
			
	
		private:
			scCoordinates coord;
		

#endif

