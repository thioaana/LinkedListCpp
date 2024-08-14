#include "Headers/LList.h"
#include <iostream>

using namespace std;

LList::LList(){
    this->head = nullptr;
    this->last = nullptr;
    count = 0;
}

LList::LList(const LList & obj){
    // this->head = obj.head;
    obj.printL();
}

void LList::prepend(int d){
    this->head = new ListItem(d, this->head);
    if (count == 0) { 
        this->last = this->head;
    }
    ++this->count;
}

void LList::printL() const{
    if (this->count == 0) {
        cout << "The list is empty" << endl;
    }
    else {
        ListItem *temp = this->head;
        for (int i=0; i<count; ++i){
            cout << temp->getData() << "-->";
            temp = temp->getNext();
        }
        cout << "end" << endl;
    }

}