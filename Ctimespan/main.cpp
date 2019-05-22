#include"ctimespan.h"
void main()
{
 ctimespan x(1,1,1),y(28,28,28);
 cout<<x+y<<endl;
 cout<<x-y<<endl;
 if(x<y) cout<<1; else cout<<0;
 if(x<=y) cout<<1; else cout<<0;
 if(x>y) cout<<1; else cout<<0;
 if(x>=y) cout<<1; else cout<<0;
 if(x==y) cout<<1; else cout<<0;
 if(x!=y) cout<<1; else cout<<0;
 system("pause");
}
