#include <iostream>
using namespace std;
int main()
{
         int m1,m2, m3;
         int totalmarks;
         float percentage;
         char g1,g2,g3;
         //input marks
         cout<<"enter marks of subject 1:";
         cin>>m1;
         cout<<"enter marks of subject 2:";
         cin>>m2;
         cout<<"enter marks of subject 3:";
         cin>>m3;
         //calculate total and percentage
         totalmarks = m1+m2+m3;
         percentage = (totalmarks/300.0)*100;
         //drade for subject 1
         if(m1>=90)
         {
              g1='A';
         }
         else if(m1>=80)
         {
              g1='B';
         }
         else if(m1>=70)
         {
              g1='C';
         } 
         else if(m1>=60)
        {     
              g1='D';
        }  
        else
        {      g1='F';
        }
        
        
        
        //grade for subject 2
        if (m2>=90)
        {
             g2='A';
         }
        else if(m2>=80)
        {
             g2='B';
        }
        else if(m2>=70)
        {
             g2='C';
        }
        else if(m2>=60)
        {
             g2='D';
        }
        else
        {
            g2='F';
        }
        
        
        //grade for subject 3
        if( m3>=90)
        {
             g3='A';
        }
        else if(m3>=80)
        {
             g3='B';
        }
        else if(m3>=70) 
        {
             g3='C';
        }
        else if(m3>=60)
        {
             g3='D';
        }
        else
        {  
            g3='F';
        }
        
        
        
        //display result
        cout<<"\nTotal marks:"<<totalmarks;
        cout<<"\npercentage:"<<percentage ;
        cout<<"\nGrade subject 1:"<<g1;
        cout<<"\nGrade subject 2:"<<g2;
        cout<<"\nGrade subject 3:"<<g3;
        
        
        //scholarship eligibility
        if((g1=='A' && g2=='A' && g3=='A')&&(totalmarks>=270))
        {
           cout<<"\nScholarship:Merit scholarship" << endl;
           }
       else if((g1=='A'||g1=='B') && (g2=='A'||g2=='B') && (g3=='A'||g3=='B') && (totalmarks>=240))
       {
	    cout<<"\nScholarship:Regular Scholarship" << endl;
       }
       else
       {cout<<"\nScholarship:Not Eligible " << endl;
       }
       return(0);
       } 
           
                 
             
        
             
        
        

                  
                      
         
         
         
