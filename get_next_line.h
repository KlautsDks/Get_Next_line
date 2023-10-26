/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acachi-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:28:31 by acachi-m          #+#    #+#             */
/*   Updated: 2023/10/26 05:22:51 by acachi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H //Estas dos líneas son como reglas en la primera página de tu cuaderno que dicen: "Si alguien más ya ha escrito una receta en este cuaderno, no vuelvas a escribirla. Si no, empieza aquí".
# define GET_NEXT_LINE_H 

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif
