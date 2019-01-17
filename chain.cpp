class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            // Your Code
			int alpha = -1000000;
			int beta = 1000000;
			x = -1;
			y = -1;
			minimax(0, Record, Max, color, inputColor, alpha, beta);
        }
		
		int minimax(int depth, int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor, int alpha, int beta){
			int blue = 0, red = 0, white = 0;
			int blueScore = 0, redScore = 0;
			for(int i=0; i<5; i++){
				for(int j=0; j<6; j++){
					if(Record[i][j]<Max[i][j]){
						if(color[i][j]==Blue){
							blue += Max[i][j]-Record[i][j];
							blueScore += 10*(Max[i][j]-Record[i][j]);
						}
						if(color[i][j]==Red){
							red += Max[i][j]-Record[i][j];
							redScore += 10*(Max[i][j]-Record[i][j]);
						}
						if(color[i][j]==White){
							white += Max[i][j]-Record[i][j];
							blueScore += Max[i][j]-Record[i][j];
							redScore += Max[i][j]-Record[i][j];
						}
					}
				}
			}
		}
	} 
