#include <iostream>
using namespace std;

class Animal{
    protected:
        static int animalCount;
    public:
        Animal(){
            animalCount++;
        }
        void speak(){
            cout << "Animal speaking" << endl;
        }
        static int getCount(){
            return animalCount;
        }
};

int Animal::animalCount = 0;

class Pet{
    protected:
        static int petCount;
    public:
        Pet(){
            petCount++;
        }
        static int getCount(){
            return petCount;
        }
};

int Pet::petCount = 0;

class Wild{
    private:
        static int wildCount;
    public:
        Wild(){
            wildCount++;
        }
        static int getCount(){
            return wildCount;
        }
};

int Wild::wildCount = 0;

class Bird{
    protected:
        static int birdCount;
    public:
        Bird(){
            birdCount++;
        }
        static int getCount(){
            return birdCount; 
        }
};

int Bird::birdCount = 0;

class Bear: public Animal, public Wild{
    protected:
        static int bearCount;
    public:
        Bear(){
            bearCount++;
        }
        void speak(){
            cout << "Bear speaking" << endl;
        }
        static int getCount(){
            return bearCount;
        }
};

int Bear::bearCount = 0;

class Cat: public Animal, public Pet{
    protected:
        static int catCount;
    public:
        Cat(){
            catCount++;
        }
        static int getCount(){
            return catCount;
        }
};

int Cat::catCount = 0;

class Dog: public Animal, public Pet{
    protected:
        static int dogCount;
    public:
        Dog(){
            dogCount++;
        }
        void speak(){
            cout << "Dog speaking" << endl;
        }
        static int getCount(){
            return dogCount;
        }
};

int Dog::dogCount = 0;

class Parrot: public Bird, public Pet{
    protected:
        static int parrotCount;
    public:
        Parrot(){
            parrotCount++;
        }
        static int getCount(){
            return parrotCount;
        }
};

int Parrot::parrotCount = 0;

int main(){
    Pet p1, p2, p3;
    Dog d1, d2, d3;
    Bear b1;
    Animal a1;
    Parrot pa1;
    b1.speak();
    a1.speak();
    d1.speak();
    cout << endl << "Animal Count: " << Animal::getCount() << endl;
    cout << "Bird Count: " << Bird::getCount() << endl;
    cout << "Parrot Count: " << Parrot::getCount() << endl;
    cout << "Dog Count: " << Dog::getCount() << endl;
    return 0;
}