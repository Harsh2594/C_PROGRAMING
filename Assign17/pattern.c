#include <stdio.h>

void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();
void p9();
void p10();
void p12();
void p13();
void p14();
void p15();
void p16();
void p17();
void p18();
void p19();
void p20();
void p21();
void p22();
void p23();
int main()
{
  p23();
  printf("\n");
  return 0;
}
void p1()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 6 - i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

//-------------------------------------------

void p2()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
      printf("*");
    printf("\n");
  }
}

//---------------------------------------------

void p3()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 6 - i; j++)
    {
      printf("*");
    }
    for (k = 1; k <= i - 1; k++)
      printf(" ");
    printf("\n");
  }
}

//----------------------------------------------

void p4()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (k = 1; k <= i - 1; k++)
      printf(" ");
    for (j = 1; j <= 6 - i; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}

//-----------------------------------------------

void p6()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

//------------------------------------------------
// 1
// 21
// 321
// 4321
void p7()
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    for (j = i; j >= 1; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

//--------------------------------------------------
void p8()
{
  int i, j;
  char k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i - 1; j++)
    {
      printf(" ");
    }
    for (k = 65; k <= 70 - i; k++)
    {
      printf("%c", k);
    }
    printf("\n");
  }
}

//-----------------------------------------------------
void p9()
{
  int i, j, n = 1;
  for (i = 1; i <= 4; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf("%d", n);
      n++;
    }

    printf("\n");
  }
}

//---------------------------------------------------
// ABCDE
//  BCDE
//   CDE
//    DE
//     E

void p10()
{
  int i, j;
  char k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j < i; j++)
    {
      printf(" ");
    }
    for (k = 64 + i; k <= 69; k++)
    {
      printf("%c", k);
    }
    printf("\n");
  }
}

//-------------------------------------------
void p11()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5)
        printf("*");
      else if (j == 2 || j == 3 || j == 4)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
}

//--------------------------------------------
void p12()
{
  int i, j, k;
  for (i = 1; i <= 4; i++)
  {
    for (j = i; j <= 3; j++)
    {
      printf(" ");
    }
    for (k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}

//-------------------------------------------

void p13()
{
  int i, j, k;
  for (i = 4; i >= 1; i--)
  {
    for (j = i; j <= 3; j++)
    {
      printf(" ");
    }
    for (k = 1; k <= 2 * i - 1; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}

//--------------------------------------

void p14()
{
  int i, j, k;
  for (i = 1; i <= 4; i++)
  {
    for (j = i; j <= 3; j++)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("*");
      printf(" ");
    }
    printf("\n");
  }
}

//--------------------------------------

void p15()
{
  int i, j, k, l;
  for (i = 1; i <= 4; i++)
  {
    for (j = i; j <= 3; j++)
    {
      printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
      printf("%d", k);
    }
    if (i > 1)
    {
      for (l = i - 1; l >= 1; l--)
      {
        printf("%d", l);
      }
    }
    printf("\n");
  }
}

//---------------------------------------

void p16()
{
  int i, j;
  char k;
  for (i = 1; i <= 4; i++)
  {
    for (j = i; j > 1; j--)
    {
      printf(" ");
    }
    for (k = 65; k <= 73 - 2 * i; k++)
    {
      printf("%c", k);
    }
    printf("\n");
  }
}

//-----------------------------------------

void p17()
{
  int i, j;
  char k;
  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j < i; j++)
    {
      printf(" ");
    }
    for (k = 65; k <= 69 - i; k++)
    {
      printf("%c", k);
    }
    for (k = 69 - i - 1; k >= 65; k--)
      printf("%c", k);
    printf("\n");
  }
}

//---------------------------------------------

void p18()
{
  int i, j;
  char k;
  for (i = 1; i <= 4; i++)
  {
    k = 'A';
    for (j = 1; j <= 7; j++)
    {
      if (j >= i && j <= 8 - i)
      {
        printf("%c", k);
        j < 4 ? k++ : k--;
      }
      else
        printf(" ");
    }
    printf("\n");
  }
}

//-------------------------------------------------------
//     *
//    * *
//   * * *
//  * * * *

void p19()

{
  int i, j, flag;
  for (i = 1; i <= 4; i++)
  {
    flag = 1;
    for (j = 1; j <= 7; j++)
    {
      if (j >= 5 - i && j <= 3 + i)
      {
        if (flag)
          printf("*");
        else
          printf(" ");
        flag = 1 - flag;
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

//---------------------------------------------------------
//     1
//    1 1
//   1 2 1
//  1 2 2 1
// 1 2 3 2 1

void p20()
{
  int i, j, flag, k;
  for (i = 1; i <= 5; i++)
  {
    k = 1;
    flag = 1;
    for (j = 1; j <= 9; j++)
    {
      if (j >= 6 - i && j <= 4 + i)
      {
        if (flag)
        {
          printf("%d", k);
          j < 5 ? k++ : k--;
        }
        else
          printf(" ");
        if (j == 5 && i % 2 == 0)
        {
          k--;
        }
        flag = 1 - flag;
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

//------------------------------------------

void p21()
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j <= 7; j++)
    {
      if (j >= 6 - i && j <= 2 + i && i != 1)
      {
        printf(" ");
      }
      else
        printf("*");
    }
    printf("\n");
  }
}

//------------------------------------------

void p22()
{
  int i, j, k;
  for (i = 1; i <= 4; i++)
  {
    k = 1;
    for (j = 1; j <= 7; j++)
    {
      if (j >= 6 - i && j <= 2 + i && i != 1)
      {
        printf(" ");
      }
      else
        printf("%d", k);
      j < 4 ? k++ : k--;
    }
    printf("\n");
  }
}

//------------------------------------------

void p23()
{
  int i, j;
  char k;
  for (i = 1; i <= 4; i++)
  {
    k = 'A';
    for (j = 1; j <= 7; j++)
    {
      if (j >= 6 - i && j <= 2 + i && i != 1)
      {
        printf(" ");
      }
      else
        printf("%c", k);
      j < 4 ? k++ : k--;
    }
    printf("\n");
  }
}