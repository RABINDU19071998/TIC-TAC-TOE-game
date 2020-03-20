#include <iostream>
											using namespace std;
											char sqr[10]={'0','1','2','3','4','5','6','7','8','9'};
											int checkwin();
											void intro()
											{
												cout<<"\t~~~~~~~~~~~~~~~~~~~"<<endl;
												cout<<"\t<<< TIC-TAC-TOE >>>"<<endl;
												cout<<"\t~~~~~~~~~~~~~~~~~~~"<<endl;
												cout<<"\t<< PLAYER 1 = X >>"<<endl;
												cout<<"\t<< PLAYER 2 = O >>"<<endl;
												cout<<"\n";
												cout<<"\t-------------------"<<endl;
												cout<<"\t|   GAME  START   |"<<endl;
												cout<<"\t-------------------"<<endl;
											}
											void board()
											{
												cout<<"\n";
												cout<<"\t     |       |       "<<endl;
												cout<<"\t  "<<sqr[1]<<"  |   "<<sqr[2]<<"   |   "<<sqr[3]<<endl;
												cout<<"\t_____|_______|______"<<endl;
												cout<<"\t     |       |       "<<endl;
												cout<<"\t  "<<sqr[4]<<"  |   "<<sqr[5]<<"   |   "<<sqr[6]<<endl;
												cout<<"\t_____|_______|______"<<endl;
												cout<<"\t     |       |       "<<endl;
												cout<<"\t  "<<sqr[7]<<"  |   "<<sqr[8]<<"   |   "<<sqr[9]<<endl;
												cout<<"\t     |       |      "<<endl;
											}
											int main()
											{
												int player=1,i,ch;
												char mark;
												intro();
												do
												{
													board();
													player=(player%2)? 1 : 2 ;
													cout<<"\nPLAYER"<<" "<<player<<" "<<"ENTER THE NUMBER -->>"<<" ";
													cin>>ch;
													mark = (player ==1)? 'X' : 'O' ;
													if (ch == 1 && sqr[1] == '1')
														sqr[1]=mark;
													else if (ch == 2 && sqr[2] == '2')
														sqr[2]=mark;
													else if (ch == 3 && sqr[3] == '3')
														sqr[3]=mark;
													else if (ch == 4 && sqr[4] == '4')
														sqr[4]=mark;
													else if (ch == 5 && sqr[5] == '5')
														sqr[5]=mark;
													else if (ch == 6 && sqr[6] == '6')
														sqr[6]=mark;
													else if (ch == 7 && sqr[7] == '7')
														sqr[7]=mark;
													else if (ch == 8 && sqr[8] == '8')
														sqr[8]=mark;
													else if (ch == 9 && sqr[9] == '9')
														sqr[9]=mark;
													else
													{
														cout<<"invalid move....";
														player--;
														cin.ignore();
														cin.get();
													}
													i=checkwin();
													player++;
												}while(i==-1);
												board();
												cout<<"\t--------------"<<endl;
												cout<<"\t||  RESULTS ||"<<endl;
												cout<<"\t--------------"<<endl;
												if(i==1)
													cout<<"\n\tplayer "<<--player<<" win";
												else
													cout<<"\n\t<<< GAME IS DRAW >>>";
												cin.ignore();
												cin.get();
												return 0;
											}

											int checkwin()
											{
												if(sqr[1] == sqr[2] && sqr[2] == sqr[3] || sqr[4] == sqr[5] && sqr[5] == sqr[6] 
													|| sqr[7] == sqr[8] && sqr[8] == sqr[9])
													return 1;

												else if (sqr[1] == sqr[4] && sqr[4] == sqr[7] || sqr[2] == sqr[5] && sqr[5] == sqr[8] 
													|| sqr[3] == sqr[6] && sqr[6] == sqr[9])
													return 1;

												else if(sqr[1] == sqr[5] && sqr[5] == sqr[9] || sqr[3] == sqr[5] && sqr[5] == sqr[7])
													return 1;

												else if (sqr[1] != '1' && sqr[2] != '2' && sqr[3] != '3' && sqr[4] != '4' 
													&& sqr[5] != '5' && sqr[6] != '6' && sqr[7] != '7' && sqr[8] != '8' && sqr[9] != '9')
													return 0;
											else
													return -1;
											}
