# 1
# word = input('Word: ')
# obj = {}
# for i in range(len(word)):
#     obj[word[i]] = word[:i] + word[i+1:]

# print(obj)

# 2
# sentence = input('Sentence: ')
# words = sentence.split(' ')
# maxLength = -1
# minLength = float('inf')

# for word in words:
#     word_len = len(word)
#     if word_len > maxLength:
#         maxLength = word_len
#     if word_len < minLength:
#         minLength = word_len

# filtered_words = [word for word in words if len(word) != minLength and len(word) != maxLength]

# filtered_sentence = ' '.join(filtered_words)

# print(filtered_sentence)


#3
# numbers = input('Nums: ')
# arr = [int(num) for num in numbers.split(',')]
# max_sequence = []
# current_sequence = []

# for num in arr:
#     if not current_sequence or num == current_sequence[-1]:
#         current_sequence.append(num)
#     else:
#         if len(current_sequence) > len(max_sequence):
#             max_sequence = current_sequence
#         current_sequence = [num]

# if len(current_sequence) > len(max_sequence):
#     max_sequence = current_sequence

# print(f'Longest sequence of equal numbers: {max_sequence}')

#4

# import random
# import numpy as np

# def create_matrix(n, m):
#     matrix = [[random.randint(10, 100) for _ in range(m)] for _ in range(n)]
#     return matrix

# def display_matrix(matrix):
#     for row in matrix:
#         print(row)
#     print()

# def delete_row_col(matrix, row_to_delete, col_to_delete):
#     matrix = np.delete(matrix, row_to_delete, axis=0)
#     matrix = np.delete(matrix, col_to_delete, axis=1)
#     return matrix

# n = int(input("Enter number of rows (n): "))
# m = int(input("Enter number of columns (m): "))

# matrix = create_matrix(n, m)
# print("Original Matrix:")
# display_matrix(matrix)

# row_to_delete = int(input(f"Enter the row to delete "))
# col_to_delete = int(input(f"Enter the column to delete "))

# matrix = np.array(matrix)

# modified_matrix = delete_row_col(matrix, row_to_delete, col_to_delete)

# print("Modified Matrix:")
# display_matrix(modified_matrix)



#Write a program which creates 2 set of m nums, entered from the keyboard. The operations the prog needs to do with them are
# find the size , find the sequence of them, find the difference of them, intersection of them, and removes a chosen element of the first set and clean up the set
# 5

def create_set(name):
    nums = set()
    m = int(input(f"Enter the number of elements in {name} set: "))
    print(f"Enter {m} numbers for the {name} set:")
    for _ in range(m):
        nums.add(int(input()))
    return nums

def display_operations(set1, set2):
    print(f"Size of Set 1: {len(set1)}")
    print(f"Size of Set 2: {len(set2)}")

    print(f"Union of Set 1 and Set 2: {set1 | set2}")

    print(f"Difference of Set 1 and Set 2: {set1 - set2}")

    print(f"Intersection of Set 1 and Set 2: {set1 & set2}")

def modify_set(set1):
    element = int(input("Enter an element to remove from Set 1: "))
    set1.discard(element)
    print(f"Set 1 after removing {element}: {set1}")

    set1.clear()
    print("Set 1 after clearing all elements:", set1)

set1 = create_set("Set 1")
set2 = create_set("Set 2")

print("\nOperations with Set 1 and Set 2:")
display_operations(set1, set2)

print("\nModifying Set 1:")
modify_set(set1)
