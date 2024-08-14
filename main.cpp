#include <iostream>
#include "Headers/LList.h"

using namespace std;

int main(){
    LList myList;

    for (int i=1; i<=5; ++i){
        myList.prepend(i*i);
    }
    myList.printL();
    cout << "-------------" << endl;
    
    LList & ml = myList;
    // cout << "&myList : " << &myList << endl;
    // cout << "&ml : " << &ml << endl;
    
    // ml.prepend(100);
    // myList.printL();
    // ml.printL();
    cout << "-------------" << endl;

    LList myList2(myList);

    return 0;
}