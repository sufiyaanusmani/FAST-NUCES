num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

if num1 > num2:
    l = num1
    s = num2
else:
    l = num2
    s = num1

# calculating LCM
while 1:
    if l % num1 == 0 and l % num2 == 0:
        break
    l += 1

while s >= 1:
    if num1 % s == 0 and num2 % s == 0:
        break
    s -= 1

print("LCM:", l)
print("HCF:", s)