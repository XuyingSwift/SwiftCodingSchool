# Our goal is to build a machine learning model that can learn from the measurements of these irises whose species is known,
# so that we can predict the species for a new iris.

# Becasue we have measurement for which we know the correct species of iris, this is a supervised learning problem
# we want to predict one of several options, this is a three-class classification problem.

from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
import pandas as pd
from sklearn.neighbors import KNeighborsClassifier
import numpy as np

iris_dataset = load_iris()

print("Key of iris_dataset:\n", iris_dataset.keys())
print(iris_dataset['DESCR'][:193] + "\n...")
print("Target names:", iris_dataset['target_names'])

print("Feature names:\n", iris_dataset['feature_names'])
print("Type of data:", type[iris_dataset['data']])
print("shape of data:", iris_dataset['data'].shape)
print("First five rows of data:\n", iris_dataset['data'][:5])
print("type of targe:", type(iris_dataset['target']))

print("Shape of target:", iris_dataset['target'].shape)
print("Target:\n", iris_dataset['target'])
print("0 means setosa, 1 means versicolor and 2 means virginica")
X_train, X_test, y_train, y_test = train_test_split(iris_dataset['data'], iris_dataset['target'], random_state=0)
print("X_train shape:", X_train.shape)
print("y_train shape:", y_train.shape)
print("X_test shape: ", X_test.shape)
print("y_test shape: ", y_test.shape)

knn = KNeighborsClassifier(n_neighbors=1)
knn.fit(X_train, y_train)
X_new = np.array([[5, 2.9, 1, 0.2]])
print("X_new.shape:", X_new.shape)
prediction = knn.predict(X_new)
print("Prediction:", prediction)
print("Predicted target name:", iris_dataset['target_names'][prediction])

y_pred = knn.predict(X_test)
print("Test set predictions:\n", y_pred)
print("Test set socre: {:.2f}".format(np.mean(y_pred == y_test)))
print("Test set score: {:.2f}".format(knn.score(X_test, y_test)))