#include <iostream>
using namespace std;

class Animal{
    public:
        void animalSound();
};

class Cat: public Animal{
    public:
        void animalSound();
};

class Dog: public Animal{
    public:
        void animalSound();
};

class Duck: public Animal{
    public:
        void animalSound();
};

int main(){
    Animal a;
    a.animalSound();
    Cat c;
    c.animalSound();
    Dog d;
    d.animalSound();
    Duck dd;
    dd.animalSound();
    return 0;
}

void Animal::animalSound(){
    cout << "The animal makes a sound" << endl;
}

void Cat::animalSound(){
    cout << "The cat says meow" << endl;
}

void Dog::animalSound(){
    cout << "The dog says bow wow" << endl;
}

void Duck::animalSound(){
    cout << "The duck says quack quack" << endl;
}