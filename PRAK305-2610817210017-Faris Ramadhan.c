#include <stdio.h>

int main(){

    int sec_per_minute = 60;
    int sec_per_hour = 60 * 60;
    int sec_per_day = 24 * 60 * 60;

    int sec;
    scanf("%d", &sec);

    int day, hour, minute, remain_sec, final_sec;
    char time[10];
        
    if (sec < 0) {
        printf("Waktu tidak valid\n");
    }
    else {
        day = sec / sec_per_day;
        remain_sec = sec % sec_per_day;

        hour = remain_sec / sec_per_hour;
        remain_sec = sec % sec_per_hour;

        minute = remain_sec / sec_per_minute;
        final_sec = remain_sec % sec_per_minute;
    }
    
    sprintf(time, "%02d:%02d:%02d", hour, minute, final_sec);
    
    if (day > 0){
        printf("%d hari %s\n", day, time);
    }
    else {
        printf("%s\n", time);
    }
    return 0;
}