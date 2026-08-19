class Solution {
public:

    bool changebyone(string a, string b) {

        int count = 0;

        if (a.length() != b.length()) {
            return false;
        }

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                count++;
            }
        }

        return count == 1;
    }

    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {

        int n = wordList.size();

        vector<vector<int>> graph(n, vector<int>(n, -1));

        for (int i = 0; i < n; i++) {

            graph[i][i] = 0;

            for (int j = i + 1; j < n; j++) {

                if (changebyone(wordList[i], wordList[j])) {
                    graph[i][j] = 1;
                    graph[j][i] = 1;
                }
            }
        }

        queue<pair<int, int>> q;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {

            if (wordList[i] == beginWord) {
                q.push({i, 1});
                visited[i] = true;
                break;
            }
        }

        if (q.empty()) {

            for (int i = 0; i < n; i++) {

                if (changebyone(wordList[i], beginWord)) {
                    q.push({i, 2});
                    visited[i] = true;
                }
            }
        }

        while (!q.empty()) {

            int index = q.front().first;
            int dis = q.front().second;

            q.pop();

            if (wordList[index] == endWord) {
                return dis;
            }

            for (int i = 0; i < n; i++) {

                if (graph[index][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push({i, dis + 1});
                }
            }
        }

        return 0;
    }
};