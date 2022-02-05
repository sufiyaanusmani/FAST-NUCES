# customer = {
#     "name": "John Smith",
#     "age": 30,
#     "isVerified": True
# }
#
# print(customer["name"])
# print(customer.get("day"))

phone = input("Phone: ")
digits = {
    "1": "One",
    "2": "Two",
    "3": "Three",
    "4": "Four"
}

output = ""
for ch in phone:
    output += digits.get(ch) + " "

print(output)
