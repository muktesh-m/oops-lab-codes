/*Define a structure of employee having data members name, address, age and salary.
Take the data for n employees in an array and find the average salary.*/
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[30];
    int age;
    char address[1000];
    int salary[80];
};
int main(int argc, char const *argv[])
{
    char nm[80];
    int n, sal[100], ts = 0;
    struct employee i;
    printf("Enter the no of employees");
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        printf("Enter the name of employee\n");
        scanf("%s", i.name);
        printf("Enter the age\n");
        scanf("%d", &i.age);
        printf("Enter the address\n");
        scanf("%s", i.address);
        printf("Enter the salary\n");
        scanf("%d", &i.salary[a]);
        ts += i.salary[a];
        printf("\n\nEmployee no %d:\nName:%s\nAge:%d\nAdress:%s\nsalary:%d\n\n", a + 1, i.name,
               i.age, i.address, i.salary[a]);
    }
    printf("Average Salary=%d\n", (ts / n));
    return 0;
}