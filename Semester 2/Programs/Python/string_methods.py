course = "Python for Beginners"

print(len(course))
course.upper()
print(course)
course.lower()
print(course)

# these methods doesn't modifies original string, it just makes copy of it

print(course.find("o")) # returns index of the first occurence, case sensitive
print(course.find("z")) # returns -1
print(course.find("Beginners"))
print(course.replace("Beginners", "Absolute Beginners"))
print(course.replace("P", "J"))
print("Python" in course)  # checks existence, case sensitive
