
#include <stdio.h>

int main(void) {
	
	int i=0,j=0;
	
  for ( i = 0; i <= 10; i++) {
    for ( j = 0; j <= 10; j++) {
      if (i==10 && j==10) {
        continue;
      }
      
      system("cls");
      printf("i = %d, j = %d\n", i, j);
    }
  }

  return 0;
}
