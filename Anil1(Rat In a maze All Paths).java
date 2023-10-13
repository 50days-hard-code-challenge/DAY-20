public class Solution {


	static void ratInAMaze(int maze[][], int n) {
		/* 
			* Your class should be named Solution.
			* Write your code here
		 */
		 int[][] path = new int[n][n];
		 printAllPath(maze,0,0,path,n);

	}
	public static void printAllPath(int[][] maze, int r, int c, int[][] path, int n){
		// check if r,c is valid or not
		// if cell is blocked i.e maze[r][c] = 0
		// if path is part then path[r][c] = 1
		//int n = maze.length;
		if(r<0 || r>=n || c<0 || c>=n || maze[r][c]==0 || path[r][c] == 1){
			return;
		}
        // Include the current cell
		path[r][c] = 1;
		// Destination cell
		if(r==n-1 && c==n-1){
			for(int i = 0; i<n; i++){
				for(int j = 0; j<n; j++){
					System.out.print(path[i][j]+" ");
				}
			// 	System.out.println();    // don't include because we want to print in one line
			}
			// above code se ek path print ho jayega but other path ke liye value reset karna hoga
            path[r][c] = 0;
			System.out.println();
			return;
		}
		
		// Explore further in all direction
		// Top
		printAllPath(maze, r-1, c, path,n);
		// Right
		printAllPath(maze, r, c+1, path,n);
		// Down
		printAllPath(maze, r+1, c, path,n);
		// left
		printAllPath(maze, r, c-1, path,n);

       // Before returning, we will have to reset path variable is 0 again.
		path[r][c] = 0;
	}

}
