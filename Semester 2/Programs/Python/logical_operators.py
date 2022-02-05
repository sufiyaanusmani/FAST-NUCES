hasHighIncome = True
hasGoodCredit = True

if hasHighIncome == True and hasGoodCredit == True:
    print("Eligible for loan")

if hasHighIncome == True or hasGoodCredit == True:
    print("Eligible for loan")

weight = int(input("Enter weight: "))
unit = input("(L)bs or (k)g: ")

if unit.upper() == "L":
    converted = weight * 0.45
    print(weight)
else:
    converted = weight / 0.45
    print(weight)
    