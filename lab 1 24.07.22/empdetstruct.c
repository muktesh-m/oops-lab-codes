
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[30];
    char adress[100];
    int salary;
};
typedef struct employee n;
n s[5];
int sort(int no)
{
    int i, j;
    n temp;
    for (i = 0; i < no - 1; i++)
        for (j = i + 1; j < no; j++)
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
}
int main()
{
    int i,no=5;
    for (i = 0; i < 5; i++)
    {
        printf("Enter The Name:");
        scanf("%s", &s[i].name);
        printf("Enter the Adress:");
        scanf("%s", &s[i].adress);
        printf("Enter the Salary:");
        scanf("%s", &s[i].salary);
    }
    
    for (i = 0; i < 5; i++)
    {
        sort(no);
        printf("%s\t%s\t%d", s[i].name,s[i].adress, s[i].salary);
    }
    return 0;
}