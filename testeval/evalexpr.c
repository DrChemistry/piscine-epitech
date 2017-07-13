int	main(int ac, char **av)
{
  if (ac == 2)
    {
      evalexpr(av[1]);
      my_putchar('\n');
      return (0);
    }
  return (84);
}
