#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


	char c;
	
	bool i=false;
	bool j=false;
	
		ifstream file;
    	file.open("D:\FX TEAM\obrazek.txt");
		file>>c;
		
	int t[20][20];
		if (!file.eof()){

{
    for(int i = 0;i<10;++i){
        for(int j=0;j<10;++j){
            if(!(scren[i][j]==scren[i+10][j] && scren[i][j]==scren[i][j+10] && scren[i][j]==scren[i+10][j+10]))
			
			{
                return false;
            }
        }
    }
    t[i][j] <<c;
    cout<<t[i][j]<<" ";
    }
    cout <<endl;
    }
   if(ii&&jj==true)
   {
   	cout<<"Obrazek jest rowny"<<endl;
   }
}
    getchar();
    return true;
}




