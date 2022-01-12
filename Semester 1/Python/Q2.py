a = int(input("Enter a number: "))
b = int(input("Enter a number: "))

# finding HCF
if a<b:
    s = a
else:
    s = b

while s>=1:
    if(a % s == 0 and b % s == 0):
        break
    s -= 1

# finding LCM
if a>b:
    l = a
else:
    l = b

while 1:
    if(l % a == 0 and l % b == 0):
        break
    l += 1

# printing HCF and LCM  
print("\nHCF of", a, "and", b, "is ", s)
print("LCM of", a, "and", b, "is ", l)