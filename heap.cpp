#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int SIZE;

    heap(){
        SIZE = 0;
    }

    void insert(int val){
        arr[SIZE]=val;
        int index = SIZE;
        SIZE++;

        while(index>0){
            int parent = (index-1)/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{
                break;
            }
        }
    }
    
   void del_heap(int index){
    if(index<0 || index>=SIZE){
        cout<<"Invalid index!"<<endl;
        return;
    }
    if(SIZE == 0){
        cout << "Heap is empty";
        return;
    }

    if(index < 0 || index >= SIZE){
        cout << "Invalid index";
        return;
    }

    arr[index] = arr[SIZE-1];
    SIZE--;

    // Heapify Up
    int parent = (index-1)/2;

    if(index > 0 && arr[index] > arr[parent]){
        while(index > 0){
            parent = (index-1)/2;

            if(arr[index] > arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else{
                break;
            }
        }
    }

    // Heapify Down
    else{
        while(index < SIZE){
            int largest = index;
            int left = 2*index + 1;
            int right = 2*index + 2;

            if(left < SIZE && arr[left] > arr[largest]){
                largest = left;
            }

            if(right < SIZE && arr[right] > arr[largest]){
                largest = right;
            }

            if(largest != index){
                swap(arr[index], arr[largest]);
                index = largest;
            }
            else{
                break;
            }
        }
    }
}
    
    void display(){
        for(int i=0;i<SIZE;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(45);
    h.insert(70);
    h.insert(15);
    h.insert(35);
    h.insert(25);
    h.insert(90);
    h.insert(85);
    
    
    h.display();

    return 0;
}