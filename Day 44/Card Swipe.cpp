#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_set<int> st;
        int maxPeople = 0;   

        for (int i = 0; i < n; ++i)
        {
            int id;
            cin >> id;


            if (st.find(id) == st.end())
            {
                // Swipe-in
                st.insert(id);
            }
            else
            {
                // Swipe-out
                st.erase(id);
            }

            maxPeople = max(maxPeople, (int)st.size());
        }

        cout << maxPeople << endl;
    }

    return 0;
}
