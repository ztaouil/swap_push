/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:31:14 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 11:31:28 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

int     string_to_int (char* str)
{
    int ok;
    int n = safe_string_to_int(str, &ok);
    if (ok == 0)
        printf ("string_to_int : chaine de character %s invalide \n", str);
    return (n);
}

int		safe_string_to_int (char* str, int* ok)
{
    int i;
    int n = 0;
    *ok = 1;

    if (str[0] == '-')
        return (- safe_string_to_int (str + 1, ok));
    if (!(*str))
    {   
        *ok = 0;
        return (0);
    }
    for (i = 0; (str[i] != '\0'); i++)
    {
        if ((str[i] < '0') || (str[i] > '9'))
            *ok = 0;
        n *= 10;
        n += (str[i] - 48);
    }
    return (n);
}

void		swap_int(int* m, int* n)
{
	int tmp;

	tmp = *m;
	*m = *n;
	*n = tmp;
}

void		swap_char(char* m, char* n)
{
    char tmp;

    tmp = *m;
    *m = *n;
    *n = tmp;  
}