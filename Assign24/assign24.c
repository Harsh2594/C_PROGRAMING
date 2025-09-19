void primeBTtwo(int a, int b)
{
  int i, j, isprime;
  for (i = a + 1; i <= b - 1; i++)
  {
    isprime = 1;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        isprime = 0;
        break;
      }
    }
    if (isprime)
      printf("%d\n", i);
  }
}

void firstNfibo(int n)
{
  int a = 0, b = 1, next, i;
  printf("%d %d ", a, b);
  for (i = 1; i <= n - 2; i++)
  {
    next = a + b;
    printf("%d ", next);
    a = b;
    b = next;
  }
}

void armstrong(int a, int b)
{
  int num = a, x, n, sum = 0, digit, i, d;
  while (num < b)
  {
    x = num;
    n = 0;
    // count digits
    while (x)
    {
      x = x / 10;
      n++;
    }
    sum = 0;
    // Sum of digits^n
    for (x = num; x > 0; x = x / 10)
    {
      digit = x % 10;
      // Calculate digit power
      for (d = 1, i = 1; i <= n; i++)
      {
        d = d * digit;
      }
      sum = sum + d;
    }
    // compare the result with orignal number
    if (num == sum)
      printf("%d\n", num);

    num++;
  }
}

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int sumofseries(int n)
{
  int i, j, sum = 0;
  for (i = 1; i <= n; i++)
  {
    sum = sum + (fact(i) / i);
  }
  return sum;
}

int fact(int n)
{
  int fac = 1, i;
  for (i = n; i >= 1; i--)
  {
    fac = fac * i;
  }
  return fac;
}

int combi(int n, int r)
{
  return fact(n) / fact(n - r) * fact(r);
}

void pascalTraingle(int lines)
{
  int i, j, flag, n, r;
  for (i = 1; i <= lines; i++)
  {
    flag = 1;
    n = i - 1;
    r = 0;
    for (j = 1; j <= 2 * lines - 1; j++)
    {
      if (j >= lines + 1 - i && j <= lines - 1 + i)
      {
        if (flag)
          printf("%", combi(n, r++));
        else
          printf(" ");
        flag = 1 - flag;
        r++;
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}
