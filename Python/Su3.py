# 1

# class IntegerList:
#     def __init__(self, elements: list):
#         self.elements = [i for i in elements if isinstance(i, int)]

#     def print_list(self):
#         print(self.elements)

#     def average_list(self):
#         if not self.elements:
#             return 0
#         return sum(self.elements) / len(self.elements)


# elements = [1, 2, 3, 4, 5, "b"]
# integer_list = IntegerList(elements)

# integer_list.print_list()
# print(f"Average: {integer_list.average_list()}")


# 2
# class Shape:
#     def __init__(self, shape_type):
#         self.shape_type = shape_type

# class Square(Shape):
#     def __init__(self, length):
#         super().__init__("square")
#         self.length = length

#     def area(self):
#         print(f"Area = {self.length * self.length}")

# class Circle(Shape):
#     def __init__(self, radius):
#         super().__init__("circle")
#         self.radius = radius

#     def area(self):
#         print(f"Area = {3.14 * self.radius * self.radius}")

# figure = input("Figure (circle/square): ").strip().lower()

# if figure == "circle":
#     while True:
#         try:
#             r = int(input("Radius: "))
#             if r <= 0:
#                 raise ValueError("Invalid radius")
#             circle = Circle(r)
#             circle.area()
#             break
#         except ValueError as e:
#             print(e)
#         except Exception:
#             print("Error")

# elif figure == "square":
#     while True:
#         try:
#             length = int(input("Length: "))
#             if length <= 0:
#                 raise ValueError("Invalid length")
#             square = Square(length)
#             square.area()
#             break
#         except ValueError as e:
#             print(e)
#         except Exception:
#             print("Error")
# else:
#     print("Invalid figure type")

# 3
# class TriangleChecker:
#     def __init__(self, a, b, c):
#         self.a = a
#         self.b = b
#         self.c = c

#     def is_triangle(self):
#         if not all(isinstance(side, int) for side in [self.a, self.b, self.c]):
#             print("Трябва да въведете само числа!")
#         elif any(side <= 0 for side in [self.a, self.b, self.c]):
#             print("Нищо няма да работи с отрицателни числа")
#         else:
#             if self.a + self.b > self.c and self.a + self.c > self.b and self.b + self.c > self.a:
#                 print("Ура, можете да построите триъгълник!")
#             else:
#                 print("Жалко, но не можете да напражите триъгълник от това!")

# checker = TriangleChecker("b", 4, 5)
# checker.is_triangle()


# 4
class Food:
    def __init__(self, carbs, protein, fat):
        self.carbs = carbs
        self.protein = protein
        self.fat = fat

    def calories(self):
        calories = self.carbs * 4 + self.protein * 4 + self.fat * 9
        return calories

class Recipe:
    def __init__(self, name, foods: list):
        self.name = name
        self.foods = foods

    def calories(self):
        calories = 0
        for food in self.foods:
            calories += food.calories()
        return calories

    def __str__(self):
        return self.name

n = int(input("n= "))

for i in range(n):
    name = input("name: ")
    ingr1 = Food(10, 5, 2)
    ingr2 = Food(8, 3, 1)
    ingr3 = Food(6, 7, 4)

    foods = [ingr1, ingr2, ingr3]
    recipe = Recipe(name, foods)

    print(recipe)
    print(f"calories: {recipe.calories()}")

# 5
class Employee:
    def __init__(self, name, position, salary):
        self.name = name
        self.position = position
        self.salary = salary

    def display_info(self):
        return f"{self.name} -> {self.position} ${self.salary}"

class Manager(Employee):
    def __init__(self, name, position, salary, department):
        super().__init__(name, position, salary)
        self.department = department

    def calculate_bonus(self):
        return 0.1 * self.salary + 1000

    def display_info(self):
        return f"{self.name} -> {self.position} ${self.salary + self.calculate_bonus()} {self.department}"

class Developer(Employee):
    def __init__(self, name, position, salary, programming_languages: list):
        super().__init__(name, position, salary)
        self.programming_languages = programming_languages

    def calculate_bonus(self):
        return 0.15 * self.salary + len(self.programming_languages) * 200

    def display_info(self):
        return f"{self.name} -> {self.position} ${self.salary + self.calculate_bonus()} {self.programming_languages}"

class Company:
    def __init__(self, employees: list):
        self.employees = employees

    def add_employee(self, employee_info: list):
        if employee_info[1] == "Dev":
            self.employees.append(Developer(employee_info[0], employee_info[1], employee_info[2], employee_info[3]))
        elif employee_info[1] == "Boss":
            self.employees.append(Manager(employee_info[0], employee_info[1], employee_info[2], employee_info[3]))

    def total_salary_expense(self):
        total = 0
        for employee in self.employees:
            total += employee.salary + employee.calculate_bonus()
        return total

    def display_all_employees(self):
        for employee in self.employees:
            print(employee.display_info())

dev = Developer("Ivan", "Dev", 3000, ["Python"])
boss = Manager("Georgi", "Boss", 5000, "Dev")
employees = [dev, boss]
company = Company(employees)

company.add_employee(["Gosho", "Dev", 3100, ["Java", "Python"]])

print(f"Total salary expense: {company.total_salary_expense()}")
company.display_all_employees()