#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

int main() {
  FILE* f;
  f = fopen("image.ppm", "a");

  fprintf(f, "P3 650 650 255\n");
  
  int R, G, B;
  int x = 0;
  int a, b, c;

  while(x < 50) {
    a = rand();
    b = rand();
    c = rand();
    R = (a^3+b^2+c)%256;
    G = (a^2+b^2)%256;
    B = (a^3+b^4+c^2)%256;

    fprintf(f, "%d %d %d", R, G, B);
    x ++;
  }
}
