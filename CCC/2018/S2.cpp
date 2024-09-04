#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define umap unordered_map
#define uset unordered_set

/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);

    int n = 0, r = 4;
    scanf("%d",&n);
    int f1[n][n];
    int f2[n][n];
    
    // get matrix
    for (int i=0;i<n;++i) {
        for (int j=0;j<n;++j) {
            scanf("%d",&f1[i][j]);
        }
    }

    for (r; r>0;--r){
        bool valid = true;
        // transpose matrix
        for (int i=0;i<n;++i) {
            for (int j=0;j<n;++j) {
                f2[i][j] = f1[j][i];
            }
        }
        //reverse matrix rows
        for (int i=0;i<n;++i) {
            for (int j=0;j<n;++j) {
                f1[i][j] = f2[i][n-j-1];
            }
        }
        //check matrix col 1 is in order
        long mx = 0;
        for (int i=0; i<n;++i){
            if (!(f1[i][0] >= mx)){
                valid = false;
                break;
            }
            else {
                mx = f1[i][0];   
            }
        }
        if (!valid) { continue; }
            
        // check (0,0) < (0,n)
        if (f1[0][0] <= f1[0][n-1]) {
            for (int i=0;i<n;++i) {
                for (int j=0;j<n;++j) {
                    printf("%d ",f1[i][j]);
                }
                printf("\n");
            } return 0;
        }
    }
    return 0;
}
/*****************************************************************************/
