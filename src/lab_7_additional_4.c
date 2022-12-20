#include <stdio.h>    
     
int main()    
{   
    int length;
    printf("Enter the Number of Elements : ");  
    scanf("%i",&length);    
    int element;
    int arr[length];
    for (int i=0;i<length;i++)
    {
        scanf("%i",&element);
        arr[i]=element;
    } 
    int fr[length];    
    int visited = -1;        
    for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;        
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("Frequency of %d is %d\n", arr[i],fr[i]);    
        }    
    }  
    return 0;    
}
