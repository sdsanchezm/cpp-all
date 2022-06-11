#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int id;
//    struct node *back;
    struct node *front;
}
node;

int main(void)
{
//    int k1 = 2;
//    printf("x: %i\n");
    
    // create an empty node
    node *listOfNodes = NULL; 
    
    node *node1 = malloc(sizeof(node));
    if (node1 == NULL)
    {
        free(listOfNodes);
        return 1;
    }
    node1->id = 23;
//    node1->back = NULL;
    node1->front = NULL;
    
    node *node2 = malloc(sizeof(node));
    if (node2 == NULL)
    {
        free(listOfNodes);
        return 1;
    }
    node2->id = 45;
    node2->front = NULL;
//    node2->back = NULL;
    
    listOfNodes = node1;
    
    node1->front = node2;
    
    node2->front = NULL;
    
    
    for (node *tmp = listOfNodes; tmp != NULL; tmp = tmp->front)
    {
        printf("id: %i\n", tmp->id);
    }
    
    
}