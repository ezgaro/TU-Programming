from Packages.plus import plus
from Packages.minus import minus
from Packages.devision import devision
from Packages.power import power

def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))

    operation = input("Enter the operation: ")

    if operation == "plus":
      plus(a, b)
    elif operation == "minus":
      minus(a, b)
    elif operation == "devision":
      devision(a, b)
    elif operation == "power":
      power(a, b)