#include "cell_grid.h"

#include <stdio.h>
#include <stdlib.h>

/*
 * Input:
 *      int numRows, number of rows for new CellGrid
 *      int numCols, number of cols for new CellGrid
 * Output:
 *      A CellGrid* pointing to a newly allocated CellGrid
 * Summary:
 *      Allocates a new CellGrid with numRows rows and
 *      numCols cols and returns a pointer to it
 */
CellGrid* CellGrid_Create(int numRows, int numCols) {
    // TODO: complete this function
    CellGrid * result = malloc(sizeof(CellGrid));
    result->cell = malloc(sizeof(Cell*) * numRows);
    for(int i = 0; i < numRows; i++){
        result->grid[i] = malloc(sizeof(Cell) * numCols);
        }
    }
    //add cell struct allocation loops
    return result;
}

/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid to delete
 * Summary:
 *      De-allocates G, including grid, row by row
 */
void CellGrid_Delete(CellGrid* G) {
    // TODO: complete this function
}
//delete the columns
//rows
//then struct


/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid to delete
 *      int row, an index for a row of *M
 *      int col, an index for a column of *M
 * Output:
 *      The CellState in location row, col
 */
CellState CellGrid_GetState(const CellGrid* G, int row, int col) {
    // TODO: complete this function
}

/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid to update
 *      Cell C, the cell to set in G
 * Summary:
 *      Updates the (C.x, C.y) entry of G to be C
 */
void CellGrid_SetCell(CellGrid* G, Cell C) {
    // TODO: complete this function
}

/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid to update
 *      int row, an index for a row of *M
 *      int col, an index for a column of *M
 * Summary:
 *      Updates the (row,col) entry of G
 */
void CellGrid_Update(CellGrid* G, int row, int col) {
    if (!CellGrid_Inbounds(G, row, col)) {
        printf("Error in CellGrid_Update: index out of bounds\n");
        exit(0);
    }
    Cell_NextState(&(G->grid[row][col]));
    return;
}

/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid
 *      int row, an index for a row of *G
 *      int col, an index for a column of *G
 * Summary:
 *      Checks if (row,col) is a Cell in G
 */
bool CellGrid_Inbounds(const CellGrid* G, int row, int col) {
    // TODO: complete this function
}

/*
 * Input:
 *      CellGrid* G, a pointer to a CellGrid to print
 *      FILE* fp, a file opened for writing
 * Summary:
 *      Prints entries of the CellGrid pointed to by G
 *      as O's for ONs and # for DYINGs
 */
void CellGrid_Print(const CellGrid* G, FILE* fp) {
    // TODO: complete this function
}
