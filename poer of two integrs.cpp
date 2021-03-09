// interviewbit
int Solution::isPower(int n) {
    //for(int i =2;i<=9;i++){
    if(n<2) return 1;
            for(int i =2;i<=sqrt(n);i++){
               // if(floor((log(n)/log(i))) == ceil((log(n)/log(i))) ){
               int val = log(n) / log(i);
                 if( pow(i,val) == n) return true;
             }
             return false;
}
