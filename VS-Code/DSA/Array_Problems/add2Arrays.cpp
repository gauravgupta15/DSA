#include <bits/stdc++.h>
#include <vector>

using namespace std;
    
int main() {
    int n1, n2;
    cout<<"Enter YOur both array size: ";
    cin>>n1>>n2;

    int arr1[n1];
    int arr2[n2];
    cout << "Enter your numbers: "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>> arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin>> arr2[i];
    }
    vector<int> temp;
    int i=n1-1, j = n2 - 1;

    int min = i > j ? j : i;
    int max = i > j ? i : j;

   while(min >= 0)
   {
       if(n1 > n2)
       {
        temp.push_back(arr1[max] + arr2[min]);
       } else {
        temp.push_back(arr1[min] + arr2[max]);
       }

       min--;
       max--;
   }

   while (max >=0 )
   {
        if(n1 > n2)
        {
            temp.push_back(arr1[max]);
        } else {
            temp.push_back(arr2[max]);
        }
        max--;
   }
   
   reverse(temp.begin(), temp.end());
   for (int i = 0; i < temp.size(); i++)
   {
    cout << temp[i]<<" ";
   }

   
    
    return 0;
}   