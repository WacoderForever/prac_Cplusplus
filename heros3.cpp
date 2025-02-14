#include "allheaders.h"

int main(){

    vector <string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    cout<<"Your items:\n";

    for(iter=inventory.begin();iter != inventory.end();iter++){
        cout<<*iter<<endl;

    }

    cout<<"You trade your sword for battle axe"<<endl;

    myIterator=inventory.begin();
    *myIterator="battle axe";

    cout<<"Your items:"<<endl;

    for(iter=inventory.begin();iter<inventory.end();iter++){

        cout<<*iter<<endl;
    }

    cout<<"Your item "<<*myIterator<<" has "<<(*myIterator).size()<<" letters in it."<<endl;
    cout<<"Your item "<<*myIterator<<" has "<<myIterator->size()<<" letters in it."<<endl;

    cout<<"You successfully acquired a crossbow"<<endl;

    inventory.insert(inventory.begin(),"crossbow");

    cout<<"Your items are:"<<endl;
    for(iter=inventory.begin();iter != inventory.end();iter++){

        cout<<*iter<<endl;

    }

    cout<<"Your armor was destroyed in a fierce battle\n";

    inventory.erase(inventory.begin()+2);

    cout<<"Your items are:"<<endl;
    for(iter=inventory.begin();iter != inventory.end();iter++){

        cout<<*iter<<endl;

    }
    
    return 0;
}