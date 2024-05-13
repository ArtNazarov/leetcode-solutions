import pandas as pd
import types

def getDataframeSize(players: pd.DataFrame) -> List[int]:
        return [players.shape[0], players.shape[1]]
