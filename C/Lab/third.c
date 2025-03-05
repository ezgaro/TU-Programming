#include <stdio.h>

// int Sum(int a, int b) {
//   return a + b;
// }

void squareArea(int a) {
  printf("%d/n", a * a);
}
void rectangleArea(int a, int b) {
   printf("%d/n", a * b);
  }
  void squareTangle(int a, int b) {
    printf("%d/n", (a * b)/2);
  }
  void circleArea(int r) {
  printf("%.2f/n", 3.14 *  r * r);
}

void switchNumbers(int a, int b) {
  int c;
  int *pA = &a;
  int *pB = &b;
  c = *pA;
  a = *pB;
  b = c;
  printf("%d\n", a);
  printf("%d\n", b);
}

void isEven(int a) {
  if(a % 2 == 0) {
    printf("The number is even");
  } else {
    printf("The number is not even");
  }
}

void recreateNum(int n) {
  if (n == 0) {
    printf("0");
    return;
}

int leadingBit = 0;
for (int i = 31; i >= 0; i--) {
    if (n & (1 << i)) {
        leadingBit = 1;
    }
    if (leadingBit)
    {
        printf("%d", (n & (1 << i)) ? 1 : 0);
    }
}
printf("\n");
}

int main()
{
  int num;

  printf("Enter a decimal number: ");
  scanf("%d", &num);

  printf("Binary representation: ");
  decimalToBinary(num);


  return 0;
}

int main() {

  //Theory

  // int a = 1;
  // int b = 2;
  // int *pointer;
  // int *nullPtr = NULL;
  // printf("Adress of the NULL pointer: %x\n", nullPtr);
  // pointer = &a;
  // printf("The address of A: %x\n", &a);
  // printf("The address of A: %x\n", pointer);
  // printf("The valuet of A: %x\n", *pointer);
  // printf("%d\n", Sum(a, b));

  //2

  // int a = 1, b = 2;
  // int *pA, *pB;
  // pA = &a;
  // pB = &b;

  // printf("%d\n", (*pA * *pB));
  // printf("%d\n", (*pA - *pB));
  // printf("%d\n", (*pA / *pB));

  //3

  // int input;
  // scanf("%d", &input);

  // switch(input) {
  //   case 1: {
  //     int a;
  //     scanf("%d", &a);
  //     squareArea(a);
  //     break;
  //   }
  //   case 2: {
  //     int a, b;
  //     scanf("%d", &a);
  //     scanf("%d", &b);
  //     rectangleArea(a, b);
  //     break;
  //   }
  //   case 3: {
  //     int a, b;
  //     scanf("%d", &a);
  //     scanf("%d", &b);
  //     squareTangle(a, b);
  //     break;
  //   }

  //   case 4: {
  //     int r;
  //     scanf("%d", &r);
  //     circleArea(r);
  //     break;
  //   }

  //   default: {
  //     printf("Invalid input");
  //     break;
  //   }
  // }

  //2
  // int a = 10, b = 20;
  // switchNumbers(a, b);

  //3
  // int a;
  // scanf("%d", &a);
  // isEven(a);

  //4
  int a;
  scanf("%d", &a);
  recreateNum(a);
  return 0;
}