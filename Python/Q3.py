string = input("Enter a string: ")

reverse = reversed(string)

if list(string) == list(reverse):
    print("It is a palindrome")
else:
    print("It is not a palindrome")