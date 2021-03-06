#ifndef CONFIG_H
#define CONFIG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

struct time_level {
    char time_start[16];
    char time_end[16];
};

struct user_config {
    char _username[64];
    char _password[64];
    char _start_tour_date[32];
    char _from_station_name[16];
    char _to_station_name[16];
    char _from_station_telecode[8];
    char _to_station_telecode[8];
    int _query_ticket_interval;
    int _max_queue_count;
    int _block_time;
    struct time_level _t_level[16];
    char _prefer_train_type[32][8];
    char _prefer_train_no[256][16];
    char _prefer_seat_type[16][8];
    char _prefer_seat_type_all[32];
    char _use_cdn_server_file[64];
    char _passenger_name[8][16];
    char _choose_seats[8][8];
    long _passenger_count;
    char _mail_username[64];
    char _mail_password[64];
    char _mail_server[64];
};

int load_config(struct user_config *, const char *);
int parse_config(struct user_config *, const char *);
int set_config_info(struct user_config *, const char *, const char *);
void print_config(struct user_config *);
#endif
