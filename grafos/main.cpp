#include "grafo.h"
#include <vector>
#include <iostream>
#include <string>
#include<stack>

#include "grafo.h"
#include "ProfileLinkedin.h"

int main(){
    Grafo linkedin(true);
    
    vector<ProfileLinkedin> perfiles;
    vector<string> nombres = {"Esteban", "Lupe", "Fabian", "Alejandro", "Tomas", "Steven", "Freddy", "Pedro", 
    "Marco", "Lucas", "Guillermo", "Kenneth", "Matias", "Joshua", "Alonso", "Juan", "Ana"};
    int i = 1;
    for (string nombre : nombres){
        ProfileLinkedin p;
        string name = nombre;
        p.setId(i);
        p.setName(name);
        perfiles.push_back(p);
        linkedin.addNode(&perfiles[i]);
        i++;
    }

    
    linkedin.addArc(1, 2, 3);
    linkedin.addArc(2, 3, 1);
    linkedin.addArc(1, 4, 5);
    linkedin.addArc(7, 3, 1);
    linkedin.addArc(6, 1, 2);
    linkedin.addArc(8, 3, 1);
    linkedin.addArc(9, 8, 4);
    linkedin.addArc(17, 10, 5);
    linkedin.addArc(10, 6, 2);
    linkedin.addArc(15, 4, 8);
    linkedin.addArc(14, 17, 1);
    linkedin.addArc(13, 12, 6);
    linkedin.addArc(12, 1, 2);
    linkedin.addArc(14, 8, 1);
    
    
    linkedin.printCounters();
    std::cout << "======================\n";
    vector<vector<INodo*>> componentesConexas = linkedin.findConnectedComponents();
    for (int i = 0; i < componentesConexas.size(); i++) {
        std::cout << "Componente Conexa " << i + 1 << ":\n";
        for (INodo* profile : componentesConexas[i]) {
            std::cout << "ID: " << profile->getId() << ", Nombre: " << static_cast<ProfileLinkedin*>(profile)->getName() << "\n";
        }
        std::cout << "======================\n";
    }
}