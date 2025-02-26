#include <stdio.h>
#include <limits.h>

int main() {
//  int num;
//  scanf("%d", &num);
 // 1
//  if(num > 6) {
//   printf("The num is bigger than 6");
//  }
 // 2
//  if(num % 8  > 4) {
//   printf("top");
//  }

//  3
//  int num1, num2, num3, maxNum = INT_MIN;
//  scanf("%d", &num1);
//  scanf("%d", &num2);
//  scanf("%d", &num3);

//  if(maxNum < num1) {
//   maxNum = num1;
//  }

//  if(maxNum < num2) {
//   maxNum = num2;
//  }

//  if(maxNum < num3) {
//   maxNum = num3;
//  }

//  printf("The max number is: %d", maxNum );



 //4 enter number and print its name switch case

//  int number;
//  scanf("%d", &number);
//  switch(number) {
//   case 1: {printf("One"); break;}
//   case 2: {printf("Two"); break;}
//   case 3: {printf("Three"); break;}
//   case 4: {printf("Four"); break;}
//   case 5: {printf("Five"); break;}
//   case 6: {printf("Six"); break;}
//   case 7: {printf("Seven"); break;}
//   case 8: {printf("Eight"); break;}
//   case 9: {printf("Nine"); break;}
//   default: {printf("What you enered is not a valid number"); break;}
//  }


// 5
// int num;
// scanf("%d", &num);
// switch(num) {
//   case 1: {printf("Monday"); break;}
//   case 2: {printf("Tuesday"); break;}
//   case 3: {printf("Wednesday"); break;}
//   case 4: {printf("Thursday"); break;}
//   case 5: {printf("Friday"); break;}
//   case 6: {printf("Saturday"); break;}
//   case 7: {printf("Sunday"); break;}
//   default:{
//     printf("Number has to be between 1 and 7");
//     break;
//   }
// }

//6
// int a;
// scanf("%d", &a);
// for(int i = 1 ; i <= a ; i++) {
//   for(int j = 0 ; j < i; j++ ) {
//     printf("%d", i);
//   }
//   printf("\n");
// }

// 7
// int a, b, sum;
// scanf("%d", &a);
// scanf("%d", &b);


// if (a > b) {
//   for (int i = b + 1; i < a; i++) {
//       sum += i;
//   }
// } else if (b > a) {
//   for (int i = a + 1; i < b; i++) {
//       sum += i;
//   }
// }
// printf("%d", sum);


// 8
// int a, b, sum = 0, umnojenie = 1;
// scanf("%d", &a);
// scanf("%d", &b);


// if (a > b) {
//   for (int i = b + 1; i < a; i++) {
//     if( i % 2 == 0) {
//       sum += i;
//     } else {
//       umnojenie *= i;
//     }
//   }
// } else {
//   for (int i = a + 1; i < b; i++) {
//     if( i % 2 == 0) {
//       sum += i;
//     } else {
//       umnojenie *= i;
//     }
//   }
// }
// printf("%d\n", sum);
// printf("%d", umnojenie);

// 9
// int N, K, buffer;
// scanf("%d", &N);
// scanf("%d", &K);

// for(int i = 0; i < N; i++) {
//   int num;
//   printf("Enter a num: ");
//   scanf("%d", &num);
//   if(num % 3 == 0 && num > K) {
//     buffer++;
//   }
// }
// printf("%d", &buffer)

// 10

// int sum;
// for(;;) {
//   int n;
//   scanf("%d", &n);
//   if(n == 0) {
//     break;
//   } else {
//     sum += n;
//   }
// }

// printf("%d\n", sum);

//11
double a, b;
printf("Enter two real numbers:\n");
scanf("%lf", &a);
scanf("%lf", &b);

for(double i = a; i < b; i += 0.1) {
    printf("%.2f\n", i * i - 4);
}

return 0;
}


