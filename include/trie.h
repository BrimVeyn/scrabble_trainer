/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie.student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:32:18 by pollivie          #+#    #+#             */
/*   Updated: 2024/06/10 22:32:19 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIE_H
#define TRIE_H

#define ALPHABET_SIZE 26
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct TrieNode
{
	struct TrieNode *children[ALPHABET_SIZE];
	bool             is_end_of_word;

} TrieNode;

typedef struct Trie
{
	TrieNode *root;

} Trie;

TrieNode *TrieNodeCreate(void);
void TrieNodeDestroy(TrieNode *self);
bool TrieNodeRemoveChild(TrieNode *self, const char *const key, const uint64_t depth);
bool TrieNodeIsEmpty(TrieNode *self);

Trie *TrieCreate(void);
void  TrieInsert(Trie *const self, const char *const key);
bool  TrieSearch(Trie *const self, const char *const key);
bool  TrieRemove(Trie *const self, const char *const key);
Trie *TrieDestroy(Trie *const self);

#endif