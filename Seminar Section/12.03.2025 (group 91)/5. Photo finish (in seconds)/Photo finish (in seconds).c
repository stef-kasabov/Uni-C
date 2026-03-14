#include <stdio.h>

/*
5.	Трима спортни състезатели финишират за някакъв брой секунди (между 1 и 50). Да се напише програма, която чете времената на състезателите, въведени от 
потребителя, и пресмята сумарното им време във формат "минути:секунди". Секундите да се изведат с водеща нула (2 🡪 "02", 7 🡪 "07", 35 🡪 "35"). 

Примери:
вход	изход						
35
45
44	    2:04	

вход	изход
22
7
34	    1:03	

вход	изход
50
50
49	    2:29	

вход	изход
14
12
10	    0:36
*/

int main() 
{
    int time1, time2, time3;
    printf("Enter the times of the three athletes (between 1 and 50 seconds):\n");
    scanf("%d %d %d", &time1, &time2, &time3);
    
    int totalSeconds = time1 + time2 + time3;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    
    printf("Total time: %d:%02d\n", minutes, seconds);
    
    return 0;
}