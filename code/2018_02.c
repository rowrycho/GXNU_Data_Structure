#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}*LinkList; 

void merge_link(LinkList LA,LinkList LB){
	// 首先删除去重  B重复的元素进行删除
	
	
	 
//	return LA;
}

// 传入头结点创建一个链表 
LinkList create(LinkList L){
	L->data=-1,L->next=NULL;
	LinkList p = L;
	while(1){
		int t;
		scanf("%d",&t);
		if(t==-1)break;
		LinkList q = (LinkList)malloc(sizeof(LinkList));
		q->data=t,q->next=NULL;
		p->next=q;
		p=p->next;
	}
	
	return L; 
}

int main(){
	LinkList LA = (LinkList)malloc(sizeof(LinkList));
	create(LA);
	LinkList LB = (LinkList)malloc(sizeof(LinkList));
	create(LB);
	
	merge_link(LA,LB);
	
	LinkList pa = LA;
	while(pa){
		printf("%d ",pa->data);
		pa=pa->next;
	}
	printf("\n");
	
	LinkList pb = LB;
	while(pb){
		printf("%d ",pb->data);
		pb=pb->next;
	}
	
	return 0;
}
