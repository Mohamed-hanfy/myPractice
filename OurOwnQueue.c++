#include<iostream>
using namespace std;
struct queque{
    int arr[100];
    int len;
    queque(){
        len =0;
    }

    void add_end(int value){
        arr[len++] =value;
    }

    void add_front(int value){
        for(int i =len-1 ; i >= 0;--i)
            arr[i+1] =arr[i];
            arr[0]= value;
            len++;
    }

    int remove_front(){
    int ret = arr[0];
          for(int i=1; i<len; ++i)
              arr[i-1] = arr[i];
                 --len; 
             return ret;
   }
   void print(){
    for (int i =0; i <len; ++i)
    cout << arr[i] <<" " <<"\n";
   }

}; 

int main(){
    queque my_queue;
    my_queue.add_front(10);
    my_queue.add_front(20);
    my_queue.add_front(30);
    my_queue.print();
    my_queue.add_front(1);
    my_queue.add_front(4);
    my_queue.print();
    return 0;
}

