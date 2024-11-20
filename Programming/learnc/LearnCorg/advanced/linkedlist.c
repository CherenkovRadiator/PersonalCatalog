#include <stdio.h>
#include <stdlib.h>


/*creating the linked list structure*/
typedef struct llist{
  
  int val;
  struct llist * next;

} linkList;


/*function to create a linked list out of an array*/
int atolink(int len, int ar[], linkList * alist) {
  
  /*initializing the linked list*/
  linkList * converting = alist;
  
  /*iterating over for the length of the list creating each node*/
  for (int i=0;i!=len;i++) {
    
    /*assigning the value*/
    converting->val = ar[i];
    
    if (i<len) { /*for all values except the last*/
    
      linkList * new = (linkList *)malloc(1 * sizeof(linkList)); /*allocating memory to store next value*/
      converting->next = new; /*assigning the next allocated value `new` to the next pointer of current node*/
      converting = new; /*setting the working node to the next node to work on*/
    
    } else { /*for the last value*/
      /*setting the last value as null*/
      converting->next=NULL;
    
    }
  }
  return 0;
}


/*funciton to print out the linked list*/
int prllist(linkList * alist) {
  /*assigning pointer to work on  */
  linkList * printing = alist;
  /*iterating over the nodes*/
  while (printing->next != NULL) {
    /*printing the value in current node*/
    printf("The value is %i\n", printing->val);
    printing = printing->next; /*chaning the value of variable in use for iteration*/
  
  }

  return 0;
}


/*function to free up the allocated space to the linked list*/
int freeup(linkList * alist) {
  /*creating a pointer to work on*/
  linkList * freeing = alist;
  /*iterating over the nodes*/
  while (freeing->next!=NULL) {
    /*storing the pointer of next node*/
    linkList * extra = freeing->next;
    free(freeing); /*freeing the allocated meomory of the current node*/
    freeing = extra; /*seting the value for next iteration*/
  
  }
  
  return 0;
}


/*function to remove a specific item from the linked list*/
int removee(int item, linkList * alist) {
  /*creating pointers to work on*/
  linkList * removing = alist;
  linkList * prev = alist;
  /*iterating over the list to find the item needed to be removed*/
  while (removing->next != NULL) {
    /*checking if item is found  */
    if (removing->val == item) {
      /*checking if the item is the first item*/
      if (removing == alist) {
        /*creating temporary values to work on  */
        linkList * tempnext = removing->next; /*storing pointer to the next node*/
        linkList ** temphead = &removing; /*creating pointer to the pointer of first node of the list*/
        free(removing); /*freeing the memory of the node (deleteing the node)*/
        **temphead = *tempnext; /*changing the pinter of first node*/
        break;
      
      } else {
        /*updating the previous node*/
        prev->next = removing->next;
        free(removing); /*removing the node*/
        break;
      
      }
    
    } else {
      /*updating the valuse to continue*/
      prev = removing;
      removing = removing->next;
    
    }

  }
  
  return 0;
}


int main(void)
{
  
  linkList * mylist = (linkList *)malloc(1 * sizeof(linkList));
  int ar[10] = {11,12,13,14,15,16,17,18,19,20};

  atolink(10, ar, mylist);
  prllist(mylist);

  printf("***************************************\n");

  removee(11, mylist);
  prllist(mylist);
  freeup(mylist);
  
  return 0;
}

