#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int zuobiao[10086][10086];
int caozuo[10086][10086];
int i,j,x,y,xx,yy,n,geshu,win;
double geshugl;

void gongzhu1()
	{
		printf("\n");
		printf("                                                                                        "); printf("\n");
		printf("                                                                                        "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O................................,@@..............=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^..........................,]/@@@/................,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("         还有一步就能见到我了！             =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}
void gongzhu2()

	{
		printf("\n");
		printf("                                                                                        "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O................................,@@..............=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^..........................,]/@@@/................,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("            还有两步就能见到我了！         =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void gongzhu3()

	{
		printf("\n");
		printf("                                                                                       "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O................................,@@..............=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^..........................,]/@@@/................,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("                 还有三步就能见到我了！     =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void gongzhu4()

	{
		printf("\n");
		printf("                                                                                        "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^.........................@@@@@@................,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("             还有四步就能见到我了！        =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void gongzhu5()

	{
		printf("\n");
		printf("                                                                                        "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/..................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^.......................@@@@@...............,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("            还有五步就能见到我了！         =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void gongzhu6()
{
	printf("\n");
		printf("                    成功了！！！谢谢你救我，我一定要好好报答你                                                "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@@@@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@@@@@@@@@...............OO..@@@@@@@@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@@@@@@@@@^...............,@O.,@@@@@@@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@@@@@@@@/.........,^......,/@@]O@@@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@@@@@O`..........@/.........,[O@@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[[[`..........................................]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/.................................................=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O................................,@@..............=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^..........................,]/@@@/................,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`...................................,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("                                            =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void gongzhu7()
{
	printf("\n");
		printf("                                       呜呜呜，我要被恶魔吃了！！                                                 "); printf("\n");
		printf("\n");
		printf("                                                  . ..,]@@@@@@@@@@@@@O]]`. .   .                       ");        printf("\n");   
		printf("                                               ..]O@@@@@@OOOOOOOOOOOOOOO@@@                ") ;				      printf("\n"); 
		printf("                                      ....@@@@@OOOOOOOOOOOOOOOOOOOOOOOO@@@@@@]...             ") ;                printf("\n");     
		printf("                            ..,/@@@@@@@@@@@@@OOOOOOOOOOO@@@@@@@@@OOOOOOOOOOOOOOOO@@@`.               ");          printf("\n"); 
		printf("                           .@@OOOOOOOOOO@@@@@@@@@@O@@@@@OOOOOOOO@@@@OOOOOOOOOOOOOOOOO@@@`               ") ;      printf("\n"); 
		printf("                          ,@@OOOOOOOOOOO@@OOOO@@@OOOOOOOOOOOOO@@@OOOOOOOOOOOOOOOOOOOOOOOO@@.             ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOOOOOO@@OOOOOOO@@OOOOOOOOOOOOOOO@@@@@@OOOOOOOOOOOOOOOOO@@`.          ") ;     printf("\n"); 
		printf("                         ,@@OOOOOOOOOO@@@@@@@OOOO@@@@@@@OOOOOOOOOOOOOOO@@OOO@@@@OOOOOOOOO0OO@@^          ");      printf("\n"); 
		printf("                        ..@@OOOOOOOOO@@@@@@OOOO@@@@@@OOOOO@@@@@OOOOOOOOOO@@OOOOOO@@@@OOOO000O@@^.        ") ;     printf("\n"); 
		printf("                     ..@@@OO@@@@@@@OOOOOOOOOO@@@@@@@@@@@@O@@@@OOOO@@@OOOOOOOOOOOOOOO00000OOOO@@^          ");     printf("\n"); 
		printf("                 ./@@OOOOOOOOOOOOOOOOOOOOOO@@..............,O@@OOOOOOOOOOOOO@@@@OOOOOOOOOOOO0OOO@@^    ") ;       printf("\n"); 
		printf("                 .@@OOOOOOOOOOOOOOOOOOOO@O......................[@@@OOOOOOOOOOOO@@@@OOOOOOOOOOO OO@@^.  ") ;      printf("\n"); 
		printf("                .@@OOOOOOOOOOOO@@@/.................................,]@@@@@@@OOOOOOOOOOOOOOOOOOOOOOOOOO@@^  ");   printf("\n"); 
		printf("                .@@OOOOOOOOOO@@/`,]]]............................[.....,/O@@OOOOOOOOOOOOOOOOOOOOOOOOOOOO@@^ ");   printf("\n"); 
		printf("                ./@@OOOOOOOO@@@@/[[[[`....................................../@@OOOOOOOOOOOOOOOOOOOOOOOOO@@.   "); printf("\n"); 
		printf("                .=@@OOOOOO@@/,......................................,]/OO]]`....O@OOOOOOOOOOOOOOOOOOOOOOO@@@.."); printf("\n"); 
		printf("                 =@@OOOOO@O.....,]/O@@O]......................,@@@@@@@@@@@@/.../@OOOOOOOOOOOOOOOOOOOOOOOO@@@. "); printf("\n"); 
		printf("                 /@@OOOO@@^..,/@@O@@@@@@@@/................../@@`/@@@@@@@@@@@`../@OOOOOOOOOOOOOOOOOOOOOOOO@@/ "); printf("\n"); 
		printf("                .@@OOOOOO@@`.,@@.,@@@@@@@@@@@`...............=@/.=@@@@@@@@@@@@O...@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("               .=@@OOOOO@^.O@..O@@@@@@@@@@@O.............../O..@@@@@@@`.@@@@@.../@OOOOOOOOOOOOOOOOOOOOOOOO@@  "); printf("\n"); 
		printf("              ..@@OOOOOO@^.@^..@@@@@@.,@@@@@...............@/.=@@@@@@@%%@@@@@...=@@OOOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .=@@@OO  OO@^.@O..@@@@@%%@@@@@@...............OO..@@@@@%%@@@@@@^...=@@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              .@@OOOOOOOOO@O.=@^.=@@@%%@@@@@@^...............,@O.,@@@@%%@@@@@/....=@OOOOOOOOOOOOOOOOOOOOOOOO@@"); printf("\n"); 
		printf("              =@@OOOOOOOOO@O../@/./@@%%@@@@@/.........,^......,/@@]O%%@@@@@@`....,@@OOOOOOOOOOOOOOOOOOOOOOOO@@`");printf("\n"); 
		printf("              =@OOOOOOOOOO@^..../@@@@@%%@@O`..........@/.........,[O%@@/[.......,@@OOOOOOOOOOOOOOOOOOOOOOO@@@`.");printf("\n"); 
		printf("              =@@OOOOOOOOO@^.......,[%%[`....................... ..%%..............]@@OOOOOOOOOOOOOOOOOOOOOO@@@.");printf("\n"); 
		printf("              .=@@OOOOOOOO@/..........%%......................... ..%%.........=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@O. ");printf("\n"); 
		printf("                ,@@@OOOOOO@O.........%%..............@@@@@.........%%..........=@@OOOOOOOOOOOOOOOOOOOOOOOOOOO@@^.");printf("\n"); 
		printf("                 ./@@@OOOO@@^..........%%.........%%.,....%%........%% ..,/@OOOOOOOOOOOOOOOOOOOOOOOOO@@O..");printf("\n"); 
		printf("                      ..[/@@@@@@@/`..............%%.........%%.......,]@@@@@@@@@@@OOOOOOOOOOOOOOOOO@@^...    "); printf("\n"); 
		printf("                                  ..[/@@@/]]..................]/@@@@@/`......,O@@@@OOOOOOOOOO@@@@/.           "); printf("\n"); 
		printf("                                      .. ...,[[[@@@@@@@@@@@@@@@O/[[=@O@/........]...,@@@@@@@@@@@@O[..         "); printf("\n"); 
		printf("                                              ./@`.....=@O@^....=@O@`....,...,OO`..@@.......                  "); printf("\n"); 
		printf("                                            ..@/.,]...@@@@^.....O@@@.,o..=Oo*.=OOO.,@/..                      "); printf("\n"); 
		printf("                                            .@^=OO.,@@oOO@@@@@@OoO@^.=OO.../OO...../@^                        "); printf("\n"); 
		printf("                                            .@^oO^./@Ooooo*ooooo@@..OO^........,@@^                           "); printf("\n"); 
		printf("                                            =@`....@@Ooooo/=oooooO@/.........]/@@`..                          "); printf("\n"); 
		printf("                                           .=@@]]]/@@ooooo^=ooooooO@@/]]]]O@@@@^                              "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooooO@^. ..=@..=@^.                           "); printf("\n"); 
		printf("                                               =@.=@@ooooo*oooooooo/@@[/@O`.@^..@^                            "); printf("\n"); 
		printf("                                              .=@@O@@oooooo.ooo/oo/@@/.....O@@O..@O                           "); printf("\n"); 
		printf("                                             .,@O..O@Ooooo/./oo/O@@/........./@..@O                           "); printf("\n"); 
		printf("                                            ,@@`..../@@O/o*o/o/O@@/...........=@.=@^.                         "); printf("\n"); 
	}

void together()

	{
printf("                         ,````***         ** ************                                                                                                                              ");printf("\n");                                         
printf("                         `**/],,`          ** **,*`[* ***                                                                                                                              ");printf("\n");                                         
printf("                     *``*`**=@@@/`**,*`,*/]@@@@/[[@/@@@]//,``                                                                                                                                          ");printf("\n");                         
printf("                     ,*]@@***/@`[@/,*,*/@@[*`[[@@@]`**/[@@/`*                                                                                                                                                          ");printf("\n");         
printf("                     **@@@//*=@^`/=@^/@[[@@/]//*``/@@/*`*/@^*                                                                                                                                                                   ");printf("\n");
printf("                     *=@/=@^`,@^**`/@/*,`,*[@@**`/*`/@/,**,@^                                                                                                                                                                   ");printf("\n");
printf("                     *=@^*,@@@`,**,@^********/@*,****,/@`**=@                                                                                                                                                                   ");printf("\n");
printf("                     **@/`/*/@@],*=@`***]****/@`,**,*/`=@/*=@                                                                                                                                                                 ");printf("\n");
printf("                     **=@/,`,,,/@@@@@@@@/[[[[[[[//@@@@@]/@`@/,`**                                    ,,/`,**]]]]]]]]`********                                                                                                   ");printf("\n");
printf("                     *,*,@/`,*]@@@`***`*****,********/,@@/@@]/`**                                     *,@@@[[*,`****[[/@@@]**                                                                                                   ");printf("\n");
printf("                     ****//@@@^**                * **/*@@*/*,/@@`**]*                            *`**/@@`                *[@@@]`****,********,]*/                                                                               ");printf("\n");
printf("                     ,*`,/@[`****                ****//@@@*`*`,,@@`/,                            ,,/@//,*                *`*,][/@@@]`******,]@@@^                                                                               ");printf("\n");
printf("                 ****,*/@/***            ****`,`**,/@@//@/@``*****@@/*[,*                /` ,,/*]]@@`                            ***/[@@@[[[//@^*                                                                               ");printf("\n");
printf("                 ****=@^`* **            * *[*]/@@[****=@//@/*,***==@/**`                ,*`,@@/`*],`                            *** ****,*[/@^^*                                                                               ");printf("\n");
printf("                 /*,/@/*`    **********]]@@@@/`**    ,*@^**,=@@`*,*`,@@,*            ****`/@@*       *]**                                */@/                                                                                   ");printf("\n");
printf("                 ,`@@=`*`    **],/]@@@[[****[*`**    *@@@``**`[@@/`***/@*            *** /@/`   *    ,],*                                /@,*                                                                                   ");printf("\n");
printf("                 ,@@*    `,*`*]@@/*`,            *,*`@@*/@`*`    =@@`,`@/****        *,*/@`**    ****@@@/,*`,**** ***************        ,@/*                                                                                   ");printf("\n");
printf("                 =@**    **]@@`[,*]**            *,=@^***/@`*    ,,/@@*O@^***        **=@=***    *^*,@^,,/@@]`,`********]]]]]****        ,*@^                                                                                   ");printf("\n");
printf("             ***,@/=****`@@/,             ***`*///@/`    *,@/,`*/    /@`@/***        **@^        /*,/@***    [[@@@@@@@/[[***[[[@@@]*``,``**=@****                                                                               ");printf("\n");
printf("             ***=@****,=@/`/*            *****,@@/=*/    ***/@/*`    ,/@=@***        *=@`        ,/@@,*,*    **`**[***********`***//@/,****,@^***                                                                               ");printf("\n");
printf("             * *@^`,**@@** *************,*]/@@/*/            ,[@@]=*,*,@@@^**        *=@*    ,**`/@/*                                =@/*=**@^***                                                                               ");printf("\n");
printf("             ***@^**,@/*********,*]]]@@@@/`*,`]**            `*,,[@@],*=@@^**        *=@,    ,,/@/`**                                ,=/@`,*@@**                                                                                ");printf("\n");
printf("             ***@^*/@/**//@@@@@[//[,*                * **        *,*/@@]@@^**        **@^``,,,@/`    *******,            `*******    ``*/@`^@@***                                                                               ");printf("\n");
printf("             ***@/^@//@@[*,**`*]*,**`                ****        ****=@/@@^**        **/@*,`=@^*,    ********            ***,`,**    ****/@*@^ **                                                                               ");printf("\n");
printf("             **^/@=@@@/**        ,@^@//**            ,@@@^/`*     ***/@*=@`**        **,@/`=@/***    */@@/@,*            ,*/@/@`*        ,@/@O***                            `/*/]``*****                                       ");printf("\n");
printf("             ****@@/`@/*`        =/[,@`*,            =@/`@=*`    ****@^*=@***        **,^@/@/****    *=//*@*`            ,/@/`/^,        =@@@****                            *@@^`/@^`***                                       ");printf("\n");
printf("                 /@**/@,/        **//                `,@[** *    **`=@**@^**`            */@*****    * ,/*                               */@^                                =@**`,,@@/@@/***                                   ");printf("\n");
printf("                 =@***/@`        ****                *`*,****    ***@^`=@****            **@/****    * **   *                            *@/*                                *@@,**`*,*//@*`*                                   ");printf("\n");
printf("         ,,,*,***@^***,/@,``*    ***`,*]/***,    ****,**,        ,*@@,*@^                ,*,@/**,        ,//`*`**        *`,`]***    *,*`/@**                                **@^*`**,,/@/=*^                                   ");printf("\n");
printf("         ,,@***`@@***,*`/@`,*    ``*=@@]*****    ,*,/]@@^        *@@`*@/*                =*,*/@/*        */@``***        *[,@@***    *`,@/*,*                                **=@]/@@@@[,***,                                   ");printf("\n");
printf("         `,/@@@@/        =@^,*,*,    **[@@@/]/]]]/@@//***    `*``@@*`/@**                    ,/@^**`,    `,*/@@]/***,`**]@@//    ```,*/@`                                       */`**                                           ");printf("\n");
printf("         *,,***[,        *//@`/*`    ********,[*]*,`** **    /`/@^[**[`**                    ,*`/@``*    **`***,//@@@@@[`,`**    =**/@//`                                    *   ****                                           ");printf("\n");
printf("                             @@]**,`*                ** *``,*/@@*        ********    ,********* *`/@/****`**,                ,,***/@/                                                                                           ");printf("\n");
printf("                             *`,@@][*                ** *,]@@[,``        `**//`**    ,`,,]]]``*`*`**[@@]`****                `*]@@[/*                                                                                           ");printf("\n");
printf("                                 `[@@@]^*,***`**,****/]/@@/*/        *,*/@@[`,[/@@/*`,@@/[**//@@`/,*`**,@@@]^****,*`**`]*`]]@@/`*                                                                                               ");printf("\n");
printf("                                 ****]/[@@@@@@@@@@@@@/[**`]**        ,=@/****`***,@^@@^,******,*@@`*`*****[*//@@@@@@@@@@@[[*`,`*,                                                                                               ");printf("\n");
printf("                                 ********`@/**,@/** *,`**            ,@//        ,=@@            =@`*    ***]*,*=@`,*@@`*********                                                                                               ");printf("\n");
printf("                                 `,*]@@@@@@/``=/@]]]]``*`            @@*`        *`]*            ,@^*    `,*]]@@@/`*,/@@@@@/]*,**                                                                                               ");printf("\n");
printf("                             ,*`,/@@@/*,,     ***,/[/@//****,        @/,*                        *@^,*`*,,@@@*=@/@/,*/@/@/`,=@/**                                                                                               ");printf("\n");
printf("                             ,,@@`/@`/@/`        ,,@/=@@/*,*`        =@/*                        =@`***,,@/`**@/,,/@@/],`@/**,@@*                                                                                               ");printf("\n");
printf("                         */,*/@``*/@*,,@@////``,/@@`*=@`=@/******    */@****`                *,*=@^,**`,@//*,//@]/`/@`**/@`*`,*=@`*,,            ***,,,,,`/*`                                                                   ");printf("\n");
printf("                         `*,@/`*/@@@`**,`][[[/[[`,`,`/@/`,=@@`***    *,/@``,*                ,,=@`*`**/@^*`/@,*`/@*=@^,@/,,//`*,/@***            /@@/@]@@``,*                                                                   ");printf("\n");
printf("                         `*@^*`/@/,@^****        ,*`=@//@`*,/@@`*****,*^/@/`*****        *`**`@@`**,*,@^,,@@@/*]@/ /@/`@@/*=@/***@/,*            @@*,//,,@^**                                                                   ");printf("\n");
printf("                         ,@@`*,@^**=@``**        `*^@@*,//@^*,,@@`* **,**`/@`****        **`/@//***`/@=*/@`=@,@@/**,@^**=@^=@/@ `=@^*            *@@,,*]@/***                                                                   ");printf("\n");
printf("                         ,@/**/@**`*/@/`*        `,@/* * //@@],`/@/,*******,@@`****,**,,**/@/,*```=@/*/@/* /@`@//`,]@/],,@/=@,/@`==@/*`**        *`/@@@[*                                                                       ");printf("\n");
printf("                         =@***@@****=/@/`        =@^`**  ,**,@@``=,@/,,*******@@/`**,`//@@[/***,,/@/*/@/***@@*//@/,,@^*@@`*@@*,/@*^=@`***        **`,*,`*                                                                       ");printf("\n");
printf("                         =@**,@^,*,@@[*`*********,][@@]*/****`/@@`*`/@/,,**,*    [@@@@//`,`****/@/`/@@*****@@    =@/@/@//**@@***@@*,/@*`*                                                                                       ");printf("\n");
printf("                         *@^**@^/@/,****,**,*********`/@@`/*`***,/@]*,/@/``*`    `*`,,`*****]@@/*,/@[,*****=@    *,@@@=****@@****/@,*/@**                                                                                       ");printf("\n");
printf("                         *@@**@@/    */@@@@@`,@@@@/,* **]/@/`,,*`*`/@@``,/@/,******,],``*]@@/,`/@@`*,    **=@    * *@^** **@^    *@@`*@/`****                                                                                   ");printf("\n");
printf("                         *,@^,=@/    `=@***,@@//*`@^,,`*``,=@//*``,`,`/@/`/,@@@]`*]]]@@@/`,`,]@/,,*`*    **=@    **,@^*****@^    ,*/@ ,@/****                                                                                   ");printf("\n");
printf("                     ,`,*//@@^`/@///`*=@^*`=@/*,@@@@[//@/****,@//,,`** *[/@@]`**[//**//@``]@@/*`*        *`=@`**`***@^`****@^    **^@@**@/*`,                                                                                   ");printf("\n");
printf("                     **/,@/`[@^*//@]@@[``**@@`**,@/`*]`=@o*****/@@/*`   ****/[@@@@@@/`*/@@/*/****        **`@/******@^*****@^    *,**@@``@/*,                                                                                   ");printf("\n");
printf("                 ,,*`*/@@    *@@*,*[@@]`*,*/@@@@@/@@@@@@/****    ,@/**]*`         ***/@@`                **^/@]``,*,@/,,,/=@^        `@@*,@/,`*,*                                                                               ");printf("\n");
printf("                 ***,/@`*    /[/@@,****[[@/*```,/*``**[@@/,**    ,`/@`/**          ****^,                ****@/[[[@[//@@[//@^        /`/@@@@@`***                                                                               ");printf("\n");
printf("                 **,@/***    ****,@@`**`//@@*,,@@@*/*****/@*`        @/**                                    @^**        *=@^        ,,/@``*=@``/                                                                               ");printf("\n");
printf("                 *@@`,***    ***]]@@@@/`,,,/@@/``/@/^[***=@^*        ,/@`                                    @@**        *=@^        * @^*,**@^`*                                                                               ");printf("\n");
printf("             ,``,@/**        =@@/,*,*`=@@@@@/    `*,[@@@@@/*,        **=@/*``                                @@***,*``****=@*        **@/*,`/@`**                                                                               ");printf("\n");
printf("             *`=@/`**        ,,`[@/,*,@^****,    ***,***,`,**        ,*/*@/*`                                =@*****=@****=@*        *^`[/@@/*`**                                                                               ");printf("\n");
printf("         *****/@`                ,,@//@`*                                //@`*`**                            =@**** /@****=@*                                                                                                   ");printf("\n");
printf("         ****/@*`                =*`@@/**                                **@@`***                            =@^****=@*** =@*                                                                                                   ");printf("\n");
printf("         *,*/@`**                    /`**                                *^*/@`*`                            *@^****=@****=@*                                                                                                   ");printf("\n");
printf("         ,*/@=***                    * **                                ***`/@*`                            =@/ ***=@** *@@*                                                                                                   ");printf("\n");
printf("         *=@*                                                                ,@@*                            */@****=@* **@^*                                                                                                   ");printf("\n");
printf("         =@[*                                                                *,@/                            *=@****=@^***@^*                                                                                                   ");printf("\n");
printf("     *^*,@/**                                                                **=@^***                        * @^ **=@^**=@^*                                                                                                   ");printf("\n");
printf("     **`/@`**                                                                ***/@***                        **@/***=@^**=@**                                                                                                   ");printf("\n");
printf("    **=@/***                                                                    @^`*                        **=@**`*@^**=@`*                                                                                                   ");printf("\n");
printf("     **@/****                                                                    =@**                        **=@^`**@^**@@**                                                                                                   ");printf("\n");
printf("     ==@*                                                                        *@^*                        ***@/***@/**@^**                                                                                                   ");printf("\n");
printf("     *@/*                                                                        */@*                        ***=@***@^,=@^**                                                                                                   ");printf("\n");
printf("     *,@@/******`                                                        ***,****,@@`                    `,**,*^=@@@@@@@@@]``,/,*                                                                                               ");printf("\n");
printf("     *`,`,/@/],`,                                                        **[*]@@@[/*^                    ***,*/@@``*,@@*`,/@@],*`                                                                                               ");printf("\n");
printf("             /@@/`,`**,**** *                                ***** **`**]@@@//***                        `,/@@[**,]**@@******,/@@``**                                                                                           ");printf("\n");
printf("             `=`*[@@@]`]*****                                [**,]]@@@/[****`** *                        *@//@@@@@@@@@@@@@@@@@@@@@` *                                                                                           ");printf("\n");
printf("                    =//@@@/]]************   *******,**]]]@@@@@@[[***                                                                                                                                                           ");printf("\n");
printf("                    `*******,[[[@@@@@@@@@@@@@@@@@@@/[[[,***,****** *                                                                                                                       ");printf("\n");
}

void clear ()
{
    for(int i=1;i<=10000;i++)
		for(int j=1;j<=10000;j++)
			zuobiao[i][j]=caozuo[i][j]=0;
}

void mianban()                                          //面板所显示出的样子
{	
	printf("\n");
	printf("   ");
	for(j=1;j<=y;j++)
		{
			printf("%d",j);
				if(j<=9)
			printf(" ");
		}
	    printf("\n");
	
	for(i=1;i<=x;i++)
	{
		printf(" ");
		printf("%d",i);
		if(i<=9)
		printf(" ");
	
		for(j=1;j<=y;j++)
		{
			if(caozuo[i][j]==0)
				printf("■");                          
			else if(caozuo[i][j]>=1&&caozuo[i][j]<=8)
				printf("%d",caozuo[i][j]),
				printf(" ");                            
			else if(caozuo[i][j]==-2)
				printf("  ");                           
			else
				printf("* ");                           
		}
		printf("\n");
	}
	printf("\n");
}


	void dfs (int xx,int yy)                                  //使空格及周边连续空格能一次开出，减少操作次数
{
	if (zuobiao[xx-1][yy]==0 && caozuo[xx-1][yy]!=-2 && xx-1>=1) 
	caozuo[xx-1][yy]=-2,win--,dfs(xx-1,yy);
	if (zuobiao[xx+1][yy]==0 && caozuo[xx+1][yy]!=-2 && xx+1<=x) 
	caozuo[xx+1][yy]=-2,win--,dfs(xx+1,yy);
	if (zuobiao[xx][yy-1]==0 && caozuo[xx][yy-1]!=-2 && yy-1>=1) 
	caozuo[xx][yy-1]=-2,win--,dfs(xx,yy-1);
	if (zuobiao[xx][yy+1]==0 && caozuo[xx][yy+1]!=-2 && yy+1<=y) 
	caozuo[xx][yy+1]=-2,win--,dfs(xx,yy+1);
	
	
}	




int main()

{
printf("某一天，一位国家的公主被恶魔抓去，身为有正义感的王子，你义不容辞的选择去救这位公主，在就公主途中，你需要跨国五个雷区，王子，用你的智慧才智去拯救公主吧！");
//第一关
	x=5,y=5,n=2;
	printf("游戏开始！第一关（共两个雷）");
	geshu=x*y;
	win=x*y-n;                       //通过点开没有雷的格数来判定最后胜利
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                      //随机埋雷
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,
					n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                       //显示周围九宫格雷的个数
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  
						zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1)  
						zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what1=0;
	
	while(what1==0)
	{
		if(win==0)
		{
			what1=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);

		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8)) //防止通过重复输入相同的坐标而使win变为0从而出现问题。
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],
			what1=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,
				win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],
			win--;
	}
	 mianban();
	if(what1==1)
		printf("离公主又进一步了呢，继续下一关吧！"),
		printf("\n");
	
	if(what1==-1)
		printf("你输了！公主没法逃出来了呢"),
		gongzhu7(),
		exit(0),
		printf("\n");
	   

	//第二关
	clear();
	x=9,y=9,n=5;
	printf("游戏开始！第二关（共十个雷）");
	geshu=x*y;
	win=x*y-n;                       
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                     
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,
					n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                   
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  
						zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1) 
						zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what2=0;
	
	while(what2==0)
	{
		if(win==0)
		{
			what2=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);

		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8))
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],
			what2=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,
				win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],
			win--;
		
	}
	
	 mianban();
	
	if(what2==1)
		printf("离公主又进一步了呢，继续下一关吧！"),
		printf("\n");
	
	if(what2==-1)
		printf("你输了！公主没法逃出来了呢"),
		gongzhu7(),
		exit(0),
		printf("\n");
	   

	//第三关
	clear();
	x=16,y=16,n=20;
	printf("游戏开始！第三关（共二十个雷）");
	geshu=x*y;
	win=x*y-n;                      
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                      
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,
					n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                    
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  
						zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1)  
						zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what3=0;
	
	while(what3==0)
	{
		if(win==0)
		{
			what3=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);
		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8)) 
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],
			what3=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,
				win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],
			win--;
	}
	
	 mianban();
	if(what3==1)
		printf("离公主又进一步了呢，继续下一关吧！"),
		printf("\n");
	
	if(what3==-1)
		printf("你输了！公主没法逃出来了呢"),
		gongzhu7(),
		exit(0),
		printf("\n");
	  

	//第四关

