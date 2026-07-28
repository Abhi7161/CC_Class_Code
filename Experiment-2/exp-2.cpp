#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    string op;
    cin >> op;

    if (op == "insert")
    {
        int index, value;
        cin >> index >> value;

        if (index == arr.size())
        {
            arr.push_back(value);
        }
        else if (index >= 0 && index < arr.size())
        {
            arr.push_back(0); 

            for (int i = arr.size() - 1; i > index; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[index] = value;
        }
        else
        {
            cout << "Index is not correct" << endl;
        }

        cout << "Array after insertion: ";
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
    else if (op == "deletion")
    {
        int index;
        cin >> index;

        if (index >= 0 && index < arr.size())
        {
            for (int i = index + 1; i < arr.size(); i++)
            {
                arr[i - 1] = arr[i];
            }

            arr.resize(arr.size() - 1);
        }
        else
        {
            cout << "Index is not correct" << endl;
        }

        cout << "Array after deletion: ";
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
    else if (op == "traversal")
    {
        cout << "The elements of the array are: ";
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else if (op == "updating")
    {
        int index, value;
        cin >> index >> value;

        if (index >= 0 && index < arr.size())
        {
            arr[index] = value;
            cout << "Value has been updated" << endl;
        }
        else
        {
            cout << "Index is not correct" << endl;
        }

        cout << "Array after updating: ";
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid operation" << endl;
    }

    return 0;
}
