#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
  // int n[10];
  // int i, j;
  // for(i = 0; i < 10; i++) {
  //   n[i] = i + 100;
  // }

  // for(int j = 0; j < 10; j++) {
  //   printf("Element[%d] = %d\n", j, n[j]);
  // }

  // int arr[] = {10, 20, 30, 40 , 50 ,60};
  // int* ptr = arr;

  // printf("Size of arr[] is %d\n", sizeof(arr));
  // printf("Size of ptr %ld\n", sizeof(ptr));

  // int arr[5];
  // for(int i = 0; i < 5; i++) {
  //   int num;
  //   scanf("%d", &num);
  //   arr[i] = num;
  // }

  // for(int j = 0; j < 5; j++) {
  //   printf("Index [%d]: %d\n", j, arr[j]);
  // }

  // 7 chisla -5000, 5000

  // int arr[7];
  // for(int i=0 ; i < 7; i++) {
  //   int n;
  //   scanf("%d", &n);
  //   if(n > -5000 && n < 5000) {
  //     arr[i] = n;
  //   }
  // }
  // for(int j = 0; j < 7; j++) {
  //   printf("%d\n", arr[j]);
  // }

  // int arr[7];
  // for(int i = 0; i < 7; i++) {
  //   int n;
  //   scanf("%d", &n);
  //   if(n > -5000 && n < 5000) {
  //     arr[i] = n;
  //   } else {
  //     printf("Invalid input! Number must be between -5000 and 5000.\n");
  //     return 1;
  //   }
  // }

  // int max = INT_MIN;
  // for(int j = 0; j < 7; j++) {
  //   if(arr[j] > max) {
  //     max = arr[j];
  //   }
  // }
  // printf("Maximum value: %d\n", max);

  // int arr[7];
  // for(int i = 0; i < 7; i++) {
  //   int n;
  //   scanf("%d", &n);
  //   if(n > -5000 && n < 5000) {
  //     arr[i] = n;
  //   } else {
  //     printf("Invalid input! Number must be between -5000 and 5000.\n");
  //     return 1;
  //   }
  // }
  // int sum;
  // for( int j = 0; j < 7; j++){
  //   sum += arr[j];
  // }

  // printf(sum / 7);

  // float sum=0;
  //   int arr[7];

  //   for(int i=0;i<7; i++)
  //       {
  //           int a;
  //           while(1)
  //               {
  //                   scanf("%d", &a);
  //                   if (a<-5000 || a>5000)
  //                   {
  //                       printf("Enter a number in the range [-5000, 5000]\n");
  //                   }
  //                   else break;
  //               }
  //           arr[i]=a;
  //           sum+=arr[i];
  //       }

  //   float average=sum/7;
  //   float diff=abs(average-arr[0]);
  //   int minIndex;

  //   for (int i=1;i<7;i++)
  //       {
  //           float tempDiff=abs(average-arr[i]);
  //           if (tempDiff<diff)
  //               {
  //                   diff=tempDiff;
  //                   minIndex=i;
  //               }

  //       }

  //   printf("Average = %.2f, closest = %d at index %d", average, arr[minIndex], minIndex+1);

  int arr[20];
  int polojitelenArr[20] = {0};
  int negativeArr[20] = {0};


  for(int i = 0; i < 20; i++) {
    arr[i] = rand() % 21 - 10;
  }

  printf("Original Array:\n");
  for(int j = 0; j < 20; j++) {
    printf("%d ", arr[j]);
  }
  printf("\n");

  int posIndex = 0, negIndex = 0;
  for(int k = 0; k < 20; k++) {
    if(arr[k] > 0) {
      polojitelenArr[posIndex++] = arr[k];
    } else {
      negativeArr[negIndex++] = arr[k];
    }
  }

  printf("Positive Numbers Array:\n");
  for(int l = 0; l < posIndex; l++) {
    printf("%d ", polojitelenArr[l]);
  }
  printf("\n");

  printf("Negative Numbers Array:\n");
  for(int m = 0; m < negIndex; m++) {
    printf("%d ", negativeArr[m]);
  }
  printf("\n");



  return 0;
}

