#include<iostream>
using namespace std;
//Right half pyramid 
void right_half_pyd(){
    int n;
    cout<<"Enter the number rows: ";
    cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=x;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

//Left half pyramid  
void left_half_pyd(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x;z++){
            cout<<"*";
        }
        cout<<endl;
    } 
    cout<<endl;  
}

//Full pyramid
void full_pyd(){
    cout<<"Enter the number of rows:";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x;z++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//Inverted right half pyramid 
void inv_right_half_pyd(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=n;x>0;x--){
    for(int y=1;y<=x;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

//Inverted left half pyramid
void inv_left_half_pyd(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=n;x>0;x--){
        for(int space=1;space<=n-x;space++){
            cout<<" ";
        }
        for(int star=1;star<=x;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

//Inverted full pyramid
void inv_full_pyd(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<x;y++){
                cout<<" ";
        }
        for(int z=0;z<=n-x;z++){
            cout<<"* ";
        }cout<<endl;
    }cout<<endl;
}

//Rhombus pattern
void rhombus(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<x;y++){
            cout<<" ";
        }
        for(int z=0;z<=n;z++){
            cout<<"*";
        }cout<<endl;
    }cout<<endl;
}

//Diamond pattern
void diamond(){
    cout<<"Enter the number of rows in the top half: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x;z++){
            cout<<"* ";
        }cout<<endl;
    }
    for(int x=1;x<=n-1;x++){
        for(int y=1;y<=x;y++){
            cout<<" ";
        }
        for(int z=1;z<=n-x;z++){
            cout<<"* ";
        }cout<<endl;
    }cout<<endl;
}

//Hourglass pattern
void hourglass(){
    cout<<"Enter the number of rows in the top half: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<x;y++){
            cout<<" ";
        }
        for(int z=0;z<=n-x;z++){
            cout<<"* ";
        }cout<<endl;
    }

    for(int x=2;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z =1;z<=x;z++){
            cout<<"* ";
        }cout<<endl;
    }

}

//Hollow square pattern
void holl_square(){
    cout<<"Enter the side value: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        cout<<"* ";
    }cout<<endl;
    n-=2;
    for(int x=1;x<=n;x++){
        cout<<"* ";
        for(int y=1;y<=n;y++){
            cout<<"  ";
        }cout<<"*"<<endl;
    }n+=2;
    for(int x=1;x<=n;x++){
        cout<<"* ";
    }cout<<endl<<endl;
}

//Hollow full pyramid
void holl_full_pyd(){
    cout<<"Enter the base value: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x;z++){
            if(z==1){
            cout<<"* ";}
            else if(z==x){
                cout<<"* ";
            }
            else if(x==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }cout<<endl;
    }cout<<endl;
}

//Hollow inverted full pyramid
void inv_holl_full_pyd(){
    cout<<"Enter the base value: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1; x<=n;x++){
        for(int y=1;y<x;y++){
            cout<<" ";
        }
        for(int z=0;z<=n-x;z++){
            if(z==0){
                cout<<"* ";
            }
            else if(z==n-x){
                cout<<"* ";
            }
            else if(x==1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }cout<<endl;
}

void holl_diamond(){
    cout<<"Enter the number of rows in the top half: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x;z++){
            if(z==1){
                cout<<"* ";
            }
            else if(z==x){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;}
    for(int x=1;x<=n-1;x++){
        for(int y=1;y<=x;y++){
            cout<<" ";
        }
        for(int z=1;z<=n-x;z++){
            if(z==1){
                cout<<"* ";
            }
            else if(z==n-x){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}

//Floyd's triangle
void floyd(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
    int number=1;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=x;y++){
            cout<<number<<" ";
            number++;
        }cout<<endl;
    }cout<<endl;
}

//Pascal's triangle
void pascal(){
    cout<<"Enter the number of rows: ";
    int n;cin>>n;
    cout<<endl<<"Pattern:"<<endl<<endl;
}


//Main
int main(){
    char main_choice='y';
    int choice;
    cout<<endl<<"<<<<<<<<Pattern Printer>>>>>>>>>"<<endl<<endl;
 do{cout<<"Select the pattern from the following:"<<endl<<endl;
    cout<<R"(1.Right half pyramid                  11.Hollow full pyramid
2.Left half pyramid                   12.Hollow inverted full pyramid
3.Full pyramid                        13.Hollow diamond pyramid
4.Inverted right half pyramid         14.Floyd's triangle
5.Inverted left half pyramid          15.Pascal's triangle
6.Inverted full pyramid               
7.Rhombus pattern
8.Diamond pattern
9.Hourglass pattern
10.Hollow square pattern)"<<endl<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        right_half_pyd();
        break;
    case 2:
        left_half_pyd();
        break;
    case 3:
        full_pyd();
        break;
    case 4:
        inv_right_half_pyd();
        break;
    case 5:
        inv_left_half_pyd();
        break;
    case 6:
        inv_full_pyd();
        break;
    case 7:
        rhombus();
        break;
    case 8:
        diamond();
        break;
    case 9:
        hourglass();
        break;
    case 10:
        holl_square();
        break;
    case 11:
        holl_full_pyd();
        break;
    case 12:
        inv_holl_full_pyd();
        break;
    case 13:
        holl_diamond();
        break;
    case 14:
        floyd();
        break;
    case 15:
        pascal();
        break;
        
    default:
        break;
    }
    cout<<"Do you want to print more patterns?(y/n):";
    cin>>main_choice;
    cout<<endl;}while(main_choice=='y');

    return 0;
}