class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n = v.size();
        if(n == 1 or (v[1] != v[0])) return v[0];
        if(v[n-1] != v[n-2]) return v[n-1];
        int lo = 1;
        int hi = n-2;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if((v[mid]!= v[mid-1]) && (v[mid]!= v[mid+1])){
                return v[mid];
            }
            if((mid%2==0 && v[mid] == v[mid+1]) || (mid % 2 == 1 && v[mid] == v[mid - 1])){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
    return -1;
    }
};
