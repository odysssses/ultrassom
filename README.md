# Instalação
* Primeiramente, baixe o arquivo .zip daqui do github
* Então, no arduino IDE, vá em **Sketch > Incluir biblioteca > Adicionar biblioteca .ZIP**
* Isso abrirá uma tela para selecionar um arquivo, vá até a pasta em que baixou essa biblioteca e clique duas vezes.
* Enfim, no topo do seu código, copie essa linha `#include <ultrassom.h>`

(Alternativamente, você pode extrair o .zip e colocar a pasta "ultrassom" dentro do diretório libraries do arduino) 

# FUNÇÕES 

## Construtor
Define uma instância de sensor ultrassom como objeto, pedindo apenas os pinos trig e echo do sensor

`ultrassom [nome]([trig], [echo])`
## getDistance
Retorna a distância de um objeto lido pelo sensor em centímetros

`long [val] = [nome].getDistance()`
## setMargin
Redefine a margem para a próxima função

`[nome].setMargin([margem])`
## checkObstacle
Retorna se há ou não um obstáculo à frente do sensor, baseando-se na margem estabelecida na última função

`bool [val] = [nome].checkObstacle()`
# EXEMPLO
Testa todas as funções da biblioteca definindo um sensor com os pinos padrão 3 e 5 (podem ser alterados no código). Mostra no console a distância em centímetros e se há ou não um obstáculo perto 
