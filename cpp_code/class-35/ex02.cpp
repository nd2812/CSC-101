#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
}; 

int main(void)   
{  
    Employee e1; //creating an object of Employee
    cout<<&e1<<endl;
    Employee e2; //creating an object of Employee 
    cout<<&e2<<endl;
    return 0;  
}  