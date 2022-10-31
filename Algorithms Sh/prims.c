#include<stdio.h>
#include<stdbool.h> 
#define VAL 9999999
#define VERTEX 5

int Graph[VERTEX][VERTEX] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

int main() {
  int edgenum, used[VERTEX];

  memset(used, false, sizeof(used));
  edgenum = 0;
  used[0] = true;
  int x, y, i, j; 
  printf("Edge : Weight\n");

  while (edgenum < VERTEX - 1) {
   
    int min = VAL;
    x = 0;
    y = 0;

    for (i = 0; i < VERTEX; i++) {
      if (used[i]) {
        for (j = 0; j < VERTEX; j++) {
          if (!used[j] && Graph[i][j]) {  
            if (min > Graph[i][j]) {
              min = Graph[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    printf("%d - %d : %d\n", x, y, Graph[x][y]);
    used[y] = true;
    edgenum++;
  }

  return 0;
}

