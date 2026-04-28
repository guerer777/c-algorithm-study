//顺序表查找（超时！）
int firstBadVersion(int n) {
    for(int i = 1;i <= n;i++){
        if(isBadVersion(i)){
            return i;
        }
    }
    return 0;
}
