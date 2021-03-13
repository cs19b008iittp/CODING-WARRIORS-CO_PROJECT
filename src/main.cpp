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
string line[1000];
  void addi(string str1,string str2,int g)
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
    
       R[l1]=R[l2]+g;

}
  void add(string str2, string str3,string str4)
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
   
      R[l2] =R[l]+R[l1];
      cout<<"sum ="<<R[l2]<<endl;

      
   }
 void sub(string str2, string str3,string str4)
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
     
      R[l2] =R[l]-R[l1];
    
        
   }
void load(string str1, string str)
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
       int temp=R[l1];
       R[l]=mem[temp];
      
}

void storeword(string str, string str1)
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
       mem[R[l2]] = R[l];
}
void jump(int l);
void branch_equal(string str1, string str2,int l2,int pin);
void set_less_than(string str1,string str2,string str3)
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
       if(R[l2]<R[l3])
       {
           R[l]=1;
       }
       else
       R[l]=0;
}
void arr(int t1, int t2, int t3, int t4, int t5)
{
     mem[0]=t1;
     mem[1]=t2;
     mem[2]=t3;
     mem[3]=t4;
     mem[4]=t5;
}
void parser(string str,int pin)
{
    istringstream ss(str); 
    string str1,str2,str3,str4;
    string word; // for storing each word str 
  
    // Traverse through all words 
    // while loop till we get  
    // strings to store in string word 
    while (ss >> word)  
    { 
      
        int l1=0, l2=0;
         
       if(word=="add")
       {
          i=3;
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
    
         add(str2,str3,str4);
       }
        if(word=="addi")
        {
           i=3;
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
          addi(str1,str2,g);
        }

       if(word=="lw")
       {
           i=2;
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
          
          load(str1,str2);
       }

      if(word=="sw")
      {
           i=2;
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
    
          storeword(str1,str2);
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
        
          branch_equal(str1,str2,l2,pin);
      }
      if(word=="sub")
       {
          i=3;
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
         sub(str2,str3,str4);
       }
       if(word=="slt")
       {
           i=3;
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
         set_less_than(str2,str3,str4);
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
     
           arr(t1,t2,t3,t4,t5);
       }
    }
    
   
}
void display()
{
    for(int i=0;i<32;i++)
    {
        cout<<  "  R"<<i<<"   "<<R[i]<<endl;
    }
}
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
   void branch_equal(string str1,string str2,int l2,int pin)
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
       
        if(R[l]==R[l1])
        {
           jump(l2);
       }
       else
       {
           
           jump(++pin);
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
     string str;
     while(getline(infile,str))
   {
       pin=pin+1;
       parser(str,pin);
      
   }
    }
   infile.close();
   return 0;
}