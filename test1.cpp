#include <iostream>
using namespace std;

class Employee{
    public:
        string name;
        int age;
        int salary; 
    Employee(string x, int y, int z){
        name = x;
        age = y;
        salary = z;
    }
};
int main(){
    Employee e1("anjali", 24, 25000);
    cout << e1.name <<"\n";
    cout << e1.age <<"\n";
    cout << e1.salary <<"\n";
}


