#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <string.h>

void lengthOfArr(char str[]) {
  int l = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    l++;
  }
  printf("The length of the array is %d\n", l);
}

int compareStr(char a[], char b[]) {
  int i = 0;
  while(a[i] != '\0' && b[i] != '\0') {
    if(a[i] != b[i]) {
      return a[i] > b[i] ? -1 : 1;
    }
    i++;
  }

  if(a[i] == '\0' && b[i] == '\0') {
    return 0;
  } else if(a[i] == '\0') {
    return -1;
  } else {
    return 1;
  }
}

int numberOfVowels(char a[]) {
  int count = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
        a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
      count++;
    }
  }
  return count;
}
int main() {
  // char a[] = "abcd";
  // printf("%s\n", a);
  // printf("%d\n", strlen(a));
  //strcmp 0 if s1 == s2; >0 if s1 > s2; <0 if s2 > s1

  //1
  // char a[] = "Hello";
  // lengthOfArr(a);

  // 2
  char a[] = "Hello my name is Stefan";
  int numOfWords = 1;
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] == ' ') {
      numOfWords++;
    }
  }

  // printf("The number of words are %d\n", numOfWords);

  //3
  char a[] = "aaabbcdd1@!!";
  int visited[256] = {0};

  for(int i = 0; i < strlen(a); i++) {

    char curLetter = a[i];

    if (visited[(int)curLetter]) continue;
    int curCounter = 0;

    for(int j = 0 ; j < strlen(a) ; j++) {
      if( a[j] == curLetter ) {
        curCounter++;
      }
    }

    printf("The number of %c in the string is %d\n", curLetter, curCounter);
    visited[(int)curLetter] = 1;
  }

  //4
  char a[] = "Hello";
  char b[] = "Helll";

  if( compareStr(a, b) == 0) {
    printf("Strings are equal\n");
  } else if(compareStr(a, b) == -1) {
    printf("The first string is greater than the second\n");
  } else if(compareStr(a, b) == 1) {
    printf("The second string is greater than the first\n");
  }

  // 5
  printf("%d\n", numberOfVowels("Hello"));

  // 6
  char a[] = "HellO";

  for(int i = 0; a[i] != '\0'; i++) {
    if((int)a[i] >= 97) {
      a[i] = a[i] - 32;
    }
  }

  printf("%s\n", a);




  return 0;
}