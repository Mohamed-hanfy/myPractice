#include<iostream>
using namespace std ; 

int main() {
   long int num , re ; 
   int k=0 , l=0, m=0, n=0, o=0, q=0, p=0, r=0 , s=0, t=0; 
   cin >> num;
    
       while ( num > 0)
       {
        re = num %10; 
        num = num/10;
        switch (re)
        {
        case 0: k++;
        break;
         case 1: l++;
          break;
          case 2: m++;
           break;
           case 3: n++;
            break;
            case 4: o++;
             break;
             case 5: q++;
              break;
              case 6: p++;
               break;
               case 7: r++;
                break;
                case 8: s++;
                break;
                case 9: t++;   
        default:
            break;
        }
       }
       cout << "0" <<" " << k <<"\n";
       cout << "1" <<" " << l<<"\n";
        cout << "2" <<" " << m<<"\n";
        cout << "3" <<" " << n<<"\n";
        cout << "4" <<" " << o<<"\n";
         cout << "5" <<" " << q<<"\n";
          cout << "6" <<" " << p<<"\n";
         cout << "7" <<" " << r<<"\n";
         cout << "8" <<" " << s<<"\n";
         cout << "9" <<" " << t<<"\n";

       
    
        
    }