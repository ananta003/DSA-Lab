//lab-5 a)WAP for array implementation of stack(static implementation)
#include<stdio.h>
#define max 5

struct stack{
	int items[max];
	int top;
	
};
typedef struct stack st;

void push(st *s,int x){
	
	if(s->top==max-1){
		printf("Stack is full!\n");

	}
	else{
		s->items[++s->top]=x;
		printf("top value=%d\n",s->top);
		printf("The pushed item is %d\n ",s->items[s->top]);
	}
 }
void pop(st *s){
	if(s->top==-1){
		printf("Stack is empty!\n");
	}
	else{
		printf("The items popped is %d\n",s->items[s->top--]);
	
	}
	
}

int main(){
	st s;
	s.top=-1;
	push(&s,1);
	push(&s,2);
	push(&s,3);
	push(&s,4);
	push(&s,5);//top=4
	pop(&s);
	pop(&s);
	pop(&s);
	pop(&s);
	pop(&s);
	//pop(&s); 
	return 0;
	
	
}
 
