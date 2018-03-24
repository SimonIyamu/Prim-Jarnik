#include <stdio.h>
#include "findMST.h"

void FindMST(double graph[N][N])
{
   int from[N], weight[N],v,i,min,this;	/*weight[i] is the weight of the edge that leads to i*/
   char mst[N];   /*contains the nodes that are visited, or else   the minimum spanning tree edges*/

   for (i = 0; i < N; i++)
      weight[i] = (int) INFINITY, mst[i] = FALSE;

   weight[0] = 0;
   from[0] = -1;	/*Set the first edge weight as 0 so that it gets chosen as minimum */

   for (i = 0; i < N-1; i++){
      min = (int) INFINITY;

      for (v = 0; v < N; v++)
         if (mst[v] == FALSE && weight[v] < min){
            min = weight[v];
            this = v;
         }

      mst[this] = TRUE;

      for (v = 0; v < N; v++)
         if (graph[this][v] && mst[v] == FALSE && graph[this][v] <  weight[v]){
            from[v]  = this;
            weight[v] = graph[this][v];
         }
   }

   int sum=0;
   printf("The minimum spanning tree consists of the edges:\n");
   for (i = 1; i < N; i++){
      printf("(%d , %d)    ", from[i], i);
      sum+=graph[i][from[i]];
   }
   printf("\nThe total weight of all edges is %d\n",sum);
}
