// GenerateGame(GameLevel level) method generates the new game. The code of levels are as follows .

public void GenerateGame(GameLevel level)
{
    // This first creates answer set by using Game combinations
    InitialiseSet();
    int minPos,maxPos,noOfSets;
     
    // Now unmask positions and create problem set.
    switch(level)
    {    
        case GameLevel.SIMPLE:
            minPos=4;
            maxPos=6;
            noOfSets=8;
            UnMask(minPos,maxPos,noOfSets);
            break;
        case GameLevel.MEDIUM:
            minPos=3;
            maxPos=5;
            noOfSets= 7;
            UnMask(minPos,maxPos,noOfSets);
            break;
        case GameLevel.COMPLEX:
             minPos=3;
             maxPos=5;
            noOfSets = 6;
            UnMask(minPos,maxPos,noOfSets);
             break;
        default:
             UnMask(3,6,7);
              break;
    }
