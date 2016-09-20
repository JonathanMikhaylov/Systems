#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Sum of multiples of 3 and 5: %d",problem() );
  
}

int problem() {
  int sum;
  sum = 0;

  int i;
  for (i=0;i<=100;i++) {
    if (i%3 == 0) sum+=i;
    else if (i%5 == 0) sum+=i; 
  }
  return sum;
}
