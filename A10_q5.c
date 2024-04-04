#include<stdio.h>
int main(){

    enum PayType{HOURLY,SALARY};
    enum PayType e1,e2;
    union EmpDetails{
        float hourly;
        double salary;
        enum PayType e1;
    };

    struct Employee{
        int empid;
        char name[50];
        enum PayType e2;
        union EmpDetails d;
    };

    struct Employee e={12,"kam",0,{500.05}};
    printf("Emplyee details:\n");
    printf("ID: %d",e.empid);
    printf("\nName: %s",e.name);
    if (e.e2==0)
    printf("\nHourly wage: %.2f",e.d.hourly);
    else
    printf("\nsalaryary: %.6ld",e.d.salary);
    return 0;
}