/*
** my_put_in_circ.c for lib in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_select/lib/my
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Dec  2 10:21:18 2015 Luca Ungaro
** Last update Fri Dec  4 18:40:40 2015 Luca Ungaro
*/

#include "list.h"

t_list		*my_create_root(void)
{
  t_list	*root;

  root = malloc(sizeof(t_list *));
  if (root)
    {
      root->data = NULL;
      root->next = NULL;
      root->prev = NULL;
    }
  return (root);
}

int		my_put_in_end_dbcirc(t_list **list, void *data)
{
  int		ret;
  t_list	*new_elem;
  t_list	*root;

  ret = 1;
  new_elem = malloc(sizeof(t_list *));
  if (new_elem)
    {
      new_elem->data = data;
      root = my_get_root(*list);
      new_elem->next = root;
      if (root->prev)
	{
	  new_elem->prev = root->prev;
	  new_elem->prev->next = new_elem;
	}
      else
	new_elem->prev = root;
      if (*list == root)
	*list = new_elem;
      root->prev = new_elem;
      root->next = *list;
      ret = 0;
    }
  return (ret);
}

int		my_put_in_dbcirc(t_list **list, void *data)
{
  int		ret;
  t_list	*new_elem;
  t_list	*root;

  ret = 1;
  new_elem = malloc(sizeof(t_list *));
  if (new_elem)
    {
      new_elem->data = data;
      root = my_get_root(*list);
      new_elem->next = *list;
      (*list)->prev = new_elem;
      *list = new_elem;
      root->next = *list;
      ret = 0;
    }
  return (ret);
}

int		my_put_in_end_circ(t_list **list, void *data)
{
  int		ret;
  t_list	*new_elem;
  t_list	*root;

  ret = 1;
  new_elem = malloc(sizeof(t_list *));
  if (new_elem)
    {
      new_elem->data = data;
      root = my_get_root(*list);
      new_elem->next = root;
      if (*list == root)
	*list = new_elem;
      root->next = *list;
      ret = 0;
    }
  return (ret);
}

int		my_put_in_circ(t_list **list, void *data)
{
  int		ret;
  t_list	*new_elem;
  t_list	*root;

  ret = 1;
  new_elem = malloc(sizeof(t_list *));
  if (new_elem)
    {
      new_elem->data = data;
      root = my_get_root(*list);
      new_elem->next = *list;
      root->next = new_elem;
      ret = 0;
    }
  return (ret);
}
