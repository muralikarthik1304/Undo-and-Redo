#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include"stack.h"
extern shape* undo_top;
void reload_undo()
{

	cleardevice();
shape* temp1=undo_top;
while(temp1!=NULL)
{
if(strcmp(temp1->name,"circle")==0)
{
printf(" Circle : %d %d %d\n",temp1->x1,temp1->y1,temp1->radius);
circle(temp1->x1,temp1->y1,temp1->radius);
}
else if(strcmp(temp1->name,"line")==0)
{
printf(" line : %d %d %d %d\n",temp1->x1,temp1->y1,temp1->x2,temp1->y2);
line(temp1->x1,temp1->y1,temp1->x2,temp1->y2);
}
else if(strcmp(temp1->name,"rectangle")==0)
{
printf(" rectangle : %d %d %d %d\n",temp1->x1,temp1->y1,temp1->x2,temp1->y2);
rectangle(temp1->x1,temp1->y1,temp1->x2,temp1->y2);
}
temp1=temp1->link;
}
}
int main()
{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,(char*)"");
char str[10];
int x1,y1,x2,y2,stangle,endangle,radius;
while(1)
{
printf("Enter the command: ");
scanf("%s",str);
if(strcmp(str,"circle")==0) 
{
	printf("Enter the x1,y1,radius: ");
	scanf("%d%d%d",&x1,&y1,&radius);
	push_circle_undo(x1,y1,radius);
	circle(x1,y1,radius);	
}
else if(strcmp(str,"line")==0) 
{
	printf("enter the x1 y1 x2 y2 points : ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	push_line_undo(x1,y1,x2,y2);
	line(x1,y1,x2,y2);
}
else if(strcmp(str,"rectangle")==0)
{
	printf("enter the x1 y1 x2 y2 points : ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);	
	push_rectangle_undo(100,100,250,200);
	rectangle(x1,y1,x2,y2);
}
else if(strcmp(str,"undo")==0)
{
pop_undo();	
reload_undo();
}
//else if(strcmp(str,"reload")==0)reload_undo();
else if(strcmp(str,"redo")==0)
{
pop_redo();
reload_undo();
	}
else if(strcmp(str,"exit")==0) break;
else printf("Not found\n");
}
getch();
closegraph();
}
