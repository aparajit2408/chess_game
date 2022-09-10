include <bits/stdc++.h>

using namespace std;

movingLeft(int x);
movingRight(int y);
movingFront(int p);
movingBack(int q);

int main(){
    char move;
    cin>>move;
    if(move=="L"){
        movingLeft(int x);
    }
    else if(move=="R"){
        movingRight(int y);

    }
    else if(move=="F"){
        movingFront(int p);

    }
    else if(move=="B"){
        movingBack(int q);

    }
}