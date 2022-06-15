
#include <iostream>

using namespace std;


int* insertion_sort(int a[], int b) {

    int temp = 0;

    for (int i = 1; i < b;i++) {
        temp = a[i];

        for (int j = i; j >=0; j--) {
            if (temp > a[j-1]) {
                a[j]=temp;
            }else{
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    return a;
}



int* sort_use(int* a,int b, int* (*method)(int*, int)) {
    return (*method)(a, b);
}

int main()
{

    int examples[10] = {9,8,7,6,5,4,3,2,1,0};

    //insertion_sort(examples,10);
    sort_use(examples, 10, insertion_sort);

    for (int i = 0;i<10; i++) {
        cout << examples[i]<<'\n';
    }



    return 0;
}

