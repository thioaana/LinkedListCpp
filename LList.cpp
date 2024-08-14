#include "Headers/LList.h"
#include <iostream>

using namespace std;

LList::LList(){
    this->initialize();
}


LList::LList(const LList & obj){
    // this->initialize();
    
    // ListItem & cursor = obj.head;
    // while (cursor != nullptr){
    //     this->head = new ListItem(cursor.getData())
    // }

    // }

}

void LList::initialize(){
    this->head = nullptr;
    this->last = nullptr;
    count = 0;
}

void LList::prepend(int d){
    this->head = new ListItem(d, this->head);
    if (count == 0) { 
        this->last = this->head;
    }
    ++this->count;
}

void LList::postpend(int d){
    this->last = new ListItem(d, nullptr);
    cout << "From List::postpend : count before addition =" << this->count << endl;
    if (this->count == 0) { 
        this->head = this->last;
    }
    ++this->count;
    cout << "New Head : " << this->head << " New last : " << this->last << " and New count : " << this->count << endl;
    cout << "--------------\n";
}

void LList::printL() const{
    if (this->count == 0) {
        cout << "The list is empty" << endl;
    }
    else {
        ListItem *temp = this->head;
        for (int i=0; i<count; ++i){
            cout << temp->getData() << temp->getNext() <<"-->";
            temp = temp->getNext();
        }
        cout << "end" << endl;
    }

}