//#include<bits/stdc++.h>
//using namespace std;
//const int inf = 0x3f3f3f3f;
//const int N = 55;
//
//struct node
//{
//    int u, v, k, step;
//    bool operator < (const node &b) const {
//        return step > b.step;
//    }
//};
//
//char Map[N][N];
//char s[N];
//int dp[N][N][N], n, m, su, sv, eu, ev, len;
//
//int x[5] = {1, -1, 0, 0};
//int y[5] = {0, 0, 1, -1};
//
//bool ok(int u, int v)
//{
//    if(u >= 1 && u <= n && v >= 1 && v <= m) return 1;
//    else return 0;
//}
//void solve()//迪杰斯特拉
//{
//    memset(dp, inf, sizeof(dp));
//    dp[su][sv][0] = 0;
//    priority_queue<node> q;
//    q.push((node){su, sv, 0, 0});
//    while(!q.empty())
//    {
//        node tmp = q.top(); q.pop();
//        
//        int u = tmp.u, v = tmp.v, k = tmp.k, step = tmp.step;
//        
//       	cout << u << " " << v << " " <<k << " " << step << ":    :" << endl;
//        
//        if(Map[u][v] == 'E') continue;
//        
//        int tu, tv;
//        
//        
//        //增加 
//        cout << "加一个走：" <<endl; 
//        for(int i = 0; i < 4; i++)//第一种情况
//        {
//            tu = u + x[i];
//            tv = v + y[i];
//            
//            //  不越界       不是墙                可以简化 
//            if(ok(tu, tv) && Map[tu][tv] != '#' && dp[tu][tv][k] > step+1)
//            {
//                dp[tu][tv][k] = step+1;//简化
//				cout << tu << " "  << tv << " " << k << " " <<dp[tu][tv][k]<<endl;
//				
//                q.push((node){tu, tv, k, dp[tu][tv][k]});
//            }
//        }
//         
//		
//		//删一个        
//        if(k+1 <= len)
//        {
//			cout << "删一个走：" <<endl; 
//            if(dp[u][v][k+1] > step+1)//第二种情况
//            {
//                dp[u][v][k+1] = step+1;
//                cout << u << " "  << v << " " << k+1 << " " <<dp[u][v][k+1]<<endl;
//                q.push((node){u, v, k+1, dp[u][v][k+1]});
//            }
//            
//            
//            
//            if(s[k+1] == 'U')
//            {
//                tu = u-1;
//                tv = v;
//            }
//            else if(s[k+1] == 'D')
//            {
//                tu = u+1;
//                tv = v;
//            }
//            else if(s[k+1] == 'L')
//            {
//                tu = u;
//                tv = v-1;
//            }
//            else if(s[k+1] == 'R')
//            {
//                tu = u;
//                tv = v+1;
//            }
//            
//            cout << "直接走：" <<endl; 
//            if(ok(tu, tv) && Map[tu][tv] != '#')//第三种直接走 
//            {
//                if(dp[tu][tv][k+1] > step)
//                {
//                    dp[tu][tv][k+1] = step;
//                    cout << tu << " "  << tv << " " << k+1 << " " <<dp[tu][tv][k+1]<<endl;
//                    q.push((node){tu, tv, k+1, dp[tu][tv][k+1]});
//                }
//            }
//            else if((ok(tu, tv) && Map[tu][tv] == '#') || !ok(tu,tv))
//            {
//                if(dp[u][v][k+1] > step)
//                {
//                    dp[u][v][k+1] = step;
//                    cout << u << " "  << v << " " << k+1 << " " <<dp[u][v][k+1]<<endl;
//                    q.push((node){u, v, k+1, dp[u][v][k+1]});
//                }
//            }
//            cout << endl << endl;
//        }
//    }
//}
//
//int main()
//{
//    while(~scanf("%d %d", &n, &m))
//    {
//        for(int i = 1; i <= n; i++)
//        {
//        	//输入地图 
//            scanf("%s", Map[i]+1);
//            
//            for(int j = 1; j <= m; j++)
//            {
//                if(Map[i][j] == 'R') 
//				{
//                    su = i, sv = j;//起点 
//                }
//                
//                if(Map[i][j] == 'E') 
//				{
//                    eu = i, ev = j;//终点 
//                }
//            }
//        }
//        
//        scanf("%s", s+1);
//        len = strlen(s+1);
//        
//        solve();
//        
//        int ans = inf;
//        
//        for(int i = 1; i <= len; i++) ans = min(ans, dp[eu][ev][i]);
//            
//        printf("%d\n", ans);
//    }
//    return 0;
//}


#
