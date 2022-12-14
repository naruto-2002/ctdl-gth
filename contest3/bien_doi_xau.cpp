#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        int dp[l1 + 5][l2 + 5];
        for(int i = 0; i <= l1; i++){
            for(int j = 0; j <= l2; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = i + j;
                }else if(s1[i - 1] == s2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }else{
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
            }
        }
        cout << dp[l1][l2] << endl;
    }
}