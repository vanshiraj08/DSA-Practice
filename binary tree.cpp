
// binary tree implementation
#include <stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data){
    struct node *n;                                             //Creating the node pointer
    n=(struct node*)malloc(sizeof(struct node));                //Allocating memory in the heap
    n->data=data;                                               //Assigning the data
    n->left=NULL;                                               //Setting the left data to null                                              //Setting the right data to null
    n->right=NULL;                                              //Setting the right data to null
    return n;                                                   //Returning the created node
}
int main{
    // constructing the root node using the defined function 
    struct node *p=createNode(2);
    struct node *p1=createNode(1);
    struct node *p2=createNode(4);

    //Linking the root node with the left and right children
    p->left=p1;
    p->right=p2;
}