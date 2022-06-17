class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n<=1) return s;

        //Construct a matrix, and consdier matrix[j][i] as s[i] -> s[j] is Palindrome or not.
        //                                 ------^^^^^^
        //                                 NOTE: it's [j][i] not [i][j]

        //Using vector  could cause the `Time Limit Error`
        //So, use the native array
        bool **matrix  = (bool**)malloc(n*sizeof(bool*));
        int start=0, len=0;
        // Dynamic Programming
        //   1) if i == j, then matrix[i][j] = true;
        //   2) if i != j, then matrix[i][j] = (s[i]==s[j] && matrix[i-1][j+1])
        for (int i=0; i<n; i++){
            matrix[i] = (bool*)malloc((i+1)*sizeof(bool));
            memset(matrix[i], false, (i+1)*sizeof(bool));
            matrix[i][i]=true;
            for (int j=0; j<=i; j++){
                // The following if statement can be broken to
                //   1) j==i, matrix[i][j] = true
                //   2) the length from j to i is 2 or 3, then, check s[i] == s[j]
                //   3) the length from j to i > 3, then, check s[i]==s[j] && matrix[i-1][j+1]
                if ( i==j || (s[j]==s[i] && (i-j<2 || matrix[i-1][j+1]) ) )  {
                    matrix[i][j] = true;
                    if (len < i-j+1){
                        start = j;
                        len = i-j+1;
                    }
                }
            }
        }

        for (int i=0; i<n; i++) { 
            free (matrix[i]);
        }
        free(matrix);

        return s.substr(start, len);
        }
};