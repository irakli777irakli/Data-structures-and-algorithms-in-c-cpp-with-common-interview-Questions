#include<stdio.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node *first, *last, *second=NULL, *third=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t= new Node;
        t->data = A[i];
        t->next= NULL;
        last->next = t;
        last=t;
    }
}

void create2(int A[],int n){
    int i;
    struct Node *t,*last;
    second = new Node;
    second->data = A[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t= new Node;
        t->data = A[i];
        t->next= NULL;
        last->next = t;
        last=t;
    }
}

void Display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void RDisplay(struct Node *p){
    if(p!=NULL){
        printf("%d",p->data);
        RDisplay(p->next);
    }
}


int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p){
    if(p!=NULL)
        return Rcount(p->next) +1;
    
    return 0;
}

int sum(struct Node *p){
    int s=0;

    while(p){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(struct Node *p){
    if(p==NULL){
        return 0;
    }

    return Rsum(p->next) + p->data;
}

int Max(struct Node *p){
    int max = -32768;
    while(p){
        if(p->data > max){
            max= p->data;
        }
        p=p->next;
    }

    return max;
}

int Rmax(struct Node *p){
    int x=0;
    if(p==0) return -32768;

    x = Rmax(p->next);
    if(x > p->data) return x;
    else return p->data;
}



struct Node * Lsearch(struct Node *p,int key){
    struct Node *q;

    while(p!=NULL){
        if(key == p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q=p;
        p=p->next;
    }

    return NULL;
}

struct Node * Rsearch(struct Node *p,int key){
    if(p==NULL)
        return NULL;
    if (key == p->data) return p;
    return Rsearch(p->next,key);
    
}

void Insert(struct Node *p, int index, int x){
    struct Node *t;
    int i;

    if(index < 0 || index > count(p))
        return;

    t = new Node;

    t->data = x;

    if(index == 0){
        t->next = first;
        first = t;
    }
    else{
        for(i=0;i<index-1;i++)
            p=p->next;
            
        t->next=p->next;
        p->next=t;
    }

}

void InsertLast(int x){
    struct Node *t = new Node;
    t->data = x;
    t->next = NULL;
    if(first == NULL){
        first = last = t;
    }
    else{
        last->next = t;
        last = t;
    }
}

void SortedInsert(struct Node *p,int x){
    struct Node *t, *q = NULL;

    t= new Node;
    t->data = x;
    t->next = NULL;

    // if no node
    if(first == NULL)
        first = t;
    
    else{
        while(p && p->data < x){
            q=p;
            p=p->next;
        }

        // if less than first node
        if(p==first){
            t->next = first;
            first = t;
        }
        else{
             t->next = q->next;
             q->next = t;
        }
    }

    

}


int Delete(struct Node *p, int index){
    struct Node *q=NULL;
    int x = -1, i;

    if(index < 1 || index > count(p))
        return -1;

    if(index == 1){
        q=first;
        x= first->data;
        first = first->next;
        delete q;
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }

        q->next = p->next;
        x= p->data;
        delete p;
        return x;
    }

}

int isSorted(struct Node *p){
    int x=-65536;

    while(p!=NULL){
        if(p->data < x)
            return 0;
    
        x=p->data;
        p=p->next;
    }

    return 1;
}

void removeDuplicates(struct Node *p){
    struct Node *q = p->next;

    while (q!=NULL)
    {
        if(p->data!=q->data){
            p=q;
            q= q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
    

}


void Reverse1(struct Node *p){
    int *A, i=0;
    struct Node *q;
    A= new int[count(p)];


    while(p!=NULL){
        A[i] = q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data = A[i];
        q=q->next;
        i--;
    }
}

void Reverse2(struct Node *p){
    struct Node *q=NULL, *r=NULL;

    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }

    first =q;
    

}
void Reverse3(struct Node *q,struct Node *p){
    if(p){
        Reverse3(p,p->next);
        p->next = q;
    }
    else
        first = q;
    
}

void Concat(struct Node *p, struct Node *q){
    third = p;

    while(p->next!=NULL){
        p=p->next;
    }
    p->next = q;
}

void Merge(struct Node *p, struct Node *q){
    struct Node *last;
    // p is first linked list, q is second linked list
    if(p->data < q->data){
        third=last = p;
        p=p->next;
        last->next = NULL;
    }else{
        third = last =q;
        q=q->next;
        last->next = NULL;   
    }

    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p=p->next;
            last->next = NULL;

        }else{
            last->next =q;
            last=q;
            q=q->next;
            last->next =NULL;
        }
    }

    if(p) last->next = p;
    if(q) last->next = q;

}

int isLoop(struct Node *f){
    struct Node *p, *q;
    p=q=f;
    
    do{
        p=p->next;
        q=q->next;
        q=q? q->next : q;
    }while(p && q && p!=q);
    if(p==q)
        return 1;
    
    return 0;
}

int main(){

    int A[] = {10, 20, 30, 40, 50};
    int B[] = {5,15,25,35,50};
    create(A,5);
    create2(B,5);
    
    printf("First\n");
    Display(first);
    printf("Second\n");
    Display(second);

    Merge(first,second);
    printf("merged\n");
    Display(third);
    
    


    return 0;
}