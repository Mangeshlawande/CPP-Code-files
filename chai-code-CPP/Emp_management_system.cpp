#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<string>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
     cout <<"ID : " <<emp.id<< ", Name: "<<emp.name<<", Salary: "<<emp.salary<<endl;
};


int main()
{

    vector<Employee> employee ={
        {101,"hitesh", 100000},
        {102,"Saran", 40000},
        {103,"ravi", 50000},
        {104,"karan", 100000},
        {105,"om", 60000}
    };


    sort(employee.begin(), employee.end(), [](const Employee& e1, const Employee& e2){ 
        return e1.salary > e2.salary;
    });
    cout<< "Employee sorted by salary -> Highest to lowest \n";
    for_each(employee.begin(),employee.end(), displayEmployee);
     
    vector<Employee> highEarners;

    copy_if(employee.begin(),
    employee.end(), 
    back_inserter(highEarners), 
    [](const Employee& e){
    return e.salary > 50000;
    });

    cout<< "Employee who are high earners \n";
    for_each(employee.begin(),employee.end(), displayEmployee);

   double totalSalary = accumulate(employee.begin(),employee.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double avgSalary = totalSalary/ employee.size();

   auto highestPaid =  max_element(employee.begin(), employee.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

     

    return 0;
};