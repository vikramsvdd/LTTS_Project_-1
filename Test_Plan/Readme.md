# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | "Menu(1).Tic Tac Toe(2).player 1 (X) player 2 (O)(3)board(4)player 1 or 2(alternate fashion)Enter the choice | PASS | Scenario|
|  H_02|Initiation of the game |"1.The assigned player must first choose the position to place his symbol 2. Board gets updated and player 2 follows the same " | Questions|PASS|Requirement based |
|  H_03|Show Board | 1.Updates the marks on the board| 2.Displays the player appended with number who has own |SUCCESS|Requirement based |
| H_03_01| Draw| (1).Checking if the game draws | 2.Displays that the Game has been drawn | SUCCESS | Requirement based |
| H_04| Check if irrelevant positions are eliminated (other than 1 to 9) | 1.Say enter "ss" | 2.Displays Invalid option |SUCCESS| Scenario |



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|The game starts and the players have to interact with console to place their response| player's choice choice for the placing mark on given position| Qualified to Play| SUCCESS |Requirement based |
|  L_02|H_03|.|Game ends in win situation|shows the player coalesced with number who has own |SUCCESS|Requirement based|
|  L_02_01 |H_03|Game ends in drawsituation| Displays that the Game has been drawn | SUCCESS |Requirement based|
