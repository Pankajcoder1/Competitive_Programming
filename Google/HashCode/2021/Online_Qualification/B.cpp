/*
    Team: Babayaga
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX = 1e5 + 5;
ll D, I, S, V, F;
string street_name_from_id[MAX];
vector<pair<ll, ll>> adj[MAX];
queue<pair<ll,ll>> traffic_at_each_intersection[MAX];
pair<ll, ll> street_points_from_id[MAX];
vector<ll> end_points_of_roads[MAX];
ll intersections_visited[MAX];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("a.txt", "r", stdin);
    freopen("a_out.txt", "w", stdout);
    map<pair<ll, ll>, ll> store_street_length;
    unordered_map<string, ll> id_from_street_name;
    cin >> D >> I >> S >> V >> F;
    
    for(int i = 0;i < S;i++) {
        ll u, v;
        cin >> u >> v;

        string s;
        cin >> s;

        ll L;
        cin >> L;

        adj[u].push_back({v, L});
        store_street_length[{u, v}] = L;
        street_points_from_id[i] = {u, v};
        street_name_from_id[i] = s;
        id_from_street_name[s] = i;
        end_points_of_roads[v].push_back(i);
    }

    memset(intersections_visited, 0LL, sizeof(intersections_visited));
    for(int i = 0;i < V;i++) {
        int number_of_routes;
        cin >> number_of_routes;
        for(int j = 0;j < number_of_routes;j++) {
            string s;
            cin >> s;

            ll end_point = street_points_from_id[id_from_street_name[s]].second;
            intersections_visited[end_point]++;
        }
    }

    ll min_traffic_intersection = 0;
    for(int i = 0;i < I;i++) {
        min_traffic_intersection = __gcd(min_traffic_intersection, intersections_visited[i]);
    }

    cout << I << endl;
    for(int i = 0;i < I;i++) {
        cout << i << endl;
        cout << int(end_points_of_roads[i].size()) << endl;
        for(int v : end_points_of_roads[i]) {
            cout << street_name_from_id[v] << " " << min_traffic_intersection << endl;
        }
    }
    return 0;
}