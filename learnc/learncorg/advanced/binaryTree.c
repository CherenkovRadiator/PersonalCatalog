#include <stdio.h>
#include <stdlib.h>

typedef struct bt {
  struct bt * prev;
  int val;
  struct bt * childf;
  struct bt * childs;
} BinTree;


int initializer(BinTree * aBinTree);

int hasNull(BinTree * aBinTree) {
  if (aBinTree->childf == NULL || aBinTree->childs == NULL) {
    return 0;
  } else {
    return 1;
  }
}

int nullOnLevel(BinTree * aBinTree) {
  BinTree * working = aBinTree;
  static int level = 0;
  level++;
  if (hasNull(working) == 0) {
    printf("the val is %i\n", working->val);
    printf("%i\n", level++);
    level--;
    return 0;
  } else {
    nullOnLevel(working->childf);
    level--;
    nullOnLevel(working->childs);
    level--;
    return 0;
  }
}


BinTree * nextNull(BinTree * aBinTree) {
  BinTree * working = aBinTree;
  static int mlevel = 100000;
  static int level = 0;
  level++;
  static BinTree * rtval = NULL;
  if (hasNull(working)==0 && level<mlevel) {
    rtval = working;
    mlevel = level;
  } else {
    nextNull(working->childf);
    level--;
    nextNull(working->childs);
    level--;
  }
  printf("rtval->val = %i\n", rtval->val);
  return rtval;
}

int listToBinArray(int len, int ar[], BinTree * aBinTree) {
  BinTree * working = aBinTree;
  for (int i=0; i!=len; i++) {
    working->val = ar[i];
  }
}


int initializer(BinTree * atree) {
  atree->prev, atree->childf, atree->childs = NULL, NULL, NULL; 
  return 0;
}

int freeUpBin(BinTree * atree) {
  BinTree * current = atree;
  if (current->childf != NULL) {
    freeUpBin(current->childf);
  } 
  if (current->childs != NULL) {
    freeUpBin(current->childs);
  } 
  free(current);
  return 0;
}

int prBinTree(BinTree * atree) {
  BinTree * working = atree;
  printf("%i\n", working->val);
  if (working->childf != NULL) {
    prBinTree(working->childf);
  } 
  if (working->childs != NULL) {
    prBinTree(working->childs);
  }
  return 0;
}

int main(void)
{
  BinTree * mybintree = (BinTree *)malloc(sizeof(BinTree));
  initializer(mybintree);
  mybintree->val = 0;
  mybintree->childf = (BinTree *)malloc(sizeof(BinTree));
  mybintree->childs = (BinTree *)malloc(sizeof(BinTree));

  BinTree * nodeO = mybintree->childf;
  initializer(nodeO);
  BinTree * nodeT = mybintree->childs;
  initializer(nodeT);

  nodeO->prev = mybintree;
  nodeO->val = 1;
  nodeO->childf = (BinTree *)malloc(sizeof(BinTree));
  nodeO->childs = (BinTree *)malloc(sizeof(BinTree));
  
  nodeT->prev = mybintree; 
  nodeT->val = 2;
  nodeT->childf = (BinTree *)malloc(sizeof(BinTree));
  nodeT->childs = (BinTree *)malloc(sizeof(BinTree));

  BinTree * nodeOO = nodeO->childf;
  initializer(nodeOO);
  BinTree * nodeOT = nodeO->childs;
  initializer(nodeOT);
  BinTree * nodeTO = nodeT->childf;
  initializer(nodeTO);
  BinTree * nodeTT = nodeT->childs;
  initializer(nodeTT);

  nodeOO->val = 3;
  nodeOT->val = 4;
  nodeTO->val = 5;
  nodeTT->val = 6;
  
  prBinTree(mybintree);
  
  printf("***********\n");

  nullOnLevel(mybintree);

  printf("**************\n");
  
  nextNull(mybintree);
  
  printf("*********\n");
  
  freeUpBin(mybintree); 
  return 0;
}







