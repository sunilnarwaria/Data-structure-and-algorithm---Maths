vector<int> Solution::allFactors(int A){
     vector<int> ans ; 
    for(int i=1;i<=sqrt(A);i++){
    if(!(A%i)){
        ans.push_back(i);
        if(i!=A/i)ans.push_back(A/i);
    }
    }
    sort(ans.begin(),ans.end());
    return ans ;
}
