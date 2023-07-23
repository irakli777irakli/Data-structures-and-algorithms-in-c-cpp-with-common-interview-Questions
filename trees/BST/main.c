#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild; 
}*root=NULL;


void Insert(int key){
    struct Node *t=root;
    struct Node *r, *p;

    if(root==NULL){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root= p;
        return;
    }

    while(t!=NULL){
        r=t;
        if(key < t->data){
            t=t->lchild;
        }
        else if(key > t->data){
            t=t->rchild;
        }
        else
            return;
    }

    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key < r->data) r->lchild=p;
    else r->rchild= p; 

}

struct Node * RInsert(struct Node *p, int key){
    struct Node *t;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        p=t;
    }

    if(key < p->data)
        p->lchild = RInsert(p->lchild,key);
    
    else if(key > p->data)
        p->rchild = RInsert(p->rchild,key);
    
    return p;

}


void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

struct Node * Search(int key){
    struct Node *t = root;
    while(t!=NULL){
        if(key == t->data)
            return t;
        else if(key < t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
}

struct Node * RSearch(struct Node *t, int key){
    if(t==NULL)
        return NULL;
    
    if(key == t->data) return t;

    else if(key < t->data) 
        return RSearch(t->lchild,key);
    
    else
        return RSearch(t->rchild,key);
}

int Height(struct Node *p){
    int x,y;
    if(p==NULL)
        return 0;
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y? x+1:y+1;

}

struct Node * InPre(struct Node *p){
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p;
}

struct Node * InSucc(struct Node *p){
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p;
}

struct Node * Delete(struct Node *p, int key){
    struct Node *q;

    if(p==NULL)
        return NULL;
    
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }

    if(key < p->data)
        p->lchild=Delete(p->lchild,key);
    
    else if(key > p->data)
        p->rchild= Delete(p->rchild,key);

    else{
        if(Height(p->lchild) > Height(p->rchild))
        {
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);

        }else{
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);

        }
    
    
    }       

    return p;
}


int main(){
    struct Node *temp;

    Insert(30);
    Insert(20);
    Insert(40);
    Insert(10);
    Insert(25);
    Insert(35);
    Insert(45);
    Inorder(root);
    printf("\n");
    Delete(root,30);

    temp = Search(40);
    if(temp!=NULL)
        printf("Element %d is found\n", temp->data);
    else
        printf("Element is not found\n");

   
    
    
    return 0;
}


