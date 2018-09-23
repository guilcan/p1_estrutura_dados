#ifndef LES_H
#define LES_H

#include <iostream>

using namespace std;

template<typename T>
class les{
    public:

        T* buffer;
        int capacity;
        int size;

        les(int n): buffer(new T[n]), capacity(n), size(0){}

        bool insert(T value){
            if(size == capacity)
                return false;

            int i;
            for(i=0;i<size && buffer[i] < value;i++);

            for(int j=size; j>i; j--){
                buffer[j] = buffer[j-1];
            }

            buffer[i] = value;
            size++;

            return true;
        }
        void print() const{
            for(int i=0;i<size;i++)
                cout << buffer[i] << endl;
        }
        int search(T value){
            int i;
            for(i=0; i < size && buffer[i] <= value; i++){
                if(buffer[i] == value)
                    return i;
            }
                    cout<<i<<endl;
            return -1;
        }
        bool remove(int index){
            if (index < 0 || index >= size)
                return false;

            for(int i=index; i<size-1; i++){
                buffer[i] = buffer[i+1];
            }
            size--;
            return  true;
        }


        virtual ~les(){
            delete[] buffer;
        }
};



#endif // LES_H
