#include <stdio.h>
#include <stdlib.h>
 
/* Connect two arcs */
void weighted_arc_connect(weighted_arc *arcs, unsigned int first, unsigned int second, 
        int weight, unsigned int *pos)
{
    arcs[*pos].first = first;
    arcs[*pos].second = second;
    arcs[*pos].weight = weight;
    (*pos)++;
}
 
int main(void)
{
    unsigned int size = 9; /* Arcs */
    unsigned int order = 6; /* Vertices */
    unsigned int i = 0;
    int *distances;
 
    weighted_arc *arcs = malloc(size * sizeof(weighted_arc));
    weighted_arc_connect(arcs, 0, 1, 5, &i);
    weighted_arc_connect(arcs, 0, 3, -2, &i);
    weighted_arc_connect(arcs, 1, 2, 1, &i);
    weighted_arc_connect(arcs, 2, 3, 2, &i);
    weighted_arc_connect(arcs, 2, 4, 7, &i);
    weighted_arc_connect(arcs, 2, 5, 3, &i);
    weighted_arc_connect(arcs, 3, 1, 2, &i);
    weighted_arc_connect(arcs, 4, 3, 3, &i);
    weighted_arc_connect(arcs, 4, 5, 10, &i);
 
    distances = bellman_ford(arcs, size, order, 0);
    if (distances == NULL) {
        printf("Graph contains a negative cycle or ran out of memory.\n");
        return 1;
    }
 
    for (i = 0; i < order; i++) {
        printf("%u: %d\n", i, distances[i]);
    }
 
    free(arcs);
    free(distances);
    return 0;
}
