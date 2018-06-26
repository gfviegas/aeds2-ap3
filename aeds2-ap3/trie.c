//
//  trie.c
//  aeds2-ap3
//
//  Created by Gustavo Viegas on 26/06/18.
//  Copyright © 2018 UFV Florestal. All rights reserved.
//

#include "trie.h"

short isExternal(TreeNodePointer node) {
    return (node->type == External);
}

TreeNodePointer createInternalNode(TreeNodePointer *left, TreeNodePointer *right, int frequencySum) {
    TreeNodePointer p;
    p = (TreeNodePointer) malloc(sizeof(TreeNode));
    p->type = Internal;
    p->Node.InternNode.left = *left;
    p->Node.InternNode.right = *right;
    p->Node.InternNode.frequencySum = frequencySum;
    return p;
}

TreeNodePointer createExternalNode(String word, TreeNodePointer *p) {
    *p = (TreeNodePointer) malloc(sizeof(TreeNode));
    (*p)->type = External;
    strcpy((*p)->Node.ExternNode.word, word);
    return *p;
}

