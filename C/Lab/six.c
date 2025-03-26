#include <stdio.h>

int main() {

  // const int CITY = 2;
  // const int WEEK = 7;

  // int temperature[CITY][WEEK];

  // for(int i = 0; i < CITY; i++) {
  //   for(int j = 0; j < WEEK; j++) {
  //     scanf("%d", &temperature[i][j]);
  //   }
  // }

  // for(int i = 0; i < CITY; i++) {
  //   for(int j = 0; j < WEEK; j++) {
  //     printf("City: %d, Day: %d = %d\n", i + 1, j + 1, temperature[i][j]);
  //   }
  // }

  // int arr[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8},  {9, 10, 11, 12}};

  // for(int i = 0; i < 3; i++) {
  //   for(int j = 0; j < 4; j++) {
  //     printf("%d ", arr[i][j]);
  //   }
  //   printf("\n");
  // }
  // float a[2][2], b[2][2], result[2][2];

  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     printf("Enter element a[%d][%d]: ", i + 1, j + 1);
  //     scanf("%f", &a[i][j]);
  //   }
  // }
  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     printf("Enter element b[%d][%d]: ", i + 1, j + 1);
  //     scanf("%f", &b[i][j]);
  //   }
  // }

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     result[i][j] = a[i][j] + b[i][j];
  //   }
  // }

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     printf("%.2f ", result[i][j]);
  //   }
  //   printf("\n");
  // }

  // float sum = 0.0;

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     sum += result[i][j];
  //   }
  // }

  // printf("The sum is: %.2f", sum);

  //1

  int N;
  scanf("%d", &N);
  int arr[N][N];

  for(int i = 0 ; i < N ; i++) {
    for(int j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Glaven diagonal: \n");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(i == j) {
        printf("%d ", arr[i][j]);
      }
    }
  }

  printf("\n");
  printf("Secondary disgonal: \n");

  for (int i = 0; i < N; i++) {
    printf("%d ", arr[i][N - 1 - i]);
  }

  printf("\n");

  printf("Chisla nad diagonal: \n");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(i < j) {
        printf("%d ", arr[i][j]);
      }
    }
  }
  printf("\n");
  printf("Chisla pod diagonal: \n");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(i > j) {
        printf("%d ", arr[i][j]);
      }
    }
  }
  printf("\n");


  // 2

  int n;
    scanf("%d", &n);
    int matrica[n][n];

    for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                    scanf("%d", &matrica[i][j]);
                }
        }

    int flag=1;
    int sum=0;
    for (int i=0;i<1;i++){
            for (int j=0;j<n;j++){
                    sum+=matrica[i][j];
                }
        }

    for (int i=0;i<n;i++){
            int rowSum=0; int colSum=0;
            for (int j=0;j<n;j++){
                    rowSum+=matrica[i][j];
                    colSum+=matrica[j][i];
                }
            if (rowSum!=sum || colSum!=sum) {flag=0; break;}
        }

    if (flag==1) printf("Magical!");
    else printf("Not magical!");
  return 0;
}