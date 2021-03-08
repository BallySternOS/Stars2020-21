
#define LIGHTS_ROWS 27
#define LIGHTS_COLS 16
#define NUM_STARS_LIGHTS        28


#define SPECIAL_PURPLE_STAR     0
#define SPECIAL_GREEN_STAR      1
#define SPECIAL_YELLOW_STAR     2     
#define SPECIAL_WHITE_STAR      3
#define SPECIAL_AMBER_STAR      4
#define D1K_BONUS               8
#define D2K_BONUS               9
#define D3K_BONUS               10
#define D4K_BONUS               11
#define D5K_BONUS               12
#define D6K_BONUS               13
#define D7K_BONUS               14
#define D8K_BONUS               15
#define D9K_BONUS               16
#define D10K_BONUS              17
#define STAR_PURPLE             20
#define STAR_WHITE              21
#define STAR_GREEN              22
#define STAR_AMBER              23
#define STAR_YELLOW             24
#define D2_ADVANCE_BONUS        28
#define OUT_LANES               29
#define IN_LANES                33
#define DOUBLE_BONUS_FEATURE    36
#define TRIPLE_BONUS_FEATURE    37
#define WOW                     38
#define SPECIAL_FEATURE         39
#define SHOOT_AGAIN             40
#define MATCH                   41
#define D7000_RIGHT             42
#define D7000_LEFT              43
#define D400_1_SPINNER          44
#define D400_2_SPINNER          45
#define DOUBLE_BONUS            46
#define TRIPLE_BONUS            47
#define BALL_IN_PLAY            48
#define HIGHEST_SCORE           49
#define GAME_OVER               50
#define TILT                    51
#define PLAYER_1                52
#define PLAYER_2                53
#define PLAYER_3                54
#define PLAYER_4                55
#define PLAYER_1_UP             56
#define PLAYER_2_UP             57
#define PLAYER_3_UP             58
#define PLAYER_4_UP             59

struct PlayfieldLight {
  byte lightNum;
  byte row;
};


struct PlayfieldLight StarsLights[] = {
    {SPECIAL_PURPLE_STAR, 14},
    {SPECIAL_AMBER_STAR, 22},
    {D1K_BONUS, 3},
    {D5K_BONUS, 7},
    {D9K_BONUS, 11},
    {DOUBLE_BONUS_FEATURE, 17},
    {SHOOT_AGAIN, 1},
    {D400_1_SPINNER, 22},
    {SPECIAL_GREEN_STAR, 25},
    {D2K_BONUS, 4},
    {D6K_BONUS, 8},
    {D10K_BONUS, 12},
    {SPECIAL_WHITE_STAR, 25}, 
    {OUT_LANES, 7}, 
    {IN_LANES, 8},
    {TRIPLE_BONUS_FEATURE, 18},
    {D400_2_SPINNER, 21},
    {SPECIAL_YELLOW_STAR, 14},
    {D3K_BONUS, 5},
    {D7K_BONUS, 9},
    {WOW, 19},
    {D7000_RIGHT, 20},
    {DOUBLE_BONUS, 2},
    {D4K_BONUS, 6},
    {D8K_BONUS, 10},
    {SPECIAL_FEATURE, 17},
    {D7000_LEFT, 18},
    {TRIPLE_BONUS, 2}
};

#define NUM_STARS_SWITCHES  29


#define SW_LEFT_SPINNER   0
#define SW_LEFT_OUTLANE   3
#define SW_LEFT_INLANE    4
#define SW_CREDIT_RESET   5
#define SW_TILT           6
#define SW_OUTHOLE        7
#define SW_COIN_3         8
#define SW_COIN_2         9
#define SW_COIN_1         10
#define SW_RIGHT_OUTLANE  11
#define SW_RIGHT_INLANE   12
#define SW_ROLLOVER       14
#define SW_SLAM           15
#define SW_RIGHT_SPINNER  16
#define SW_STAR_5         19
#define SW_STAR_4         20
#define SW_STAR_3         21
#define SW_STAR_2         22
#define SW_STAR_1         23
#define SW_10_PTS         24
#define SW_DROP_TARGET_5  26
#define SW_DROP_TARGET_2  27
#define SW_DROP_TARGET_6  28
#define SW_DROP_TARGET_4  29
#define SW_DROP_TARGET_3  30
#define SW_DROP_TARGET_1  31
#define SW_RIGHT_SLING    35
#define SW_LEFT_SLING     36
#define SW_BUMPER         37

#define SOL_CHIME_10      0
#define SOL_CHIME_10000   1
#define SOL_CHIME_1000    2
#define SOL_CHIME_100     3
#define SOL_KNOCKER       5
#define SOL_OUTHOLE       6
#define SOL_DROP_TARGET_LEFT  8
#define SOL_DROP_TARGET_RIGHT 9
#define SOL_BUMPER        12
#define SOL_RIGHT_SLING   13
#define SOL_LEFT_SLING    14
//#define SOL_NONE          15
#define SOLCONT_FLIPPERS      0x80
#define SOLCONT_COIN_LOCKOUT  0x01

#define NUM_STARS_SWITCHES_WITH_TRIGGERS          3
#define NUM_STARS_PRIORITY_SWITCHES_WITH_TRIGGERS 3

struct PlayfieldAndCabinetSwitch StarsSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4},
  { SW_BUMPER, SOL_BUMPER, 3}
};




/* Light coordinates
 *  
 *  
218,866
484,342
558,868
352,335
518,503
423,1179
346,1164
423,1141
348,1122
423,1101
346,1084
423,1059
348,1042
421,1015
350,1000
197,914
354,375
507,379
547,541
581,912
388,896
119,1059
174,1042
312,770
354,732
402,692
386,776
384,1298
488,39
381,623
228,749
218,587
193,528
331,1248
436,1248
430,44
524,46
354,44
394,52
249,54
304,56
274,29
321,29
388,29
455,27
486,58
509,31
*/
