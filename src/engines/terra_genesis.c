/* Terra genesis function file
 * Niels Grataloup - 08/31/2010
 */

#include <stdio.h>

int terra_genesis(int t[x][y], int qw) // Here x & y are values given by the configuration wished by the player. qw is the quantity of water.
{  int i, j, ,w, s; // w for water, s for soil.
   do
	{ s = 1 // Random. If s = 0 it's water, if 1 it's soil.
	  if ((w<qw && s==0 && i>5 && t[i-5]=1 &&t[i-1]=1)||(w<qw && s==0 && i<5)||(w<qw && s==0 && t[i-1]=0)) // Here are conditions to generate water: if the tile is one of the five first of the game, it's just random :-) ; elseif the tile just before it's water, it will continue to make water if random wants it. Then if the engine wants to make a new water area, it needs to be no water at five tiles before and at the last before. That's all folks.
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
	  }
 
  while (j>y); // Here no doubt, we've finished to generate the map.

  return(1); // Ok, work is done. Now time to play with serious things.
}
