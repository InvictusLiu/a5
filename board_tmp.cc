class Board {
	vector<vector<string>> b;
	Block *cur;

	public:
	// ...
	void left() {
		Block *temp = new Block{*cur};
		temp->left;
		vector<coordinate> coord = temp->getCor();
		char sym = cur->getSym();
		bool succeed = true;

		for (auto c : coord) {
			if (c.col > 10) {
				succeed = false;
				break;
			}

			if (c.sym == sym) {
				if (!curr->used(c.row, c.col) && b[c.row][c.col] != " ") {
					succeed = false;
					break;
				}
			}
		}

		if (succeed) {

			vector<coordinate curcoord = cur->getCor();

			for (auto c : curcoord) {
				if (c.sym == sym) {
					b[c.row][c.col] = " ";
				}
			}	

			for (auto c : coord) {
				if (c.sym == sym) {
					b[c.row][c.col] = to_string(sym);
				}
			}
		
			*cur = *temp;
			
		}
		
		delete temp;
	}
};
