class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
	queue<pair<int, int>> q;
	for (int i = 0; i < rooms.size(); i++) {
		for (int j = 0; j < rooms[0].size(); j++) {
			if (rooms[i][j] == 0) {
				q.push( { i, j } );
			}
		}
	}
	while (!q.empty()) {
		auto i = q.front().first, j = q.front().second;
		q.pop();
		int dist = rooms[i][j] + 1;

		if (i + 1 < rooms.size() && rooms[i + 1][j] > dist) {
			rooms[i + 1][j] = dist;
			q.push( { i + 1, j } );
		}
		if (i - 1 >= 0 && rooms[i - 1][j] > dist) {
			rooms[i - 1][j] = dist;
			q.push( { i - 1, j } );
		}
		if (j + 1 < rooms[0].size() && rooms[i][j + 1] > dist) {
			rooms[i][j + 1] = dist;
			q.push( { i, j + 1 } );
		}
		if (j - 1 >= 0 && rooms[i][j - 1] > dist) {
			rooms[i][j - 1] = dist;
			q.push( { i, j - 1 } );
		}
	}
}
};