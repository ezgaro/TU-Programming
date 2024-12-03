# f = open('./my_file.txt', 'w+r')

# f.write('Hello, World!')
# # Read the file
# print(f.read())



# Create 1 file open it in write mode and write in it a string and a list. Close the file open it in read mode and read the file row by row and print it.


# my_list = ['Hello, World!\n', 'This is a list\n', '1. Hello\n', '2. World\n', '3. Python\n']

# with open('./my_file.txt', 'w') as f:
#     f.writelines(my_list)

# with open('./my_file.txt', 'r') as f:
#     for line in f:
#         print(line)



# We have a file with a text. Read the content from the file and print the longest work from this file

# f = open('./text_file.txt', 'r')

# with open('./text_file.txt', 'r') as f:
#     text = f.read()

# symbols_to_remove = ['.', ',', ':', '...', '/']
# for symbol in symbols_to_remove:
#     text = text.replace(symbol, '')

# words = text.split()
# longest_word = max(words, key=len)
# print(longest_word)


# We work with 2 files. One of them has text content .We read the content from the 1 file and write it in the second file, but only if the words start with a capital letter.

# new_file = open('./new_file.txt', 'w')

# with open('./text_file.txt', 'r') as f:
#     text = f.read()

# vowels = ['A', 'E', 'I', 'O', 'U', 'Y']

# words = text.split()
# for word in words:
#     if word[0].isupper():
#         if(word[0] in vowels):
#           new_file.write(word + ' ')

# new_file.close()

# with open('./new_file.txt', 'r') as f:
#     print(f.read())


# Define a class Student with fields name , faculti number, programming language. Create a function which recieves a student. The functin adds in a tex file info about the student
# Create multiple objects of the class Student and call the function with each object and read the file

class Student:
    def __init__(self, name, faculty_number, programming_language):
        self.name = name
        self.faculty_number = faculty_number
        self.programming_language = programming_language

    def __str__(self):
        return f'{self.name} {self.faculty_number} {self.programming_language}'

    def add_student_to_file(self):
        with open('./students.txt', 'a') as f:
            f.write(str(self) + '\n')


student1 = Student('Ivan', 12345, 'Python')
student2 = Student('Maria', 54321, 'Java')
student3 = Student('Petar', 67890, 'C#')

student1.add_student_to_file()
student2.add_student_to_file()
student3.add_student_to_file()