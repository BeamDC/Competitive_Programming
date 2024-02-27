#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct pc{
    string name;
    int value;
};
bool _sort(const pc& pc1, const pc& pc2){
    if (pc1.value == pc2.value){
        return pc1.name < pc2.name;
    }
    return pc1.value > pc2.value;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    unsigned int n,r,s,d;cin>>n;
    string name;
    vector<pc> pcs(n);
    for (auto& x : pcs) {
        cin>>name>>r>>s>>d;
        x.name = name;
        x.value = (2*r)+(3*s)+d;
    }

    if (pcs.size() == 0)
    {
        return 0;
    }
    if (pcs.size() == 1)
    {
        cout << pcs[0].name;
        return 0;
    }

    sort(pcs.begin(),pcs.end(),_sort);
    cout<<pcs[0].name<<'\n'<<pcs[1].name;
}
