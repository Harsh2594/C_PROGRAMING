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

int permut(int n, int r)
{
  fact(n) / fact(n - r);
}

int check_digit(int n, int d)
{
  int x;
  while (n)
  {
    if (n % 10 == d)
      return 1;
    n = n / 10;
  }
  return 0;
}

void prime_factor(int n)
{
  int i;
  for (i = 2; i <= n; i++)
  {
    while (n % i == 0)
    {
      printf("%d", i);
      n = n / i;
    }
  }
}

int lcm(int a, int b)
{
  int L;
  for (L = a > b ? a : b; L <= a * b; L++)
  {
    if (L % a == 0 && L % b == 0)
      return L;
  }
}

int hcf(int a, int b)
{
  int S;
  for (S = a > b ? b : a; S >= 1; S--)
  {
    if (a % S == 0 && b % S == 0)
    {
      return S;
    }
  }
}

int isprime(int n)
{
  int i;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int nextprime(int n)
{
  int i, j, isPrime;

  for (j = n + 1;; j++)
  {
    isPrime = 1; // Assume j is prime

    for (i = 2; i <= j / 2; i++)
    {
      if (j % i == 0)
      {
        isPrime = 0; // j is not prime
        break;
      }
    }

    if (isPrime)
      return j;
  }
}

int nextprime2(int n)
{
  while (!isprime(++n))
    ;
  return n;
}

void printNprime(int n)
{
  int x = 2;
  while (n)
  {
    if (isprime(x))
    {
      printf("%d", x);
      n--;
    }
    x++;
  }
}