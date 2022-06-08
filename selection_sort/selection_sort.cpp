
#include <iostream>

using namespace std;


int* selection_sort(int a[], int b) {


    for (int i = 0; i < b;i++) {
        //index is for saving index of smallest number in array.
        int index=i,temp=0;

        for (int j = i+1; j < b; j++) {
            if (a[j]<a[index]) {
                index = j;
            }
        }

        //swap process
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;

    }

    return a;
}

int main()
{
    int examples[10] = {9,8,7,6,5,4,3,2,1,0};

    selection_sort(examples,10);

    for (int i = 0;i<10; i++) {
        cout << examples[i]<<'\n';
    }

    return 0;
}

