# while True:
#     try:
#         x = int(input())
#         if x < 0:
#             raise ArithmeticError("Negative input")
#     except ValueError:
#         print("Invalid input")
#     except ArithmeticError as e:
#         print(e)
#     except Exception as e:
#         print("Unknown error:", e)


# Throw exception if the name contains other chars than letters in it. Throw exception if the age is less than 0 or greater than 150.
# if age  > 18  print you can vote else print you can't

# try:
#     name = input('name: ')
#     age = int(input('age: '))
#     if age > 18:
#         print('You can vote')
#     else:
#         print('You can\'t vote')

#     if name.isalpha() == False:
#         raise ValueError('Name must contain only letters')

#     if age > 150 or age < 0:
#         raise ValueError('Invalid age')
# except ValueError as e:
#     print(e)




import my_module as m
m.f1("Stefan")

#