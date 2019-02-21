#pragma once
#include "rational.h"
#include <vector>

int mgauss(vector<vector<rational> >);//Возвращает ранг матрицы, приводит матрицу к ступенчатому виду
void Show_matr(vector<vector<rational> >);// Выводит матрицу на экран
void show_res(vector<vector<rational> >);// Решение СЛАУ

int mj_gauss(vector<vector<rational> >);//Возвращает ранг матрицы, приводит матрицу к простейшему виду