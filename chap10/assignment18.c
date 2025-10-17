/* ���ϸ�: assignment18.c (���̵� 3)
 * ����: SONG ����ü �迭�� �̿��� �÷��̸���Ʈ ���� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.10.01
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
        {"�� ���� ����", "����", "ballad", 240.5},
        {"How Long", "Charlie Puth", "pop", 198.2},
        {"It��s Fine", "������", "hip-hop", 203.6},
        {"�Ƴ���", "MINO", "hip-hop", 198.8},
        {"Awake", "��ź�ҳ��", "hip-hop", 204.3},
        {"����", "��ź�ҳ��", "ballad", 248.1},
        {"I", "�¿�", "pop", 223.3},
        {"Way Back Home", "��", "pop", 200.6}
    };

    SONG* playlist[MAX_PLAYLIST] = { NULL };
    int playlistCount = 0;
    int songIndex;

    while (playlistCount < MAX_PLAYLIST) {
        showSongs(songs, MAX_SONGS);

        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &songIndex);

        if (songIndex < 1 || songIndex > MAX_SONGS) {
            printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���.\n");
            continue;
        }

        addToPlaylist(playlist, songs, &playlistCount, songIndex - 1);
        showPlaylist(playlist, playlistCount);
        printf("�� ����ð�: %.1f��\n\n", totalPlaytime(playlist, playlistCount));
    }

    printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
    return 0;
}

void showSongs(SONG songs[], int count) {
    printf("=== ��ü �� ��� ===\n");
    for (int i = 0; i < count; i++) {
        printf("%2d. %s - %s [%s] %.1f��\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].playtime);
    }
}

void addToPlaylist(SONG* playlist[MAX_PLAYLIST], SONG songs[], int* playlistCount, int songIndex) {
    if (*playlistCount >= MAX_PLAYLIST) {
        printf("�� �̻� �߰��� �� �����ϴ�.\n");
        return;
    }
    playlist[*playlistCount] = &songs[songIndex];
    (*playlistCount)++;
}

void showPlaylist(SONG* playlist[MAX_PLAYLIST], int playlistCount) {
    printf("=== �÷��̸���Ʈ ===\n");
    for (int i = 0; i < playlistCount; i++) {
        printf("%2d. %s - %s [%s] %.1f��\n",
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