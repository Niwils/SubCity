/* Terra genesis function file
 * Niels Grataloup - 08/31/2010
 * Reviewed with new structure on 9th of June 2013.
 */

#include "terra_genesis.h"

int terra_genesis(sector **gamearea, int xsize, int ysize, int qw) // Here x & y are values given by the configuration wished by the player. qw is the quantity of water.
{  int cpt_x=0;
   int cpt_y=0;
   int w=0;
   int s; // w for water, s for soil.


   // initialising the gamearea 2D table.
   gamearea=malloc(xsize*sizeof(*gamearea));
   *gamearea=calloc(xsize*ysize,sizeof(**gamearea);
   for(cpt_x; cpt_x<xsize; cpt_x++)
		gamearea[cpt_x]=gamearea[cpt_x-1]+ysize;
   
   cpt_x=0;
   do
	{ /*s = 1 // Random. If s = 0 it's water, if 1 it's soil.
	  if ((w<qw && s==0 && cpt_x>5 && gamearea[cpt_x-5]=1 &&gamearea[cpt_x-1]=1)||(w<qw && s==0 && cpt_x<5)||(w<qw && s==0 && gamearea[cpt_x-1]=0)) // Here are conditions to generate water: if the tile is one of the five first of the game, it's just random :-) ; elseif the tile just before it's water, it will continue to make water if random wants it. Then if the engine wants to make a new water area, it needs to be no water at five tiles before and at the last before. That's all folks.
	  {
	     t[i][j]=0;
	     w++;
	  }
	  else
	  {
	     t[i][j]=1;
	  }

	  if (i != x)
	  {
	    i++;
	  }
	  else
	  {
	    i=1;
	    j++;
	  }*/
	  gamearea[cpt_x][cpt_y].type_surface=1;
	  cpt_y++;
	  if(cpt_y==ysize)
	  {
	    cpt_y=0;
		cpt_x++;
	  }
		
	  
   }
  while (cpt_x<xsize); // Here no doubt, we've finished to generate the map.

  return(1); // Ok, work is done. Now time to play with serious things.
}
