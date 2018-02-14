#include "water.hpp"

namespace subcity {

  namespace world {

  	Water::Water(scCoordinates _coordinates, scWaterType _waterType) :
  		Surface::Surface(_coordinates) {
  		waterType = _waterType;
  	}

  	Water::~Water() {}

  	void Water::execute() {
  		// TODO
  	}
  };
};