clear();
	x=20,y=20,n=40;
	printf("游戏开始！第四关（共四十个雷）");
	geshu=x*y;
	win=x*y-n;                      
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                      
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,
					n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                      
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  
						zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1)  
						zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what4=0;
	
	while(what4==0)
	{
		if(win==0)
		{
			what4=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);

		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8)) 
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],
			what4=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,
				win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],
			win--;
	}
	
	 mianban();
	if(what4==1)
		printf("离公主又进一步了呢，继续下一关吧！"),
		printf("\n");
	
	if(what4==-1)
		printf("你输了！公主没法逃出来了呢"),
		gongzhu7(),
		exit(0),
		printf("\n");
	   

	//第五关
	clear();
	x=30,y=50,n=80;
	printf("游戏开始！第五关（共八十个雷）");
	geshu=x*y;
	win=x*y-n;                     
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                      
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,
					n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                      
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  
						zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)   
						zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)    
						zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1)  
						zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what5=0;
	
	while(what5==0)
	{
		if(win==0)
		{
			what5=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);

		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8)) 
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],
			what5=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,
				win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],
			win--;
		 if(win==5)
		 gongzhu5();
	 if(win==4)
		 gongzhu4();
	 if(win==3)
		 gongzhu3();
	 if(win==2)
		 gongzhu2();
	 if(win==1)
		 gongzhu1();
	}
	
	 mianban();
	if(what5==1)
		printf("离公主又进一步了呢，继续下一关吧！"),
		gongzhu6(),
		printf("\n"),
		system("pause"),
		printf("\n"),
	    printf("你终于救出了公主，而公主为了报答你，便以身相许，从此过上了幸福的生活"),
		together();
	if(what5==-1)
		printf("你输了！公主没法逃出来了呢"),
		gongzhu7(),
		exit(0),
		printf("\n");
	  }

	  



