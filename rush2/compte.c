while (i >= 0)
  {
    my_putchar('V');
    str[i] = str[i] + 48;
    i = i - 1;
  }
int main()
{
  char str[] = "1234";
  int n;
  int compte;
  compte = 0;
  n = 0;
  while (str[n] != '\0')
    {
      str[n] = str[n] - 48;
      my_putchar('A');
      compte = str[n] + compte;
      n = n + 1;
    }
  my_put_nbr(compte);
}
