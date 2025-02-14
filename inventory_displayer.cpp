#include "allheaders.h"

void display(const vector<string>& inventory){

    vector<string>::const_iterator iter;

    for(iter=inventory.begin();iter != inventory.end();++iter){

        cout<<*iter<<endl;
    }

}

int main(){

    vector<string> inventory;

    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    display(inventory);
    return 0;
}