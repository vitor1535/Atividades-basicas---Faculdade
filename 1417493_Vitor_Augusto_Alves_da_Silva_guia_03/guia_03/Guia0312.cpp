/*
 Guia_0312 - v1.2. - 12 / 09 / 2022
 Author: Vitor augusto alves da silva
 Para compilar em uma janela de comandos (terminal):
 
 No Linux : g++ -o Guia0312 ./Guia0312.cpp
 No Windows: g++ -o Guia0312.exe Guia0312.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0312
 No Windows: Guia0312
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo
 world->set ( 2, 2, HWALL ); // horizontal
 world->set ( 3, 2, HWALL ); // horizontal
 world->set ( 4, 2, HWALL ); // horizontal
 world->set ( 5, 2, HWALL ); // horizontal
 world->set ( 6, 2, HWALL ); // horizontal
 world->set ( 7, 2, HWALL ); // horizontal
 world->set ( 8, 2, HWALL ); // horizontal
 world->set ( 2, 8, HWALL ); // horizontal
 world->set ( 3, 8, HWALL ); // horizontal
 world->set ( 4, 8, HWALL ); // horizontal
 world->set ( 5, 8, HWALL ); // horizontal
 world->set ( 6, 8, HWALL ); // horizontal
 world->set ( 7, 8, HWALL ); // horizontal
 world->set ( 8, 8, HWALL ); // horizontal
 world->set ( 8, 7, HWALL ); // horizontal
 world->set ( 7, 7, HWALL ); // horizontal
 world->set ( 6, 7, HWALL ); // horizontal
 world->set ( 5, 7, HWALL ); // horizontal
 world->set ( 3, 7, HWALL ); // horizontal
 world->set ( 5, 6, HWALL ); // horizontal
 world->set ( 4, 6, HWALL ); // horizontal
 world->set ( 4, 4, HWALL ); // horizontal
 world->set ( 5, 4, HWALL ); // horizontal
 world->set ( 6, 4, HWALL ); // horizontal
 world->set ( 6, 5, HWALL ); // horizontal
 world->set ( 7, 4, HWALL ); // horizontal
 world->set ( 7, 5, HWALL ); // horizontal
 
 world->set ( 1, 3, VWALL ); // vertical
 world->set ( 1, 4, VWALL ); // vertical
 world->set ( 1, 5, VWALL ); // vertical
 world->set ( 1, 6, VWALL ); // vertical
 world->set ( 1, 7, VWALL ); // vertical
 world->set ( 1, 8, VWALL ); // vertical
 world->set ( 2, 3, VWALL ); // vertical
 world->set ( 2, 4, VWALL ); // vertical
 world->set ( 2, 5, VWALL ); // vertical
 world->set ( 2, 6, VWALL ); // vertical
 world->set ( 2, 7, VWALL ); // vertical
 world->set ( 8, 3, VWALL ); // vertical
 world->set ( 8, 4, VWALL ); // vertical
 world->set ( 8, 5, VWALL ); // vertical
 world->set ( 8, 6, VWALL ); // vertical
 world->set ( 8, 7, VWALL ); // vertical
 world->set ( 3, 5, VWALL ); // vertical
 world->set ( 3, 6, VWALL ); // vertical
 world->set ( 5, 6, VWALL ); // vertical
 world->set ( 4, 7, VWALL ); // vertical

// colocar um marcador no mundo
  world->set ( 5, 7, BEEPER );
  world->set ( 4, 6, BEEPER );
  world->set ( 4, 6, BEEPER );
  world->set ( 2, 3, BEEPER );
  world->set ( 2, 3, BEEPER );
  world->set ( 2, 3, BEEPER );

 //world->set ( 2, 6, BEEPER );
 //world->set ( 5, 7, BEEPER );
 // world->set ( 6, 4, BEEPER );
// salvar a configuracao atual do mundo
 world->save( fileName );
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
 public:
 /**
 turnRight - Procedimento (acao) para virar 'a direita.
 */
 void turnRight ( )
 {
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 turnLeft ( );
 turnLeft ( );
 turnLeft ( );
 } // end if
 } // end turnRight ( )
 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 void moveN( int steps )
 {
 // definir dado local
 int step = 0;
 // repetir contando e testando ate' atingir a quantidade de passos
 for ( step = 1; step <= steps; step = step + 1 ) // outra forma de repetir
 {
 // dar um passo por vez
 move( );
 } // end if
 } // end moveN( )
 /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
void stepUpRight( ) //definir um degrau pra cima e a direita
 {
  turnLeft();
  moveN(1);
  turnRight();
  moveN(1);
 } // fim stepUpRight( )

 void stepDownRight( ) //definir um degrau pra baixo e a direita
 {
  moveN(1);
  turnRight();
  moveN(1);
  turnLeft();
 } // fim stepUpRight( )

 void stepUpLeft( ) //definir um degrau pra cima e a esquerda
 {
  turnRight();
  moveN(1);
  turnLeft();
  moveN(1);
 } // fim stepUpRight( )

 void stepDownLeft( ) //definir um degrau pra cima e a esquerda
 {
  moveN(1);
  turnLeft();
  moveN(1);
  turnRight();
 } // fim stepUpRight( )
void putBeepers()
{
 while (beepers > 0)
 {
 putBeeper();
 }
} 
void turnAround()
{
  turnLeft();
  turnLeft();
}
void turnAroundCornerLeft()
{
  moveN(1);
  turnLeft();
  moveN(1);
  turnLeft();
  moveN(1);
}
void turnAroundCornerRight()
{
  moveN(1);
  turnRight();
  moveN(1);
  turnRight();
  moveN(1);
}
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
turnLeft();
moveN(8);
turnRight();
moveN(7);
turnAroundCornerRight();
moveN(4);
turnLeft();
moveN(1);
turnRight();
moveN(1);
turnLeft();
moveN(3);
turnLeft();
moveN(5);
turnLeft();
moveN(3);
turnLeft();
moveN(3);
pickBeeper();
turnAround();
moveN(3);
turnRight();
moveN(2);
turnRight();
moveN(4);
turnRight();
moveN(1);
pickBeeper();
pickBeeper();
turnAround();
moveN(1);
turnLeft();
moveN(3);
turnAroundCornerRight();
moveN(4);
turnRight();
moveN(3);
turnRight();
turnAroundCornerLeft();
moveN(1);
turnLeft();
moveN(5);
pickBeeper();
pickBeeper();
pickBeeper();
turnAround();
moveN(5);
turnRight();
moveN(6);
turnAroundCornerLeft();
moveN(7);
turnLeft();
moveN(8);
turnOff();
 }

// end doPartialTask( )
 /**
 doTask - Relacao de acoes para o robo executar.
 */
 void doTask( )
 {
 // especificar acoes da tarefa
 doPartialTask( );
 doPartialTask( );
 // testar se ha' marcador antes ...
 if ( nextToABeeper( ) )
 {
 // ... de tentar carrega-lo
 pickBeeper( );
 } // end if
 doPartialTask( );
 // testar se carrega marcador antes ...
 if ( nbeepers( ) > 0 )
 {
 // ... de tentar descarrega-lo
 putBeeper( );
 } // end if
 doPartialTask( );
 turnLeft( );
 // encerrar
 turnOff ( );
 } // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia0215.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia0215.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 3 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask ( );
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
*/
