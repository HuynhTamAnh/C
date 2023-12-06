#include<stdio.h>
int main()
{
    float basicsalary,salary,realworkday,workday=26;
    printf("basicsalary: ");
    scanf("%f", &basicsalary);
    printf("realworkday: ");
    scanf("%f", &realworkday);
    salary=basicsalary*(realworkday/workday);
    if (realworkday>workday){
        printf("salary: %f",basicsalary*1.5*(realworkday/workday));
    }else printf("salary: %f",salary);
    return 0;
}
