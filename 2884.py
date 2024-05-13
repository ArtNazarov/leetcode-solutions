import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
      employees['salary'] = employees['salary'].apply(lambda s : 2 * s)
      return employees
    
