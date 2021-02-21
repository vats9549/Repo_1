#include <iostream>
using namespace std;
//'You are playing a new computer game in which you have to fight monsters. In a dungeon you are trying to clear, you met three monsters; the first of them has a health points, the second has b health points, and the third has c.

//To kill the monsters, you can use a cannon that, when fired, deals 1 damage to the selected monster. Every 7-th (i. e. shots with numbers 7, 14, 21 etc.) cannon shot is enhanced and deals 1 damage to all monsters, not just one of them. If some monster's current amount of health points is 0, it can't be targeted by a regular shot and does not receive damage from an enhanced shot.

//You want to pass the dungeon beautifully, i. e., kill all the monsters with the same enhanced shot (i. e. after some enhanced shot, the health points of each of the monsters should become equal to 0 for the first time). Each shot must hit a monster, i. e. each shot deals damage to at least one monster.

int main(){
    int cases, a, b , c;
    cin>> cases ;
    for(int i = 0; i<cases ; i++){
        cin>> a >> b >> c ;         
        
        if(((a+b+c)%9==0)&&(a>(a+b+c)/9)&&(b>(a+b+c)/9)&&(c>(a+b+c)/9)){
            cout<<"YES"<<endl ;
            
                }
        else{
            cout<<"NO"<<endl ;
            
        }        
    }    
}


