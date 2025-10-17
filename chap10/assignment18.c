/* 파일명: assignment18.c (난이도 3)
 * 내용: SONG 구조체 배열을 이용한 플레이리스트 관리 프로그램
 * 작성자: 나현아
 * 날짜: 2025.10.01
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10
#define MAX_PLAYLIST 5

typedef struct {
    char title[50];
    char artist[50];
    char genre[20];
    float playtime;
} SONG;

void showSongs(SONG songs[], int count);
void addToPlaylist(SONG* playlist[MAX_PLAYLIST], SONG songs[], int* playlistCount, int songIndex);
void showPlaylist(SONG* playlist[MAX_PLAYLIST], int playlistCount);
float totalPlaytime(SONG* playlist[MAX_PLAYLIST], int playlistCount);

int main(void) {
    SONG songs[MAX_SONGS] = {
        {"thank u, next", "Ariana Grande", "pop", 288.0},
        {"Attention", "Charlie Puth", "pop", 211.2},
        {"별 보러 가자", "적재", "ballad", 240.5},
        {"How Long", "Charlie Puth", "pop", 198.2},
        {"It’s Fine", "헤이즈", "hip-hop", 203.6},
        {"아낙네", "MINO", "hip-hop", 198.8},
        {"Awake", "방탄소년단", "hip-hop", 204.3},
        {"봄날", "방탄소년단", "ballad", 248.1},
        {"I", "태연", "pop", 223.3},
        {"Way Back Home", "숀", "pop", 200.6}
    };

    SONG* playlist[MAX_PLAYLIST] = { NULL };
    int playlistCount = 0;
    int songIndex;

    while (playlistCount < MAX_PLAYLIST) {
        showSongs(songs, MAX_SONGS);

        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &songIndex);

        if (songIndex < 1 || songIndex > MAX_SONGS) {
            printf("잘못된 번호입니다. 다시 입력하세요.\n");
            continue;
        }

        addToPlaylist(playlist, songs, &playlistCount, songIndex - 1);
        showPlaylist(playlist, playlistCount);
        printf("총 재생시간: %.1f초\n\n", totalPlaytime(playlist, playlistCount));
    }

    printf("플레이리스트가 가득 찼습니다.\n");
    return 0;
}

void showSongs(SONG songs[], int count) {
    printf("=== 전체 곡 목록 ===\n");
    for (int i = 0; i < count; i++) {
        printf("%2d. %s - %s [%s] %.1f초\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
    }
}

void addToPlaylist(SONG* playlist[MAX_PLAYLIST], SONG songs[], int* playlistCount, int songIndex) {
    if (*playlistCount >= MAX_PLAYLIST) {
        printf("더 이상 추가할 수 없습니다.\n");
        return;
    }
    playlist[*playlistCount] = &songs[songIndex];
    (*playlistCount)++;
}

void showPlaylist(SONG* playlist[MAX_PLAYLIST], int playlistCount) {
    printf("=== 플레이리스트 ===\n");
    for (int i = 0; i < playlistCount; i++) {
        printf("%2d. %s - %s [%s] %.1f초\n",
            i + 1,
            playlist[i]->title,
            playlist[i]->artist,
            playlist[i]->genre,
            playlist[i]->playtime);
    }
}

float totalPlaytime(SONG* playlist[MAX_PLAYLIST], int playlistCount) {
    float total = 0.0;
    for (int i = 0; i < playlistCount; i++) {
        total += playlist[i]->playtime;
    }
    return total;
}