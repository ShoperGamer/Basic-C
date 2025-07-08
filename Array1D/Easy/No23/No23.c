#include <stdio.h>

int main() {
      double celsius[] = {0.0, 10.0, 20.0, 30.0};
      int size = sizeof(celsius)/sizeof(celsius[0]);
      double fahrenheit[size];
      int i,f;
      
      printf("Fahrenheit temperatures: ");
      for(i<0; i<size; i++){
      	fahrenheit[i] = celsius[i] * 9.00/5.00 + 32.00;
      	printf(" %.2f",fahrenheit[i]);
	  }
      
    return 0;
}
