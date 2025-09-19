// WAP function to calculate area of a circle:
float area_of_circle(int r)
{
  return 3.14 * r * r;
}

float simple_interest(int p, int r, int t)
{
  return (p * r * t) / 100;
}

int even_odd(int n)
{
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}

void natural_number(int n)
{
  int i;
  for (i = 1; i <= n; i++)
    printf("%d", i);
}

void odd_number(int n)
{
  int i;
  for (i = 0; i <= n; i++)
    printf("%d", 2 * i + 1);
}
