#include <iostream>  
using namespace std;  
 
class Student {  
    
   public:  
      int id;//data member (also instance variable)      
      string name;//data member(also instance variable)      
}; 
 
int main() { 

    Student s1; //creating an object of Student   
    s1.id = 18;    
    s1.name = "Virat Kohli";   
    cout<<s1.id<<endl;  
    cout<<s1.name<<endl;  
    return 0;  
}  