//
//  file.h
//  aeds2-ap3
//
//  Created by Gustavo Viegas on 26/06/18.
//  Copyright © 2018 UFV Florestal. All rights reserved.
//

#ifndef file_h
#define file_h

#include <ctype.h>
#include <stdio.h>

#include <string.h>
#include <stdlib.h>

#define BUFFERSIZE 255


/**
 Lê um arquivo e processa as árvores fornecidas, buscando as palavras no dicionário
 
 @param fileName Caminho do arquivo a ser processado
 @param treeTST Ponteiro para árvore TST que será processada
 @param treePatricia Ponteiro para árvore Patricia que será processada
 @return Inteiro representando se o arquivo foi lido corretamente (1) ou não (0)
 */
int readFile(char *fileName, TSTNodePointer treeTST, PatriciaNodePointer treePatricia);

#endif /* file_h */
