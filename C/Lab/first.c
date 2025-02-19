#include <stdio.h>
#include <math.h>

int main() {
  // int a;
  // int b;
  // int d;
  // printf("Length: ");
  // scanf("%d", &a);
  // printf("Width: ");
  // scanf("%d", &b);
  // printf("Diameter: ");
  // scanf("%d", &d);
  // printf("Rectangle: %d\n", a * b);
  // printf("Circle: %.2f\n", 3.14 * d);

  // int num = 456;
  // printf("Edinici: %d\n", num % 10);
  // printf("Desetici: %d\n", num / 10 % 10);
  // printf("Stotici: %d\n", num / 100 % 10);


  int seconds;
  printf("Seconds: ");
  scanf("%d", seconds);

  int hours = seconds / 3600;
  int minutes = (seconds - hours * 3600) / 60;
  int second = (seconds - hours * 3600 - minutes * 60);

  printf("%d hours %d minutes %d seconds", hours, minutes, second);

  return 0;
}