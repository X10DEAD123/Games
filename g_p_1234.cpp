#include<bits/stdc++.h>
using namespace std;
class cricket
{
    int z,ch2;
public:
    string z1,g,k,ch;
    static string null1,null2;
    int store1=0,store2=0,a,b,comp,you,p,q,r,t,u,v,w,x;
    static int sum1,sum2;
    void toss()
    {
        srand(time(0));
        z=(rand()%2)+1;
        cout<<("Time to toss folks!")<<endl;
        null1="";
        null2="";
        if (z==1)
            z1="H";
        else if (z==2)
            z1="T";
        cout<<"Head(H) or Tail(T):"<<endl;
        cin>>g;
        cout<<"You chose "<<g<<endl;
        cout<<"The coin is tossed and it's a "<<z1<<endl;
        if (g==z1)
        {
            cout<<"You have won the toss!"<<endl;
            k="kop";
        }
        else
        {
            cout<<"You have lost the toss!"<<endl;
            k="kops";
        }
        if (k=="kop")
        {
            cout<<"Do you want to bat(B) or ball(b)? :"<<endl;
            cin>>ch;
            if (ch=="B")
            {
                cout<<"You have chosen to bat."<<endl;
                null1="lol";
            }
            else
            {
                cout<<"You have chosen to ball."<<endl;
                null1="LOL";
            }
        }
        else
        {
            ch2=(rand()%2)+1;
            if (ch2==1)
            {
                cout<<"Opponent chose to bat."<<endl;
                null2="LOL";
            }
            else if (ch2==2)
            {
                cout<<"Opponent chose to ball."<<endl;
                null2="lol";
            }
        }

    }
    //string p1=null1,p2=null2;
};
string cricket::null1;
string cricket::null2;
int cricket::sum1;
int cricket::sum2;
class field:public cricket
{
public:
    //int alu=0;
    void over()
    {
        cout<<"Enter the number of overs:";
        cin>>a;
    }
    void wicket()
    {
        cout<<"Enter the number of wickets:";
        cin>>b;
    }
    void bat()
    {
        srand(time(0));
        if(null1=="lol" || null2=="lol")
        {
            cout<<"It's time for you to bat."<<endl;
            for(int i=1; i<(a*6)+1; i++)
            {
                comp=(rand()%22);
                cout<<"\nChoose between 0-6:"<<endl;
                cin>>you;
                if(comp<4){
                    cout<<"Computer chose "<<comp<<endl;
                }
                else if(comp>=4 && comp<8){
                    cout<<"Computer chose 4"<<endl;
                    comp=4;
                }
                else if(comp>=8 && comp<14){
                    cout<<"Computer chose 5"<<endl;
                    comp=5;
                }
                else{
                    cout<<"Computer chose 6."<<endl;
                    comp=6;
                }
                cout<<"You chose "<<you<<endl;
                if(comp==you)
                {
                    store1=store1+1;
                    p=(rand()%5)+1;
                    if (p==1)
                    {
                        cout<<"Exellent wicket!";
                    }
                    else if (p==2)
                    {
                        cout<<"Damn!You are out!";
                    }
                    else if (p==3)
                    {
                        cout<<"Awesome catch by the opponent!";
                    }
                    else if (p==4)
                    {
                        cout<<"That's a run out!Batsman could not make to the other side in time :'(";
                    }
                    else if (p==5)
                    {
                        cout<<"GONE!Big disappointment for the batsman.";
                    }
                    if(store1<b)
                    {
                        cout<<"\nYou have "<<b-store1<<" wicket/wickets left!"<<endl;
                    }
                }
                else if(you==0)
                {
                    q=(rand()%5)+1;
                    sum1=sum1+you;
                    if (q==1)
                    {
                        cout<<"Went for the maximum,but could not hit the ball.";
                    }
                    else if (q==2)
                    {
                        cout<<"Nice defence.";
                    }
                    else if (q==3)
                    {
                        cout<<"Batsman left the ball as it is.";
                    }
                    else if (q==4)
                    {
                        cout<<"Ow wow!Nice swing!No run collected";
                    }
                    else if (q==5)
                    {
                        cout<<"The batsman decided to defence his wicket.0 run added to the scoreboard.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==1)
                {
                    r=(rand()%5)+1;
                    sum1=sum1+you;
                    if (r==1)
                    {
                        cout<<"Nice running.";
                    }
                    else if (r==2)
                    {
                        cout<<"Swifted away the ball. 1 run collected. ";
                    }
                    else if (r==3)
                    {
                        cout<<"That's a wide.";
                        i--;
                    }
                    else if (r==4)
                    {
                        cout<<"Batsman just tossed the ball away.1 run added to the score.";
                    }
                    else if (r==5)
                    {
                        cout<<"That's an L.B.Just 1 run scored in this ball.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==2)
                {
                    t=(rand()%5)+1;
                    sum1=sum1+you;
                    if (t==1)
                    {
                        cout<<"Exelent running.";
                    }
                    else if (t==2)
                    {
                        cout<<"Quick running. 2 runs collected.";
                    }
                    else if (t==3)
                    {
                        cout<<"Hit to the offside.2 runs easily taken.";
                    }
                    else if (t==4)
                    {
                        cout<<"Batsman coming for the 2nd time.A....nnnD completed the running.";
                    }
                    else if (t==5)
                    {
                        cout<<"Catch miss!Batsman went for the second time and scored 2 runs.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==3)
                {
                    u=(rand()%5)+1;
                    sum1=sum1+you;
                    if (u==1)
                    {
                        cout<<"You barely made it!";
                    }
                    else if (u==2)
                    {
                        cout<<"Batsman running for his life. Huff! Batsman secured his place in the field.";
                    }
                    else if (u==3)
                    {
                        cout<<"Very fast running. 3 runs added in this ball";
                    }
                    else if (u==4)
                    {
                        cout<<"Fielder aimed for the wicket,but keeper failed to capture the ball. Batsman were able to collect 3 runs.";
                    }
                    else if (u==5)
                    {
                        cout<<"Batsman aimed for four.But the fielder came in his way. 3 runs collected though.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==4)
                {
                    v=(rand()%5)+1;
                    sum1=sum1+you;
                    if (v==1)
                    {
                        cout<<"Exelent shot!There is no one to stop that ball from going out of the boundary.";
                    }
                    else if (v==2)
                    {
                        cout<<"Batsman hit the ball with his all might and were able to get the ball out of the boundary.";
                    }
                    else if (v==3)
                    {
                        cout<<"Two bounces a........nd 4.";
                    }
                    else if (v==4)
                    {
                        cout<<"The fielder is running after the ball but could stop the ball from being 4.";
                    }
                    else if (v==5)
                    {
                        cout<<"The fielder is coming for the ball.Owww,miss field!The ball is runnimg at the boundary aaaaaaand fooooooour.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==5)
                {
                    w=(rand()%2)+1;
                    sum1=sum1+you;
                    if (w==1)
                    {
                        cout<<"Quick running and 3 run. fielder threw the ball but the baller failed to catch the ball.Batsman again kept running and aaded 2 more runs.";
                    }
                    else if (w==2)
                    {
                        cout<<"The ball has gone to wide and the keeper could not catch it. Straight to the boundary and 4!.5 runs added to the scoreboard.";
                        i--;
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==6)
                {
                    x=(rand()%5)+1;
                    sum1=sum1+you;
                    if (x==1)
                    {
                        cout<<"Yes bank maximum!";
                    }
                    else if (x==2)
                    {
                        cout<<"That's a six!Huge disappointment for the baller.";
                    }
                    else if (x==3)
                    {
                        cout<<"Batsman lofted away the ball and siiiiiiix.";
                    }
                    else if (x==4)
                    {
                        cout<<"Big hit!Big hit!";
                    }
                    else if (x==5)
                    {
                        cout<<"The ball has gone out of the world";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                if (store1==b)
                {
                    cout<<"\nAll out!"<<endl;
                    break;
                }
                if(a==i/6)
                {
                    continue;
                    cout<<"End of the match!"<<endl;
                }
                else if((a*6-i)%6==0)
                {
                    cout<<"End of the over."<<(a*6-i)/6<<" more overs to go."<<endl;
                }
                else
                {
                    cout<<"Over=="<<a-(a*6-i)/6-1<<"."<<i%6<<endl;
                }
            }
            cout<<"\nYour total score is "<<sum1<<endl;
            cout<<"\n\nIt's time for you to ball."<<endl;
            for(int i=1; i<(a*6)+1; i++)
            {
                comp=(rand()%7);
                cout<<"\nChoose between 0-6:"<<endl;
                cin>>you;
                cout<<"Computer chose "<<comp<<endl;
                cout<<"You chose "<<you<<endl;
                if(comp==you)
                {
                    p=(rand()%5)+1;
                    store2=store2+1;
                    if (p==1)
                    {
                        cout<<"Exellent wicket!";
                    }
                    else if (p==2)
                    {
                        cout<<"Damn!Opponent is out!";
                    }
                    else if (p==3)
                    {
                        cout<<"Awesome catch by the your fielder!";
                    }
                    else if (p==4)
                    {
                        cout<<"That's a run out!Opponent could not make to the other side in time :'(";
                    }
                    else if (p==5)
                    {
                        cout<<"GONE!Big disappointment for the opponent batsman.";
                    }
                    if(store2<b)
                    {
                        cout<<"\nOpponent has "<<b-store2<<" wicket/wickets left."<<endl;
                    }
                }
                else if(comp==0)
                {
                    q=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (q==1)
                    {
                        cout<<"Went for the maximum,but could not hit the ball.";
                    }
                    else if (q==2)
                    {
                        cout<<"Nice defence by the opponent.";
                    }
                    else if (q==3)
                    {
                        cout<<"Opponent batsman left the ball as it is.";
                    }
                    else if (q==4)
                    {
                        cout<<"Ow wow!Nice swing!No run collected";
                    }
                    else if (q==5)
                    {
                        cout<<"The opponent decided to defence his wicket.0 run added to the scoreboard.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==1)
                {
                    r=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (r==1)
                    {
                        cout<<"Nice running.";
                    }
                    else if (r==2)
                    {
                        cout<<"Swifted away the ball. 1 run collected. ";
                    }
                    else if (r==3)
                    {
                        cout<<"That's a wide.But ball will be counted because I am not pro enough to add the feature yet.";
                        i--;
                    }
                    else if (r==4)
                    {
                        cout<<"Opponent just tossed the ball away.1 run added to the score.";
                    }
                    else if (r==5)
                    {
                        cout<<"That's a LB.Just 1 run scored in this ball.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==2)
                {
                    t=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (t==1)
                    {
                        cout<<"Exelent running.";
                    }
                    else if (t==2)
                    {
                        cout<<"Quick running. 2 runs collected.";
                    }
                    else if (t==3)
                    {
                        cout<<"Hit to the offside.2 runs easily taken.";
                    }
                    else if (t==4)
                    {
                        cout<<"Opponent coming for the 2nd time.A....nnnD completed the running.";
                    }
                    else if (t==5)
                    {
                        cout<<"Catch miss!Opponent went for the second time and scored 2 runs.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==3)
                {
                    u=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (u==1)
                    {
                        cout<<"Opponent barely made it!";
                    }
                    else if (u==2)
                    {
                        cout<<"Batsman running for his life. uff!Opponent  secured his place in the field.";
                    }
                    else if (u==3)
                    {
                        cout<<"Very fast running. 3 runs added in this ball";
                    }
                    else if (u==4)
                    {
                        cout<<"Fielder aimed for the wicket,but keeper failed to capture the ball. Batsman were able to collect 3 runs.";
                    }
                    else if (u==5)
                    {
                        cout<<"Opponent aimed for four.But the fielder came in his way. 3 runs collected though.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==4)
                {
                    v=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (v==1)
                    {
                        cout<<"Exelent shot!There is no one to stop that ball from going out of the boundary.";
                    }
                    else if (v==2)
                    {
                        cout<<"Opponent hit the ball with his all might and were able to get the ball out of the boundary.";
                    }
                    else if (v==3)
                    {
                        cout<<"Two bounces annnnnnd      4.";
                    }
                    else if (v==4)
                    {
                        cout<<"The fielder is running after the ball but could stop the ball from being 4.";
                    }
                    else if (v==5)
                    {
                        cout<<"The fielder is coming for the ball.Owww,miss field!The ball is going at the boundary aaaaaaand fooooooour.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==5)
                {
                    w=(rand()%2)+1;
                    sum2=sum2+comp;
                    if (w==1)
                    {
                        cout<<"Quick running and 3 run. fielder threw the ball but the baller failed to catch the ball.Opponent again kept running and added 2 more runs.";
                    }
                    else if (w==2)
                    {
                        cout<<"The ball has gone to wide and the keeper could not catch it. Straight to the boundary and 4!.5 runs added to the scoreboard.";
                        i--;
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==6)
                {
                    x=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (x==1)
                    {
                        cout<<"Yes bank maximum!";
                    }
                    else if (x==2)
                    {
                        cout<<"That's a six!Huge disappointment for the baller.";
                    }
                    else if (x==3)
                    {
                        cout<<"Opponent lofted away the ball and siiiiiiix.";
                    }
                    else if (x==4)
                    {
                        cout<<"Big hit!Big hit!";
                    }
                    else if (x==5)
                    {
                        cout<<"The ball has gone out of the world";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                if (store2==b)
                {
                    cout<<"\nAll out!"<<endl;
                    break;
                }
                if (sum2>sum1)
                {
                    break;
                }
                if(a==i/6)
                {
                    cout<<"End of the match!"<<endl;
                }
                else if((a*6-i)%6==0)
                {
                    cout<<"End of the over."<<(a*6-i)/6<<" more overs to go."<<endl;
                }
                else
                {
                    cout<<"Over=="<<a-(a*6-i)/6-1<<"."<<i%6<<endl;
                }

            }
            cout<<"Opponent's total score is "<<sum2<<endl;
        }
        else if(null1=="LOL" || null2=="LOL")
        {
            cout<<"\n\nIt's time for you to ball."<<endl;
            for(int i=1; i<(a*6)+1; i++)
            {
                comp=(rand()%7);
                cout<<"\nChoose between 0-6:"<<endl;
                cin>>you;
                cout<<"Computer chose "<<comp<<endl;
                cout<<"You chose "<<you<<endl;
                if(comp==you)
                {
                    p=(rand()%5)+1;
                    store2=store2+1;
                    if (p==1)
                    {
                        cout<<"Exellent wicket!";
                    }
                    else if (p==2)
                    {
                        cout<<"Damn!Opponent is out!";
                    }
                    else if (p==3)
                    {
                        cout<<"Awesome catch by the your fielder!";
                    }
                    else if (p==4)
                    {
                        cout<<"That's a run out!Opponent could not make to the other side in time :'(";
                    }
                    else if (p==5)
                    {
                        cout<<"GONE!Big disappointment for the opponent batsman.";
                    }
                    if(store2<b)
                    {
                        cout<<"\nOpponent has "<<b-store2<<" wicket/wickets left."<<endl;
                    }
                }
                else if(comp==0)
                {
                    q=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (q==1)
                    {
                        cout<<"Went for the maximum,but could not hit the ball.";
                    }
                    else if (q==2)
                    {
                        cout<<"Nice defence by the opponent.";
                    }
                    else if (q==3)
                    {
                        cout<<"Opponent batsman left the ball as it is.";
                    }
                    else if (q==4)
                    {
                        cout<<"Ow wow!Nice swing!No run collected";
                    }
                    else if (q==5)
                    {
                        cout<<"The opponent decided to defence his wicket.0 run added to the scoreboard.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==1)
                {
                    r=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (r==1)
                    {
                        cout<<"Nice running.";
                    }
                    else if (r==2)
                    {
                        cout<<"Swifted away the ball. 1 run collected. ";
                    }
                    else if (r==3)
                    {
                        cout<<"That's a wide.But ball will be counted because I am not pro enough to add the feature yet.";
                        i--;
                    }
                    else if (r==4)
                    {
                        cout<<"Opponent just tossed the ball away.1 run added to the score.";
                    }
                    else if (r==5)
                    {
                        cout<<"That's a LB.Just 1 run scored in this ball.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==2)
                {
                    t=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (t==1)
                    {
                        cout<<"Exelent running.";
                    }
                    else if (t==2)
                    {
                        cout<<"Quick running. 2 runs collected.";
                    }
                    else if (t==3)
                    {
                        cout<<"Hit to the offside.2 runs easily taken.";
                    }
                    else if (t==4)
                    {
                        cout<<"Opponent coming for the 2nd time.A....nnnD completed the running.";
                    }
                    else if (t==5)
                    {
                        cout<<"Catch miss!Opponent went for the second time and scored 2 runs.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==3)
                {
                    u=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (u==1)
                    {
                        cout<<"Opponent barely made it!";
                    }
                    else if (u==2)
                    {
                        cout<<"Batsman running for his life. uff!Opponent  secured his place in the field.";
                    }
                    else if (u==3)
                    {
                        cout<<"Very fast running. 3 runs added in this ball";
                    }
                    else if (u==4)
                    {
                        cout<<"Fielder aimed for the wicket,but keeper failed to capture the ball. Batsman were able to collect 3 runs.";
                    }
                    else if (u==5)
                    {
                        cout<<"Opponent aimed for four.But the fielder came in his way. 3 runs collected though.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==4)
                {
                    v=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (v==1)
                    {
                        cout<<"Exelent shot!There is no one to stop that ball from going out of the boundary.";
                    }
                    else if (v==2)
                    {
                        cout<<"Opponent hit the ball with his all might and were able to get the ball out of the boundary.";
                    }
                    else if (v==3)
                    {
                        cout<<"Two bounces annnnnnd      4.";
                    }
                    else if (v==4)
                    {
                        cout<<"The fielder is running after the ball but could stop the ball from being 4.";
                    }
                    else if (v==5)
                    {
                        cout<<"The fielder is coming for the ball.Owww,miss field!The ball is going at the boundary aaaaaaand fooooooour.";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==5)
                {
                    w=(rand()%2)+1;
                    sum2=sum2+comp;
                    if (w==1)
                    {
                        cout<<"Quick running and 3 run. fielder threw the ball but the baller failed to catch the ball.Opponent again kept running and added 2 more runs.";
                    }
                    else if (w==2)
                    {
                        cout<<"The ball has gone to wide and the keeper could not catch it. Straight to the boundary and 4!.5 runs added to the scoreboard.";
                        i--;
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                else if(comp==6)
                {
                    x=(rand()%5)+1;
                    sum2=sum2+comp;
                    if (x==1)
                    {
                        cout<<"Yes bank maximum!";
                    }
                    else if (x==2)
                    {
                        cout<<"That's a six!Huge disappointment for the baller.";
                    }
                    else if (x==3)
                    {
                        cout<<"Opponent lofted away the ball and siiiiiiix.";
                    }
                    else if (x==4)
                    {
                        cout<<"Big hit!Big hit!";
                    }
                    else if (x==5)
                    {
                        cout<<"The ball has gone out of the world";
                    }
                    cout<<"\nOpponent's score is "<<sum2<<endl;
                }
                if (store2==b)
                {
                    cout<<"\nAll out!"<<endl;
                    break;
                }
                if(a==i/6)
                {
                    cout<<"End of the match!"<<endl;
                }
                else if((a*6-i)%6==0)
                {
                    cout<<"End of the over."<<(a*6-i)/6<<" more overs to go."<<endl;
                }
                else
                {
                    cout<<"Over=="<<a-(a*6-i)/6-1<<"."<<i%6<<endl;
                }

            }
            cout<<"Opponent's total score is "<<sum2<<endl;
            cout<<"It's time for you to bat."<<endl;
            for(int i=1; i<(a*6)+1; i++)
            {
                comp=(rand()%22);
                cout<<"\nChoose between 0-6:"<<endl;
                cin>>you;
                if(comp<4){
                    cout<<"Computer chose "<<comp<<endl;
                }
                else if(comp>=4 && comp<8){
                    cout<<"Computer chose 4"<<endl;
                    comp=4;
                }
                else if(comp>=8 && comp<14){
                    cout<<"Computer chose 5"<<endl;
                    comp=5;
                }
                else{
                    cout<<"Computer chose 6."<<endl;
                    comp=6;
                }
                cout<<"You chose "<<you<<endl;
                if(comp==you)
                {
                    store1=store1+1;
                    p=(rand()%5)+1;
                    if (p==1)
                    {
                        cout<<"Exellent wicket!";
                    }
                    else if (p==2)
                    {
                        cout<<"Damn!You are out!";
                    }
                    else if (p==3)
                    {
                        cout<<"Awesome catch by the opponent!";
                    }
                    else if (p==4)
                    {
                        cout<<"That's a run out!Batsman could not make to the other side in time :'(";
                    }
                    else if (p==5)
                    {
                        cout<<"GONE!Big disappointment for the batsman.";
                    }
                    if(store1<b)
                    {
                        cout<<"\nYou have "<<b-store1<<" wicket/wickets left!"<<endl;
                    }
                }
                else if(you==0)
                {
                    q=(rand()%5)+1;
                    sum1=sum1+you;
                    if (q==1)
                    {
                        cout<<"Went for the maximum,but could not hit the ball.";
                    }
                    else if (q==2)
                    {
                        cout<<"Nice defence.";
                    }
                    else if (q==3)
                    {
                        cout<<"Batsman left the ball as it is.";
                    }
                    else if (q==4)
                    {
                        cout<<"Ow wow!Nice swing!No run collected";
                    }
                    else if (q==5)
                    {
                        cout<<"The batsman decided to defence his wicket.0 run added to the scoreboard.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==1)
                {
                    r=(rand()%5)+1;
                    sum1=sum1+you;
                    if (r==1)
                    {
                        cout<<"Nice running.";
                    }
                    else if (r==2)
                    {
                        cout<<"Swifted away the ball. 1 run collected. ";
                    }
                    else if (r==3)
                    {
                        cout<<"That's a wide.";
                        i--;
                    }
                    else if (r==4)
                    {
                        cout<<"Batsman just tossed the ball away.1 run added to the score.";
                    }
                    else if (r==5)
                    {
                        cout<<"That's a LB.Just 1 run scored in this ball.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==2)
                {
                    t=(rand()%5)+1;
                    sum1=sum1+you;
                    if (t==1)
                    {
                        cout<<"Exelent running.";
                    }
                    else if (t==2)
                    {
                        cout<<"Quick running. 2 runs collected.";
                    }
                    else if (t==3)
                    {
                        cout<<"Hit to the offside.2 runs easily taken.";
                    }
                    else if (t==4)
                    {
                        cout<<"Batsman coming for the 2nd time.A....nnnD completed the running.";
                    }
                    else if (t==5)
                    {
                        cout<<"Catch miss!Batsman went for the second time and scored 2 runs.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==3)
                {
                    u=(rand()%5)+1;
                    sum1=sum1+you;
                    if (u==1)
                    {
                        cout<<"You barely made it!";
                    }
                    else if (u==2)
                    {
                        cout<<"Batsman running for his life. Huff! Batsman secured his place in the field.";
                    }
                    else if (u==3)
                    {
                        cout<<"Very fast running. 3 runs added in this ball";
                    }
                    else if (u==4)
                    {
                        cout<<"Fielder aimed for the wicket,but keeper failed to capture the ball. Batsman were able to collect 3 runs.";
                    }
                    else if (u==5)
                    {
                        cout<<"Batsman aimed for four.But the fielder came in his way. 3 runs collected though.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==4)
                {
                    v=(rand()%5)+1;
                    sum1=sum1+you;
                    if (v==1)
                    {
                        cout<<"Exelent shot!There is no one to stop that ball from going out of the boundary.";
                    }
                    else if (v==2)
                    {
                        cout<<"Batsman hit the ball with his all might and were able to get the ball out of the boundary.";
                    }
                    else if (v==3)
                    {
                        cout<<"Two bounces a........nd 4.";
                    }
                    else if (v==4)
                    {
                        cout<<"The fielder is running after the ball but could stop the ball from being 4.";
                    }
                    else if (v==5)
                    {
                        cout<<"The fielder is coming for the ball.Owww,miss field!The ball is runnimg at the boundary aaaaaaand fooooooour.";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==5)
                {
                    w=(rand()%2)+1;
                    sum1=sum1+you;
                    if (w==1)
                    {
                        cout<<"Quick running and 3 run. fielder threw the ball but the baller failed to catch the ball.Batsman again kept running and aaded 2 more runs.";
                    }
                    else if (w==2)
                    {
                        cout<<"The ball has gone to wide and the keeper could not catch it. Straight to the boundary and 4!.5 runs added to the scoreboard.";
                        i--;
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                else if(you==6)
                {
                    x=(rand()%5)+1;
                    sum1=sum1+you;
                    if (x==1)
                    {
                        cout<<"Yes bank maximum!";
                    }
                    else if (x==2)
                    {
                        cout<<"That's a six!Huge disappointment for the baller.";
                    }
                    else if (x==3)
                    {
                        cout<<"Batsman lofted away the ball and siiiiiiix.";
                    }
                    else if (x==4)
                    {
                        cout<<"Big hit!Big hit!";
                    }
                    else if (x==5)
                    {
                        cout<<"The ball has gone out of the world";
                    }
                    cout<<"\nYour score is "<<sum1<<endl;
                }
                if (store1==b)
                {
                    cout<<"\nAll out!"<<endl;
                    break;
                }
                if (sum1>sum2)
                {
                    break;
                }
                if(a==i/6)
                {
                    continue;
                    cout<<"End of the match!"<<endl;
                }
                else if((a*6-i)%6==0)
                {
                    cout<<"End of the over."<<(a*6-i)/6<<" more overs to go."<<endl;
                }
                else
                {
                    cout<<"Over=="<<a-(a*6-i)/6-1<<"."<<i%6<<endl;
                }
            }
            cout<<"\nYour total score is "<<sum1<<endl;
        }
    }
    friend string operator<(cricket d1,cricket d2);
};
string operator<(cricket d1,cricket d2)
{
    if(d1.sum1<d2.sum2)
    {
        return "You have lost the match!";
    }
    else if(d1.sum1==d2.sum2)
    {
        return "It's a draw.";
    }
    else
    {
        return "You have won the match!";
    }
}
int main()
{
    cricket hehe,h1,h2;
    field hoho;
    hehe.toss();
    hoho.over();
    hoho.wicket();
    hoho.bat();
    string x,y;
    x=h1<h2;
    ofstream khela("crick.txt");
    khela<<x;
    khela.close();
    ifstream khel("crick.txt");
    getline(khel,y);
    cout<<y;
    return 0;
}
