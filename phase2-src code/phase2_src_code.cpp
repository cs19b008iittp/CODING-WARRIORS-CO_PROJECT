#include <fstream>
#include<vector>
#include<algorithm>
#include <stdexcept>
#include <bits/stdc++.h> 
#include<string>
#include<sstream>
#include <iostream>
using namespace std;               
int mem[1024]={0};
int R[32]={0};
int i,counter1=0;
int n=0;
int pin=0;
int clock_1=0;
int clock_2=5;
int cnt_branch=0;
int count1=0;
string line[1000];
string branch[1000];
int var=0;
int arr[1000][3];
int x=-1,y=0;
string line1[1000];
  void addi(string str1,string str2,int g,int x)
{
       int l1;
    string STR="";
    int k=str1.size();
    int p=0;
    try{
    while(str1.size()!=0)
    {
         l1=int(str1.at(p));
        if(l1>=48&&l1<=57)
        {
            ostringstream ex;
            ex<<str1.at(p);
            string m=ex.str();
        
            STR=STR+m;

        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek(STR); 
       geek >> l1;
       arr[x][0]=l1;
       int l2;
    string STR1="";
   
    k=str2.size();
     p=0;
    try{
    while(str2.size()!=0)
    {
         l2=int(str2.at(p));
        if(l2>=48&&l2<=57)
        {
            ostringstream ex1;
            ex1<<str2.at(p);
            string m=ex1.str();

            STR1=STR1+m;
        
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }

     stringstream Geek(STR1); 
       Geek >> l2;
       arr[x][1]=l2;
       arr[x][2]=32;
       R[l1]=R[l2]+g;

}
  void add(string str2, string str3,string str4,int x)
   {
     
    string STR="";

    int k=str2.size();
    int p=0,l2;
    try{
    while(str2.size()!=0)
    {
         l2=int(str2.at(p));
        if(l2>=48&&l2<=57)
        {
            ostringstream ex;
            ex<< str2.at(p);
            string m=ex.str();
            STR=STR+m;

        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek1(STR); 
       geek1 >> l2;
       arr[x][0]=l2;

       int l;
    string str="";
     k=str3.size();
     p=0;
    try{
    while(str3.size()!=0)
    {
         l=int(str3.at(p));
        if(l>=48&&l<=57)
        {
            ostringstream ex1;
            ex1<<str3.at(p);
            string m=ex1.str();
            str=str+m;
    
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }

     stringstream geek3(str);          
       geek3 >> l; 
    arr[x][1]=l;

     int l1;
    string fun="";

     k=str4.size();
     p=0;
    try{
    while(str4.size()!=0)
    {
         l1=int(str4.at(p));
        if(l1>=48&&l1<=57)
        {
            ostringstream ex2;
            ex2<<str4.at(p);
            
            string m=ex2.str();
        
            fun=fun+m;
        
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }

     stringstream geek2(fun); 
       geek2 >> l1;
       arr[x][2]=l1;
   
      R[l2] =R[l]+R[l1];
     

      
   }
 void sub(string str2, string str3,string str4,int x)
   {
    
       int l2;
    string STR="";
   
    int k=str2.size();
    int p=0;
    try{
    while(str2.size()!=0)
    {
         l2=int(str2.at(p));
        if(l2>=48&&l2<=57)
        {
            ostringstream ex;
            ex<< str2.at(p);
            string m=ex.str();
    
            STR=STR+m;
    
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek1(STR); 
       geek1 >> l2;
    arr[x][0]=l2;
       int l;
    string str="";
   
     k=str3.size();
     p=0;
    try{
    while(str3.size()!=0)
    {
         l=int(str3.at(p));
        if(l>=48&&l<=57)
        {
            ostringstream ex1;
            ex1<<str3.at(p);
            
            string m=ex1.str();
    
            str=str+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek3(str);          
       geek3 >> l; 
    arr[x][1]=l;

     int l1;
    string fun="";

     k=str4.size();
     p=0;
    try{
    while(str4.size()!=0)
    {
         l1=int(str4.at(p));
        if(l1>=48&&l1<=57)
        {
            ostringstream ex2;
            ex2<<str4.at(p);
        
            string m=ex2.str();
           
            fun=fun+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek2(fun); 
       geek2 >> l1;
     arr[x][2]=l1;
      R[l2] =R[l]-R[l1];
    
        
   }
void load(string str1, string str,int x)
{
   
    int l;
    string str2="";

    int k=str1.size();
    int p=0;
    try{
    while(str1.size()!=0)
    {
         l=int(str1.at(p));
        if(l>=48&&l<=57)
        {
            string m(1,str1.at(p));
        
            str2=str2+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     
     stringstream geek(str2); 
       geek >> l; 
     arr[x][0]=l;
   int l1;
    string str3="";
   
    k=str.size();
     p=0;
     int count=0;

    try{
    while(str.size()!=0)
    {
         l1=int(str.at(p));
        
        if(l1>=48&&l1<=57)
        {
            count++;
            ostringstream m;
            m<< str.at(p);
    
           string keep =m.str();
        
            str3=str3+keep;
        
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
    
     stringstream geek1(str3); 
       geek1 >> l1; 
       arr[x][1]=l1;
       arr[x][2]=32;
       int temp=R[l1];
       R[l]=mem[temp];
      
}

void storeword(string str, string str1,int x)
{
     int l;
    string STR="";
    int k=str.size();
    int p=0;
    try{
    while(str.size()!=0)
    {
         l=int(str.at(p));
        if(l>=48&&l<=57)
        {
            ostringstream ex;
            ex<<str.at(p);
            string m=ex.str();
            STR=STR+m;
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek(STR); 
       geek >> l; 
       arr[x][1]=l;

       int i=0,l2;
    string STR1="";
     k=str1.size();
     p=0;
    try{
    while(str1.size()!=0)
    {
         l2=int(str1.at(p));
        if(l2>=48&&l2<=57)
        {
            ostringstream ex1;
            ex1<<str1.at(p);
            string m=ex1.str();
            STR1=STR1+m;
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream GEEK(STR1); 
       GEEK >> l2;
       arr[x][0]=l2;
       arr[x][2]=32;
       mem[R[l2]] = R[l];
}
void jump(int l);
void branch_equal(string str1, string str2,int l2,int pin,int x);
void set_less_than(string str1,string str2,string str3,int x)
{
     int l;
    string STR="";
    int k=str1.size();
    int p=0;
    try{
    while(str1.size()!=0)
    {
         l=int(str1.at(p));
        if(l>=48&&l<=57)
        {
            ostringstream ex;
            ex<<str1.at(p);
            string m=ex.str();
            STR=STR+m;
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream geek(STR); 
       geek >> l; 
      arr[x][0]=l;
       int i=0,l2;
    string STR1="";

     k=str2.size();
     p=0;
    try{
    while(str2.size()!=0)
    {
         l2=int(str2.at(p));
        if(l2>=48&&l2<=57)
        {
            ostringstream ex1;
            ex1<<str2.at(p);
            string m=ex1.str();
            STR1=STR1+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     
     stringstream GEEK(STR1); 
       GEEK >> l2;
     arr[x][1]=l2;
       int l3;
    string STR2="";
     k=str3.size();
     p=0;
    try{
    while(str3.size()!=0)
    {
         l3=int(str3.at(p));
        if(l3>=48&&l3<=57)
        {
            ostringstream ex2;
            ex2<<str3.at(p);
            string m=ex2.str();
           
            STR2=STR2+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
    
     stringstream GEEK3(STR2); 
       GEEK3 >> l3;
       arr[x][2]=l3;

       if(R[l2]<R[l3])
       {
           R[l]=1;
       }
       else
       R[l]=0;
}
void arr_1(int t1, int t2, int t3, int t4, int t5)
{
     mem[0]=t1;
     mem[1]=t2;
     mem[2]=t3;
     mem[3]=t4;
     mem[4]=t5;
}
void pipeline_withdataforwarding();
void parser(string str,int pin)
{
     string my_str=str;
    istringstream ss(str); 
    string str1,str2,str3,str4;
    string word; // for storing each word str 
   // ins++;
    // Traverse through all words 
    // while loop till we get  
    // strings to store in string word 
    while (ss >> word)  
    { 
        int l1=0, l2=0;
         
       if(word=="add")
       {
          i=3;
          x++;
         // cout<<str<<endl;
          line1[x]=str;
         // cout<<line1[x]<<endl;
         while(i!=0)
         {
             ss>>word;
             if(i==3)
             {
                 str2=word;
             }
             else if(i==2)
             {
                  str3=word;
             }
             else if(i==1)
             {
                  str4=word;
             }
             i--;
         }
    
         add(str2,str3,str4,x);
       }
        if(word=="addi")
        {
           i=3;
           x++;
         //  cout<<str<<endl;
            line1[x]=str;
          //  cout<<line1[x]<<endl;
           int g;
          while(i!=0)
          {
              ss>>word;
     
              if(i==3)
              {
                  str1=word;
              }
              if(i==2)
              {
                  str2=word;
              }
              if(i==1)
              {
                  stringstream take(word);
                  take >> g;
              }
              i--;
          }
          addi(str1,str2,g,x);
        }

       if(word=="lw")
       {
           i=2;
           x++;
           line1[x]=str;
          while(i!=0)
          {
              ss>>word;
           
              if(i==2)
              {
                 str1=word;
              }
              if(i==1)
              {
                  str2=word;
                 
              }
              i--;
          }
          
          load(str1,str2,x);
       }

      if(word=="sw")
      {
           i=2;
           x++;
             line1[x]=str;
          while(i!=0)
          {
              ss>>word;
            
              if(i==2)
              {
                 str1=word;
              }
              if(i==1)
              {
                  str2=word;
                 
              }
              i--;
          }
    
          storeword(str1,str2,x);
      }
      if(word=="j")
      {
          i=1;
          while(i!=0)
          {
              ss>>word;
            
              if(i==1)
              {
                  stringstream stream(word);
                  stream>>l2;
              }
              i--;
          }
          jump(l2);
      }
      if(word=="beq")
      {
          i=3;
          x++;
           line1[x]=str;
           branch[var]=str;
           var++;
          while(i!=0)
          {
              ss>>word;
          
              if(i==3)
              {
                  str1=word;
              }
              if(i==2)
              {
                  str2=word;
              }
              if(i==1)
              {
                  stringstream stream1(word);
                   stream1>>l2;
              }
              i--;
          }
        
          branch_equal(str1,str2,l2,pin,x);
      }
      if(word=="sub")
       {
          i=3;
          x++;
           line1[x]=str;
         while(i!=0)
         {
             ss>>word;
            
             if(i==3)
             {
                 str2=word;
             }
             else if(i==2)
             {
               
                  str3=word;
             }
             else if(i==1)
             {
                  str4=word;
             }
             i--;
         }
         sub(str2,str3,str4,x);
       }
       if(word=="slt")
       {
           i=3;
           x++;
           line1[x]=str; 
         while(i!=0)
         {
             ss>>word;
            
             if(i==3)
             {
                 str2=word;
             }
             else if(i==2)
             {
            
                  str3=word;
             }
             else if(i==1)
             {
               
                  str4=word;
             }
             i--;
         }
         set_less_than(str2,str3,str4,x);
       }
       if(word=="array")
       {
           i=0;
           int t1, t2, t3, t4, t5;
           while(i<5)
           {
             ss>>word;
           
           if(i==0)
           {
            stringstream stream3(word);
              stream3>>l2; 
              t1=l2;
           }
           if(i==1)
           {
                stringstream stream2(word);
                stream2>> l2;
                t2=l2;
               
           }
              
            if(i==2)
            {
                 stringstream stream4(word);
                stream4>> l2;
                 t3=l2;
            }
            if(i==3)
            {
               stringstream stream5(word);
                stream5>> l2;
                 t4=l2;
            }
            if(i==4)
            {
                stringstream stream6(word);
                stream6>> l2;
                t5=l2; 
            }
              i++;
           }
     
           arr_1(t1,t2,t3,t4,t5);
       }
    }
    

}
void display()
{
     cout<<"Integer Registers :\n";
    for(int i=0;i<32;i++)
    {
        cout<<  "  R"<<i<<"   =   "<<R[i]<<endl;
    }
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------\n";
}
void pipeline_withstalls();
void branch_ins();
  void jump(int l)
  {
     
      if(l>counter1)
      {
          display();
          cout<<"Sorted Array: ";
          for(i=0;i<5;i++)
          {
               cout<<mem[i]<<" ";
          }
     cout<<"\n----------------------------------------------------------------------------------------------------------------------------\n";
          cout<<"\n Total number of instructions executed : "<<x<<"\n";
      
        cout<<"\nenter 1 to know IPC of assembly code  with data forwarding "<<endl;
        cout<<"enter 2 to know IPC of assembly code  without data forwarding "<<endl;
        int num;
        cin>>num;
         cout<<"\n----------------------------------------------------------------------------------------------------------------------------\n";
        cout<<"branch instructions that contains stalls:"<<endl;
        branch_ins();
     cout<<"\n----------------------------------------------------------------------------------------------------------------------------\n";
        if(num==1)
        {
             
             pipeline_withdataforwarding();
             cout<<"number of stalls: ";
             cout<<(var-1)<<endl;
        }
        else{
        pipeline_withstalls();
        cout<<"-----------------------------------------------------------------------------------------------------------------------------\n";
        cout<<"number of stalls: ";
        cout<<(var +count1-1)<<endl;
        }
      
          exit(0);
      }
      else
      {
      ifstream infile; 
      int i=0;
     infile.open("bubblesort.asm"); 
   if (!infile) {
		cout << "No such file";
        exit(0);
	}
    else
    {
    
    while(!infile.eof()&&i<counter1)
   {
        getline(infile, line[i]);
       i++;
     
   }
  
   
    for(i=(l-1);i<=counter1;i++)
    {
       
        if(i==counter1)
        {
             parser(line[i],i);
        }
        else
        parser(line[i],i+1);
    }
    infile.close();
    }
   
      }
  }
   void branch_equal(string str1,string str2,int l2,int pin,int x)
   {
       int l;
       cnt_branch++;
    string STR="";
  
    int k=str1.size();
    int p=0;
    try{
    while(str1.size()!=0)
    {
         l=int(str1.at(p));
        if(l>=48&&l<=57)
        {
            ostringstream ex;
            ex<<str1.at(p);
            string m=ex.str();
           
            STR=STR+m;
           
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     
     stringstream geek(STR); 
       geek >> l; 
    arr[x][0]=l;
       int l1;
    string STR1="";
   
     k=str2.size();
     p=0;
    try{
    while(str2.size()!=0)
    {
         l1=int(str2.at(p));
        if(l1>=48&&l1<=57)
        {
            ostringstream ex;
            ex<<str2.at(p);
            string m=ex.str();
        
            STR1=STR1+m;
        
        }
        k--;
        p++;
    }
    }
    catch (const std::out_of_range& oor)
    {
        //cout<<"error"<<endl;
    }
     stringstream stream2(STR1); 
       stream2 >> l1; 
       arr[x][1]=l1;
       arr[x][2]=32;

        if(R[l]==R[l1])
        {
           jump(l2);
       }
       else
       {
           
           jump(++pin);
       }
   }
   void pipeline_withdataforwarding()
   {
        ifstream infile;
        infile.open("bubblesort.asm");
        if(!infile){
             cout<<"No such file";
             exit(0);
        }
        else
        {
             clock_2=clock_2+x+cnt_branch-1;
             cout<<"Total number of cycles :"<<clock_2<<endl;
             float ipc=(float) x/clock_2;
             cout<<"IPC: "<<ipc<<endl;
          
        }
   }
   void pipeline_withstalls()
   {
       ifstream infile;
       infile.open("bubblesort.asm");
       if(!infile){
           cout<<"No such file";
           exit(0);
       }
       else
       {
           string str;
           y=0;
           cout<<"instructions with stalls:\n";
           while(getline(infile,str))
           {
              y++;
              int tem=y;
              if(tem==1)
              {
                   
                  if(arr[tem][1]==arr[tem-1][0]||arr[tem][2]==arr[tem-1][0])
                  {
                      count1++;
                    
                      cout<<line1[tem]<<endl;
                  }
              }

              if(tem>1)
              {
                  if(arr[tem][1]==arr[tem-1][0]||arr[tem][1]==arr[tem-2][0]||arr[tem][2]==arr[tem-1][0]||arr[tem][2]==arr[tem-2][0])
                  {
                      count1++;
                     
                      cout<<line1[tem]<<endl;
               
                  }
            }
           }
           clock_2= clock_2+ x+cnt_branch+count1-1;
           cout<<"Total number of cycles : "<<clock_2<<endl;
      }
      float ipc= (float)x/clock_2;
     cout<<"IPC "<<ipc<<endl;  
   }
   void branch_ins()
   {
        for(int i=0;i<var;i++)
        {
             for(int j=0;j<var;j++)
             {
                  if(branch[i]==branch[j]&&i!=j)
                  {
                       branch[j]=" ";
                  }
             }

            
        }
        for(int i=0;i<var;i++)
        {
             if(branch[i]!=" ")
             {
                  cout<<branch[i]<<endl;
             }
        }
   }
 
int main () {
    ifstream infile; 
   infile.open("bubblesort.asm"); 
   if (!infile) {
		cout << "No such file";
        exit(0);
	}
    else
    {
     string str;
     while(getline(infile,str))
   {
       counter1++;
       
   }
    }
    infile.close();
  
   infile.open("bubblesort.asm"); 
   if (!infile) {
		cout << "No such file";
	}
    else
    {
         int j=0;
    string str;
     while(getline(infile,str))
   {
       pin=pin+1;
       parser(str,pin);
      
   }
   
   infile.close();
   return 0;
}
}
