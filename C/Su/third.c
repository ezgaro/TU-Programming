#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <float.h>


bool checkPattern(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
      if (i % 2 == 0) {
          if (arr[i] >= arr[i + 1]) {
              return false;
          }
      } else {
          if (arr[i] <= arr[i + 1]) {
              return false;
          }
      }
  }
  return true;
}

void reverse(int arr[], int start, int end) {
  while (start < end) {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
  }
}

void rotateArray(int arr[], int n, int k) {
  // [1, 2, 3, 4, 5]
  // [3, 2, 1, 4, 5]
  // [3, 2, 1, 5, 4]
  // [4, 5, 1, 2, 3]
  reverse(arr, 0, n - k - 1);

  reverse(arr, n - k, n - 1);

  reverse(arr, 0, n - 1);
}

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
          if (arr[j] > arr[j + 1]) {
              int temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
          }
      }
  }
}

int main() {

  // 1
  // int n;
  // scanf("%d", &n);
  // int arr[n];

  // for (int i = 0; i < n; i++) {
  //   int num;
  //   scanf("%d", &num);
  //   arr[i] = num;
  // }

  // for (int k = 0; k < n; k++) {
  //   for (int j = k + 1; j < n; j++) {
  //     if (arr[k] > arr[j]) {
  //       int tmp = arr[k];
  //       arr[k] = arr[j];
  //       arr[j] = tmp;
  //     }
  //   }
  // }

  // int startOfPloshtadka = -1;
  // int lengthOfPloshtadka = 0;
  // int maxLength = 0;
  // int maxStart = -1;

  // for (int i = 0; i < n; i++) {
  //   if (i == 0 || arr[i] == arr[i - 1]) {
  //     if (lengthOfPloshtadka == 0) {
  //       startOfPloshtadka = i;
  //     }
  //     lengthOfPloshtadka++;
  //   } else {
  //     if (lengthOfPloshtadka > maxLength) {
  //       maxLength = lengthOfPloshtadka;
  //       maxStart = startOfPloshtadka;
  //     }
  //     lengthOfPloshtadka = 1;
  //     startOfPloshtadka = i;
  //   }
  // }

  // if (lengthOfPloshtadka > maxLength) {
  //   maxLength = lengthOfPloshtadka;
  //   maxStart = startOfPloshtadka;
  // }

  // printf("Start index of ploshtadka: %d\n", maxStart);
  // printf("Length of the ploshtadka: %d\n", maxLength);

  // for (int m = 0; m < n; m++) {
  //   printf("%d ", arr[m]);
  // }

  // 2
    // int n;
    // scanf("%d", &n);

    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // if (checkPattern(arr, n)) {
    //     printf("The array follows the pattern\n");
    // } else {
    //     printf("The array does not follow the pattern \n");
    // }


  // 3
  // int n;
  // scanf("%d", &n);

  // int arr[n];

  // for (int i = 0; i < n; i++) {
  //   int num;
  //   scanf("%d", &num);
  //   arr[i] = num;
  // }

  // for(int i = 0; i < n / 2 ; i++) {
  //   int tmp = arr[i];
  //   arr[i] = arr[n - i - 1];
  //   arr[n - i - 1] = tmp;
  // }

  // for(int i = 0; i < n ; i++) {
  //   printf("%d ", arr[i]);
  // }

// 4
int n, k;
scanf("%d", &n);
scanf("%d", &k);
int arr[n];

for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

rotateArray(arr, n, k);

for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}


// 5

int n;
scanf("%d", &n);
printf("\n");
int redica[n];
for (int i=0;i<n;i++)
{
    int t;
    scanf("%d", &t);
    redica[i]=t;
}

bubbleSort(redica, n);
int k;
printf("Enter k:");
scanf("%d", &k);
printf("\n");
int count=1;
for (int i=0;i<n-1;i++)
    {
        if (count==k) {printf("K po golemina element = %d", redica[i]); break;}
        if (redica[i]!=redica[i+1]) count++;
    }

  return 0;
}