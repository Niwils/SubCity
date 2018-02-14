#ifndef _INCDEFHPP_
#define _INCDEFHPP_
/**
*   Generic types definition for SubCity.		*
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

/** Structures for coordinates **/

typedef int scCoordinate;

struct struct_scCoordinates {
	scCoordinate x, y;
};

typedef struct struct_scCoordinates scCoordinates;

/** Types for time representation **/

typedef int scDailyHours;

struct struct_scTimeTable {		/** << Used for transportation time tables, working shifts? */
	scDailyHours start,end;
};

typedef struct_scTimeTable scTimeTable;

/** Types for world elements attributes **/

/** - Types for water tiles attributes **/
typedef enum {sea, lake, river} scWaterType; /* << Type of water for a water tile. */

/** - Types for active ground tiles attributes **/

typedef int scHouseInhabitantsSize;	/* << Number of inhabitants for an accomodation tile. */

typedef int scIndustryStaffSize;	/* << Number of total staff employed for an industry tile. */

typedef float scIndustryIncome; 	/* << Current income for an industry tile */

typedef int scIndustryStocks;		/* << Available stocks for an industry tile */

typedef float scIndustryHourlyProductivity;		/* << Hourly productivity rate for an industry tile */

// TODO: each industry have given working hours and shifts. Each shift has a set of affiliated inhabitants as staff.

#endif
