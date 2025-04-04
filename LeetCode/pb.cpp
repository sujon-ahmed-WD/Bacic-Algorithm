class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n)
        {
            int cnt = 0;
            int last_index = flowerbed.size() - 1;
    
            for(int i = 0; i < flowerbed.size(); i++)
            {
                if(flowerbed[i] == 0 &&
                   (i == 0 || flowerbed[i - 1] == 0) &&
                   (i == last_index || flowerbed[i + 1] == 0))
                {
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
    
            return cnt >= n; 
        }
    };