#include<stdio.h>
#include"stack.h"
#include<stdlib.h>
#include<string.h>
extern shape* redo_top;
shape* temp1;
int pop_redo()
{
if(redo_top==NULL)
{
printf("redo not possible\n");
return 0;
}
if(strcmp(redo_top->name,"circle")==0)
{
temp1=redo_top;
push_circle_undo(redo_top->x1,redo_top->y1,redo_top->radius);
redo_top=redo_top->link;
free(temp1);
}
else if(strcmp(redo_top->name,"line")==0)
{
temp1=redo_top;
push_line_undo(redo_top->x1,redo_top->y1,redo_top->x2,redo_top->y2);
redo_top=redo_top->link;
free(temp1);
}
else if(strcmp(redo_top->name,"rectangle")==0)
{
temp1=redo_top;
push_rectangle_undo(redo_top->x1,redo_top->y1,redo_top->x2,redo_top->y2);
redo_top=redo_top->link;
free(temp1);
}


}

