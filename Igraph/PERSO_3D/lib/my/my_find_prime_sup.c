/*
** my_find_prime_sup.c for my_find_prime_sup in /home/ungaro_l/rendu/Piscine_C_J05
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct  2 12:07:04 2015 Luca Ungaro
** Last update Fri Oct  2 12:09:24 2015 Luca Ungaro
*/

int	my_find_prime_sup(int nb)
{
  while (!my_is_prime(nb))
    ++nb;
  return (nb);
}
