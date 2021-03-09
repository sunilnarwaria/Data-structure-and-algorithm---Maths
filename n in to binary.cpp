// interview bit

string Solution::findDigitsInBinary(int A) {
    string ans;
    int i,rem;
    if (A==0)
    return "0";
    while(A>0)
    {
        rem = A%2;
        
        ans.push_back(char('0'+rem));
        
        A = A/2;
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
