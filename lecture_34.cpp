#include <iostream>
using namespace std;
// Reverse an string using the recursion:
void reverse(string &name, int start, int end)
{
    // Base case:
    if (start > end)
    {
        return;
    }
    swap(name[start], name[end]);
    start++;
    end--;
    reverse(name, start, end);
}
// Palindrome or not using recursion:
bool isPalindrome(string str, int start, int end)
{
    // Base case:
    if (start > end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return isPalindrome(str, start + 1, end - 1);
    }
}
// Finding the power using recursion:
int power(int a, int b)
{
    // Base case:
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    // Recursive call:
    int ans = power(a, b / 2);
    // if b is even:
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * (ans * ans);
    }
}
// Bubble sort using recursion:
void bubbleSort(int arr1[], int size1)
{
    // Base case:
    if (size1 == 0 || size1 == 1)
    {
        return;
    }
    // it will put the last element in the right position:
    for (int i = 0; i < size1 - 1; i++)
    {
        if (arr1[i] > arr1[i + 1])
        {
            swap(arr1[i], arr1[i + 1]);
        }
    }
    bubbleSort(arr1, size1 - 1);
}
// Selection sort using recursion:
void selectionSort(int arr2[], int size2)
{
    // base case:
    if (size2 == 0 || size2 == 1)
    {
        return;
    }
    for (int i = 0; i < size2 - 1; i++)
    {
        int minIndex = i;
        if (arr2[i + 1] < arr2[minIndex])
        {
            minIndex = i + 1;
        }
        swap(arr2[minIndex], arr2[i]);
    }
    selectionSort(arr2, size2 - 1);
}
// Insertion sort using recursion:
void insertionSort(int arr3[], int size3)
{
    // base case:
    if (size3 == 0 || size3 == 1)
    {
        return;
    }
    for (int i = 0; i < size3 - 1; i++)
    {
        int temp;
        if (arr3[i] > arr3[i + 1])
        {
            temp = arr3[i];
            arr3[i] = arr3[i + 1];
            arr3[i + 1] = temp;
        }
    }
    insertionSort(arr3, size3 - 1);
}
int main()
{
    // Program to reversed an string using the recursion:
    string name = "Tanish";
    int start = 0;
    int end = name.length() - 1;
    cout << "String before reversed is: " << endl;
    cout << "The string is: " << name << endl;
    reverse(name, start, end);
    cout << "String after reversed is: " << endl;
    cout << "The Reversed string is: " << name << endl;

    // Program to checking whether it is an palindrome or not:
    string str = "naman";
    int i = 0;
    int j = str.length() - 1;
    bool ans = isPalindrome(str, i, j);
    if (ans)
    {
        cout << "It is Palindrome." << endl;
    }
    else
    {
        cout << "It is not a Palindrome." << endl;
    }

    // Program for taking out the power:
    int a, b;
    cout << "Enter the value is: ";
    cin >> a;
    cout << "Enter the power value is: ";
    cin >> b;
    int ans1 = power(a, b);
    cout << "The power of " << a << "^" << b << " is: " << ans1 << endl;

    // Bubble sort using recursion:
    int arr1[5] = {10, 20, 5, 2, 50};
    int size1 = 5;
    bubbleSort(arr1, size1);
    cout << "Bubble sort: ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Selection sort using recursion:
    int arr2[5] = {10, 20, 5, 2, 50};
    int size2 = 5;
    selectionSort(arr2, size2);
    cout << "Selection sort: ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Insertion sort using recursion:
    int arr3[5] = {10, 20, 5, 2, 50};
    int size3 = 5;
    insertionSort(arr3, size3);
    cout << "Insertion Sort: ";
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}