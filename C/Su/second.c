// 5 7 8 9 12


#include <stdio.h>
#include<stdlib.h>
#include<float.h>


int main() {

  //5
  // int sustezatel1, sustezatel2, sustezatel3, sumSeconds, minutes, seconds;

  // scanf("%d", &sustezatel1);
  // scanf("%d", &sustezatel2);
  // scanf("%d", &sustezatel3);
  // if(sustezatel1 > 50 || sustezatel1 < 1 && sustezatel2 > 50 || sustezatel2 < 1 && sustezatel3 > 50 || sustezatel3 < 1) {
  //   printf("Invalid input !");
  //   return 0;
  // }

  // sumSeconds = sustezatel1 + sustezatel2 + sustezatel3;
  // minutes = sumSeconds / 60;
  // seconds = sumSeconds % 60;
  // if(seconds < 10) {
  //   printf("%d:0%d\n", minutes, seconds);
  // } else {
  //   printf("%d:%d\n", minutes, seconds);
  // }

  // 7
  // int n;
  // double taxi, bus, train, minPrice;
  // char denNosht;

  // scanf("%d", &n);
  // scanf(" %c", &denNosht);

  // if(denNosht == 'D' || denNosht == 'd') {
  //   taxi = 0.7 + n * 0.79;
  // } else if(denNosht == 'N' || denNosht == 'n') {
  //   taxi = 0.7 + n * 0.9;
  // } else {
  //   printf("Invalid input for day/night indicator.\n");
  //   return 1;
  // }

  // if(n < 20) {
  //   bus = DBL_MAX;
  // } else {
  //   bus = n * 0.09;
  // }

  // if(n < 100) {
  //   train = DBL_MAX;
  // } else {
  //   train = n * 0.06;
  // }

  // minPrice = DBL_MAX;

  // if(minPrice > bus) {
  //   minPrice = bus;
  // }
  // if(minPrice > train) {
  //   minPrice = train;
  // }
  // if(minPrice > taxi) {
  //   minPrice = taxi;
  // }

  // printf("The cheapest is: %f\n", minPrice);

  //8
//   double truba1, truba2, V;
// int N;

// scanf("%lf", &truba1);
// scanf("%lf", &truba2);
// scanf("%lf", &V);
// scanf("%d", &N);
// double current = (truba1 + truba2) * N;
// printf("%lf", current);
// if(current > V) {
//   printf("Preliva");
// } else if(current == V) {
//   printf("Perfectly filled");
// } else {
//   printf("Nepulen");
// }

  //9

  // double X, Y;
  // int Z;
  // scanf("%lf", &X);
  // scanf("%lf", &Y);
  // scanf("%d", &Z);

  // double reklotaZaProizvodstvoKila = X * 0.4 * Y;
  // double litriVino = reklotaZaProizvodstvoKila / 2.5;

  // if(litriVino >= Z) {
  //   printf("Vinoto e dostatuchno");
  // } else if(litriVino < Z) {
  //   printf("Vinoto e nedostatuchno");
  // }

  //12
  int n; // 5
  scanf("%d", &n);
  int width = 2 * n - 1; // 9
  int height = 2 * (n - 2) + 1; // 7
  int strana = n - 1; // 4

  for(int i = 1; i < height + 1 ; i++) {
    int sreda = height / 2  + 1;
    if(i <= sreda) {
    if(i == sreda) {
      for(int k = 0; k < strana; k++){
        printf(" ");
      }
      printf("@");
      for(int j = 0; j < strana; j++){
        printf(" ");
      }
      printf("\n");
    } else if(i % 2 != 0) {

      //1st part
      for(int p = 0; p < strana - 1; p++) {
        printf("*");
      }
      printf("\\");

      //2nd part
      printf("/");
      for(int m = 0; m < strana - 1; m++) {
        printf("*");
      }
      printf("\n");
    } else if(i % 2 == 0) {
      //1st part
      for(int p = 0; p < strana - 1; p++) {
        printf("-");
      }
      printf("\\");

      //2nd part
      printf("/");
      for(int m = 0; m < strana - 1; m++) {
        printf("-");
      }
      printf("\n");
    }
  } else if(i > sreda) {
    if(i % 2 != 0) {

      //1st part
      for(int p = 0; p < strana - 1; p++) {
        printf("*");
      }
      printf("/");

      //2nd part
      printf("\\");
      for(int m = 0; m < strana - 1; m++) {
        printf("*");
      }
      printf("\n");
    } else if(i % 2 == 0) {
      //1st part
      for(int p = 0; p < strana - 1; p++) {
        printf("-");
      }
      printf("/");

      //2nd part
      printf("\\");
      for(int m = 0; m < strana - 1; m++) {
        printf("-");
      }
      printf("\n");
    }
  }
  }

  return 0;
}