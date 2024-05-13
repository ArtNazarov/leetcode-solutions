import pandas as pd
# using head
def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.head(3)
