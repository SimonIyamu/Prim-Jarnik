#include <stdio.h>
#include "findMST.h"

int main(void){
	/*It is of type double because we want to store 1.0/0.0 */
	double G[N][N]= {	{0,2,8,1.0/0.0,7,1.0/0.0} , {2,0,5,7,1.0/0.0,1.0/0.0} , {8,5,0,9,8,1.0/0.0} , {1.0/0.0,7,9,0,1.0/0.0,4} , {7,1.0/0.0,8,1.0/0.0,0,3} , {1.0/0.0,1.0/0.0,1.0/0.0,4,3,0} };

	FindMST(G);
	return 0;
}
