class Solution {
    public int maxScore(int[] cardPoints, int k) {
        
        int l_s[] = new int[k+1];
        int r_s[] = new int[k+1];
        
        l_s[0] = 0;
        l_s[0] = 0;
        
        for (int i=1; i<=k; i++){
            l_s[i] = l_s[i-1] + cardPoints[i-1];
            r_s[i] = cardPoints[cardPoints.length-i]+r_s[i-1];
        }
        
        int sum = 0;
        
        for (int i=0; i<=k; i++){
            sum = Math.max(sum,l_s[i]+r_s[k-i]);
        }
        
        return sum;
        
    }
}