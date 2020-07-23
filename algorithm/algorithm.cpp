#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool menor50(int i)
{
    return i<50;
}

int main()
{
    vector<int>vt={2,4,12,7,8,10,12,-8,1,3,5,6,9,11,13,2,7,2};

    for(auto x:vt)
    {
        cout << x << " ";        
    }
    
    cout << "\n\n";

    //all_of = retona true se o teste retornar true com todos os elementos da coleção
    //usando lambda
    if(all_of(vt.begin(), vt.end(), [](int i){return i<50;}))
        cout << "Todos são menores do que 50" << endl << endl;
    else
        cout << "Existe um ou mais elementos maiores do que 50" << endl << endl;

    //usando função externa
    if(all_of(vt.begin(), vt.end(), menor50))
        cout << "Todos são menores do que 50" << endl << endl;
    else
        cout << "Existe um ou mais elementos maiores do que 50" << endl << endl;

    //any_of = retona true se o teste retornar true pelo menos com um dos elementos da coleção
    if(any_of(vt.begin(), vt.end(), [](int i){return i>12;}))
        cout << "Existe um ou mais elementos maiores do que 12" << endl << endl;
    else
        cout << "Todos são menores do que 12" << endl << endl;

    //none_of = retorna false com pelo menos um elemento da coleção
    if(none_of(vt.begin(), vt.end(), [](int i){return i<0;}))
        cout << "Todos os elementos são positivos" << endl << endl;
    else
        cout << "Existe pelo menos um elemento negativo" << endl << endl;

    //for_each = aplica uma funcção a todos os elementos da coleção
    cout << "Dobro" << endl;
    for_each(vt.begin(), vt.end(), [](int i){cout << i * 2 << " ";});
    cout << "\n\n";

    //find = Procura um elemento e retorna um iterador com o resultado
    auto it = find(vt.begin(), vt.end(),12);
    cout << *it << endl << endl;

    //find_if = Procura o primeiro elemento que atenda a condição e retorna um iterador com o resultado
    auto it2 = find_if(vt.begin(), vt.end(),[](int i){return(i%2)==1;});
    cout << *it2 << endl << endl;

    //find_if_not = Procura o primeiro elemento que não atenda a condição e retorna um iterador com o resultado
    auto it3 = find_if_not(vt.begin(), vt.end(),[](int i){return(i%2)==1;});
    cout << *it3 << endl << endl;

    //count = Quantidade de um determinado elemento na coleção
    cout << "Quantidade do numeral 2: " << count(vt.begin(), vt.end(), 2) << endl << endl;

    //count_if = Quantidade de um determinado elemento na coleção
    cout << "Quantidade de pares : " << count_if(vt.begin(), vt.end(), [](int i){return (i%2 == 0);}) << endl << endl;
    


    return 0;
}