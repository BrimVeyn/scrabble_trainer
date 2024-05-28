/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-pae <bryan.vanpaemel@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:40:50 by bvan-pae          #+#    #+#             */
/*   Updated: 2024/05/28 17:12:43 by bvan-pae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

enum {
	dWord,
	dLetter,
	tWord,
	tLetter,
};

typedef struct word {
	char		*word;
	int			score;
	struct word	*next;
} word;

typedef struct grid {
	int			grid[15][15];
	int			modifier[15][15];
} grid;


#endif
