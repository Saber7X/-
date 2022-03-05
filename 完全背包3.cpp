int[] dp = new int[10010]; // dp数组
int[] que = new int[10010]; // 单调队列，存储dp[j + kv]中的k值
for(int i = 0; i < N; i++){ // 外层循环遍历物品
    for(int r = 0; r < v; r++){ // 遍历余数，余数r 0 < r < v
        int head = 0, tail = -1;
        for(int k = 0; r + k * v < m; k++){ // 和r所有同余的dp数组元素即 dp[r] , dp[r + 1v] , dp[r + 2v]....
            /*
            由于同余的数组元素数量可能超过同一物品的使用次数s。
            k - que[head] > s 实际为 ((r + k * v) - (r + que[head] * v)) / v > s ，((r + k * v)当前遍历到的数组元素下标，(r + que[head] *             v))当前遍历到下标之前的最大数组元素的下标。
            */
            if(head <= tail && k - que[head] > s) head++; // 超过s时，队首出队。
            // 比较当前数组元素和单调队尾相比，当前元素大则删除队尾原有元素。使得队列单调递减。
            while(head <= tail && dp[r + k * v] - k * w >= dp[r + que[tail] * v] - que[tail] * w) tail--;
            // 插入k值到队列
            que[++tail] = k;
            // 以上的步骤就是更新单调队列并使队首为全局最大，
            // 更新当前dp数组
            dp[r + k * v] = dp[r + que[head] * v] - que[head] * w + k * w;
        }
    }
}
return dp[V];
