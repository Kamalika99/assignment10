#include <stdio.h>
#include <string.h>
struct Employee
{
    int ID;
    char name[10];
    union EmpDetails
    {
        float hourly_wage;
        double fixed_salary;
    } details;
};

int main()
{
    struct Employee E1;

    E1.ID = 100;
    strcpy(E1.name, "kam");
    E1.details.hourly_wage = 5.55;
    printf("Employee ID: %d\n", E1.ID);
    printf("Employee Name: %s\n", E1.name);
    printf("Hourly Wage:%.2f\n", E1.details.hourly_wage);
    return 0;
}