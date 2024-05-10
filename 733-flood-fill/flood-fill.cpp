class Solution {
public:
    // Using two stacks
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        auto ex = [&image](int x, int y) {return x>=0 && x<image.size() && y>=0  && y<image[0].size();};
        int old_color = image[sr][sc];
        image[sr][sc] = color;
        size_t visited = 0;
        stack<int> xs;
        stack<int> ys;
        xs.push(sr);
        ys.push(sc);
        while (!xs.empty() && visited < image.size()*image[0].size()){ 
            int px = xs.top();
            int py = ys.top();
            xs.pop();
            ys.pop();
            for (int i = -1; i <= 1; i++){
            for (int j = -1; j <= 1; j++){
                if (i==-1 && j==-1) continue;
                if (i==1 && j==1) continue;
                if (i==1 && j==-1) continue;
                if (i==-1 && j==1) continue;
                if (i==0 && j==0) continue;
                
                if (ex(px+i, py+j)){
                if (image[px+i][py+j] == old_color) {
                visited ++;
                    image[px+i][py+j] = color;
                    //cout << "Push to stack" << endl;
                xs.push(px+i);
                ys.push(py+j);
                };
            }
            }
        
            
            
                
        }
        
        };
        return image;
    }
};