class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagSq = -1; 
        int bestArea = -1;

        for (auto& dim : dimensions) {
            long long h = dim[0];
            long long w = dim[1];
            long long diagSq = h * h + w * w;
            int area = h * w;

            if (diagSq > maxDiagSq || (diagSq == maxDiagSq && area > bestArea)) {
                maxDiagSq = diagSq;
                bestArea = area;
            }
        }
        return bestArea;
    }
};
