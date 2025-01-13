# 1

while True:
  n = int(input('n: '))
  if(n <= 5 or n >= 35):
    print('Try again')
  else: break

l1 = []

for i in range(0, n):
  while True:
    num = int(input('number: '))
    if(num <= 30 or num >= 300):
      print('Try again !')
    else:
      l1.append(num)
      break

def desetici_deleni_na_3(li):
  counter = 0
  for num in li:
    if((num // 10) % 3 == 0):
      counter += 1
  return counter

print(desetici_deleni_na_3(l1))





# 2

# class Shoes :
#   def __init__(self, _brand, _price, _color, _size, _quantity) :
#     self.brand = _brand
#     self.price = _price
#     self.color = _color
#     self.size = _size
#     self.quantity = _quantity
#   def Sale(self, quantity):
#     return self

#   def Purchase(self, quantity):
#     return self

# shoes_list = []
# shoes1 = Shoes('Gucci', 300, 'black', 42, 15)
# shoes2 = Shoes('Nike', 200, 'brown', 42, 15)
# shoes3 = Shoes('TommyHilfiger', 400, 'black', 42, 15)
# shoes4 = Shoes('Buzz', 600, 'orange', 42, 15)
# shoes5 = Shoes('Raw', 500, 'black', 42, 15)
# shoes6 = Shoes('Adidas', 70, 'green', 42, 15)
# shoes7 = Shoes('Gucci', 700, 'blue', 42, 15)
# shoes8 = Shoes('Gucci', 320, 'red', 42, 15)

# shoes_list.append(shoes1)
# shoes_list.append(shoes2)
# shoes_list.append(shoes3)
# shoes_list.append(shoes4)
# shoes_list.append(shoes5)
# shoes_list.append(shoes6)
# shoes_list.append(shoes7)
# shoes_list.append(shoes8)

# def sort_price(shoes_list):
#   def shoes_sorter(shoe):
#     return shoe.price
#   shoes_list.sort(key=shoes_sorter, reverse=True)


# def sredno_aritmetichno_func(shoes_list):
#   sredno_aritmetichno = 0
#   for shoe in shoes_list:
#     sredno_aritmetichno += shoe.price
#   sredno_aritmetichno /= len(shoes_list)
#   return sredno_aritmetichno

# sredno_aritmetichno = sredno_aritmetichno_func(shoes_list)


# def shoes_seraching(shoes_list, brand, size):
#   searched_shoes = []
#   for shoe in shoes_list:
#     if(shoe.brand == brand and shoe.size == size and shoe.price < sredno_aritmetichno):
#       searched_shoes.append(shoe)
#   return searched_shoes


# def cheapest_shoes(shoes_list, color):
#   cheapest_shoe = []
#   color_set = set()
#   for shoe in shoes_list:
#     if(shoe.color == color):
#       cheapest_shoe.append(shoe)
#   if(len(cheapest_shoe) == 0):
#     print(f'color is not avialable')
#     for shoe in shoes_list:
#       color_set.add(shoe.color)
#     for color in color_set:
#       print(f'Avialable color: {color}')
#   else:
#     for shoe in cheapest_shoe:
#       if(shoe.price < sredno_aritmetichno):
#         print(f'Shoe: {shoe.price}, {shoe.brand}, {shoe.color}, {shoe.size}, {shoe.quantity}')


# def delete_shoes(shoes_list, brand):
#   print('After deletion: ')
#   new_shoe_list = []
#   for shoe in shoes_list:
#     if(shoe.brand != brand):
#       new_shoe_list.append(shoe)
#   for shoe in new_shoe_list:
#     print(f'Shoe: {shoe.price}, {shoe.brand}, {shoe.color}, {shoe.size}, {shoe.quantity}')


# cheapest_shoes(shoes_list, 'black')

# delete_shoes(shoes_list, 'Gucci')


# for shoe in shoes_seraching(shoes_list, 'Gucci', 42):
#   print(f'Searched Brand: {shoe.brand}, Searched Price: {shoe.price}')

# sort_price(shoes_list)
# for shoe in shoes_list:
#   print(f'Brand: {shoe.brand}, Price: {shoe.price}')

