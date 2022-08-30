#include <iostream>
using namespace std;
void brute_force(int *, int);
void optimal(int *, int, int);

int main()
{
    int arr[4] = {1, 2, 8, 100};
    int sum = arr[0], curr_sum, max_sum = arr[0], size;
    // finding the size
    size = sizeof(arr) / sizeof(char);

    // brute force O(N^2)
    //brute_force(arr, max_sum);
    
    optimal(arr, max_sum, size);
}

void brute_force(int *arr, int max_sum)
{
    int sum, curr_sum;
    for (int count = 0; count < 4; count++)
    {
        sum = arr[count], curr_sum = arr[count];
        for (int count2 = count + 1; count2 < 4; count2++)
        {

            sum = sum + arr[count2];
            if (sum > curr_sum)
            {
                curr_sum = sum;
            }
        }

        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    cout << "Max sum is " << max_sum;
}

// optimal approach O(N)
void optimal(int *arr, int max_sum, int size)
{
    int curr_sum = max_sum;
    for (int count = 1; count < size; count++)
    {

        if (curr_sum >= 0)
            curr_sum = curr_sum + arr[count];
        else
            curr_sum = arr[count];

        if (curr_sum > max_sum)

            max_sum = curr_sum;
    }

    cout << "Max sum is " << max_sum;
}