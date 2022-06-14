#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int N;
    cin >> N;
    vector<int> arr(N);
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        minHeap.push(arr[i]);
    }
    int ans = 0;
    while (minHeap.size() > 1)
    {
        int val1 = minHeap.top();
        minHeap.pop();
        int val2 = minHeap.top();
        minHeap.pop();
        ans += (val1 + val2);
        minHeap.push(val1 + val2);
    }

    cout << ans << endl;
    return 0;
}
