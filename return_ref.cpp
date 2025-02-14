#include "allheaders.h"

string& ref_ret(vector<string>& items,int i){

    return items[i];

}

int main(){

    vector<string> items;

    items.push_back("sword");
    items.push_back("armor");
    items.push_back("shield");

    cout<<"Sending the returned reference to cout\n";
    cout<<ref_ret(items,1)<<endl;
    cout<<"Assigning returned reference to another reference\n";

    string& rRef=ref_ret(items,0);

    cout<<"Sending new reference to cout:\n";
    cout<<"rRef: "<<rRef<<endl;

    cout<<"Modifying an object using the return reference:\n";
    rRef="Hailey Berry";
    cout<<"items[0]: "<<items[0]<<endl;


    return 0;
}