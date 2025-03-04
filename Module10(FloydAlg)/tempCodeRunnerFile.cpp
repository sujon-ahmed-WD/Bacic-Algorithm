        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_mat[i][j] == INT_MAX)
                    cout << "INF" << " ";
                else
                    cout << adj_mat[i][j] << " ";
            }
            cout << endl;
        }