import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    columns = ["student_id","age"]

    return pd.DataFrame(data=student_data, columns=columns)