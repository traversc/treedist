// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "treedist_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// c_td_prefix_tree
Rcpp::XPtr<SeqNode> c_td_prefix_tree(const std::vector<std::string>& sequences);
RcppExport SEXP _treedist_c_td_prefix_tree(SEXP sequencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type sequences(sequencesSEXP);
    rcpp_result_gen = Rcpp::wrap(c_td_prefix_tree(sequences));
    return rcpp_result_gen;
END_RCPP
}
// c_td_suffix_tree
Rcpp::XPtr<SeqNode> c_td_suffix_tree(const std::vector<std::string>& sequences, size_t min_length);
RcppExport SEXP _treedist_c_td_suffix_tree(SEXP sequencesSEXP, SEXP min_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< size_t >::type min_length(min_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(c_td_suffix_tree(sequences, min_length));
    return rcpp_result_gen;
END_RCPP
}
// c_td_hamming
DataFrame c_td_hamming(Rcpp::XPtr<SeqNode> tree, const std::vector<std::string>& sequences, const int max_distance, const bool symmetric, const int nthreads);
RcppExport SEXP _treedist_c_td_hamming(SEXP treeSEXP, SEXP sequencesSEXP, SEXP max_distanceSEXP, SEXP symmetricSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<SeqNode> >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< const int >::type max_distance(max_distanceSEXP);
    Rcpp::traits::input_parameter< const bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_td_hamming(tree, sequences, max_distance, symmetric, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// c_td_levenshtein
DataFrame c_td_levenshtein(Rcpp::XPtr<SeqNode> tree, const std::vector<std::string>& sequences, const int max_distance, const bool symmetric, const int nthreads);
RcppExport SEXP _treedist_c_td_levenshtein(SEXP treeSEXP, SEXP sequencesSEXP, SEXP max_distanceSEXP, SEXP symmetricSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<SeqNode> >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< const int >::type max_distance(max_distanceSEXP);
    Rcpp::traits::input_parameter< const bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_td_levenshtein(tree, sequences, max_distance, symmetric, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// c_td_partial_hamming
DataFrame c_td_partial_hamming(Rcpp::XPtr<SeqNode> tree, const std::vector<std::string>& sequences, const int max_distance, const bool symmetric, const int nthreads);
RcppExport SEXP _treedist_c_td_partial_hamming(SEXP treeSEXP, SEXP sequencesSEXP, SEXP max_distanceSEXP, SEXP symmetricSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<SeqNode> >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< const int >::type max_distance(max_distanceSEXP);
    Rcpp::traits::input_parameter< const bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_td_partial_hamming(tree, sequences, max_distance, symmetric, nthreads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treedist_c_td_prefix_tree", (DL_FUNC) &_treedist_c_td_prefix_tree, 1},
    {"_treedist_c_td_suffix_tree", (DL_FUNC) &_treedist_c_td_suffix_tree, 2},
    {"_treedist_c_td_hamming", (DL_FUNC) &_treedist_c_td_hamming, 5},
    {"_treedist_c_td_levenshtein", (DL_FUNC) &_treedist_c_td_levenshtein, 5},
    {"_treedist_c_td_partial_hamming", (DL_FUNC) &_treedist_c_td_partial_hamming, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_treedist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}