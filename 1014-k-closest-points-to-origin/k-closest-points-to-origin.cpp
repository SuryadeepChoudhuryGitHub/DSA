class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<float> distances(n);
        vector<vector<int>> output = {};
        for (int i = 0; i < n; i++) {
            float distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            distances[i] = distance;
        }
        float maximum = distances[0];
        for (int i = 0; i < n; i++) {
            if (distances[i] > maximum) {
                maximum = distances[i];
            }
        }
        
        for (int i = 0; i < k; i++) {
            int minimum = 0;
            for (int j = 0; j < n; j++) {
                if (distances[j] < distances[minimum]) {
                    minimum = j;
                }
            }
            output.push_back(points[minimum]);
            distances[minimum] = (maximum+1);
        }
        return output;
    }
};