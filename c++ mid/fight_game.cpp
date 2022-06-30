#include<iostream>
#include<time.h>
using namespace std;

char B[3]={'K','Q','J'};

class player{
    protected :
        int player_attack=0;
        int choice=0;
        int count=0;
        int enemy_choice;
        int enemy_health=100;
        int player_health=100;
    
    public :

        void print_round(){
            cout<<"\t\t\t\tRound "<<count/2+1<<" !!  ''FIGHT'' "<<endl;
            cout<<"************************************************************************************************"<<endl<<endl;
        }
        
        void next_move(){
            if(count%2==0){
                cout<<"Pick a number(1,2,3) if yo get K damage = 30 , Q damage = 20 and J damage = 10"<<endl;
                cout<<"Or if you want heal(+15) yourslf press 0 : ";
                cin>>choice;
            }

            else
            choice=enemy_choice;

            srand(time(NULL));
            int x=rand()%2;
            for(int i=0;i<5;i++){
                char temp=B[x];
                B[x]=B[x+1];
                B[x+1]=temp;
            }
            if(choice == 1 || choice == 2 || choice == 3){
                if(B[choice-1]=='K'){
                    cout<<"Wow ! got K , Now damage gose 30 "<<endl;
                    if(count%2==0){
                        enemy_health-=30;
                        count++;
                    }

                    else{
                        player_health-=30;
                        count++;
                    }

                }
                if(B[choice-1]=='Q'){
                    cout<<"Wow ! got Q , Now damage gose 20 "<<endl;
                    if(count%2==0){
                        enemy_health-=20;
                        count++;
                    }

                    else{
                        player_health-=20;
                        count++;
                    }
                }
                if(B[choice-1]=='J'){
                    cout<<"opps ! got J , Now damage gose 10 "<<endl;
                    if(count%2==0){
                        enemy_health-=10;
                        count++;
                    }

                    else{
                        
                        player_health-=10;
                        count++;
                    }
                }
            }

            else if(choice == 0){
                if(count%2==0){
                    cout<<"You healed youself so health + 15"<<endl;
                    player_health+=15;
                    count++;
                }
                else{
                    cout<<"Computer healed himself so health + 15"<<endl;
                    enemy_health+=15;
                    count++;
                }
            }

            else{
                cout<<"Wrong choice ! got nothing"<<endl;
                count++;
            }
        }

        void show_health(){
            cout<<"Your health is : "<<player_health<<endl;
            cout<<"Your enemy health is : "<<enemy_health<<endl<<endl;

        }

        void enemy_move(){
            srand(time(NULL));
            int x=rand()%5,y;
            for(int i=0;i<x;i++){
                y=rand()%3;
            }
            y%=4;
            enemy_choice=y;
            
        }

        int check_win(){
            if(player_health <= 0){
                cout<< "Oh no ! you lose "<<endl;
                return 0;
            }
            else if(enemy_health <= 0){
                cout<<"Wow !! you win "<<endl;
                return 0;
            }
            else return 1;
        }
};


int main(){

    player p;
    while(p.check_win()){
        p.print_round();
        p.next_move();
        p.show_health();
        if(!(p.check_win())){
            break;
        }

        cout<<"Now this is computer chance : "<<endl;
        p.enemy_move();
        p.next_move();
        p.show_health();
    }
    
    return 0;
}