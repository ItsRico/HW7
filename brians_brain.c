#include "brians_brain.h"

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "cell_grid.h"
#include "cell.h"

/*
 * Input:
 *      int numRows, the number of rows in the game
 *      int numCols, the number of cols in the game
 * Output:
 *      Returns a CellGrid* that corresponds to the
 *      first generation game state
 * Summary:
 *      Returns the game state of the first generation
 */
CellGrid* FirstGeneration(int numRows, int numCols, List* seedCells) {
    CellGrid* result = CellGrid_Create(numRows, numCols);
    ListNode* currentNode;
    for (currentNode = seedCells->head; currentNode != NULL; currentNode = currentNode->next) {
        CellGrid_SetCell(result, currentNode->data);
    }
    return result;
}

/*
 * Input:
 *      CellGrid* generation, a pointer to a game state
 * Output:
 *      Returns a CellGrid*, a pointer to a game state
 * Summary:
 *      Calculates the game state of the generation directly
 *      after *generation and returns it
 */

CellGrid* NextGeneration(CellGrid* generation) {
    // TODO: complete this function
}

/*
 * Input:
 *      CellGrid* generation, a pointer to a game state
 *      Cell coord, a Cell of the game state
 * Output:
 *      Returns true if the Cell is CellIsOn
 * Summary:
 *      Checks if coord is a valid index of *generation and
 *      its corresponding Cell is CellIsOn
 */
bool CellIsOn(CellGrid* generation, int row, int col) {
    if (!CellGrid_Inbounds(generation, row, col)) {
        printf("CellIsOn Error: invalid Cell\n");
        exit(0);
    }
    return generation->grid[row][col].s == ON;
}

/*
 * Input:
 *      Cell coord, a Cell of the game state
 *      CellGrid* generation, a pointer to a game state
 * Output:
 *      Returns a List* to a List of neighboring Cells
 * Summary:
 *      Calculates neighboring Cells of *generation at coord and
 *      returns them as a List
 */
List* GetNeighboringCells(Cell cell, CellGrid* generation) {
    // TODO: complete this function
    // Hint: Use List_Create to instantiate the list and List_PushFront to add elements to the list
}

/*
 * Input:
 *      CellGrid* generation, a pointer to a game state
 *      List* neighbors, a List of neighbors of a Cell
 * Output:
 *      Returns the number of neighboring Cells that are on
 * Summary:
 *      Counts the number of Cells in *neighbors that
 *      correspond to live Cells in *generation
 */
int CountOnNeighborCells(CellGrid* generation, List* neighbors) {
    ListNode* ptr;
    int result = 0;
    if (generation == NULL || neighbors == NULL) {
        printf("Error in CountOnNeighborCells: NULL parameter passed\n");
        exit(0);
    }
    for (ptr = neighbors->head; ptr != NULL; ptr = ptr->next) {
        if (Cell_IsOn(ptr->data)) {
            result++;
        }
    }
    return result;
}
