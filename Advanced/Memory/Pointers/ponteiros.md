##Ponteiros

- Para acessarmos as posições de memória alocadas dinamicamente utilizamos ponteiros.
- Ponteiros são *variáveis que armazenam endereços de memória*.
- A memória alocada dinamicamente está localizada em uma área chamada heap, é pra lá que apontam os ponteiros.
- Ponteiros em c possuem tipos, ou seja, podem ser int, float, char...
- Em c a passagem de parâmetros é feita por valor, o que podemos fazer é *simular uma passagem por referência* utilizando
ponteiros.
- Não utilizamos & em arrays pois o c os passa automaticamente.
- O *"Princípio do menor privilégio"* dita que sempre devemos conceder a uma função acesso suficiente aos dados em seus
parâmetros para que realize a tarefa especificada, nada mais que isso.

#### O dilema tempo espaço
"Se a memória for pequena e a eficiência de execução for um problema, use ponteiros. Se a memória for abundante e a eficiência
não for importante passe dados por valor, para impor o *princípio do menor privilégio*."
