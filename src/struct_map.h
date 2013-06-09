/* Terra genesis function file
 * Niels Grataloup - 9th of June 2013
 */
 
 #ifndef _STRUCT_MAP_H
 #define _STRUCT_MAP_H
 
 typedef struct sector sector;
 
 struct sector {
		int type_surface; // Allow to install a subway under a building per example.
		int surface_building;
		int type_undergnd; 
		}
		
 #endif