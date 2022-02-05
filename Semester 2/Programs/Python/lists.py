# names = ["John", "Bob", "Mosh", "Sarah", "Mary"]
#
# print(names)
# print(names[0])
# print(names[-1])
# print(names[2:])
# print(names[:3])
# print(names[:])
# print(names[1:3])
# names[0] = "Jon"

numbers = [4, 2, 59, 93, 48, 99, 3, 202]
maxNum = numbers[0]
for num in numbers:
    if num > maxNum:
        maxNum = num

print(maxNum)
