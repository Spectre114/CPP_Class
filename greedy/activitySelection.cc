#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;
    vector<pair<int, int>> activities(n);
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        activities[i] = {end, start};
        // activities.push_back({start, end});
    }
    sort(activities.begin(), activities.end());
    // sort(activities.begin(), activities.end(), [](pair<int, int> a, pair<int, int> b)
    //      { return a.second < b.second; });
    int end = activities[0].first;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (activities[i].second >= end)
        {
            cnt++;
            end = activities[i].first;
        }
    }
    cout << cnt;
}