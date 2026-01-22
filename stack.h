#ifndef  STACK_H
#define STACK_H
typedef struct generic_node
{
const char* name;
int x1,y1;
int x2,y2;
int stangle,endangle;
int radius;
int xradius,yradius;
struct generic_node* link;
}shape;


//Push_undo prototypes........
void push_circle_undo(int,int ,int);
void push_line_undo(int,int ,int,int);
void push_rectangle_undo(int,int ,int,int);
//Push_redo prototypes........
void push_circle_redo(int,int ,int);
void push_line_redo(int,int ,int,int);
void push_rectangle_redo(int,int ,int,int);
//pop_undo prototype....
int pop_undo(void);
//pop_redo prototype....
int pop_redo(void);
//reload undo
void reload_undo();
#endif
