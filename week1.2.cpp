#include <iostream>
using namespace std;
struct employeeType
{
  string firstName;
  string lastName;



hjhgh
  int personID;
  string deptID;
  double yearlySalary;
  double monthlySalary;
  double yearToDatePaid;
  double monthlyBonus;
};
int main(){
      double payCheck;
    employeeType employees[2];    
    cout <<"----Please enter employee information: " <<endl;
    for (int counter = 0; counter < 2; counter++)
    
    {
    
      cin >> employees[counter].firstName
      
           >> employees [counter].lastName
      
           >> employees [counter].personID
      
           >> employees [counter].deptID
      
           >> employees [counter].yearlySalary;
      
      employees [counter].monthlySalary = employees [counter].yearlySalary / 12;
      
      employees [counter].yearToDatePaid = 0.0;
      
      employees [counter].monthlyBonus = 0.0;
    
    }
    
    cout <<"----Employee information Result-----" <<endl;
    for (int counter = 0; counter < 2; counter++)
    
    {
    
      cout << employees [counter].firstName << " " 
         << employees [counter].lastName << " ";
      
      payCheck = 
      employees [counter].monthlySalary + employees [counter].monthlyBonus;
      
      employees [counter].yearToDatePaid = employees [counter].yearToDatePaid + payCheck;
      
      cout << payCheck << endl;
    
    }
  
  return 0;
}
