#include <stdio.h>
#include <stdlib.h>

/*
**creates a structure of type s_list,
**which contains a pointer type variable
**for node content, and a pointer type variable
**for next with the same structure type
*/
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	//Creates a variable of type t_list, empty
	t_list	*my_list;

	//Allocates memory for my_list, the size of the structure
	my_list = (t_list *)malloc(sizeof(t_list));

	//valid if memory could be reserved, if not it returns null
	if (my_list == NULL)
		return (NULL);
	//The content of my node will store the new content
	my_list->content = content;
	//the pointer to the next variable of my node will be set to NULL (there is nothing in the next node)
	my_list->next = NULL;
	//Returns my node called my_list
	return (my_list);
}

int main()
{
	char *str = "ss";
	t_list *head;
	//Creates a new node and add the value of "ss" to its content
	head = ft_lstnew(str);
	//Print the content of my node (my only node)
    printf("%s", (char *) (head->content));
	return (0);
}
