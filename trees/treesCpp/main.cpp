#include<iostream>
#include "QueueCPP.h"
#include<stdio.h>
using namespace std;


class Tree{
public:
    Node *root;
    Tree(){
        root = NULL;
    }

    void CreateTree();
    void Preorder(Node *p);
    void PostOrder(Node *p);
    void InOrder(Node *p);
    void LevelOrder(Node *p);
    int Height(Node *root);

};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    
    
    printf("Enter root value ");
    scanf("%d", &x);
    root = new Node; //
    root->data = x;
    root->lchild = root->rchild = NULL;
    
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node; //
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node; //
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}


void Tree::Preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::InOrder(struct Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}
void Tree::PostOrder(struct Node *p)
{
    if (p)
    {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        printf("%d ", p->data);
    }
}
void Tree::LevelOrder(struct Node *root){
    Queue q(100);
    printf("%d",root->data);
    q.enqueue(root);

    while(!q.isEmpty()){
        root = q.dequeue();
        if(root->lchild)
        {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if(root->rchild)
        {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }

}

int Tree::Height(struct Node *root){
    int x=0, y=0;
    if(root==0){
        return 0;
    }
    x= Height(root->lchild);
    y= Height(root->rchild);

    if(x>y)
        return x+1;
    else
        return y+1;
}

int main(){
    Tree t;
    t.CreateTree();
    t.Preorder(t.root);

    return 0;
}