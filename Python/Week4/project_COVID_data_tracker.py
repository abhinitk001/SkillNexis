
import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("daily-new-confirmed-covid-19-deaths-per-million-people.csv")

print("First 5 rows:")
print(df.head())

df["Day"] = pd.to_datetime(df["Day"])

top_5 = (
    df.groupby("Entity")["New deaths (per 1M)"]
    .max()
    .sort_values(ascending=False)
    .head(5)
)

print("\nTop 5 countries by highest daily deaths per million:")
print(top_5)

plt.figure(figsize=(10, 6))
top_5.plot(kind="bar")

plt.title("Top 5 Countries by Peak Daily COVID-19 Deaths per Million")
plt.xlabel("Country")
plt.ylabel("New deaths per million people")
plt.xticks(rotation=30)
plt.tight_layout()
plt.show()
