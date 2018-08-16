#ifndef EVENT_H
#define EVENT_H

enum ETYPE
    {
    DEFAULT,
    };

struct Event
    {
    ETYPE etype;
    void* content;
    };

#endif 
