# matrix = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]
#
# print(matrix[0][0])  # prints 1
# print(matrix[0])  # prints [1, 2, 3]
#
# for row in matrix:
#     for column in row:
#         print(column)

# numbers = [5, 2, 1, 7, 4]
#
# numbers.append(20)
# numbers.insert(0, 44)
# numbers.remove(5)
# numbers.clear()
# numbers.pop()
# numbers.index(7)
# print(numbers)
# print(50 in numbers)
# print(numbers.count(5))
# numbers.sort()
# print(numbers)
# numbers.reverse()
# numbers2 = numbers.copy()

numbers = [2, 2, 3, 6, 3, 4, 6, 1]
uniques = []
for number in numbers:
    if number not in uniques:
        uniques.append(number)
print(uniques)