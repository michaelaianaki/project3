/**
 * ohhi.cpp
 * Project UID 5557cbe19b6ff413629a3743c503275413233136
 *
 * EECS 183
 * Project 3: 0h h1
 * Fall 2020
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the project here#>
 */

#include <iostream>
#include <cctype>
#include "utility.h"
#include "ohhi.h"

/**
 * --------------------------------------------------------
 * ---------- UTILITY FUNCTIONS ---------------------------
 * --------------------------------------------------------
 */

int count_unknown_squares(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // write your code here

    // replace this return statement
    return 0;
}


/**
 * --------------------------------------------------------
 * --------- VALIDITY CHECKING FUNCTIONS ------------------
 * --------------------------------------------------------
 */

bool row_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int row,
                                int color) {
    // write your code here

    // replace this return statement
    return false;
}

bool col_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int col,
                                int color) {
    // write your code here

    // replace this return statement
    return false;
}

bool board_has_no_threes(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // write your code here

    // replace this return statement
    return false;
}

bool rows_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int row1,
                        int row2) {
    // write your code here

    // replace this return statement
    return false;
}

bool cols_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int col1,
                        int col2) {
    // write your code here

    // replace this return statement
    return false;
}

bool board_has_no_duplicates(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // write your code here

    // replace this return statement
    return false;
}


/**
 * --------------------------------------------------------
 * ---------- SOLVING FUNCTIONS ---------------------------
 * --------------------------------------------------------
 */

void solve_three_in_a_row(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int row,
                          bool announce) {
    // write your code here

    return;
}

void solve_three_in_a_column(int board[MAX_SIZE][MAX_SIZE],
                             int size,
                             int col,
                             bool announce) {
    // write your code here

    return;
}


void solve_balance_row(int board[MAX_SIZE][MAX_SIZE],
                       int size,
                       int row,
                       bool announce) {
    // write your code here

    return;
}

void solve_balance_column(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int col,
                          bool announce) {
    // write your code here

    return;
}


/**
 * --------------------------------------------------------
 * ---------- GAMEPLAY FUNCTIONS --------------------------
 * --------------------------------------------------------
 */

bool board_is_solved(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // write your code here

    // replace this return statement
    return false;
}

bool check_valid_input(int size, int row_input, char col_input,
                       char color_char, int &row, int &col) {
    // write your code here

    // replace this return statement
    return false;
}

bool check_valid_move(const int original_board[MAX_SIZE][MAX_SIZE],
                      const int current_board[MAX_SIZE][MAX_SIZE],
                      int size, int row, int col, int color) {
    // write your code here

    // replace this return statement
    return false;
}
