# while condition:
#     ...

# i = 1
# while i <= 5:
#     print(i)
#     i += 1
# print("Done")
#
# while i <= 5:
#     print("*" * i)
#     i = i + 1

# secretNumber = 9
# guessCount = 1
# correct = False
# while guessCount <= 3:
#     print("Enter number: ", end="")
#     num = int(input())
#     guessCount += 1
#     if num == secretNumber:
#         correct = True
#         print("Correct")
#         break
#
# if correct == False:
#     print("You failed")

# state = "stop"
# while True:
#     print("> ", end="")
#     usr = input()
#     if usr.lower() == "stop" and state != "stop":
#         state = "stop"
#         print("Car Stopped")
#     elif usr.lower() == "start" and state != "start":
#         state = "start"
#         print("Car Started")
#     elif usr.lower() == "quit":
#         break
#     else:
#         print("Wrong command")

# for item in "Python":
#     print(item)
#
# for item in ["Mosh", "John", "sarah"]:
#     print(item)
#
# for item in [1, 2, 3, 4]:
#     print(item)
#
# for i in range(10):
#     print(i)
#
# for i in range(5, 10):
#     print(i)
#
# for i in range(5, 10, 2):
#     print(i)

# prices = [10, 20, 30]
# total = 0
# for i in prices:
#     total += i
#
# print(total)

# for x in range(4):
#     for y in range(4):
#         print(f"({x}, {y})")

numbers = [5, 2, 5, 2, 2]
# for i in numbers:
#     for j in range(i):
#         print("X", end="")
#     print("\n")

for i in numbers:
    print("X" * i)
