int equilibriumPoint(long long a[], int n) {
        int sum = 0;
        int left_sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        
        for(int i = 0; i < n; i++){
            sum -= a[i];
            if (left_sum == sum){
                return i + 1;
            }
            left_sum += a[i];
        }
        return -1;
    }

    int main(){
        long long a[] = {8, 8, 3, 7, 8, 2, 7, 2};
        int n = 8;
        int rez = equilibriumPoint(a,n);
        cout << rez << endl;
        return 0;
    }
