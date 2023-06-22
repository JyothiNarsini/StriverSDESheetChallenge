#include <bits/stdc++.h> 
int maximumProfit(vector<int> &p){
    // Write your code here.
    int mini=p[0];
    int profit=0;
    for(int i=1;i<p.size();i++){
        int diff=p[i]-mini;
        profit=max(profit,diff);
        mini=min(mini,p[i]);
    }
    return profit;
}
