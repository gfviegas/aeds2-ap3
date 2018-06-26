//
//  trie.h
//  aeds2-ap3
//
//  Created by Gustavo Viegas on 26/06/18.
//  Copyright © 2018 UFV Florestal. All rights reserved.
//

#ifndef trie_h
#define trie_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_TAM 80

typedef char String[MAX_TAM];

typedef enum {
    Internal,
    External
} TreeNodeType;

typedef struct TreeNode *TreeNodePointer;
typedef struct TreeNode {
    TreeNodeType type;
    union {
        struct {
            int frequencySum;
            TreeNodePointer left, right;
        } InternNode;
        struct {
            int frequency;
            String word;
        } ExternNode;
    } Node;
} TreeNode;

short isExternal(TreeNodePointer node);

TreeNodePointer createInternalNode(TreeNodePointer *left, TreeNodePointer *right, int frequencySum);

TreeNodePointer createExternalNode(String word, TreeNodePointer *p);



#endif /* trie_h */
