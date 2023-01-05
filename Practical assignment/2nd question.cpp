#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int largest(int arr[], int m)
{
    int p;
    int max = arr[0];
    for (p = 1; p < m; p++)
        if (arr[p] > max)
            max = arr[p];

    return max;
}

int main()
{
    int no_items,a;
    string na_item;

    cout<<"Enter the number of items: ";
    cin>>no_items;
    cout<<"\n";
    a =no_items;
    int pr_item[a];
    for(int i=0; i<no_items; i++)
    {
        cout<<i+1;
        cout<<"Enter the item's name: ";
        cin>>na_item;
        cout<<"Enter the item's price: ";
        cin>>pr_item[i];
        cout<<"\n";
    }

    a = sizeof(pr_item) / sizeof(pr_item[0]);
    cout <<na_item
         << largest(pr_item, a);
}
