// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int beg = 1, end = n;
    while (beg < end) {
        int mid = beg+((end-beg) / 2);
        if (isBadVersion(mid)) {
            end=mid;
        }
        else{
            beg=mid+1;
        }
    }
    return beg;
}