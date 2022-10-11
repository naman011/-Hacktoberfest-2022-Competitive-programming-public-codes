#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

 
int32_t main(){
   int t; cin >> t;
   for(int i = 0; i < t; i++){
       int n; cin >> n;
       string color[n];
       int durablility[n];
       int id[n];
       for(int j = 0; j < n; j++){
           cin >> color[j] >> durablility[j] >> id[j];
        //    cout << color[j] << " " << durablility[j] << " " << id[j] << " " << endl;
       }
       set<pair<string, int>> color_baseed;
       for(int j = 0; j < n; j++){
           color_baseed.insert({color[j], id[j]});
        //    cout << color[j] << " " << id[j] << " id " << endl;
       }
    //    cout << endl;
       set<pair<int, int>> durablility_based;
       for(int j = 0; j < n; j++){
        //    durablility_based[durablility[j]] = id[j];
           durablility_based.insert({durablility[j], id[j]});
        //    cout << durablility[j] << " dur" << id[j] << " id " << endl;
       }

    //    cout << " paringt map" << endl;


        // cout << "printing array ids" << endl;

       int count = 0;
       int color_array_id[n];
       int index = 0;
       for(auto &it: color_baseed){
           color_array_id[index] = it.second;
        //    cout << it.second << " color";
           index++;
       }
    //    cout << endl;
       index = 0;
       int durablility_based_array[n];
       for(auto &itr: durablility_based){
           durablility_based_array[index] = itr.second;
        //    cout << itr.second << " dur";
           index++;
       }
    //    cout << endl;
       for(int j = 0; j < n; j++){
           if(durablility_based_array[j] == color_array_id[j]) count++;
       }
        cout << "Case #" << i+1 << ": " << count << endl;
   }
   return 0;
}