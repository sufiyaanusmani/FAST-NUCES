from decimal import *

decimal = int(input("Enter a number: "))

binary = 0
i = 1

while decimal != 0:
    digit = decimal % 2
    binary = Decimal(binary + (i * digit))
    i *= 10
    decimal = decimal // 2

print(binary)