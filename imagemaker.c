#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

int main() {
  FILE* f;
  f = fopen("image.ppm", "a");

  fprintf(f, "P3 500 500 255 ");
  
  int R, G, B = 0;
  int a, b;

  for(a = 0; a < 500; a ++) {
    for(b = 0; b < 500; b ++) {
      R = (a*a+b*b)%256;
      G = (a*a+b)%256;
      B = (a+b*b+5)%256;

      fprintf(f, "%i %i %i ", R, G, B);
    }
  }
  fclose(f);
}
