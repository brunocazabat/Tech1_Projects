/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** flo.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>

typedef struct data_s
{
	sfRenderWindow *winrpg;
	sfEvent eventrpg;
	sfSprite *cspr;
	sfSprite *spr_space;
	sfSprite *spr_menu_pause;
	sfSprite *spr_res1;
	sfSprite *spr_opt1;
	sfSprite *spr_quit1;
	sfSprite *spr_back1;
	sfSprite *spr_sound1;
	sfSprite *spr_keyb;
	sfSprite *spr_map;
	sfSprite *spr_map_col;
	sfSprite *spr_combatbg;
	sfSprite *spr_textbox;
	sfSprite *spr_sound;
	sfSprite *spr_combbox1;
	sfSprite *spr_attack1;
	sfSprite *spr_skills1;
	sfSprite *spr_object1;
	sfSprite *spr_flee1;
	sfSprite *spr_enemy1;
	sfSprite *spr_HB_fg;
	sfSprite *spr_HB_red;
	sfSprite *spr_E_HB_fg;
	sfSprite *spr_E_HB_red;
	sfSprite *spr_inventory;
	sfSprite *spr_stats;
	sfSprite *spr_bag;
	sfSprite *spr_exit;
	sfTexture *ctex;
	sfTexture *tex_space;
	sfTexture *tex_menu_pause;
	sfTexture *tex_res1;
	sfTexture *tex_opt1;
	sfTexture *tex_quit1;
	sfTexture *tex_back1;
	sfTexture *tex_sound1;
	sfTexture *tex_keyb;
	sfTexture *tex_map;
	sfTexture *tex_map_col;
	sfTexture *tex_combatbg;
	sfTexture *tex_textbox;
	sfTexture *tex_sound;
	sfTexture *tex_combbox;
	sfTexture *tex_attack1;
	sfTexture *tex_skills1;
	sfTexture *tex_object1;
	sfTexture *tex_flee1;
	sfTexture *tex_enemy1;
	sfTexture *tex_HB_fg;
	sfTexture *tex_HB_red;
	sfTexture *tex_E_HB_fg;
	sfTexture *tex_E_HB_red;
	sfTexture *tex_inventory;
	sfTexture *tex_stats;
	sfTexture *tex_bag;
	sfTexture *tex_exit;
	sfVector2f pos_default;
	sfVector2f pos_space;
	sfVector2f cpos;
	sfVector2f cpos_combat;
	sfVector2f pos_res;
	sfVector2f pos_opt;
	sfVector2f pos_quit;
	sfVector2f pos_back;
	sfVector2f pos_sound;
	sfVector2f pos_keyb;
	sfVector2f pos_map;
	sfVector2f pos_text_Left;
	sfVector2f pos_text_Right;
	sfVector2f pos_text_Up;
	sfVector2f pos_text_Down;
	sfVector2f pos_text_textbox;
	sfVector2f pos_textbox;
	sfVector2f pos_sound_stat;
	sfVector2f pos_attack;
	sfVector2f pos_skills;
	sfVector2f pos_object;
	sfVector2f pos_flee;
	sfVector2f pos_enemy;
	sfVector2f pos_HB;
	sfVector2f pos_E_HB;
	sfVector2f pos_E_HB_red;
	sfVector2f pos_inventory;
	sfVector2f pos_stats;
	sfVector2f pos_text_stats;
	sfVector2f pos_bag;
	sfVector2f pos_exit;
	sfVector2f pos_mylvl;
	sfVector2f pos_enlvl;
	sfIntRect crect;
	sfIntRect rect_sound;
	sfIntRect rect_enemy;
	sfIntRect rect_HB;
	sfIntRect rect_E_HB;
	sfClock* clock;
	sfClock* clock2;
	sfTime time;
	sfTime time2;
	sfTime delay;
	float seconds;
	sfVector2f scalex2;
	sfVector2f scalex5;
	sfVector2f scalex1v5;
	int menu_stat;
	int opt_stat;
	int hist_stat;
	int sound_stat;
	int combat_stat;
	int inv_stat;
	int turn;
	sfImage *image;
	sfColor colorTL1;
	sfColor colorTL2;
	sfColor colorTR1;
	sfColor colorTR2;
	sfColor colorDL1;
	sfColor colorDL2;
	sfColor colorDR1;
	sfColor colorDR2;
	sfColor colorDM;
	sfColor colorTM;
	sfKeyCode K_Left;
	sfKeyCode K_Right;
	sfKeyCode K_Up;
	sfKeyCode K_Down;
	sfText *text_Left;
	sfText *text_Right;
	sfText *text_Up;
	sfText *text_Down;
	sfText *text_textbox;
	sfText *text_stats;	
	sfText *text_mylvl;
	sfText *text_enlvl;
	sfFont *font;
	sfFont *font2;
	char char_Left;
	char char_Right;
	char char_Up;
	char char_Down;
	char *str_keyLeft;
	char *str_keyRight;
	char *str_keyUp;
	char *str_keyDown;
	sfMusic *mus_ambiance1;
	sfMusic *mus_combat1;
	sfMusic *mus_ambiance2;
	sfMusic *mus_alert;
	sfMusic *mus_attacked;
	int my_lvl;
	int xp;
	int max_xp;
	int my_hp;
	int my_atk;
	int my_def;
	int map_lvl;
	int enemy_lvl;
	int enemy_hp;
	int enemy_atk;
	int enemy_def;
	int aggro;
	int second;
} data_t;

char	*get_dialogue(char *path);
void	rpg_main_win(void);
void	eventclose(data_t *d);
void	close_game(data_t *d);
void	dialog(data_t *d, char *num_dialog);
char	*my_strcat(char *str1, char const *str2);
void	scenario(data_t *d);
void	sprite_mov(data_t *d);
void	fct_map(data_t *d);
void	pause_menu(data_t *d);
void	set_var(data_t *d);
void	set_tex_rpg(data_t *d);
void	set_spr_rpg(data_t *d);
void	set_textString(data_t *d);
void	fct_sound(data_t *d);
void	bind_key(data_t *d);
void	change_opt_stat(data_t *d);
void	check_opt_fct(data_t *d);
void	option_menu(data_t *d);
void	combat(data_t *d);
FILE	*get_file(char *name);
int	get_fd(char *name);
int	save_party(data_t *d, char *name);
int	load_save(data_t *d, char *name);
void	inventory_check(data_t *d);
char	*set_str_specialkey(sfKeyCode key);
void	check_opt_fct3(data_t *d);
char	*save_cat(data_t *d);
int	my_strlen(char const *str);
void	update_player_stat(data_t *d);
void	anim_spr(data_t *d);
char	*my_itoa(int nb);
