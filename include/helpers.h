#ifndef HELPERS_H
#define HELPERS_H

#include "STL_util.h"
#include <fstream>
#include <filesystem>

int    get_new_state(const unordered_set<int>    & states);
string get_new_state(const unordered_set<string> & states);
char   get_new_state(const unordered_set<char>   & states);

/* template <typename V, typename S> */
/*     void print_graph(const pair<T, S> & t, const unordered_set<S> & s) */
/* { */
/*     for (const auto & p:s) */
/*     { */
/*         f << '\t' << t << ; */
/*     } */
/* } */

/* template <typename V, typename S> */
/*     void print_graph(const unordered_set<V, T> & graph) */
/* { */
/*     std::ostream f; */
/*     f.open("graph/graph.dot"); */
/*     for (const auto & [first, second]: graph) */
/*     { */
/*         print_graph(first, second); */
/*     } */
/* } */

#endif
