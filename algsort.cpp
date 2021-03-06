#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void insertion_sort(vector<int>& vetor);
void selection_sort(vector<int>& vetor);
void quick_sort(vector<int>& vetor, int ini, int fim);
void merge_sort(vector<int>& vetor, int ini, int fim);
void merge(vector<int>& vetor, int ini, int meio, int fim);
void heap_sort(vector<int>& vetor);
void max_heap(vector<int>& vetor, int ind, int n);
void exibe_lista(vector<int> vetor);
bool ordenado(vector<int> vetor);

int main() {

    int size, num;
    cout << "Digite o tamanho do vetor" << endl;
    cin >> size;

    vector<int> vetor;

    cout << "Digite os elementos do vetor" <<endl;

    for(int i = 0; i < size; i++){
        cout << "Elemento [" << i << "]: ";
        cin >> num;
        vetor.push_back(num);
        cout << endl;
    }

    /*ifstream isfile ("D:\\in.txt");

    vector<int>* vetor = new vector<int>();
    int n;

    if(isfile.is_open()){
        while(!isfile.eof()){
            isfile >> n;
            vetor->push_back(n);
        }
        isfile.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }*/

    vector<int> vetor_insert = vetor;
    vector<int> vetor_select = vetor;
    vector<int> vetor_quick = vetor;
    vector<int> vetor_merge = vetor;
    vector<int> vetor_heap = vetor;

    int arg;
    cin >> arg;

    switch(arg){
        case 1:

            insertion_sort(vetor_insert);

            if(ordenado(vetor_insert)){
                cout << "vetor insertion" << endl;
                exibe_lista(vetor_insert);
            }

            break;

        case 2:

            selection_sort(vetor_select);

            if(ordenado(vetor_select)) {
                cout << "vetor selection" << endl;
                exibe_lista(vetor_select);
            }

            break;

        case 3:

            quick_sort(vetor_quick, 0, vetor.size()-1);

            if(ordenado(vetor_quick)) {
                cout << "vetor quick" << endl;
                exibe_lista(vetor_quick);
            }

            break;

        case 4:

            merge_sort(vetor_merge, 0, vetor.size()-1);

            if(ordenado(vetor_merge)) {
                cout << "vetor merge" << endl;
                exibe_lista(vetor_merge);
            }

            break;

        case 5:

            heap_sort(vetor_heap);

            if(ordenado(vetor_heap)) {
                cout << "vetor heap" << endl;
                exibe_lista(vetor_heap);
            }

            break;

        default:
            cout << "Operacao invalida" << endl;

    }

    /*cout << "vetor" << endl;
    exibe_lista(vetor);
    */

    return 0;
}

void insertion_sort(vector<int>& vetor){

    if(vetor.size() <= 1){
        return ;
    }

    int key;

    for(int j = 1; j < vetor.size(); j++){
        key = vetor[j];
        int i = j - 1;
        while(vetor[i] > key && i >=0){
            vetor[i+1] = vetor[i];
            i--;
        }

        vetor[i + 1] = key;

    }

}

void selection_sort(vector<int>& vetor){

    int min, aux, n = vetor.size();

    for(int i = 0; i < n; i++){
        min = i;

        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }

        if(min != i){
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }

}

