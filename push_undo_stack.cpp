#include"stack.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
shape* undo_top = NULL;
void push_circle_undo(int x1,int y1,int r)
{
//create a  node for holdind circle data....
shape* node = new shape;
if(node==NULL){
printf("Memory not assaigned properly for circle node\n");
//return 0;
}
node->name="circle";
node->x1=x1;
node->y1=y1;
node->radius=r;
node->link=undo_top;
undo_top=node;
printf("Circle pushed successfully to undo stack: %d %d %d\n",node->x1,node->y1,node->radius);
//circle(node->x1,node->y1,node->radius);
printf("%p\n",undo_top);
}
void push_line_undo(int x1,int y1,int x2,int y2)
{
//create a node for line
shape* node= new shape;
if(node==NULL){
printf("Memory not assaigned properly for line node\n");
//return 0;
}
node->name="line";
node->x1=x1;
node->y1=y1;
node->x2=x2;
node->y2=y2;
node->link=undo_top;
undo_top=node;
printf("line pushed successfully to undo stack: %d %d %d %d\n",node->x1,node->y1,node->x2,node->y2);
//line(node->x1,node->y1,node->x2,node->y2);
printf("%p\n",undo_top);
}
void push_rectangle_undo(int x1,int y1,int x2,int y2)
{
shape* node= new shape;
if(node==NULL){
printf("Memory not assaigned properly for Rectangle node\n");
//return 0;
}
node->name="rectangle";
node->x1=x1;
node->y1=y1;
node->x2=x2;
node->y2=y2;
node->link=undo_top;
undo_top=node;
printf("Rectangle pushed successfully to undo stack: %d %d %d %d\n",node->x1,node->y1,node->x2,node->y2);
//rectangle(node->x1,node->y1,node->x2,node->y2);
printf("%p\n",undo_top);
}
