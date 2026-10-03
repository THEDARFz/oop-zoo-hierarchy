class Animal:
    def __init__(self, name: str, age: int):
        self.name = name
        self.age = age

    def eat(self):
        pass

    def sleep(self):
        pass


class Bird(Animal):
    def fly(self):
        pass


class Fish(Animal):
    def swim(self):
        pass


class Mammal(Animal):
    def walk(self):
        pass
