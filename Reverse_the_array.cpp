#include <bits/stdc++.h> 
using namespace std; 
void swap (int iniarr[], int start, int end)
{
    while (start < end)
   {
       int temp = iniarr[start];
       iniarr[start] = iniarr[end];
       iniarr[end] = temp;
       start++;
       end--;
    }
}
void print(int finalarr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<finalarr[i]<<" ";
        
        
    }
    cout<<endl;
}
int main()
{
    int no;
    cout<<"Enter the number of elements: "<< endl;
    cin>>no;
    int inputarr[no];
    cout<< "Enter the array to be reversed"<< endl;
    for (int i = 0; i < no; i++)
    {
        cin>>inputarr[i];
    }
    print(inputarr, no);
    swap(inputarr, 0, no-1);
    cout<<"reverse array is: \n";
    print(inputarr, no);
    return 0;
}