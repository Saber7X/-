int[] dp = new int[10010]; // dp����
int[] que = new int[10010]; // �������У��洢dp[j + kv]�е�kֵ
for(int i = 0; i < N; i++){ // ���ѭ��������Ʒ
    for(int r = 0; r < v; r++){ // ��������������r 0 < r < v
        int head = 0, tail = -1;
        for(int k = 0; r + k * v < m; k++){ // ��r����ͬ���dp����Ԫ�ؼ� dp[r] , dp[r + 1v] , dp[r + 2v]....
            /*
            ����ͬ�������Ԫ���������ܳ���ͬһ��Ʒ��ʹ�ô���s��
            k - que[head] > s ʵ��Ϊ ((r + k * v) - (r + que[head] * v)) / v > s ��((r + k * v)��ǰ������������Ԫ���±꣬(r + que[head] *             v))��ǰ�������±�֮ǰ���������Ԫ�ص��±ꡣ
            */
            if(head <= tail && k - que[head] > s) head++; // ����sʱ�����׳��ӡ�
            // �Ƚϵ�ǰ����Ԫ�غ͵�����β��ȣ���ǰԪ�ش���ɾ����βԭ��Ԫ�ء�ʹ�ö��е����ݼ���
            while(head <= tail && dp[r + k * v] - k * w >= dp[r + que[tail] * v] - que[tail] * w) tail--;
            // ����kֵ������
            que[++tail] = k;
            // ���ϵĲ�����Ǹ��µ������в�ʹ����Ϊȫ�����
            // ���µ�ǰdp����
            dp[r + k * v] = dp[r + que[head] * v] - que[head] * w + k * w;
        }
    }
}
return dp[V];
