#pragma once

#include <string_view>
#include <vector>
#include <unordered_map>

struct Searchstring {
    std::string_view str;
    double relev = 0.0;
};

class SearchEngine {
public:
    void BuildIndex(std::string_view text);
    std::vector<std::string_view> Search(std::string_view query, size_t results_count) const;

private:
    size_t number_of_docs_;
    std::vector<std::string_view> vec_of_strings_;
    std::vector<std::string_view> SplittedIntoStrings(std::string_view s) const;
    std::vector<std::string_view> SplittedIntoWords(std::string_view s) const;
    bool Equality(std::string_view s1, std::string_view s2) const;
    double Tf(std::vector<std::string_view> vecst, std::string_view s) const;
    bool IsInTheString(std::vector<std::string_view> vdocst, std::string_view s) const;
    double Idf(std::string_view s) const;
    static bool Cmp(const Searchstring& sr1, const Searchstring& sr2) {
        return sr1.relev > sr2.relev;
    };
};
