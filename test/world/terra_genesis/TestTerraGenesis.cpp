/* Terra genesis engine test file
 * Niels Grataloup - 9th of June 2013
 */
#include "includes.h"
#include "struct_map.h"
#define X_DIM 74
#define Y_DIM 74

int main(void)
{
    int cpt_x, cpt_y;
	sector **terragenerated=NULL;
	printf("Test program to test the terra genesis engine.\n");
	printf("Generation a 74x74 2D Matrix");
	
	if(!terra_genesis(terragenerated, X_DIM, Y_DIM, 0))
	{
	   printf("Fatal error: couldn't generate the surface.");
	   exit(0);
	}
	else
	{
	  for(cpt_x=0; cpt_x<X_DIM; cpt_x++)
	  {
	    for(cpt_y=0; cpt_y<Y_DIM; cpt_y++);
		   printf("%d", terragenerated[cpt_x][cpt_y]);
		   
		printf("\n");
	  }
	}
	
	return(0);
}