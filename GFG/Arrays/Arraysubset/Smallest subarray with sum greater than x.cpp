int smallestSubWithSum(int x, vector<int>& arr) {
         int n = arr.size();
    int min_len = n + 1;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > x) {
                min_len = min(min_len, j - i + 1);
                break;
            }
        }
    }

    return (min_len == n + 1) ? 0 : min_len;
    }