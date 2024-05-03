#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

struct Apartment
{
    int electricity_used;
    vector<int> children; // IDs of connected apartments
};

int findMaxFloorElectricity(const vector<Apartment> &apartments)
{
    if (apartments.empty())
        return 0;

    int max_floor_electricity = 0;
    unordered_map<int, int> floor_electricity; // Maps floor level to total electricity used

    // Create a mapping from apartment ID to its corresponding floor level
    unordered_map<int, int> apartment_to_floor;
    queue<int> q;
    q.push(0);                 // Assuming root is always apartment 0
    apartment_to_floor[0] = 0; // Root is at floor 0

    while (!q.empty())
    {
        int current_apartment = q.front();
        q.pop();
        int current_floor = apartment_to_floor[current_apartment];
        floor_electricity[current_floor] += apartments[current_apartment].electricity_used;

        // Explore children
        for (int child : apartments[current_apartment].children)
        {
            if (!apartment_to_floor.count(child))
            { // Avoid revisiting apartments
                apartment_to_floor[child] = current_floor + 1;
                q.push(child);
            }
        }
    }

    // Find the maximum electricity used on any floor
    for (auto &floor : floor_electricity)
    {
        max_floor_electricity = max(max_floor_electricity, floor.second);
    }

    return max_floor_electricity;
}

int main()
{
    int n;
    cin >> n;

    vector<Apartment> apartments(n);
    for (int i = 0; i < n; i++)
    {
        cin >> apartments[i].electricity_used;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a1, a2;
        cin >> a1 >> a2;
        apartments[a1].children.push_back(a2);
        // Assuming a tree structure, so we don't add a2 -> a1
    }

    int max_electricity = findMaxFloorElectricity(apartments);

    cout << max_electricity << endl;

    return 0;
}