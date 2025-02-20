// Lâu quá không code quên struct là gì nên code chơi Feb/21/2025

#include <iostream>
#include <string>

using namespace std;

struct Person
{
    std::string fullName;
    int age;
    float height;
};

int main()
{
    Person persona;
    persona.fullName = "Kien Nguyen Trung";
    persona.age = 27;
    // persona.height = 165.5;
    cout << "Ten toi la: " << persona.fullName << "\n";
    printf("Toi 27 tuoi nam 2025: %d", persona.age);
    
    return 0;
}