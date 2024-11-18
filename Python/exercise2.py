# 1
# Write a program that checks if a list of numbers has different elements entered by the user. And that the value for the list. Output if the list has the same elements or not.

n = int(input("Enter the number of elements in the list: "))
listOfNumbers = []
for i in range(n):
    element = int(input("Enter the number: "))
    listOfNumbers.append(element)


unique_elements = set(listOfNumbers)

if len(unique_elements) < len(listOfNumbers):
    print("The list has same elements")
else:
    print("The list has different elements")


# 2
# Write a program which creates a dictionary. The keys are author names and the value is a name of a work of art. Walk through the dict and in the console is seen the key, and the
# user has to write the work of art of the author if true true_answers++. Output the true_answers.

dict1 = {
    'Ivan Vazov': 'Pod Igoto',
    'Dimitur Talev': 'Jelezniqt Svetilnik',
    'Elin Pelin': 'Kosachi',
    'Aleko Konstantinov': 'Bai Ganio'
}

true_answers = 0
for extries in dict1:
    answer = input(f'Enter the work of art of {extries}: ')
    if answer == dict1[extries]:
        true_answers += 1

print(f"True answers: {true_answers}")

# 3
# Write a function which accepts 2 string arguments. The function should check if the 2 strings are anagrama. If they are anagrama the function should return True, otherwise False.

def is_anagrama(string1, string2):
    return sorted(string1) == sorted(string2)

if is_anagrama('silent', 'listen'):
    print('Anagrama')

# 4
# Write a program where you have a function. The function takes as 2 arguments with a field that is a list of whole numbers and returns as a result object from the same class.
# The field list is created by summing up of the elements of the arguments of the function. If in this objects the list is of different length the list of the object result
# has to be with the longer length of the list and the left elements will have a value of 0.

def sum_of_elements(obj1, obj2):
    list1 = obj1.list1
    list2 = obj2.list1
    min_length = min(len(list1), len(list2))
    max_length = max(len(list1), len(list2))
    # res has to be of type ListObject
    res = []
    for i in range(min_length):
        res.append(list1[i] + list2[i])
    for i in range(min_length, max_length):
        res.append(0)
    return res


class ListObject:
    def __init__(self, list1):
        self.list1 = list1

list1 = ListObject([1, 2, 3])
list2 = ListObject([4, 5])

result = sum_of_elements(list1, list2)
print(result)


# 5
# Define a class named phone. Objects has fields for mark, model, and price. Define a method that prints the information for the phone.
# Create a function that accepts as arguments list of mark, model, and price and returns a list of objects from the class phone.
# Create a function that accepts as an argument list of objects from the class phone and returns the cheapest phone.


class Phone:
    def __init__(self, mark, model, price):
        self.mark = mark
        self.model = model
        self.price = price

    def __str__(self):
        return f'{self.mark} {self.model} {self.price}'

def create_phones(marks, models, prices):
    phones = []
    for i in range(len(marks)):
        phones.append(Phone(marks[i], models[i], prices[i]))
    return phones

def cheapest_phone(phones):
    min_price = phones[0].price
    cheapest = phones[0]
    for phone in phones:
        if phone.price < min_price:
            min_price = phone.price
            cheapest = phone
    return cheapest

marks = ['Samsung', 'Apple', 'Huawei']
models = ['Galaxy', 'Iphone', 'P40']
prices = [1000, 1200, 800]

phones = create_phones(marks, models, prices)
for phone in phones:
    print(phone)

print(cheapest_phone(phones))