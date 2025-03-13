// sort 

#include <iostream>

using namespace std;
void show( int a[], int size){
    int i;
    for (i=0; i<size ;i++) {
        cout<<a[i]<< ' ';
    }
    cout <<endl;
}
void bubbleUp(int a[], int size)
{
    int i;
    for (i=0; i<size ;i++) {

         
    int j;
  

    for (j=0; j<size ;j++) {

        if(a[j]>a[j+1]){
          int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
           show(a,10);
        }

    }
 
    }
    

}

void insertionSort(int a[], int size) {
    for (int i = 1; i < size; i++) {
        int key = a[i];
        int j = i - 1;

        // 현재 키와 정렬된 부분의 요소들을 비교하여 위치를 찾는다.
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; // 요소를 오른쪽으로 이동
            j--;
        }
        a[j + 1] = key; // 키를 적절한 위치에 삽입
    }
}


int main(){
    // int a[10]={8,3,9,5,4,6,1,0,2,7};
    // show(a,10);
    // bubbleUp(a,10);
    // show(a,10);

    int a[10] = {8, 3, 9, 5, 4, 6, 1, 0, 2, 7};
    cout << "정렬 전 배열: ";
    show(a, 10);
    
    insertionSort(a, 10);
    
    cout << "정렬 후 배열: ";
    show(a, 10);
    
    return 0;

}