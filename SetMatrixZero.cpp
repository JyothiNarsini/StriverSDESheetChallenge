void markrow (int row , vector<vector<int>>&matrix){

    int m = matrix[0].size();

    for(int i=0; i<m; i++){

        if(matrix[row][i]!=0){

            matrix[row][i] = -1;

        }

    }

    

}

 

void markcol (int col , vector<vector<int>>&matrix){

    int n= matrix.size();

    for(int i=0;i<n;i++){

        if(matrix[i][col]!=0){

            matrix[i][col] =-1;

        }

    }

}

 

void setZeros(vector<vector<int>> &matrix)

{

    // Write your code here.

    int n = matrix.size();

    int m = matrix[0].size();

 

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == 0){

                markrow(i , matrix);

                markcol(j , matrix);

            }

        }

    }

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(matrix[i][j] == -1){

                matrix[i][j] = 0;

            }

        }

    }

}

