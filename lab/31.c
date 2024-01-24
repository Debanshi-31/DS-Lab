#include <stdio.h>


void transpose(int p[3][3], int t[3][3]) {

  int r,c;

  for (r=0; r<3; r++) {
    for (c= 0; c<3; c++) {
      t[r][c] = p[c][r];
    }
  }

}


int main() {
  int i, j;
  int p[3][3], t[3][3];

  printf("Enter the Elements of the MAtrix");

  for (i = 0; i < 3; i++) 
  {
    for (j = 0; j < 3; j++)
     {
      
      scanf("%d", & p[i][j]);
    }
  }

  transpose(p, t);

  printf("Transpose of the Mtrix is:\n");

  for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }

}
