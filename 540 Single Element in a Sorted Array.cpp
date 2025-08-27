class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int st = 0,n =A.size(), end = n -1;

        if(A.size() == 1) return A[0]; 
        while(st <=end){
            int mid = st + (end - st)/2;

            if(mid == 0 && A[0]!= A[1]){return A[mid];}  
            if(mid ==n-1 && A[n-1] != A[n-2]) {return A[mid];}

            if( A[mid] != A[mid -1] && A[mid] != A[mid + 1]){
                return A[mid];
            }
            if(mid% 2== 0){ // even 
                 if (A[mid] == A[mid -1]){
                    end = mid -1;
                }
                else {
                    st = mid +1;
                }
            }
            else{
                 if (A[mid] == A[mid -1]){
                    st = mid +1;
                }
                else {
                    end = mid -1;
                }
            }




           
        }
        return -1;
    }
};
