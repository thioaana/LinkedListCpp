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
        void prepend(int d);
        void printL() const;

};