#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


// sum of elements in an array
// int main(){
//     int arr[] = {1,7,8};
//     int n = sizeof(arr)/sizeof(int);
//     int sum = 0;
    
//     for (int i = 0 ; i<n;i++){
        
//         sum = sum+ arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;

// }



//product of all elements
// int main(){
//     int arr[] = {2,7,8};
//     int n = sizeof(arr)/sizeof(int);
//     int prod = 1;
    
//     for (int i = 0 ; i<n;i++){
        
//         prod = prod * arr[i];
//     }
//     cout<<prod<<endl;
//     return 0;
// }



//linear search
// int main(){
//     int x;
//     int arr[]= {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<"ENter a number: ";
//     cin>>x;
   
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }



//find the max value in array
// int main(){
//     int arr[]={12,3,55,22,11};
//     int n = sizeof(arr)/sizeof(int);
//     int one = arr[0];
//     for(int i = 1; i<n; i++){
//         if(one<arr[i]){
//             // one = arr[i];

//             // or

//             one = max(one,arr[i]);

//         }
//     }
//     cout<<one<<endl;
//     return 0;
// }



// find the minimum value in array
// int main(){
//     int arr[]={12,3,55,22,11,5,1};
//     int n = sizeof(arr)/sizeof(int);
//     int one = arr[0];
//     for(int i = 1; i<n; i++){
//         if(one>arr[i]){
//             one = arr[i];

//             // or

//             // one = min(one,arr[i]);

//         }
//     }
//     cout<<one<<endl;
//     return 0;
// }



// // second largest element
// int main(){
//     int arr[]={12,63,3,55,22,11};
//     int n = sizeof(arr)/sizeof(int);
//     int one = arr[0];
//     int two = arr[0];
//     for(int i = 1; i<n; i++){
//         if(one<arr[i]){
//             one = arr[i];

//         }
        
//     }
//     for(int i = 1; i<n; i++){
//         if(two<arr[i] && arr[i] != one){
//             two = arr[i];
//         }
//     }
//     cout<<two<<endl;


   
//     return 0;
// }



// number of elements greater than a given number in an array
// int main(){
//     int arr[]={12,63,3,55,22,11};
//     int a = 3;
//     int count = 0;
//     int n = sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         if(arr[i]>a){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }



//vectors
// int main(){
//     vector<int> v(5);
//     for(int i = 0; i < v.size();i++){
//         cin>>v[i];
//     }
//     for(int i = 0; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Sorted->"<<endl;
//     sort(v.begin(),v.end());
//     for(int i = 0; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Reverse->"<<endl;
//     reverse(v.begin(),v.end());
//     for(int i = 0; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }




//duplicate in array
// int main() {
//     int arr[] = {12, 63, 3, 11, 55, 22, 11};
//     int n = sizeof(arr) / sizeof(int);

//     bool duplicate = false;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 duplicate = true;
//                 break;
//             }
//         }

//     }

//     if (duplicate) {
//         cout << "Exists" << endl;
//     } else {
//         cout << "Does not exist" << endl;
//     }

//     return 0;
// }



//copy one array into another in reverse
// int main(){
//     int arr[] = {12, 63, 3, 11, 55, 22, 11};
//     int n = sizeof(arr) / sizeof(int);
//     int brr[n];
//     for(int i = 0 ; i <n ; i++){
//         brr[i] = arr[n-1-i];
//     }
//     for(int i = 0 ; i <n ; i++){
//         cout<<brr[i]<<" ";
//     }
//     return 0;
// }




//reverse array without any extra array
// int main(){
//     int arr[] = {12, 63, 3, 11, 55, 22, 11};
//     int n = sizeof(arr) / sizeof(int);
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int a = 0; a <n; a++){
//         cout<<arr[a]<<" ";
        
//     }
//     return 0 ;
// }




// // merge two sorted array
// int main() {

//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {7, 8, 9, 10, 11};

//     int n1 = sizeof(arr1) / sizeof(int);
//     int n2 = sizeof(arr2) / sizeof(int);

//     int n3 = n1 + n2;
//     int arr3[n3];

//     int i = 0;  // pointer for arr1
//     int j = 0;  // pointer for arr2
//     int k = 0;  // pointer for arr3

//     // Compare elements from both arrays
//     // while (i < n1 && j < n2) {

    //     if (arr1[i] < arr2[j]) {
    //         arr3[k] = arr1[i];
    //         i++;
    //     }
    //     else {
    //         arr3[k] = arr2[j];
    //         j++;
    //     }

    //     k++;
    // }

    // // Copy remaining elements of arr1
    // while (i < n1) {
    //     arr3[k] = arr1[i];
    //     i++;
    //     k++;
    // }

    // // Copy remaining elements of arr2
    // while (j < n2) {
    //     arr3[k] = arr2[j];
    //     j++;
    //     k++;
    // }

    // // Print merged array
    // for (int c = 0; c < n3; c++) {
    //     cout << arr3[c] << " ";
    // }

//     return 0;
// }


//2D array
// //sum of each row
//  void sumR(int arr[][3]){
//         for(int i=0;i<3;i++){
//             int sum =0;
//             for(int j=0;j<3;j++){
//                 sum += arr[i][j];
                
//             }
//             cout<<sum<<endl;
//         }
        
//     }
    
// //sum of each column
//  void sumC(int arr[][3]){
//         for(int i=0;i<3;i++){
//             int sum =0;
//             for(int j=0;j<3;j++){
//                 sum += arr[j][i];
                
//             }
//             cout<<sum<<endl;
//         }
        
//     }


// int main(){

//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     sumR(arr);
//     sumC(arr);
   
// }



//linked list
class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;

    }
};
void insertHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next=head;
    head = temp;

}
void insertTail(Node *&tail,int d){
    Node *temp = new Node(d);
    tail->next=temp;
    tail = temp;

}
void display(Node *head) {
    Node *ptr = head;

    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;
}
void insertPos(Node *&head, Node *&tail, int pos ,int d){
    Node *current = head;
    if(pos==1){
        insertHead(head,d);
        return;
    }
    else if(current->next==NULL){
        insertTail(tail,d);
        return;
    }

    int cnt = 1;
    while(cnt<pos-1 && current !=NULL){
        current = current->next;
        cnt++;
    }
    if(current==NULL){
        cout<<"Invalid position"<<endl;
    }
    Node *temp = new Node(d);
    temp->next = current->next;
    current->next = temp;


}
int main(){
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;
    cout<<node->data<<endl;

    insertHead(head,20);
    insertTail(tail,30);

    insertPos(head,tail,2,50);

    display(head);
}