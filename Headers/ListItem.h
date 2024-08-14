#pragma once

class ListItem{
    private:
        int data;
        ListItem *next;
    
    public:
        ListItem(int d, ListItem * ptrN);
        int getData() const;
        ListItem * getNext();
        // void setNext(ListItem * ptrN);

};