typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices,int grau_max, int eh_ponderado);

int insereAresta(Grafo *gr,int orig,int dest,int eh_digrafo,float peso);
int removeAresta(Grafo *gr,int orig,int dest,int eh_digrafo);
void libera_Grafo(Grafo *gr);

void buscaProfundidade_Grafo(Grafo *gr, int ini,int *visitado);
void buscaProfundidade(Grafo *gr, int ini,int *visitado,int cont);

void buscaLargura_Grafo(Grafo *gr,int ini,int *visitado);


void menorCaminho_Grafo(Grafo *gr,int ini, int *ant, float *dist);
int procuraMenorDistancia(float *dist, int *visitado, int NV);
