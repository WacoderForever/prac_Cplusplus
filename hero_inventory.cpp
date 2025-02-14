#include "allheaders.h"



int main(){
    vector <string> inventory;

    inventory.push_back("sword");
    inventory.push_back("armour");
    inventory.push_back("shield");

    cout<<"You have "<<inventory.size()<<" items."<<endl;

    cout<<"Your items:\n";

    for(int i=0;i<inventory.size();i++){

        cout<<inventory[i]<<endl;
    }

    cout<<"You trade a sword for a battle axe"<<endl;
    inventory[0]="battle axe";

    cout<<"Your items:\n";

    for(int i=0;i<inventory.size();i++){

        cout<<inventory[i]<<endl;
    }

    cout<<"The item name '"<<inventory[0]<<"' has "<<inventory[0].size()<<" letters in it.\n";
    cout<<"Your shield is destroyed in a fierce battle\n";
    inventory.pop_back();

    cout<<"Your items:\n";

    for(int i=0;i<inventory.size();i++){

        cout<<inventory[i]<<endl;
    }

    cout<<"You were robbed off all your items.\n";

    inventory.clear();

    if(inventory.empty()){
        cout<<"You have nothing\n";
        return 0;
    }

    cout<<"You have atleast an item.";

    return 0;



}