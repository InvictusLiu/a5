struct coordinate {
	int row;
	int col;
	char sym;
};

class LBlock {
	vector<coordinate> coord;
	int width;
	// ...
	public:
	// ...
	void right() {
		for(auto &c : coord) {
			c.col++;
		}
	}

	vector<coordinate> getCor() {
		return coord;
	}

	char getSym() {
		return 'l';
	}

	bool used(int row, int col) {
		for (auto c : coord) {
			if (c.row == row && c.col == col && c.sym != '-') {
				return true;
			}
		}
		return false;
	}
	// ...
};
