class Solution {
public:
    long long maxArea(vector<vector<int>>& coords) {
        if(coords.size()<3)return -1;
        map<int, vector<int>>row, col;
        int minx=INT_MAX, maxx=INT_MIN;
        int miny=INT_MAX, maxy=INT_MIN;
        for(auto& p: coords){
            int x=p[0], y=p[1];
            row[y].push_back(x);
            col[x].push_back(y);
            minx=min(minx, x);
            maxx=max(maxx, x);
            miny=min(miny, y);
            maxy=max(maxy, y);
        }
        long long area=0;
        for(auto& [y, xs]: row){
            if(xs.size()<2)continue;
            int base= *max_element(xs.begin(), xs.end())-*min_element(xs.begin(), xs.end());
            int height=max(abs(y-miny), abs(y-maxy));
            area=max(area, 1LL*base*height);
        }
        for(auto& [x, ys]: col){
            if(ys.size()<2)continue;
            int base= *max_element(ys.begin(), ys.end())-*min_element(ys.begin(), ys.end());
            int height=max(abs(x-minx), abs(x-maxx));
            area=max(area, 1LL*base*height);
        }
        return area>0 ? area : -1;
    }
};