#include <iostream>
using namespace std;
void CocktailSort(int *a, int *n) {
    bool swapped = true;
    int *start = a;
    int *end = a + (*n) - 1;

    while (swapped) {
        swapped = false;

        for (int *i = start; i < end - 1; ++i) {
            if (*i > *(i + 1)) {
                swap(*i, *(i + 1));
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        swapped = false;

        for (int *i = end; i >= start; --i) {
            if (*i > *(i + 1)) {
                swap(*i, *(i + 1));
                swapped = true;
            }
        }

        ++start;
        --end;
    }
}

void printArray(int *a, int *n) {
    for (int *i = a; i < a + (*n); ++i) {
        cout << *i << " ";
    }
    cout << "\n";
}

int main() {
    int x[] = {5, 1, 4, 2, 8, 0, 2,0};
    int t = sizeof(x) / sizeof(x[0]);
    int* n = &t;
    
    CocktailSort(x, n);

    cout << "Sorted array:\n";
    printArray(x, n);

    return 0;
}
