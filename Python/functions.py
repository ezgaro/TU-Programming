# def func1():
#   print('Hello World')

# func1()


# def func2(qty, item, price):
#   print(f'{qty} {item} cost {price * qty} leva')

# func2(3, 'ananas', 12)
# func2( item ='banan', qty=3, price=120)


# def func3(qty = 1 , item = 'apple', price='6'):
#   print(f'{qty} {item} cost {price * qty} leva')

# func3()


# # With '*' we can have different number of values.
# def psum(*n):
#   result = 0
#   for k in n:
#     result += k
#   return result
# print(psum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10))

# #Lambda functions
# num = 10
# l = lambda x: 2*x + 1

# for k in range(num):
#   print(l(k), end=', ')

# print()
# for y in range(num):
#   print((lambda x: x*x)(y + 1), end=', ')


# print()

# var1 = 5
# def f():
#   global var1
#   var1 = 10

# print(var1)



# Write a program that finds the S of a figure. First we input the type of a figure(square, rectangle, right triangle).
# To find the S we will create functions.

# def square(x):
#   print('S of the square is', x*x)

# def rectangle(x, y):
#   print('S of the rectangle is', x * y)

# def rightTriangle(x, y):
#   print('S of the right triangle is', x * y / 2)


# figure = input('Type: ')

# if figure == 'square' :
#   x = int(input('x: '))
#   square(x)
# elif figure == 'rectangle':
#   x = int(input('x: '))
#   y = int(input('y: '))
#   rectangle(x, y)
# elif figure == 'right triangle':
#   x = int(input('x: '))
#   y = int(input('y: '))
#   rightTriangle(x, y)



# Write a function that checks of a number is a palindrome. The func recieves a num and returns 1 if the number IS a palindrome and 0 if it's NOT.

# def is_palindrome(num):
#     str_num = str(num)
#     reversed_str_num = ''
#     for char in str_num:
#         reversed_str_num = char + reversed_str_num
#     if str_num == reversed_str_num:
#         return 1
#     else:
#         return 0

# num = int(input('Num: '))
# print(is_palindrome(num))



# Write a calc program for in numbers : +, -, * /.Enter operation and then 2 numbers.

# def plus(a, b):
#   return a + b

# def minus(a, b):
#   return a - b

# def po(a, b):
#   return a * b

# def deleno(a, b):
#   if(b == 0):
#     return
#   return a / b

# operation = input('Operation: ')
# a = int(input('a: '))
# b = int(input('b: '))

# if operation == 'plus' :
#   print(plus(a, b))
# elif operation == 'minus':
#   print(minus(a, b))
# elif operation == 'deleno':
#   print(deleno(a, b))
# elif operation == 'po':
#   print(po(a, b))


# if operation == 'plus' :
#   print((lambda a, b: a + b)(a, b))
# elif operation == 'minus':
#   print((lambda a, b: a - b)(a, b))
# elif operation == 'deleno':
#   print((lambda a, b: a / b)(a, b))
# elif operation == 'po':
#   print((lambda a, b: a * b)(a, b))


# function with 2 args 1st list of numbers 2nd is a number.
# Change all the elems of the list which value is bigger of the 2nd param of the func to 0.

# def func1(lst, num):
#     for i in range(len(lst)):
#         if lst[i] > num:
#             lst[i] = 0
#     return lst

# li1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# num = 3

# print(func1(li1, num))