# Search

In this project a search engine is implemented. The input is the text, the search query and the result_size number. In this project the result_size of the lines from the text are returned in descending order of relevance. If two lines have the same relevance, they are returned in the same order in which they occur in the text. If there are less than result_size relevant (with relevance > 0) rows, then as many relevant rows as could be found are returned.

# Algorithm
The measure of relevance will be the sum of TF-IDF for unique words included in the query. A document is a string, a collection of documents is a set of lines of text.


The algorithm is not case-sensitive. A word is considered to be the maximum continuous sequence of characters that satisfies the criterionstd::isalpha(). Lines in the text that do not contain words are ignored.


# Realisation
In this projects class `SearchEngine` is realised.

Class has such methods:
- `BuildIndex` - processes the text and build an index on it
- `Search` - searches for relevant strings

A typical application pattern is sparse indexing and frequent `Search` queries.

