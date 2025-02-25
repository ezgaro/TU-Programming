#include <stdio.h>

int main() {
  //1

  // char symbol;
  // printf("Enter user input: ");
  // scanf("%c", &symbol);

  // printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
  // printf("%c        %c\n", symbol, symbol);
  // printf("%c        %c\n", symbol, symbol);
  // printf("%c        %c\n", symbol, symbol);
  // printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol); 25.4

  //2
  // int inches;
  // char userInput[2];
  // int answer;
  // printf("Please enter a number in inches: ");
  // scanf("%d", &inches);
  // printf("Enter:\n");
  // printf("mm for milimeters\n");
  // printf("sm for santimeters\n");
  // printf("dm for decimeters\n");
  // printf("m for meters\n");
  // printf("Your input: ");
  // scanf("%s", &userInput);
  // if(userInput == "mm") {
  //   answer = inches / 25.4;
  // } else if(userInput == "sm") {
  //   answer = inches / 254;
  // } else if(userInput == "dm") {
  //   answer = inches / 2540;
  // } else if(userInput == "m") {
  //   answer = inches / 25400;
  // }
  // printf("%d\n", answer);


  //3
  // int celcius;
  // printf("Celcius: ");
  // scanf("%d", &celcius);
  // int faren = (celcius * (9/5)) + 32;
  // printf("Fahrenheit: %d\n", faren);

  //4
  // double degrees, radians;
  // printf("Enter degrees: ");
  //   scanf("%lf", &degrees);
  //   radians = degrees * (3.14 / 180.0);
  //   printf("Radians: %lf\n", radians);


  //7
  int xA, yA, xB, yB, length, width;
  printf("Enter coordinates for point A:\n");
  scanf("%d", &xA);
  scanf("%d", &yA);
  printf("Enter coordinates for point B:\n");
  scanf("%d", &xB);
  scanf("%d", &yB);
  printf("\n");
  if(xA > xB) {
    length = xA - xB;
  } else if(xA < xB) {
    length = xB - xA;
  }

  if(yA > yB) {
    width = yA - yB;
  } else if(yA < yB) {
    width = yB - yA;
  }

  printf("Area: %d\n", width * length);

  //10
  double pricePerKiloVege, pricePerKiloFruit, totalVegeLV, totalFruitLV;
  int kilosVege, kilosFruit;

  printf("Enter price per kilos for the vegetables: \n");
  scanf("%lf", &pricePerKiloVege);
  printf("Enter price per kilos for the fruits: \n");
  scanf("%lf", &pricePerKiloFruit);
  printf("Enter kilos of vegetables: \n");
  scanf("%d", &kilosVege);
  printf("Enter kilos of fruits: \n");
  scanf("%d", &kilosFruit);


  totalFruitLV = pricePerKiloFruit * kilosFruit;
  totalVegeLV = pricePerKiloVege * kilosVege;
  printf("Rekolta euro: %.2lf euro", (totalFruitLV + totalVegeLV) / 1.95);


  return 0;
}