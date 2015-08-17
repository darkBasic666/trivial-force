map < T , set<T> > g;
// Herramientas para el dfs
int t = 0;
map  < T , int > d;
map  < T , int > f;

bool hayCiclo = false;

template <typename T>
void dfs(T u){
	t++;
	d[u] = t;
	for (set<T>::iterator it=g[u].begin(); it!=g[u].end(); ++it){
		T v = *it;
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
