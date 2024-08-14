#pragma once

#include "ListItem.h"


class LList{
    private:
        unsigned int count;
        ListItem *head;
        ListItem *last;

    public:
        LList();
        LList(const LList & obj);
        void initialize();
        void prepend(int d);
        void postpend(int d);
        void printL() const;

};