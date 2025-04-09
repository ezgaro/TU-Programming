#include<stdio.h>
#include <math.h>

// struct Book {
//   char author[30];
//   char subject[10];
//   char title[10];
//   int id;
// };

// void printBook(struct Book* book) {
//   printf("Book title: %s\n", book->title);
//   printf("Book author: %s\n", book->author);
//   printf("Book subject: %s\n", book->subject);
//   printf("Book book id: %d\n", book->id);
// }
// typedef struct Person {
//   char name[10];
//   int cityNo;
//   float salary;
// } person;

// struct Point {
//   int coord_x;
//   int coord_y;
// };

// struct Triangle {
//   struct Point point1;
//   struct Point point2;
//   struct Point point3;
// };

// double calculateDistance(struct Point p1, struct Point p2) {
//   return sqrt(pow(p2.coord_x - p1.coord_x, 2) + pow(p2.coord_y - p1.coord_y, 2));
// }


// struct Vehicle {
//   char name[20];
//   int topSpeed;
// };

// struct VehicleType {
//   struct Vehicle car;
//   struct Vehicle plane;
//   struct Vehicle boat;
// };

// void compareTopSpeed(struct Vehicle v1, struct Vehicle v2) {
//   if(v1.topSpeed > v2.topSpeed) {
//     printf("The first vehicle is the faster one");
//   } else if(v1.topSpeed < v2.topSpeed) {
//     printf("The second vehicle is the faster one");
//   } else {
//     printf("The speed is equal");
//   }
// }

struct Student {
  char name[10];
  double grade;
};

struct Class {
  struct Student first;
  struct Student second;
  struct Student third;
};

struct Vipusk {
  struct Class A;
  struct Class B;
};

double calculateClassAverage(struct Class class) {
  return (class.first.grade + class.second.grade + class.third.grade) / 3.0;
}

double calculateVipuskAverage(struct Vipusk vp) {
  double avgClassA = calculateClassAverage(vp.A);
  double avgClassB = calculateClassAverage(vp.B);
  return (avgClassA + avgClassB) / 2.0;
}



int main() {
  // struct Book B1;
  // person p1;

  // printf("Enter name: ");
  // scanf("%s", p1.name);
  // printf("Enter city number: ");
  // scanf("%d", &p1.cityNo);
  // printf("Enter salary: ");
  // scanf("%f", &p1.salary);

  // printf("\nPerson Details:\n");
  // printf("Name: %s\n", p1.name);
  // printf("City Number: %d\n", p1.cityNo);
  // printf("Salary: %.2f\n", p1.salary);

  // printf("Id of the book: %d\n", B1.id);

  // 1

  // struct Triangle triangle = {
  //   {1, 2},
  //   {3, 4},
  //   {5, 6}
  // };

  // double side1 = calculateDistance(triangle.point1, triangle.point2);
  // double side2 = calculateDistance(triangle.point2, triangle.point3);
  // double side3 = calculateDistance(triangle.point3, triangle.point1);

  // printf("Lengths of the sides of the triangle:\n");
  // printf("Side 1: %.2f\n", side1);
  // printf("Side 2: %.2f\n", side2);
  // printf("Side 3: %.2f\n", side3);

  // 2
  // struct VehicleType types = {
  //   {"Car", 260},
  //   {"Plane", 1000},
  //   {"Boat", 50}
  // };

  // compareTopSpeed(types.car, types.plane);
  // compareTopSpeed(types.car, types.boat);

  // 3

  struct Class class1 = {
    {"Kircho", 5.60},
    {"Peca", 2.60},
    {"Mish", 4.20},
  };

  struct Class class2 = {
    {"Nikolay", 3.60},
    {"Daniel", 4.60},
    {"Kaloyan", 5.20},
  };

  struct Vipusk vp = {
    class1, class2
  };

  double avgClass1 = calculateClassAverage(class1);
  double avgClass2 = calculateClassAverage(class2);
  printf("Average grade for Class 1: %.2f\n", avgClass1);
  printf("Average grade for Class 2: %.2f\n", avgClass2);

  double avgVipusk = calculateVipuskAverage(vp);
  printf("Average grade for the Vipusk: %.2f\n", avgVipusk);

  return 0;
}