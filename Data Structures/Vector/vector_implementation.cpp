#include<iostream>
using namespace std;
typedef long long ll;

class vector{
    // Data Members
    int *arr;
    int cs,ms;

    public : 
    // Constructor
    vector(int cap=1){
        cs = 0;
        ms = cap;
        arr = new int[ms];
    }

    // Destructor
    ~vector(){
        cout<<"Vector Deleted"<<endl;
    }

    // Methods
    void push_back(const int n)
    {
        if(cs==ms){
            ms *= 2;
            int *oldarr = arr;
            // Creating a new array of twice the capacity
            arr = new int[ms];
            for(int i=0;i<cs;i++) arr[i] = oldarr[i];
            delete [] oldarr;
        }
        arr[cs] = n;
        cs++;
    }

    // Just shift the size pointer one backwards
    void pop_back()
    {
        if(cs!=0) cs--;
    }

    // Just check if size == 0
    bool isEmpty () const{
        return cs==0;
    }

    // Print the first element of Array
    int front () const{
        if(cs!=0) return arr[0];
    }

    // Print The Last Element Of The Array
    int back() const{
        if(cs!=0) return arr[cs-1];
    }

    // Print The Element at ith position
    int At(const int i) const{
        if(i<cs) return arr[i];
    }

    // Prints Size Of The Vector
    int size() const{
        return cs;
    }

    // Prints Capacity Of The Vector
    int capacity() const{
        return ms;
    }

    //Operator Overloading
    int operator[](const int i) const{
        
        return arr[i];
    }
};

int main()
{
    vector v;
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(99);

    cout<<"Entire Vector : "<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    
    cout<<v.front()<<" "<<v.back()<<endl;
    v.pop_back();
    cout<<v.front()<<" "<<v.back()<<endl;

    cout<<"Size : "<<v.size()<<" Capacity : "<<v.capacity()<<endl;

    cout<<v.At(2)<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Khali Vector Ka Size : "<<v.size()<<endl;

    return 0;
}
