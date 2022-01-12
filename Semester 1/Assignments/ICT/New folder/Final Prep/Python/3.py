str1 = input("Enter a string: ")

reverse = reversed(str1)

if list(str1) == list(reverse):
    print("It is a palindrome")
else:
    print("It is not a palindrome")