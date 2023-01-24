/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:10:34 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/16 12:53:16 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    char    *str;
    size_t i;

    str = (char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *str;

	str = malloc(nmemb * size);
	if (str == NULL)
		return (str);
	ft_bzero(str, size * nmemb);
	return (str);
}

int main() {
    // Test calloc function with n = 5 and size = sizeof(int)
    int *ptr = (int *)calloc(5, sizeof(int));
    if (ptr == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    // Print the memory block before initialization
    printf("Memory block before initialization:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Initialize the memory block
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = i;
    }

    // Print the memory block after initialization
    printf("Memory block after initialization:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Deallocate memory
    free(ptr);

    return (0);
}