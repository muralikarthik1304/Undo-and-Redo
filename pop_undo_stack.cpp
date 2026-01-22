#include<stdio.h>
#include"stack.h"
#include<stdlib.h>
#include<string.h>
extern shape* undo_top;
shape* temp;
int pop_undo()
{
if(undo_top==NULL)
{
printf("undo not possible\n");
return 0;
}
if(strcmp(undo_top->name,"circle")==0)
{
temp=undo_top;
push_circle_redo(undo_top->x1,undo_top->y1,undo_top->radius);
undo_top=undo_top->link;
free(temp);
}
else if(strcmp(undo_top->name,"line")==0)
{
temp=undo_top;
push_line_redo(undo_top->x1,undo_top->y1,undo_top->x2,undo_top->y2);
undo_top=undo_top->link;
free(temp);
}
else if(strcmp(undo_top->name,"rectangle")==0)
{
temp=undo_top;
push_rectangle_redo(undo_top->x1,undo_top->y1,undo_top->x2,undo_top->y2);
undo_top=undo_top->link;
free(temp);
}


}
