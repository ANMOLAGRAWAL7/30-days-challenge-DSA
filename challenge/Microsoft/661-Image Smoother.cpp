//Q link-->https://leetcode.com/problems/image-smoother/description/
//soln
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=0,cnt=0;
                for(int x=i-1;x<=i+1;x++){
                    for(int y=j-1;y<=j+1;y++){
                        if(0<=x && x<m && 0<=y && y<n){
                            sum+=img[x][y];
                            cnt++;
                        }
                    }
                }
                ans[i][j]=(sum/cnt);
            }
        }
        return ans;
    }
};