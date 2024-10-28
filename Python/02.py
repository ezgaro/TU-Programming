# Dictionaries

d1 = {'name': 'Ivan', 'surname': 'Petrov', 'age': 24 }
d2= dict(name='ivan', lastname='Petrov', age=24)
days=['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
d5= {x + 1: days[x] for x in range(len(days))}

for x in d5.keys():
  print(x, d5[x])

print(d5)
print(d1)
print(d2)



# Set

# 1 = True; 0 = False
s1 = set([1, 3, 5, True, False, 0])
print(s1) # { 1, 3, 5, False}

s2= set('hello') #helo
s3 = {1, 3, 5, 1, 8} # creates dict

s4={1, 3, 4, 2}
s5={3, 2, 9, 6, 7}


# Unites the 2 sets

s6 = s4 | s5
s7 = s4.union(s5)

# Differs the 2 sets
s8= s4 - s5 # in s8 enters the elements in s4 that are not present in s5 {1, 4}
s9= s5.difference(s4) # {9, 6, 7}
print(s8)

# Intersection
s10= s4 & s5 #{3, 2}
s11= s4.intersection(s5) # {3, 2}

#Symmetric difference
s12= s4^s5 # {1, 4, 6, 7, 9}
s13= s4.symmetric_difference(s5) # {1, 4, 6, 7, 9}

#Equality
s4==s5 #False


s4.add(77) # adds 77
s4.remove(77) # removes(must be a member)
s4.discard(77) # removes
s4.pop() # removes random


# String -> Immutable

st1 = 'Hello my "friend"'

st2 = st1[1 : 14 : 2] # [start : end : step] not inclusive
print(st2) # 'el y"re'

st3 = st1.title() # capitalize
st4 = st1.split() # returns a list(massive) of the letters
st5 = ''.join(['Hello', 'my' 'friend']) # joins the elements
st6 = st1.strip('! ""') # removes the provided symbols and creates new string
st7 = st1.swapcase() # converts from upper to lower case and form lower to upper
st8 = st1.find('my') # returns the index (6)
st9 = st1.index('my') # 6
st10 = st1.count('my') # 6
st11 = st1.replace('', '_')
print(st11)


# Problems

# 1
# Write a program where the clent enters text and you create a dictionary from it.
# For keys of the dict we use its symbols and te value is the number of the symbol in the text
# absasa -> {a: 3, b: 1, s: 2}

text = input("Text: ")

dictText ={}
for i in text:
    if(i in dictText):
      dictText[i] += 1
    else:
       dictText[i] = 1


print(dictText)


# 2
# Write a program where the client enters an int number. From the num we create a list
# elements of it are form 1 to the num. From this list we create an dictionary where the elems of the list are keys
# and the values are the elems of the list in reverse.

num = int(input('Number: '))

listOne = list()
listTwo = list()
dict1 = {}

for i in range(1, num + 1):
    listOne.append(i)

for i in range(num, 0, -1):
    listTwo.append(i)

for i in range(num):
    dict1[listOne[i]] = listTwo[i]

print(dict1)

# 3
# The client enters string. Output it in reverse

# The client enters a string. Output it in reverse.

# The client enters a string. Output it with the words in reverse order.

st1 = input('Str: ')
words = st1.split()
reversed_words = ' '.join(reversed(words))
print(reversed_words)