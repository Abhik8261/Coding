void printPowerSet(string &s) {
    int n = pow(2, s.size());
    
    for (int counter = 0; counter < n; counter++) {
        for (int j = 0; j < s.size(); j++) {
          
           
            if (counter & (1 << j))
                cout << s[j];
        }
        cout << endl;
    }
}