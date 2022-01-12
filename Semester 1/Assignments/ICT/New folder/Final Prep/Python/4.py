integer = int(input("Enter a number: "))

binary = 0
i = 1

while integer != 0:
    digit = integer % 2
    binary = binary + (i * digit)
    i = i * 10
    integer = integer // 2

print(binary)