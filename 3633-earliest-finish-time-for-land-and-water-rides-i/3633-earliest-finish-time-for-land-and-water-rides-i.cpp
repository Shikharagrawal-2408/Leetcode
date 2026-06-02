class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int ans = INT_MAX;

        int n = landStartTime.size();
        int m = waterStartTime.size();

        // Land -> Water
        for (int i = 0; i < n; i++) {
            int landFinish =
                landStartTime[i] + landDuration[i];

            for (int j = 0; j < m; j++) {
                int waterStart =
                    max(landFinish, waterStartTime[j]);

                int totalFinish =
                    waterStart + waterDuration[j];

                ans = min(ans, totalFinish);
            }
        }

        // Water -> Land
        for (int i = 0; i < m; i++) {
            int waterFinish =
                waterStartTime[i] + waterDuration[i];

            for (int j = 0; j < n; j++) {
                int landStart =
                    max(waterFinish, landStartTime[j]);

                int totalFinish =
                    landStart + landDuration[j];

                ans = min(ans, totalFinish);
            }
        }

        return ans;
    }
};