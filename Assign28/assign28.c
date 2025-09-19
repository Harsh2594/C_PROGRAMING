int fact(int n)
{
  if (n == 1)
    return 1;
  return n * fact(n - 1);
}

int smallest(int a, int b)
{
  int s;
  s = a < b ? a : b;
  return s;
}

// Euclid’s Theorem for HCF:
// HCF(a, b) = HCF(b, a mod b)
// Repeat this process until the remainder is 0. The non-zero divisor at that step is the HCF.
int hcf(int a, int b)
{
  if (a > b)
    if (a % b == 0)
      return b;
    else
      return hcf(b, a % b);
  else if (b % a == 0)
    return a;
  else
    return hcf(b, b % a);
}
// important
int fib(int n)
{
  if (n == 0 || n == 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}
int printfibo(int n)
{
  if (n >= 0)
  {
    printfibo(n - 1);
    printf(" %d", fib(n));
  }
}

int digitcount(int n)
{
  if (n > 0)
    return 1 + digitcount(n / 10);
}

int calpower(int n, int r)
{
  if (r == 1)
    return n;
  return n * calpower(n, r - 1);
}
