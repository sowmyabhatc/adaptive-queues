#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void test_queue(){
Queue q1=queue_new(10);
Queue *q=&q1;
QueueResult res;

q=queue_add(q,-10,&res);
q=queue_add(q,-20,&res);
q=queue_add(q,-30,&res);

q=queue_delete(q,&res);
assert(res.data==-10);
//printf("Deleted element: %f \n",res.data);
//printf("Queue size %d\n",q->size);
}
int main()
{
     test_queue();
    return 0;
}
