#include <bits/stdc++.h> 
using namespace std;
const int N = 15;

int start[N], End[N] = {1, 2, 3, 4, 5, 6, 7, 8, 0};

string ans = "";

struct node
{
    int state[N];
    
    int dis;
};

string change(int a[])
{
    string ss = "";
    for (int i = 0; i < 9; i ++ )
    {
    	if (a[i] == 0) 
    	{
    		ss.push_back('0');
    		continue;
		}
        ss.push_back(a[i] + '0');
    }
    return ss;
}
unordered_map<string, string> da, db;

int xx[4] = {1, 0, -1, 0};//d, r, u, l 
int yy[4] = {0, 1, 0, -1};

int extenda(queue<node>& q)
{
    node h = q.front();
    int d = h.dis;
    while (!q.empty() && h.dis == d)
    {
        h = q.front();
        q.pop();
        int z;
        for (z = 0; z < 9; z ++ )
        {
            if (h.state[z] == 0) break;
        }
        
        int x = z / 3;
        int y = z % 3;
        
        for (int i = 0; i < 4; i ++ )
        {
            
            int nx = x + xx[i];
            int ny = y + yy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3 )
            {
                int nz = x * 3 + y;
                
                node neww;
                
                memcpy(&neww, &h, sizeof (struct node));
                
                swap(neww.state[nz], neww.state[z]);
                
                neww.dis ++;
                string ff = change(neww.state); da[ff] = da[change(h.state)];
                if (i == 0) da[ff].push_back('d');
                if (i == 1) da[ff].push_back('r');
                if (i == 2) da[ff].push_back('u');
                if (i == 3) da[ff].push_back('l');
               
                
                
                if (db.count(ff))
                {
                    ans = da[ff] + db[ff];
                    return 99;
                }
                
                if (da.count(ff))
                {
                    continue;
                }
                q.push(neww);
            }
        }
    }
    return 0;
}

int extendb(queue<node>& q)
{
    node h = q.front();
    int d = h.dis;
    while (!q.empty() && h.dis == d)
    {
        h = q.front();
        q.pop();
        int z;
        for (z = 0; z < 9; z ++ )
        {
            if (h.state[z] == 0) break;
        }
        
        int x = z / 3;
        int y = z % 3;
        
        for (int i = 0; i < 4; i ++ )
        {
            
            int nx = x + xx[i];
            int ny = y + yy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3 )
            {
                int nz = x * 3 + y;
                
                node neww;
                
                memcpy(&neww, &h, sizeof (struct node));
                
                swap(neww.state[nz], neww.state[z]);
                
                neww.dis ++;
                string ff = change(neww.state);
				db[ff] = db[change(h.state)];
				
                if (i == 0) db[ff].push_back('u');
                if (i == 1) db[ff].push_back('l');
                if (i == 2) db[ff].push_back('d');
                if (i == 3) db[ff].push_back('r');
                
                if (da.count(ff))
                {
                    ans = da[ff] + db[ff];
                    return 99;
                }
                
                if (db.count(ff))
                {
                    continue;
                }
                q.push(neww);
            }
        }
    }
    return 0;
}
void bfs()
{
    queue<node> qa, qb;
    node head;
    //≥ı ºªØ
    memcpy(head.state, start, sizeof start);
    head.dis = 1;
	da[change(start)] = "";
    qa.push(head);
    
    memcpy(head.state, End, sizeof End);
    qb.push(head);
    db[change(End)] = "";
    
    while(!qa.empty() && !qb.empty())
    {
        int flag = 0;
        if (qa.size() <= qb.size())
        {
             flag = extenda(qa);
        }
        else
        {
             flag = extendb(qb);
        }
        if (flag == 99)
        {
            cout << ans << endl;
            break;
        }
    }
}

int main()
{
    string sss ="";
	getline(cin, sss);
	int CS = 0;
	for (int i= 0; i < sss.length(); i ++ )
	{
		if (sss[i] == ' ') continue;
		else if (sss[i] == 'x') start[CS ++] = 0;
		else start[CS ++ ]= (sss[i] - '0');
	}
	bfs();
	cout << ans << endl;
//	for (auto i : db) cout << i . first;
	return 0;
}
