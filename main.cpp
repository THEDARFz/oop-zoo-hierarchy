#include <iostream>
#include <string>

// Базовый класс Animal (Животное)
class Animal {
public:
    std::string name; // Имя
    int age;          // Возраст

    Animal(std::string animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }
    void eat() {}
    void sleep() {}
};

// Наследуемые классы 
class Bird : public Animal {
public:
    Bird(std::string name, int age) : Animal(name, age) {}

    void fly() {} // Метод-заглушка
};

class Fish : public Animal {
public:
    Fish(std::string name, int age) : Animal(name, age) {}

    void swim() {} // Метод-заглушка
};

class Mammal : public Animal {
public:
    Mammal(std::string name, int age) : Animal(name, age) {}

    void walk() {} // Метод-заглушка
};

// Проверка работы кода
int main() {
    Bird myBird("Кеша", 2);
    Mammal myMammal("Симба", 5);

    // Выводим данные в консоль, чтобы показать, что всё работает
    std::cout << "Птица: " << myBird.name << ", Возраст: " << myBird.age << std::endl;
    std::cout << "Млекопитающее: " << myMammal.name << ", Возраст: " << myMammal.age << std::endl;

    return 0;
}
