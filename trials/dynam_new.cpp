#include <iostream>

using namespace std;
template <class T>
bool make2DArray(T** &x,int num_rows,int num_cols){
    try{
        x=new T* [num_rows];
        for(int i=0;i<num_rows;i++) x[i]=new T [num_cols];
        return true;
    }
    catch(...){
        cerr<<"Out of memory!"<<endl;
        return false;
    }
}

int main(){
    int *y = new int(10);
    //1d array
    int n=10
    // without exception handling float *x = new float [n];
    float *x;
    try{
        x=new float [n];
    }
    catch(bad_alloc e){
        cerr<<"No memory allocated"<<endl;
        exit(1);
    }
    //freeing dynamically allocated memory
    delete y;
    delete [] x;
    
}