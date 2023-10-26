#include <stdlib.h>
struct s11
{
    int data;
    struct s11*next;
};
void main()
{
    struct s11*node1;
    struct s11*node2;
    node1=(struct s11*)malloc(sizeof(struct s11) );
    node1->data=20;
    node2=(struct s11*)malloc(sizeof(struct s11));
    node2->data=40;
    node1->next=node2;
}