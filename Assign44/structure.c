#include <stdio.h>
#include <string.h>
// create a employee data type
struct Employee
{
  int emp_id;
  char emp_name[20];
  float emp_salary;
};

// function returning structure:
struct Employee input(int i)
{
  struct Employee e;
  printf("Enter emp_id,emp_name and salary of Employee %d. ", i + 1);
  scanf("%d", &e.emp_id);
  fflush(stdin);
  fgets(e.emp_name, 20, stdin);
  e.emp_name[strlen(e.emp_name) - 1] = '\0';
  scanf("%f", &e.emp_salary);
  return e;
}

void display(struct Employee e)
{
  printf("%d %s %.2f", e.emp_id, e.emp_name, e.emp_salary);
  printf("\n");
}

void f1()
{
  int i;
  struct Employee e[5];
  printf("Enter data of 5 Employee");
  printf("\n");
  for (i = 0; i < 5; i++)
    e[i] = input(i);
  for (i = 0; i < 5; i++)
    display(e[i]);
}

// WAF to find highest salary Employee:

struct Employee highest_salary_emp(struct Employee e[], int n)
{
  int i;
  struct Employee max_salary_emp;
  max_salary_emp = e[0];
  for (i = 1; i < n; i++)
    if (max_salary_emp.emp_salary < e[i].emp_salary)
      max_salary_emp = e[i];
  return max_salary_emp;
}

// WAF to sort employee according to his salary:
void sort_by_salary(struct Employee e[], int n)
{
  int i, r;
  struct Employee temp;
  for (r = 1; r < n; r++)
  {
    for (i = 0; i <= (n - r - 1); i++)
    {
      if (e[i].emp_salary < e[i + 1].emp_salary)
      {
        temp = e[i];
        e[i] = e[i + 1];
        e[i + 1] = temp;
      }
    }
  }
}

// WAF to sort employee according to his name:
void sort_by_salary(struct Employee e[], int n)
{
  int i, r;
  struct Employee temp;
  for (r = 1; r < n; r++)
  {
    for (i = 0; i <= (n - r - 1); i++)
    {
      if (strcmp(e[i].emp_name, e[i + 1].emp_name) > 0)
      {
        temp = e[i];
        e[i] = e[i + 1];
        e[i + 1] = temp;
      }
    }
  }
}

int main()
{

  f1();
  // take input from user:
  // printf("Enter emp_id,emp_name and salary of Employee. ");
  // scanf("%d", &e1.emp_id);
  // fflush(stdin);
  // fgets(e1.emp_name, 20, stdin);
  // e1.emp_name[strlen(e1.emp_name) - 1] = '\0';
  // scanf("%f", &e1.emp_salary);

  // printf("%d %s %.2f", e1.emp_id, e1.emp_name, e1.emp_salary);

  printf("\n");
  return 0;
}

// structure pointer:

// void f2()
// {
//   struct Employee e;
//   struct Employee *p;
//   // here p is structure pointer:
//   p = &e;
//   e.emp_id = 2;
//   // (*p).emp_id=1; OR
//   p->emp_id = 1;
// }