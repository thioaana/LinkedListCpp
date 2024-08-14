#include "Headers/ListItem.h"

ListItem::ListItem(int d, ListItem * ptrN){
    this->data = d;
    this->next = ptrN;
}

int ListItem::getData() const{
    return this->data;
}

ListItem * ListItem::getNext(){
    return this->next;
}
