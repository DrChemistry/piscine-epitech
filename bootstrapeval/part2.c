int     genius1(char *str, int i)
{
  int   b;
  int   count;
  int   origine;

  count = 1;
  b = 0;
  i = i - 1;
  origine = i;
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      str[i] = str[i] - '0';
      i = i - 1;
    }
  i = i + 1;
  while (i >= origine && str[i] >= 0 && str[i] < 10)
    {
      b = b + (str[i] * count);
      count = count * 10;
      i = i + 1;
    }
  return (b);
}

int     genius2(char *str, int i)
{
  int   b;
  int   count;
  int   origine;

  count = 1;
  b = 0;
  i = i + 1;
  origine = i;
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      str[i] = str[i] - '0';
      i = i + 1;
    }
  i = i - 1;
  while (i >= origine && str[i] >= 0 && str[i] < 10)
    {
      b = b + (str[i] * count);
      count = count * 10;
      i = i - 1;
    }
  return (b);
}
