/*
** my_putchar.c for my_putchar in /home/ungaro_l/mylibs/sources
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Sun Oct  4 12:42:16 2015 Luca Ungaro
** Last update Sun Oct  4 12:43:24 2015 Luca Ungaro
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}
