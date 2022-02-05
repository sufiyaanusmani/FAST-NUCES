# class Point:
#     def __init__(self, x, y):
#         self.x = 0
#         self.y = 0
#
#     def move(self):
#         print("Move")
#
#     def draw(self):
#         print("draw")
#
#
# point1 = Point()
# point1.draw()
# point1.x = 10
# point1.y = 20
#
# point2 = Point(3, 4)  # different instance of this class

# class Person:
#     def __init__(self, name):
#         self.name = name
#
#     def talk(self):
#         print(f"Hi, my name is {self.name}")
#
#
# p1 = Person("Sufiyaan")
# p1.talk()

# inheritance

# class Dog:
#     def walk(self):
#         print("walk")
#
#
# class Cat:
#     def walk(self):
#         print("walk")

class Animal:
    def walk(self):
        print("Walk")


class Dog(Animal):
    pass


class Cat(Animal):
    pass


cat1 = Cat()
cat1.walk()
