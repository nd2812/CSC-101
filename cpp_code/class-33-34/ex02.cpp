#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;//data member 
       string name;//data member 
       float salary;  
       Employee(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1(18, "Virat", 100000);   
    Employee e2(45, "Rohit", 90000);   
    e1.display();    
    e2.display();    
    return 0;  
}  