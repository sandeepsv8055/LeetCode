/*class Solution {
public:
    typedef pair<int,int>p;
    int binarySearch(vector<int>&arr,int l,int r)
    {
        int result=-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(arr[mid]==1)
            {
                result=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
           
           
           
        }
        return result+1;
       
       
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        int m =mat.size();
        int n=mat[0].size();
        vector<p>countones;//store 1s count and row number
        for(int row=0;row<m;row++)
        {
           
            int num_of_ones=binarySearch(mat[row],0,n-1);
            countones.push_back({num_of_ones,row});
        }
        sort(begin(countones),end(countones));//ascending order
        vector<int>result(k);
       
        for(int i=0;i<k;i++)
        {
            result[i]=countones[i].second;
        }
        return result;
       
    }
};
*/
class Solution {
public:
    typedef pair<int,int>p;
    int binarySearch(vector<int>&arr,int l,int r)
    {
        int result=-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(arr[mid]==1)
            {
                result=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
           
           
           
        }
        return result+1;
       
       
    }
   
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        int m=mat.size();
        int n=mat[0].size();
        priority_queue<p>pq;
        // m . logm +m log k = m(logm+logk)
        for(int row=0;row<m;row++)
        {
           
            int num_of_ones=binarySearch(mat[row],0,n-1);
            pq.push({num_of_ones,row});// m log k
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> result(k);
        int j=k-1;
        while(!pq.empty())
        {
           
            p temp=pq.top();
            pq.pop();
            result[j]=temp.second;
            j--;
           
        }
       
        return result;
       
     
    }
   
};