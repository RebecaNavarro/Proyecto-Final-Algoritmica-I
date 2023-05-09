#include <bits/stdc++.h>
#define INF 100000010
using namespace std;
vector<pair<int, int>> grafo[100000] = {{{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{}},
    {{850, 2}, {850, 3}, {900, 4}, {1700, 5}, {17300, 6}, {1800, 7}, {1000, 8}, {600, 9}, {1200, 10}, {12300, 11}, {850, 12}, {600, 13}, {1000, 14}, {1000, 15}, {3300, 16}, {600, 17}, {17500, 18}},
    {{850, 1}, {260, 3}, {1300, 4}, {2500, 5}, {17300, 6}, {2500, 7}, {1700, 8}, {900, 9}, {1300, 10}, {13800, 11}, {2000, 12}, {1300, 13}, {1700, 14}, {200, 15}, {2600, 16}, {1300, 17}, {17600, 18}},
    {{850, 1}, {1000, 2},  {1100, 4}, {2200, 5}, {18300, 6}, {2200, 7}, {1700, 8}, {650, 9}, {1000, 10}, {12300, 11}, {1800, 12}, {800, 13}, {1700, 14}, {1500, 15}, {3100, 16}, {1000, 17}, {18600, 18}},
    {{900, 1}, {1600, 2}, {1600, 3},  {2600, 5}, {18900, 6}, {2700, 7}, {400, 8}, {1100, 9}, {1200, 10}, {14000, 11}, {1800, 12}, {1300, 13}, {550, 14}, {1700, 15}, {4200, 16}, {1200, 17}, {19200, 18}},
    {{2500, 1}, {2700, 2}, {2700, 3}, {2800, 4},  {16300, 6}, {30, 7}, {3000, 8}, {2800, 9}, {2500, 10}, {11400, 11}, {1300, 12}, {600, 13}, {1000, 14}, {1000, 15}, {3300, 16}, {600, 17}, {17500, 18}},
    {{1730, 1}, {17700, 2}, {17600, 3}, {17800, 4}, {16400, 5},{16400, 7}, {17900, 8}, {17700, 9}, {17500, 10}, {12300, 11}, {17400, 12}, {17500, 13}, {17900, 14}, {17500, 15}, {15600, 16}, {17500, 17}, {9000, 18}},
    {{1800, 1}, {2500, 2}, {2700, 3}, {2900, 4}, {30, 5}, {16600, 6},  {2900, 8}, {2800, 9}, {1600, 10}, {11000, 11}, {1700, 12}, {1200, 13}, {700, 14}, {1600, 15}, {3200, 16}, {350, 17}, {18000, 18}},
    {{550, 1}, {1000, 2}, {900, 3}, {33, 4}, {2200, 5}, {18500, 6}, {2300, 7}, {650, 9}, {650, 10}, {13500, 11}, {1100, 12}, {350, 13}, {43, 14}, {1100, 15}, {3900, 16}, {700, 17}, {18600, 18}},
    {{1100, 1}, {900, 2}, {650, 3}, {1100, 4}, {2800, 5}, {18000, 6}, {2800, 7}, {950, 8},  {1400, 10}, {13000, 11}, {2300, 12}, {1100, 13}, {1500, 14}, {1300, 15}, {3200, 16}, {1400, 17}, {18000, 18}},
    {{82, 1}, {1000, 2}, {600, 3}, {600, 4}, {1600, 5}, {17200, 6}, {1600, 7}, {650, 8}, {900, 9},  {12400, 11}, {900, 12}, {300, 13}, {700, 14}, {850, 15}, {3100, 16}, {10, 17}, {17500, 18}},
    {{1200, 1}, {12000, 2}, {17000, 3}, {5500, 4}, {3000, 5}, {18000, 6}, {2800, 7}, {2800, 8}, {1500, 9}, {9000, 10},  {7500, 12}, {1100, 13}, {1300, 14}, {13000, 15}, {12000, 16}, {10000, 17}, {12000, 18}},
    {{1000, 1}, {1900, 2}, {2200, 3}, {1300, 4}, {1700, 5}, {17200, 6}, {1900, 7}, {1500, 8}, {2300, 9}, {900, 10}, {13000, 11},  {1500, 13}, {1400, 14}, {2000, 15}, {3100, 16}, {1000, 17}, {17500, 18}},
    {{270, 1}, {850, 2}, {600, 3}, {300, 4}, {2600, 5}, {17500, 6}, {2100, 7}, {350, 8}, {750, 9}, {300, 10}, {12400, 11}, {1700, 12},  {400, 14}, {850, 15}, {3300, 16}, {350, 17}, {17800, 18}},
    {{1000, 1}, {2000, 2}, {1700, 3}, {550, 4}, {3000, 5}, {1800, 6}, {3000, 7}, {150, 8}, {900, 9}, {750, 10}, {13400, 11}, {1400, 12}, {500, 13}, {2000, 15}, {3000, 16}, {700, 17}, {1800, 18}},
    {{1000, 1}, {200, 2}, {260, 3}, {2000, 4}, {2800, 5}, {1800, 6}, {2900, 7}, {1300, 8}, {800, 9}, {1200, 10}, {13000, 11}, {2100, 12}, {850, 13}, {1200, 14},  {2600, 16}, {1200, 17}, {1800, 18}},
    {{2900, 1}, {3300, 2}, {3400, 3}, {4000, 4}, {2600, 5}, {15000, 6}, {2300, 7}, {3600, 8}, {3200, 9}, {3100, 10}, {10400, 11}, {3500, 12}, {3100, 13}, {3600, 14}, {2600, 15},  {3200, 17}, {15200, 18}},
    {{600, 1}, {900, 2}, {600, 3}, {650, 4}, {1600, 5}, {17800, 6}, {1600, 7}, {700, 8}, {1000, 9}, {71, 10}, {13600, 11}, {900, 12}, {350, 13}, {800, 14}, {850, 15}, {3100, 16}, {18000, 18}},
    {{17500, 1}, {17800, 2}, {17800, 3}, {18700, 4}, {16500, 5}, {9200, 6}, {16500, 7}, {19000, 8}, {18700, 9}, {10, 10}, {12400, 11}, {18300, 12}, {18400, 13}, {18000, 14}, {17600, 15}, {15600, 16}, {17600, 17}}};
string info[21] = {"", " El Museo nacional de arte: cuenta con importante coleciión de pintura colonial\n",
                   " En el Mercado de las brujas: se puede encontrar los saberes sobre ofrendas, rituales y la medicina tradicional andina a cargo de Amautas y Yatiris\n\n",
                   " La Basílica Menor de San Francisco: de la ciudad de La Paz, Bolivia, es un templo católico bajo la advocación de San Francisco de Asís\n\n",
                   " El Museo de música: cuenta con 2000 instrumentos de diversos orígenes de Bolivia y del mundo, también prehispánicos\n\n",
                   " El mirador de Laikakota: está ubicado en pleno corazón de la ciudad de La Paz en la zona de Miraflores permite apreciar en toda su magnitud la singular topografía de la ciudad de La Paz.\n\n",
                   " El Valle de las Ánimas: es considerada una apacheta y de gran presencia espiritual y de achachilas, por la  presencia de ruinas, lugares de ritos (apachetas) y rutas antiguas correspondientes a la época precolombina.\n\n",
                   " El Museo interativo Pipiripi: el concepto del PIPIRIPI simboliza y traduce la idea de que es un espacio de y para la ciudad\n\n",
                   " La calle Jean: antes conocida como el callejón Qawra Cancha, es una de las calles más famosas de La Paz. Su historia data de la época colonial en el siglo XVI donde era conocida por ser sólo un mercado de compra y venta de camélidos.\n\n",
                   " El Mercado Lanza: fue parte de una ola de construcciones durante las primeras décadas del siglo XX en La Paz\n\n",
                   " La Plaza Murillo: es el mismo corazón de La Paz. Nombrada en honor de Pedro Domingo Murillo (1759-1810), patriota boliviano, mestizo y precursor de la independencia boliviana.\n\n",
                   " Valle de la Luna: tiene este nombre por el astronauta norteamericano, Neil Armstrong primer hombre en pisar la luna, quien se encontraba de visita en la sede de gobierno boliviana el año 1969.\n\n",
                   " El mirador Killi Killi: es otro sitio estratégico que sirvió como cuartel general durante el cerco a la ciudad (1781); desde ahí los indígenas vigilaban la antigua ciudad española. Luego del descuartizamiento de Tupac Katari, uno de sus miembros fue colocado en este lugar como venganza y escarmiento para los indígenas.\n\n",
                   " El Museo nacional de Etnografía y Folklore (MUNAE): es una institución pública guatemalteca encargada de la conservación, investigación y difusión de los bienes arqueológicos y etnológicos\n\n",
                   " El Museo de metales preciosos: cuenta con una  colección de objetos precolombinos, variado material de diversas épocas y culturas del territorio boliviano hechos en metal (oro y plata) El museo atesora manufacturas de orfebrería y cerámica de la época precolombina. La sala de oro resguarda valiosos objetos realizados en este metal, como diademas pectorales, orejeras, adornos de mantas y vestidos, que se atribuyen a la cultura incaica.\n\n",
                   " El Museo de bebidas bolivianas; abrió sus puertas en la costumbrista calle Linares de La Paz. Con una oferta deal menos 35 preparaciones tradicionales.\n\n",
                   " El Montículo Cuenta: la leyenda corroborada por el Padre Calancha, que a mediados del siglo XVI, más precisamente en el año 1579, un movimiento telúrico de enormes proporciones produjo un deslizamiento de tierras en la zona de Cotahuma de La Paz, que dio origen al actual montículo de Sopocachi.\n\n",
                   " El Palacio quemado: el origen del sobrenombre del edificio se remonta al 20 de marzo de 1875 durante el gobierno de Tomás Frías cuando una turba comandada por Carlos Ressini y Modesto Moscoso quiso asaltar el edificio y haciéndose imposible el acometimiento, arrojaron antorchas encendidas desde la Catedral.\n\n",
                   " La Muela del Diablo: se dice que hubo una batalla campal entre ángeles y demonios en el cielo, uno de los arcángeles golpeó a un demonio y éste escupió su muela cayendo donde actualmente se encuentra la serranía en plena lucha.\n\n"};
// distancia, punto
int visitados[100000]; // marcamos si lo visitamos
int distancia[100000]; // guardamos su distancias para ir comparando
int previo[1000000]; 

void dijkstra(int verticeInicial)
{
    for (int i = 0; i < 100000; i++)
    { // todos empiezan en infinito para comparar
        distancia[i] = INF;
        previo[i] = -1;
    }
    memset(visitados, 0, sizeof(visitados)); // Todos los nodos como no visitado
    multiset<pair<int, int>> colaPrioridad;  // ordena por prioridad según las distancias
    distancia[verticeInicial] = 0;
               // no recorre nada todavía
    colaPrioridad.insert(make_pair(0, verticeInicial));

    while (!colaPrioridad.empty())
    {
        pair<int, int> verticeActual = *colaPrioridad.begin(); //* para dar el valor del primer datp de colaprioridad
        colaPrioridad.erase(colaPrioridad.begin());            // borra al que acabamos de recibir su valor
        int vertice = verticeActual.second;                    // el nodo de donde esta viniendo
        int peso = verticeActual.first;                        // distancia
        if (!visitados[vertice])
        {                              // no pasamos por este antes
            visitados[vertice] = true; // ya lo visitamos
            for (int i = 0; i < grafo[vertice].size(); i++)
            {
                int verticeVecino = grafo[vertice][i].second;
                int pesoVecino = grafo[vertice][i].first;
                if (distancia[verticeVecino] > distancia[vertice] + pesoVecino)
                { // Relajacion
                    distancia[verticeVecino] = distancia[vertice] + pesoVecino;
                    //
                    previo[verticeVecino]= vertice;
                    //
                    colaPrioridad.insert(make_pair(distancia[verticeVecino], verticeVecino));
                }
            }
        }
    }
}

void print( int destination ){
    if( previo[ destination ] != -1 )    //si aun poseo un vertice previo
        print(previo[ destination ]);  //recursivamente sigo explorando
    cout<< info[destination] ;        //terminada la recursion imprimo los vertices recorridos
}

int main()
{
    cout << "Bienvenido a esta guía para conocer la ciudad de La Paz\nA continuación podrás observar la lista de los lugares turísticos más populares de la ciudad:\n";
    cout << "1: Museo nacional de arte\n2: Mercado de las Brujas\n3: Iglesia de San Francisco\n";
    cout << "4: Museo de instrumentos musicales\n5: Mirador Laikakota\n6: Valle de las animas\n";
    cout << "7: Museo interactivo pipiripi\n8: Calle Jaen\n9: Mercado Lanza\n10: Plaza Murillo\n";
    cout << "11: Valle de la luna\n12: Mirador de killi killi\n13: Museo Nacional de etnografia y Folklore\n";
    cout << "14: Museo de metales preciosos\n15: Museo de bebidas Bolivianas\n16: El Monticulo\n";
    cout << "17: Palacio quemado\n18: Muela del diablo\nSegún la lista anterior añade la ubicación inicial de tu recorrido: ";
    int source, destination;
    cin >> source;
    source=source;
    cout << "Ahora añade el último lugar que desearías visitar o el lugar que no te puedes perder: ";
    cin >> destination;
    destination=destination;
    dijkstra(source);
    cout << distancia[destination]<<endl;
    print(destination);
}