#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "appconst.h"

#ifndef QUEUE_CONTENT_TYPE
#define QUEUE_CONTENT_TYPE uint32_t
#endif
#include<stdint.h>

typedef struct _queue_  Queue;
typedef struct  _queue_result  QueueResult;


struct _queue_{
uint32_t   size;
uint32_t   count;
uint32_t   rear;
uint32_t   front;
QUEUE_CONTENT_TYPE    data[MAX_DEPTH];
};

struct _queue_result{
QUEUE_CONTENT_TYPE   data;
uint32_t  status;

};

/*Public  interfaces */
Queue     queue_new(uint32_t  size);
uint8_t   queue_full(Queue *q);
uint8_t   queue_empty(Queue *q);
Queue*    queue_add(Queue *q,QUEUE_CONTENT_TYPE ele,QueueResult *res);
Queue*    queue_delete(Queue *q,QueueResult *res);
uint32_t  queue_length(Queue *q);

#endif




