#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Create Binary Tree structure*/
typedef struct bt {
  int val; // Main value
  struct bt * childf; // First child
  struct bt * childs; // Second child
} BinTree;


// All of the functions
int hasNull(BinTree * aBinTree);
int nullOnLevel(BinTree * BinTree);
BinTree * nexNull(BinTree * aBinTree, int mll, int ll);
BinTree * nextNull(BinTree * aBinTree);
void * BSearch(BinTree * aBinTree, int ll, int * ar, int len);
void BFSearch(BinTree * aBinTree, int val);
int DSearch(BinTree * aBintree, int val, int extraNum); 
int DFSearch(BinTree * BinTree, int val); 
BinTree * initializer(int val);
BinTree * listobintree(int len, int ar[]);
int freeUpBin(BinTree * atree);
int prBinTree(BinTree * atree);


/*checks if a node has the null value*/
int hasNull(BinTree * aBinTree) {
  
  if (aBinTree->childf == NULL || aBinTree->childs == NULL) {
    return 0;
  } else {
    return 1;
  }

}


/*Gives out the levels on which there is a null value. Work recursively to find measure the level */
int nullOnLevel(BinTree * aBinTree) {
  
  BinTree * working = aBinTree; // variable to work on
  static int level = 0; // level the function is on
  level++;
  
  if (hasNull(working) == 0) {
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


/*function to find the next null value in balanced order*/
BinTree * nexNull(BinTree * aBinTree, int mll, int ll) {
  
  BinTree * working = aBinTree; // Variable to work on
  static int level; // Value for current value
  static int mlevel; // Value for minimum level null value if found on
  mlevel = mll;
  level = ll;
  level++;
  static BinTree * rtval = NULL; // return value
  
  if (hasNull(working)==0) {  
    if (level<mlevel) {
      rtval = working;
      mlevel = level;
    } else {
      return rtval;
    }
  } 
  else {  
    nexNull(working->childf, mlevel, level);
    level--;
    nexNull(working->childs, mlevel, level);
    level--;
  }
  
  return rtval;

} 


/*Function to set values for nexnull*/
BinTree * nextNull(BinTree * aBinTree) {
  
  int ml = 100000;
  int l = 0;
  
  BinTree * rtval = nexNull(aBinTree, ml, l); 
  /*resetting the values for level and minimum level*/
  ml = 100000;
  l = 0;
  return rtval;

}


/*return array of value on a level*/
void * BSearch(BinTree * aBinTree, int ll, int * ar, int len) {
  
  static int arlen = 0;
  arlen = len;
  static int level = 0;
  level = ll;
  static int clevel = 0;
  
  BinTree * current = aBinTree;

  if (clevel == level) { // insert value to the array when on the required level
    if (current == NULL) { // if the node is empty
      ar[arlen] = 0;
    } else {
      ar[arlen] = current->val;
    }
    arlen++;
  } else { // continue search if not on the level
    clevel++;
    BSearch(current->childf, level, ar, arlen);
    BSearch(current->childs, level, ar, arlen);
    clevel--;
  }
  return ar;
}


/*main binary search function*/
void BFSearch(BinTree * aBinTree, int val) {
  
  int checker = 0; // variable for the continuity of the while loop
  int level = 0; // variable to hold the value of each level

  while (checker == 0) {
    
    int ele = pow(2,level); // number of elements on the level
    int * mainAr = (int *)malloc(sizeof(ele * sizeof(int))); // allocat size based the number of elements
    int nullChecker = 0; // variable to check if a level has no values

    BSearch(aBinTree, level, mainAr, 0); // obtain the elements on a level
    
    // check elements on a level0
    for (int x=0;x!=ele;x++) {
      
      if (mainAr[x] == val) { // when the value is found
        checker = 1;
        printf("The value %i is on level %i.\n", val, level+1);
      } else if (mainAr[x] == 0) { // if there is no value at the place
        nullChecker++;
      }
    }

    // check if the level had no values
    if (nullChecker == ele) {
      printf("The value %i is not in the tree.\n", val);
      free(mainAr);
      break;
    }

    free(mainAr);
    level++;
  }
  
}


// main logic for DFS
int DSearch(BinTree * aBintree, int val, int extraNum) {
  
  BinTree * working = aBintree;
  static int rtval = 0;
  rtval = extraNum;

  if (working->val == val) { // value is found
    printf("The value %i is in the tree.\n", val);
    rtval = 1;
    return rtval;
  } else { // continueing the search
    if (working->childf != NULL) {
      DSearch(working->childf, val, rtval);
    }
    if (working->childs != NULL){
      DSearch(working->childs, val, rtval);
    }
  }

  return rtval;
}


// main DFS function
int DFSearch(BinTree * BinTree, int val) {
  
  int rt = DSearch(BinTree, val, 0);
  
  if (rt == 0) { // value was not in the tree
    printf("The value %i is not in the tree.\n", val);
  }
  return 0;
}


/*function to create a node*/
BinTree * initializer(int val) { 
  
  BinTree * atree = (BinTree *)malloc(sizeof(BinTree));
  atree->val = val;
  atree->childf = NULL;
  atree->childs = NULL; 
  return atree;

}


/*function to convert a list to a balanced binary tree (based on number of values on each side)*/
BinTree * listobintree(int len, int ar[]){
  
  BinTree * rttval = initializer(ar[0]);
  
  for (int i=1; i<len; i++) {
    
    BinTree * creating = initializer(ar[i]);
    BinTree * nex = nextNull(rttval);
    
    if (nex->childf == NULL) {
      nex->childf = creating;
    } else {
      nex->childs = creating;
    }
  }

  return rttval;

} 


/*function to free the allocated memory for each node of binary tree*/
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


/*function to print the values of binary tree*/
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

  int ar[15] = {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
  BinTree * mybintree = listobintree(15, ar);
  prBinTree(mybintree);

  printf("*****************\n");
  printf("********%i*******\n", mybintree->val);
  printf("******/    \\******\n");
  printf("*****%i      %i****\n", mybintree->childf->val, mybintree->childs->val);
  printf("***/    \\  /    \\***\n");
  
  BinTree * rnode = mybintree;
  BinTree * nodeO = mybintree->childf;
  BinTree * nodeT = mybintree->childs;
  BinTree * nodeOO = nodeO->childf;
  BinTree * nodeOT = nodeO->childs;
  BinTree * nodeTO = nodeT->childf;
  BinTree * nodeTT = nodeT->childs;
  BinTree * nodeOOO = nodeOO->childf;
  BinTree * nodeOOT = nodeOO->childs;
  BinTree * nodeOTO = nodeOT->childf;
  BinTree * nodeOTT = nodeOT->childs;
  BinTree * nodeTOO = nodeTO->childf;
  BinTree * nodeTOT = nodeTO->childs;
  BinTree * nodeTTO = nodeTT->childf;
  BinTree * nodeTTT = nodeTT->childs;

  printf("**%i   %i    %i    %i*\n", nodeOO->val, nodeOT->val, nodeTT->val, nodeTO->val);
  printf("/  \\  /   \\ /   \\ /  \\\n");
  printf("%i %i %i %i %i %i %i %i\n", nodeOOO->val, nodeOOT->val, nodeOTO->val, nodeOTT->val, nodeTOO->val, nodeTOT->val, nodeTTO->val, nodeTTT->val);
  printf("***************\n");
  
  printf("For BFS...\n");
  BFSearch(mybintree, 10);
  BFSearch(mybintree, 15);
  BFSearch(mybintree, 28);
  printf("*********************\n");
  
  printf("For DFS...\n");
  DFSearch(mybintree, 10);
  DFSearch(mybintree, 15);
  DFSearch(mybintree, 30);
  printf("*********************\n");

  freeUpBin(mybintree); 
  return 0;
}







