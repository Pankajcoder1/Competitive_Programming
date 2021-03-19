/*
    Team: Babayaga
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX = 1e5 + 5;
ll D, I, S, V, F;
ll store_street_length[MAX];
string street_name_from_id[MAX];
queue<pair<ll,ll>> traffic_at_each_intersection[MAX];   
pair<ll, ll> street_points_from_id[MAX];
vector<ll> end_points_of_roads[MAX];
unordered_map<ll, ll> time_fram_intersections[MAX];
unordered_map<string, ll> id_from_street_name;
ll max_time_for_every_intersection[MAX];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("f.txt", "r", stdin);
    freopen("f_out.txt", "w", stdout);
    cin >> D >> I >> S >> V >> F;
    
    for(int i = 0;i < S;i++) {
        ll u, v;
        cin >> u >> v;

        string s;
        cin >> s;

        ll L;
        cin >> L;

        store_street_length[i] = L;
        street_points_from_id[i] = {u, v};
        street_name_from_id[i] = s;
        id_from_street_name[s] = i;
        end_points_of_roads[v].push_back(i);
    }

    for(int i = 0;i < V;i++) {
        int number_of_routes;
        cin >> number_of_routes;
        ll total_time = 0;
        for(int j = 0;j < number_of_routes;j++) {
            string s;
            cin >> s;

            ll intersection_id = id_from_street_name[s];
            if(total_time <= D) {
                time_fram_intersections[total_time][intersection_id]++;
            }

            total_time += store_street_length[intersection_id];
        }
    }

    for(int i = 0;i < I;i++) max_time_for_every_intersection[i] = 1LL;
    for(int i = 0;i <= D;i++) {
        if(int(time_fram_intersections[i].size()) > 0) {
            for(auto it : time_fram_intersections[i]) {
                if(it.second >= 1 && it.second <= D) {
                    max_time_for_every_intersection[it.first] = max(max_time_for_every_intersection[it.first], it.second);
                }
            }
        }
    }

    cout << I << endl;
    int p = 0;
    for(int i = 0;i < I;i++) {
        cout << i << endl;
        cout << int(end_points_of_roads[i].size()) << endl;
        for(int v : end_points_of_roads[i]) {
            cout << street_name_from_id[v] << " " << (p + 1) << endl;
            p = (p + 1) % 4;
        }  
    }
    return 0;
}