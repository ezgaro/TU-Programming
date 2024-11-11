# 1
n = int(input('n: '))
l1=[]
suma = 0

for _ in range(n):
  num = int(input())
  l1.append(num)
  if num % 3 == 0 and ((10 <= abs(num) <= 99)):
    suma += num
print(f"List: {l1}")
print(f"Suma: {suma}")

maxChetno = max([x for x in l1 if x % 2 == 0], default=None)
minNeChetno = min([x for x in l1 if x % 2 != 0], default=None)


print(f"Max Chetno: {maxChetno}")
print(f"Min Nechetno: {minNeChetno}")

sortedList = sorted(l1, reverse=True)
print(f"Sortirani nishodqshto {sortedList}")

otricatelni = len([x for x in sortedList if x < 0])
print(f'Otricatelni {otricatelni}')


# 2
n = input('n: ')

firstTuple = tuple(n)
secondTuple = tuple(reversed(n))

print(f"Tuple in original order: {firstTuple}")
print(f"Tuple in reversed order: {secondTuple}")