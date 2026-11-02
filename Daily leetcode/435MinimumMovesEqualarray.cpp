class Solution {
public:
    int minMoves(vector<int>& nums) {
       int ra=ranges::min(nums),moves = 0;
        for (int x : nums) 
            moves+=x-ra;
        return moves;
    }
};