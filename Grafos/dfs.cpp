map < char , set<char> > g;
// Herramientas para el dfs
int t = 0;
map  < char , int > d;
map  < char , int > f;

bool hayCiclo = false;

void dfs(char u){
	t++;
	d[u] = t;
	for (set<char>::iterator it=g[u].begin(); it!=g[u].end(); ++it){
		char v = *it;
		if (d[v] == -1){
			dfs(v);
		}else{
		 if(f[v] == -1)
			hayCiclo = true;
		}
 	}
	t++;
	f[u] = t;
}
