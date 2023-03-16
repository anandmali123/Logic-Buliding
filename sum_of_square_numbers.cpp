#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter a number : ";
    int n;
    cin >> n;int sum=0;
    for(int i=1;i<=n;i++){
       sum=sum+i*i;
    }
    cout<<sum;
}