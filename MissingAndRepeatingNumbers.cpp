#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	int sum=n*(n+1)/2;
	int sum1,ans=0;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	} 
	for(auto i:m){
		ans+=i.first;
		if(i.second>1)
		    sum1=i.first;
	}
	sum=sum-ans;

	return {sum,sum1};
}
