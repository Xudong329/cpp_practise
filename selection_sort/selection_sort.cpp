
#include <iostream>

using namespace std;


int* selection_sort(int a[], int b) {


    for (int i = 0; i < b;i++) {
        int index=i,j,temp=0;

        for (j = i+1; j < b; j++) {
            if (a[j]<a[index]) {
                index = j;
            }
        }
        
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;

    }

    return a;
}

int main()
{
    int name[10] = {9,8,7,6,5,4,3,2,1,0};

    selection_sort(name,10);

    for (int i = 0;i<10; i++) {
        cout << name[i]<<'\n';
    }

    return 0;
}
