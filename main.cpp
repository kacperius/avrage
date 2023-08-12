#include <iostream>
using namespace std;

int input_table[] = {13, 6, 3, 20, 22};
float avg(int input_array[], int size) {
    float sum = 0.0;
    int i = 0;
    while (i < size) {
        sum += input_array[i];
        i++;
    }
    return sum/size;
}

int main() {

  cout << avg(input_table, sizeof(input_table)/sizeof(int));

  return 0;
}