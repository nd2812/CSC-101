#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)  
       float salary;  
       void insert(int i, string n, double s)    
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
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    e1.insert(8, "Ravindra",500000.00);    
    e2.insert(99, "Ashwin", 750000.00);    
    e1.display();    
    e2.display();    
    return 0;  
}