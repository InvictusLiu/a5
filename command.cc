#include <vector>
#include <string>
#include <sstring>
#include <memory>
#include <iostream>
#include "command.h"

using namespace std;

Command::Command(int seed, string seq, bool hasGraphic, int startLevel):seed{seed},seq{seq},hasGraphic{hasGraphic},startLevel{startLevel}{
        if (startLevel == 0){level = make_shared<Level0>(seq);}
        else if (startLevel == 1){level = make_shared<Level1>(seed);}
        else if (startLevel == 2){level = make_shared<Level2>(seed);}
        else if (startLevel == 3){level = make_shared<Level3>(seed);}
        else if (startLevel == 4){level = make_shared<Level4>(seed);}
        else {throw invalid_argument(string "level 0-4");}
        
        td = make_shared<TextDisplay>();
        if(hasGraphic){
                gd = make_shared<GraphicsDisplay>();
                b = make_shared<Board>(); //not sure!
        }
        else {b = make_shared<Board>(); //not sure!}
}

Command::interpretCommand(){
        string s;
        while(cin > s){
                int start = 0;
                int multiplier = 1;
                string mul;
                string cmd;
                for (unsigned int i = 0; i<s.length(); i++){
                        if ((s[i]>=0) && (s[i]<=9)){
                                mul += s[i];
                                start++;
                        }
                        else{break;}
                }
                cmd = s.substr(start);
                istringstream iss{mul};
                if (iss >> multiplier){}
                
                
        
}
