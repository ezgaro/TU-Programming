#include<stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
  if (num <= 1) {
      return false;
  }
  for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
          return false;
      }
  }
  return true;
}

int main() {
  //1

  // int n, m;
  //   scanf("%d", &n);
  //   scanf("%d", &m);
  //   int array[n][m];
  //   int rowGood = 1;
  //   int colGood = 1;

  //   for (int i = 0; i < n; i++) {
  //       for (int j = 0; j < m; j++) {
  //           scanf("%d", &array[i][j]);
  //       }
  //   }

  //   for (int i = 0; i < n; i++) {
  //       for (int j = 0; j < m - 1; j++) {
  //           if (array[i][j] >= array[i][j + 1]) {
  //               rowGood = 0;
  //               break;
  //           }
  //       }
  //       if (!rowGood) {
  //           break;
  //       }
  //   }

  //   for (int j = 0; j < m; j++) {
  //       for (int i = 0; i < n - 1; i++) {
  //           if (array[i][j] <= array[i + 1][j]) {
  //               colGood = 0;
  //               break;
  //           }
  //       }
  //       if (!colGood) {
  //           break;
  //       }
  //   }

  //   // Output the result
  //   if (rowGood && colGood) {
  //       printf("Everything is good!\n");
  //   } else {
  //       printf("Not as the rules said!\n");
  //   }

  //2


  // int N, M;

  //   scanf("%d %d", &N, &M);
  //   int matrix[N][M];

  //   for (int i = 0; i < N; i++)
  //       for (int j = 0; j < M; j++)
  //           scanf("%d", &matrix[i][j]);

  //   int maxSum = -99999;
  //   int result = matrix[0][0];

  //   for (int i = 0; i < N; i++) {
  //       for (int j = 0; j < M; j++) {
  //           int sum = 0;

  //           for (int dx = -1; dx <= 1; dx++) {
  //               for (int dy = -1; dy <= 1; dy++) {
  //                   int ni = i + dx;
  //                   int nj = j + dy;

  //                   if (ni >= 0 && ni < N && nj >= 0 && nj < M) {
  //                       sum += matrix[ni][nj];
  //                   }
  //               }
  //           }

  //           sum -= matrix[i][j];

  //           if (sum > maxSum) {
  //               maxSum = sum;
  //               result = matrix[i][j];
  //           }
  //       }
  //   }

  //   printf("Числото c най-голям сбор на околните е: %d\n", result);
  //   printf("Сборът на околните е: %d\n", maxSum);



  // 3

//   int n;
//   int m;
//   int minEl = 99999;
//   int minElRow;
//   int maxEl = -99999;
//   int maxElRow;
//   scanf("%d", &n);
//   scanf("%d", &m);
//   int array[n][m];

//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < m; j++) {
//       scanf("%d", &array[i][j]);
//     }
//   }

//   for(int i = 0; i< n; i++) {
//     for(int j = 0; j < m; j++) {
//       if(minEl > array[i][j]) {
//         minEl = array[i][j];
//         minElRow = i;
//       }
//     }
//   }

//   for(int i = 0; i< n; i++) {
//     for(int j = 0; j < m; j++) {
//       if(maxEl < array[i][j]) {
//         maxEl = array[i][j];
//         maxElRow = i;
//       }
//     }
//   }

//   if(maxElRow != minElRow) {
//     // Change the rows where the max and the min occured
//     for (int j = 0; j < m; j++) {
//       int temp = array[minElRow][j];
//       array[minElRow][j] = array[maxElRow][j];
//       array[maxElRow][j] = temp;
//     }
//   }

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//         printf("%d ", array[i][j]);
//     }
//     printf("\n");
// }

int n;
scanf("%d", &n);

int *array = (int *)malloc(n * sizeof(int));
if (array == NULL) {
    printf("Error.\n");
    return 1;
}

for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
}

int *primeArray = (int *)malloc(n * sizeof(int));
if (primeArray == NULL) {
    printf("Error.\n");
    free(array);
    return 1;
}
int primeCount = 0;
int newSize = 0;

for (int i = 0; i < n; i++) {
    if (isPrime(array[i])) {
        primeArray[primeCount++] = array[i];
    } else {
        array[newSize++] = array[i];
    }
}

printf("Array without prime numbers\n");
for (int i = 0; i < newSize; i++) {
    printf("%d ", array[i]);
}
printf("\n");

printf("Array with prime numbers\n");
for (int i = 0; i < primeCount; i++) {
    printf("%d ", primeArray[i]);
}
printf("\n");

free(array);
free(primeArray);

return 0;
}