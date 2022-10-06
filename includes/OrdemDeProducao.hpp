#ifndef ORDEMDEPRODUCAO_H
#define ORDEMDEPRODUCAO_H

#include "../includes/Produto.hpp"
#include "../includes/Data.hpp"

enum Status {
  Pendente,
  Executando,
  Concluido,
};

class OrdemDeProducao {
    Produto* produto;
    Data data;
    int quantidade;
    Status status;
  public:
    OrdemDeProducao(Produto*, Data, int, Status);
    ~OrdemDeProducao();

    //getters
    Produto* getProduto();
    Data getData();
    int getQuantidade();
    Status getStatus();

    //setters
    void setProduto(Produto*);
    void setData(Data);
    void setQuantidade(int);
    void setStatus(Status);
    
    
}

#endif // ORDEMDEPRODUCAO_H