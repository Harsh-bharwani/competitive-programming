class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n=A.size();
            queue<char> q;
            string b;
            vector<int> vis(256,0);
            for(int i=0;i<n;i++){
                char c=A[i];
                vis[c]++;
                if(vis[c]==1){
                    q.push(c);
                }
                else{
                    while(!q.empty() and vis[q.front()]>1){
                        q.pop();
                    }
                }
                if(q.empty()){
                    b.push_back('#');
                }
                else{
                    b.push_back(q.front());
                }
		    }
		  return b;
		}

};
