class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //find 0 and make rows and columns as -1 later make it 0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector <int> row(m),col(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                  row[i]=col[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==1 || col[j]==1)matrix[i][j]=0;
            }
        }
    }
};
// Set Matrix Zeroes

// Intuition:

// Take two vectors: row of size m and col of size n.
// While traversing the matrix, whenever matrix[i][j] == 0, mark:
// row[i] = 1
// col[j] = 1
// Traverse the matrix again.
// If row[i] == 1 or col[j] == 1, make matrix[i][j] = 0.

// Complexity:

// Time: O(m × n)
// Space: O(m + n)