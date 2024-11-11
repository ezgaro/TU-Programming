# class Person:
#   def __init__(self, name1, age1):
#     self.name = name1
#     self.age = age1
#     self.__w = 20
#   def get_w(self):
#     return self.__w
#   def set_w(self, weight):
#     set.__w = weight
#   def greetings(self):
#     print(f'Hello, my name is {self.name}!')

# person1 = Person('Stefan', 19)
# print(person1.get_w())
# person1.greetings()

# class Student(Person):
#   def __init__(self, name1, age1, year):
#     super().__init__(name1, age1)
#     self.grad_year = year
#   def __str__(self):
#     return f''


# student1 = Student('Stefan1', 20, 2028)

# print(student1.grad_year)

# Define class Person(name, lastname, age, nationality), and a constructor that initializes the fields of the class
# Add method print_info which prints the name and the nationality. Create 3 objects from the class and call print_info for them.
# 1
# class Person :
#   def __init__(self, name1, lastname1, age1, nationality1):
#     self.name = name1
#     self.lastname = lastname1
#     self.age = age1
#     self.nationality = nationality1
#   def print_info(self):
#     print(f'{self.name} is with {self.nationality} nationality!')

# obj1 = Person('Stefan', 'Petrov', 19, 'Bulgarian')
# obj2 = Person('Petar', 'Ivanov', 22, 'British')
# obj3 = Person('Joana', 'Petrova', 11, 'Bulgarian')

# obj1.print_info()
# obj2.print_info()
# obj3.print_info()


# Add to the code written above a class Student which is a decendant of Person with 2 new fields university and what year are you in
# predefine print_info to print the new filelds
#2

# class Person:
#     def __init__(self, name1, lastname1, age1, nationality1):
#         self.name = name1
#         self.lastname = lastname1
#         self.age = age1
#         self.nationality = nationality1

#     def print_info(self):
#         print(f'{self.name} is with {self.nationality} nationality!')

# class Student(Person):
#     def __init__(self, name1, lastname1, age1, nationality1, university1, kurs1):
#         super().__init__(name1, lastname1, age1, nationality1)
#         self.university = university1
#         self.kurs = kurs1

#     def print_info(self):
#         super().print_info()
#         print(f'Studies in {self.university} and is {self.kurs} year.')

# obj1 = Student('Stefan', 'Petrov', 19, 'Bulgarian', 'TUS', 'first')
# obj2 = Person('Petar', 'Ivanov', 22, 'British')
# obj3 = Person('Joana', 'Petrova', 11, 'Bulgarian')

# obj1.print_info()
# obj2.print_info()
# obj3.print_info()

#Adding class Lector with new fields (university, working_years). Predefine print_info for the new fields. Create 2 new instantions and call print_info.
# 3

# class Person:
#     def __init__(self, name1, lastname1, age1, nationality1):
#         self.name = name1
#         self.lastname = lastname1
#         self.age = age1
#         self.nationality = nationality1

#     def print_info(self):
#         print(f'{self.name} is with {self.nationality} nationality!')

# class Lector(Person):
#     def __init__(self, name1, lastname1, age1, nationality1, university1, working_years1):
#         super().__init__(name1, lastname1, age1, nationality1)
#         self.university = university1
#         self.working_years = working_years1

#     def print_info(self):
#         super().print_info()
#         print(f'{self.university}, {self.working_years} years')

# lector1 = Lector('Lector', 'Lectorov', 33, 'Bulgarian', 'TUS', 10)
# lector2 = Lector('Lectorka', 'Lectorova', 37, 'Bulgarian', 'SU', 5)

# lector1.print_info()
# lector2.print_info()

# Add rechnik in which the keys are faculty numbers and the value is the grade of the student. In the class student we add faculty number
# In the class lector we add the method add student which is for adding a new student with key faculty number and value 0.
# Method setGrade which is putting grade to a student by the faculty number. Predefine the print_info for the Lector class to print the students of the lector with their grades.
# We add to Lector avg_grade which is prints the avg grade for the students of the Lector.
# 4
class Person:
    def __init__(self, name1, lastname1, age1, nationality1):
        self.name = name1
        self.lastname = lastname1
        self.age = age1
        self.nationality = nationality1

    def print_info(self):
        print(f'{self.name} is with {self.nationality} nationality!')

class Student(Person):
    def __init__(self, name1, lastname1, age1, nationality1, university1, kurs1, faculty_number1):
        super().__init__(name1, lastname1, age1, nationality1)
        self.university = university1
        self.kurs = kurs1
        self.faculty_number = faculty_number1

    def print_info(self):
        super().print_info()
        print(f'Studies in {self.university} and is {self.kurs} year. Faculty number: {self.faculty_number}')

class Lector(Person):
    def __init__(self, name1, lastname1, age1, nationality1, university1, working_years1):
        super().__init__(name1, lastname1, age1, nationality1)
        self.university = university1
        self.working_years = working_years1
        self.students = {}

    def add_student(self, student):
        self.students[student.faculty_number] = 0

    def set_grade(self, faculty_number, grade):
        if faculty_number in self.students:
            self.students[faculty_number] = grade

    def avg_grade(self):
        if self.students:
            avg = sum(self.students.values()) / len(self.students)
            print(f'Average grade: {avg:.2f}')

    def print_info(self):
        super().print_info()
        print(f'{self.university}, {self.working_years} years')
        print('Students and their grades:')
        for faculty_number, grade in self.students.items():
            print(f'Faculty number: {faculty_number}, Grade: {grade}')

student1 = Student('Stefan', 'Petrov', 19, 'Bulgarian', 'TUS', 'first', 'FN001')
student2 = Student('Petar', 'Ivanov', 22, 'British', 'TUS', 'second', 'FN002')

lector1 = Lector('Lector', 'Lectorov', 33, 'Bulgarian', 'TUS', 10)
lector1.add_student(student1)
lector1.add_student(student2)
lector1.set_grade('FN001', 5)
lector1.set_grade('FN002', 4)

lector1.print_info()
lector1.avg_grade()