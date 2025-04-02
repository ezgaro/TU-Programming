#include<stdlib.h>

void inputNums(int *array, int lengthOfArr) {
  printf("Enter %d numbers:\n", lengthOfArr);
  for (int i = 0; i < lengthOfArr; i++) {
    scanf("%d", &array[i]);
  }
}


void printNums(int *array, int lengthOfArr) {
  printf("Array elements:\n");
  for (int i = 0; i < lengthOfArr; i++) {
    printf("Num %d: %d\n", i + 1, array[i]);
  }
}

void sumNums(int * array, int lengthOfArr) {
  int sum = 0;
  for(int i = 0; i < lengthOfArr ; i++) {
    sum += array[i];
  }

  printf("%d", sum);
}
void findMax(int * array, int lengthOfArr) {
  int max = array[0];
  for(int i = 1; i < lengthOfArr ; i++) {
    if(max < array[i]) {
      max = array[i];
    }
  }

  printf("%d", max);
}

int main() {
  // int i = 7;
  // int *stations;

  // stations = (int*) malloc(i * sizeof(int)); // Използвайте sizeof(int) вместо 4 за по-голяма преносимост
  // if(stations == NULL) {
  //     exit(1);
  // }

  // for(int j = 0; j < i; j++) {
  //     stations[j] = j + 1;
  // }

  // int *ptrToStations;
  // ptrToStations = stations;
  // stations = (int*) malloc(++i * sizeof(int));

  // for(int l = 0; l < i - 1; l++) { // Копирайте само i-1 елемента
  //     stations[l] = ptrToStations[l];
  // }
  // stations[i - 1] = i; // Добавете новия елемент

  // free(ptrToStations); // Освободете старата памет

  // // Премахване на елемента със стойност 3
  // int x = 3;
  // int found = 0;
  // for(int k = 0; k < i; k++) {
  //     if(stations[k] == x) {
  //         found = 1;
  //         // Преместване на всички следващи елементи с една позиция назад
  //         for(int m = k; m < i - 1; m++) {
  //             stations[m] = stations[m + 1];
  //         }
  //         i--; // Намаляване на размера на масива
  //         break;
  //     }
  // }

  // if(found) {
  //     // Преоразмеряване на масива
  //     int temp = (int) realloc(stations, i * sizeof(int));
  //     if(temp != NULL) {
  //         stations = temp;
  //     } else {
  //         // Грешка при преоразмеряване, но stations все още сочи към валидна памет
  //     }
  // }

  // for(int k = 0; k < i; k++) {
  //     printf("%d", stations[k]);
  //     printf("\n");
  // }

  // free(stations); // Освободете паметта

  // int count = 0, i;
  // int * stations = NULL, * ptrToStations = NULL;

  // for(int i = 1; i <= 7;count++) {
  //   ptrToStations = (int *) realloc(stations, count*sizeof(int));
  //   if(ptrToStations != NULL) {
  //     stations = ptrToStations;
  //     stations[count] = i;
  //   }

  //   for(i = 0; i < 7; i++) {
  //     printf("%d", stations[i]);
  //     printf("\n");
  //   }
  //   ptrToStations = (int *) realloc(stations, ++count*sizeof(int));
  //   if(ptrToStations != NULL) stations - ptrToStations;
  // }

  // for(i = 0; i < count; i++)
  // printf("%d", stations[i]);
  // printf("\n");
  // ptrToStations = (int *)realloc(stations, --count*sizeof(int));
  // if(ptrToStations != NULL) stations = ptrToStations;

  // for(i = 0; i < count; i++) {
  //   printf("%d", stations[i]);
  // }

  // 1
  int *array = NULL;
  int lengthOfArr, inp;

  printf("Enter the length of the array: ");
  scanf("%d", &lengthOfArr);

  array = (int *)malloc(lengthOfArr * sizeof(int));
  if (array == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  while(1) {
    printf("\nMenu:\n");
  printf("1. Input numbers\n");
  printf("2. Print numbers\n");
  printf("3. Sum numbers\n");
  printf("4. Find maximum\n");
  printf("Enter your choice: ");
  scanf("%d", &inp);
    switch (inp) {
      case 1: {
        inputNums(array, lengthOfArr);
        break;
      }
      case 2: {
        printNums(array, lengthOfArr);
        break;
      }
      case 3: {
        sumNums(array, lengthOfArr);
        break;
      }
      case 4: {
        findMax(array, lengthOfArr);
        break;
      }
      case 5: {
        printf("Exiting...\n");
        free(array);
        return 0;
      }
    }
  }

    free(array);

  return 0;
}