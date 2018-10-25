#include <iostream>
#include <random>
using namespace std;
const int Counter = 8;
// functions
template <typename T>
void QuickSort(T, int, int);

template <typename T>
bool LookFor(T, int, int, int);
/*
template<typename T1, typename T2>
void Swap(T1 *t1, T2 *t2){
    auto temp = *t1;
    *t1 = *t2;
    *t2 = temp;
};

template<typename T>
void Bubble(T *);

template<typename T>
void fillArray(T *);

template<typename T>
void showArray(T *);
*/
// end
int main() {
    srand(time(NULL));
    /*
    double num1;
    int num2;
    cout << "Enter two different numbers of different types! ";
    cin >> num1 >> num2;
    cout << "Before transformation: num1: " << num1 << ", num2: " << num2 << endl;
    // Swap(&num1, &num2);
    cout << "After transformation: num1: " << num1 << ", num2: " << num2 << endl;
    */
    int arr[Counter];
    for(int i = 0; i < Counter; i++){
        arr[i] = rand() % 10;
    }
    QuickSort(arr, 0, Counter-1);
    for(int i = 0; i < Counter; i++){
        cout<< arr[i] << endl;
    }
    int number = 1;
    cout << "Answer: " << LookFor(arr, 0, Counter - 1, number);
    /*
    char arr[Counter];
    fillArray(arr);
    showArray(arr);
    Bubble(arr);
    cout << endl;
    showArray(arr);
    */
    return 0;
}

/*
template<typename T>
void Bubble(T *array){
    for(int row = 0; row < Counter; row++){
        for(int column = 0; column < Counter; column++){
            if(array[column] > array[column+1]){
                swap(array[column], array[column+1]);
            }
        }
    }
}

template<typename T>
void fillArray(T *array){
    for(int row = 0; row < Counter; row++){
        array[row] = 65 + rand() % 91;
    }
}

template<typename T>
void showArray(T *array){
    for(int row = 0; row < Counter; row++){
        cout << array[row] << " ";
    }
}
*/

template <typename T>
void QuickSort(T array, int l, int r){
    int i, j;
    i = l;
    j = r;
    int middle = array[(i+j)/2];
    do{
        while(middle > array[i]){
            i++;
        }
        while(middle < array[j]){
            j--;
        }
        if( i <= j){
            swap(array[i], array[j]);
            i++;
            j--;
        }
    } while(i < j);
    if(i < r){
        QuickSort(array, i, r);
    }
    if(j > l){
        QuickSort(array, l, j);
    }
}

template <typename T>
bool LookFor(T array, int l, int r, int element){
    int j = r;
    int i = l;
    int index = (l+r)/2;
    int middle = array[index];

    if(l = index){
        if(array[l+1] == element){
            return true;
        } else if(array[l] == element){
            return true;
        } else {
            return false;
        }
    }

    if(element != middle){
        if(element > middle){
            LookFor(array, index , r, element);
        } else if(element < middle){
            LookFor(array, l, index, element);
        } else {
            return false;
        }
    } else if(element == middle){
        return true;
    } else {
        return false;
    }
}