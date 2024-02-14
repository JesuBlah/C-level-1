#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound(12) {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound("hello") {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {

  Dog myDog;

 
  myDog.animalSound();
  return 0;
}