void quick_sort(vector<int>& vetor, int ini, int fim){ /**Metodo quick sort com o pivo na posicao central do array*/

    if(ini >= fim){
        return ;
    }

    int aux, i = ini, j = fim;

    int pospivo = ((fim - ini)/2) + ini;
    int pivo = vetor[pospivo];

    while(i <= j){

        while(vetor[i] <= pivo && i < fim) i++;
        while(vetor[j] >= pivo && j > ini) j--;


        if(i == fim && j == fim){ /**Caso o pivo seja o maior elemento do array*/

            aux = vetor[pospivo];
            vetor[pospivo] = vetor[fim];
            vetor[fim] = aux;
            quick_sort(vetor, ini, fim - 1);
            break;

        }else if(i == ini && j == ini){ /**Caso o pivo seja o menor elemento*/

            aux = vetor[pospivo];
            vetor[pospivo] = vetor[ini];
            vetor[ini] = aux;
            quick_sort(vetor, ini + 1, fim);
            break;

        }else if(j < i){
            if(j < pospivo && i < pospivo){

                /**Caso os dois indices estiverem a esquerda da pos do pivo,
                 * entao troca o elemento i(que � maior do que o pivo) com o pivo
                 * Dessa forma os elementos maiores ficarao a direita do pivo*/
                aux = vetor[i];
                vetor[i] = pivo;
                vetor[pospivo] = aux;
                quick_sort(vetor, ini, i - 1);
                quick_sort(vetor, i + 1, fim);
                break;

            }else if(j > pospivo && i > pospivo){

                /**Caso os dois indices estiverem a direita da pos do pivo,
                 * entao troca o elemento j(que � menor do que o pivo) com o pivo
                 * Dessa forma os elementos menores ficarao a direita do pivo*/
                aux = vetor[j];
                vetor[j] = pivo;
                vetor[pospivo] = aux;
                quick_sort(vetor, ini, j - 1);
                quick_sort(vetor, j + 1, fim);
                break;

            }else if(j == pospivo - 1 && i == pospivo + 1){ /**Caso os indices estejao entre a posicao do pivo, isto e, ele e o elemento do meio, utilize o quick_sort com o pivo no fim*/

                quick_sort(vetor, ini, pospivo - 1);
                quick_sort(vetor, pospivo + 1, fim);
                break;

            }else{ /**Caso ocorra numeros repetidos entre o meio --- if( j < pospivo - 1 || i > pospivo + 1 )*/
                quick_sort(vetor, ini, pospivo - 1);
                quick_sort(vetor, pospivo + 1, fim);
            }
        }else{
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }

    return ;
}

void merge_sort(vector<int>& vetor, int ini, int fim){

    if(ini < fim){
        int meio = (fim + ini)/2;
        merge_sort(vetor, ini, meio);
        merge_sort(vetor, meio + 1, fim);
        merge(vetor, ini, meio, fim);
    }
}

void merge(vector<int>& vetor, int ini, int meio, int fim){

    int aux[vetor.size()];

    for(int i  = ini; i <= fim; i++){
        aux[i] = vetor[i];
    }

    int i = ini, j = meio + 1, k = ini;

    while(i <= meio && j <= fim){
        if(aux[i] <= aux[j]){
            vetor[k] = aux[i];
            i++;
        }else{
            vetor[k] = aux[j];
            j++;
        }

        k++;
    }

    while(i <= meio){
        vetor[k] = aux[i];
        i++;
        k++;
    }

    while(j <= fim){
        vetor[k] = aux[j];
        j++;
        k++;
    }
}

void heap_sort(vector<int>& vetor){
    int n = vetor.size() - 1, aux;

    for(int i = n/2; i >= 0; i--){
        max_heap(vetor, i, n);
    }

    for(int i = n; i > 0; i--){
        aux = vetor[i];
        vetor[i] = vetor[0];
        vetor[0] = aux;
        n--;
        max_heap(vetor, 0, n);
    }
}

void max_heap(vector<int>& vetor, int ind, int n){
    int max = ind, aux;
    int left = ind * 2;
    int right = ind * 2 + 1;

    if(left <= n && vetor[left] > vetor[max]){
        max = left;
    }

    if(right <= n && vetor[right] > vetor[max]){
        max = right;
    }

    if(max != ind){
        aux = vetor[ind];
        vetor[ind] = vetor[max];
        vetor[max] = aux;
        max_heap(vetor, max, n);
    }
}

void exibe_lista(vector<int> vetor){

    int size = vetor.size();

    for(int i = 0; i < size; i++){
        cout << "Elemento[" << i << "]: " << vetor[i] << endl;
    }
    cout << endl;
}

bool ordenado(vector<int> vetor){

    int size = vetor.size();

    for(int i = 0; i < size - 1; i++){
        if(vetor[i] > vetor[i+1]){
            return false;
        }
    }

    return true;

}
