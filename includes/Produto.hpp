#ifndef PRODUTO_H
#define PRODUTO_H

#include "Categoria.hpp"
#include "Lote.hpp"
#include <string>

class Produto {
    std::string produto;
    int codigo;
    float valor;
    Categoria categoria;
    int loteMinimo;
    int estoqueMinimo;
    vector <Lote*> lotes;

public:

    // Construtores e Destrutores
    Produto(std::string produto, int codigo, float valor, Categoria categoria, int loteMinimo, int estoqueMinimo);
    Produto();
    ~Produto();

    // Getters
    std::string getProduto();
    int getCodigo();
    float getValor();
    Categoria getCategoria();
    int getLoteMinimo();
    int getEstoqueMinimo();
    Lote* getLote(int numLote);
    vector <Lote*> getLoteTodos();

    // Setters
    void setProduto(std::string produto);
    void setCodigo(int codigo);
    void setValor(float valor);
    void setCategoria(Categoria categoria);
    void setLoteMinimo(int loteMinimo);
    void setEstoqueMinimo(int estoqueMinimo);
    void setLote(int numLote, Lote lote);
    void setLoteTodos(vector <Lote*> lotes);
};





#endif // PRODUTO_H