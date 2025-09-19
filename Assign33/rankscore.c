

void update_score_board(int p1, int p2, int result, int score_board[][4])
{
  score_board[p1][p2] = result;
  score_board[p2][p1] = 2 - result;
}

void display_score_board(int score_board[][4])
{
  int i, j;
  printf("\nScore_Board\n");
  for (i = 0; i <= 3; i++)
    for (j = 0; j <= 3; j++)
    {
      printf("%d ", score_board[i][j]);
    }
  printf("\n");
}

int get_player_score(int player, int score_board[][4])
{
  int i, sum = 0;
  for (i = 0; i <= 3; i++)
  {
    sum = sum + score_board[player][i];
  }
  return sum;
}

int find_winner(int score_board[][4])
{
  int score, player = 0, s1, winner;
  score = get_player_score(player, score_board);
  for (player = 0; player <= 3; player++)
  {
    s1 = s1 + get_player_score(player, score_board);
    if (score < s1)
    {
      winner = player;
      score = s1;
    }
  }
  return winner;
}

void sort(int a[], int n, int player_index[])
{
  int r, i, t;
  for (r = 1; r <= n - 1; r++)
    for (i = 0; i <= n - r - 1; i++)
    {
      if (a[i] < a[i + 1])
      {
        t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
        t = player_index[i];
        player_index[i] = player_index[i + 1];
        player_index[i + 1] = t;
      }
    }
}

void show_rank(int score_board[][4])
{
  int player_score[4], player_index[4], scores[4];
  int i;
  for (i = 0; i <= 3; i++)
  {
    player_score[i] = get_player_score(i, score_board);
    scores[i] = player_score[i];
    player_index[i] = i;
  }
  sort(scores, 4, player_index);
  for (i = 0; i <= 3; i++)
  {
    printf("%d). %d  - Score %d\n", i + 1, player_index[i], scores[i]);
  }
}

void run_game()
{
  int score_board[4][4] = {0};
  update_score_board(0, 1, 2, score_board);
  update_score_board(0, 2, 1, score_board);
  update_score_board(0, 3, 2, score_board);
  update_score_board(1, 2, 1, score_board);
  update_score_board(1, 3, 0, score_board);
  update_score_board(2, 3, 0, score_board);
  show_rank(score_board);
}

#include <stdio.h>
int main()
{
  run_game();
  printf("\n");
  return 0;
}