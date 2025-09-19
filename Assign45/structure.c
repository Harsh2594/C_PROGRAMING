#include <stdio.h>
#include <string.h>

// WAP to find difference bwtween two time periods:
struct time
{
  int hr, min, sec;
};

int is_greater(struct time t1, struct time t2)
{
  if (t1.hr > t2.hr)
    return 1;
  else if (t1.hr < t2.hr)
    return 0;
  else if (t1.min > t2.min)
    return 1;
  else if (t1.min < t2.min)
    return 0;
  else if (t1.sec > t2.sec)
    return 1;
  else
    return 0;
}

struct time difference(struct time t1, struct time t2)
{
  struct time t3;
  if (is_greater(t1, t2))
  {
    if (t1.sec < t2.sec)
    {
      t1.sec = t1.sec + 60;
      if (t1.min > 0)
      {
        t1.min = t1.min - 1;
      }
      else
      {
        t1.min = t1.min + 60;
        t1.hr -= 1;
      }
    }
    t3.sec = t1.sec - t2.sec;
    if (t1.min < t2.min)
    {
      t1.min += 60;
      t1.hr -= 1;
    }
    t3.min = t1.min - t2.min;
    t3.hr = t1.hr - t2.hr;
  }
  else
  {
    if (t1.sec < t2.sec)
    {
      t3.sec = t2.sec - t1.sec;
    }
    else
    {
      t2.sec += 60;
      t2.min -= 1;
    }

    t3.sec = t2.sec - t1.sec;
    if (t2.min < t1.min)
    {
      t2.min += 60;
      t2.hr -= 1;
    }
    t3.min = t2.min - t1.min;
    t3.hr = t2.hr - t1.hr;
  }
  return t3;
}

void f1()
{
  struct time t1 = {4, 15, 50}, t2 = {3, 10, 40};
  struct time t;
  t = difference(t1, t2);
  printf("%d:%d:%d", t.hr, t.min, t.sec);
  return;
}

// WAP to store imformation of 'n' student and display them using structure:
struct student
{
  char name[20];
  int roll_no;
};

struct student input_student()
{
  struct student s;
  printf("Enter student Roll_no and name ");
  scanf("%d", &s.roll_no);
  fflush(stdin);
  fgets(s.name, 20, stdin);
  s.name[strlen(s.name) - 1] = '\0';
  return s;
}

void display(struct student s)
{
  printf("%s %d", s.name, s.roll_no);
  printf("\n");
}

void inputNstudent(struct student s[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    s[i] = input_student();
  }
}

void displayNstudents(struct student s[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    display(s[i]);
}

void f2()
{
  int i;
  struct student s[3];
  inputNstudent(s, 3);
  displayNstudents(s, 3);
}

// WAP to take marks of student from user and display their name and percentage marks:
struct Marks
{
  int roll_no;
  char name[20];
  int chem_marks, math_marks, phy_marks;
};

// take marks from user:
struct Marks input_marks(int i)
{
  struct Marks m;
  printf("Enter student %d roll_no, name and marks in PCM ", i + 1);
  scanf("%d", &m.roll_no);
  getchar(); // Clear the newline left by scanf
  fgets(m.name, 20, stdin);
  m.name[strlen(m.name) - 1] = '\0'; // Remove newline safely
  scanf("%d", &m.phy_marks);
  scanf("%d", &m.chem_marks);
  scanf("%d", &m.math_marks);
  return m;
}

void input_N_marks(struct Marks m[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    m[i] = input_marks(i);
}

void display_percentage_marks(struct Marks m)
{
  float per;
  per = (m.chem_marks + m.math_marks + m.phy_marks) / 3.0;
  printf("%s %0.2f", m.name, per);
  printf("\n");
}

void display_student_details(struct Marks m[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    display_percentage_marks(m[i]);
}

void f3()
{
  struct Marks m[3];
  input_N_marks(m, 3);
  display_student_details(m, 3);
  printf("\n");
  return;
}
