// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// GPC_cpp
List GPC_cpp(arma::mat endpoint, arma::mat censoring, std::vector< arma::uvec > indexC, std::vector< arma::uvec > posC, std::vector< arma::uvec > indexT, std::vector< arma::uvec > posT, std::vector< double > threshold, arma::vec weight, std::vector< int > method, unsigned int D, unsigned int n_strata, unsigned int n_TTE, int n_UTTE, arma::mat Wscheme, std::vector<int> index_endpoint, std::vector<int> index_censoring, std::vector<int> index_UTTE, std::vector<bool> reanalyzed, std::vector< std::vector< arma::mat > > list_survTimeC, std::vector< std::vector< arma::mat > > list_survTimeT, std::vector< std::vector< arma::mat > > list_survJumpC, std::vector< std::vector< arma::mat > > list_survJumpT, std::vector< arma::mat > list_lastSurv, arma::mat p_C, arma::mat p_T, std::vector< std::vector< arma::mat > > iid_survJumpC, std::vector< std::vector< arma::mat > > iid_survJumpT, int correctionUninf, bool hierarchical, int hprojection, bool neutralAsUninf, bool keepScore, bool reserve, int returnIID);
RcppExport SEXP _BuyseTest_GPC_cpp(SEXP endpointSEXP, SEXP censoringSEXP, SEXP indexCSEXP, SEXP posCSEXP, SEXP indexTSEXP, SEXP posTSEXP, SEXP thresholdSEXP, SEXP weightSEXP, SEXP methodSEXP, SEXP DSEXP, SEXP n_strataSEXP, SEXP n_TTESEXP, SEXP n_UTTESEXP, SEXP WschemeSEXP, SEXP index_endpointSEXP, SEXP index_censoringSEXP, SEXP index_UTTESEXP, SEXP reanalyzedSEXP, SEXP list_survTimeCSEXP, SEXP list_survTimeTSEXP, SEXP list_survJumpCSEXP, SEXP list_survJumpTSEXP, SEXP list_lastSurvSEXP, SEXP p_CSEXP, SEXP p_TSEXP, SEXP iid_survJumpCSEXP, SEXP iid_survJumpTSEXP, SEXP correctionUninfSEXP, SEXP hierarchicalSEXP, SEXP hprojectionSEXP, SEXP neutralAsUninfSEXP, SEXP keepScoreSEXP, SEXP reserveSEXP, SEXP returnIIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type endpoint(endpointSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type censoring(censoringSEXP);
    Rcpp::traits::input_parameter< std::vector< arma::uvec > >::type indexC(indexCSEXP);
    Rcpp::traits::input_parameter< std::vector< arma::uvec > >::type posC(posCSEXP);
    Rcpp::traits::input_parameter< std::vector< arma::uvec > >::type indexT(indexTSEXP);
    Rcpp::traits::input_parameter< std::vector< arma::uvec > >::type posT(posTSEXP);
    Rcpp::traits::input_parameter< std::vector< double > >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< std::vector< int > >::type method(methodSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type D(DSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_strata(n_strataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_TTE(n_TTESEXP);
    Rcpp::traits::input_parameter< int >::type n_UTTE(n_UTTESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wscheme(WschemeSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type index_endpoint(index_endpointSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type index_censoring(index_censoringSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type index_UTTE(index_UTTESEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type reanalyzed(reanalyzedSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type list_survTimeC(list_survTimeCSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type list_survTimeT(list_survTimeTSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type list_survJumpC(list_survJumpCSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type list_survJumpT(list_survJumpTSEXP);
    Rcpp::traits::input_parameter< std::vector< arma::mat > >::type list_lastSurv(list_lastSurvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type p_C(p_CSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type p_T(p_TSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type iid_survJumpC(iid_survJumpCSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector< arma::mat > > >::type iid_survJumpT(iid_survJumpTSEXP);
    Rcpp::traits::input_parameter< int >::type correctionUninf(correctionUninfSEXP);
    Rcpp::traits::input_parameter< bool >::type hierarchical(hierarchicalSEXP);
    Rcpp::traits::input_parameter< int >::type hprojection(hprojectionSEXP);
    Rcpp::traits::input_parameter< bool >::type neutralAsUninf(neutralAsUninfSEXP);
    Rcpp::traits::input_parameter< bool >::type keepScore(keepScoreSEXP);
    Rcpp::traits::input_parameter< bool >::type reserve(reserveSEXP);
    Rcpp::traits::input_parameter< int >::type returnIID(returnIIDSEXP);
    rcpp_result_gen = Rcpp::wrap(GPC_cpp(endpoint, censoring, indexC, posC, indexT, posT, threshold, weight, method, D, n_strata, n_TTE, n_UTTE, Wscheme, index_endpoint, index_censoring, index_UTTE, reanalyzed, list_survTimeC, list_survTimeT, list_survJumpC, list_survJumpT, list_lastSurv, p_C, p_T, iid_survJumpC, iid_survJumpT, correctionUninf, hierarchical, hprojection, neutralAsUninf, keepScore, reserve, returnIID));
    return rcpp_result_gen;
END_RCPP
}
// calcIntegralScore_cpp
std::vector< double > calcIntegralScore_cpp(const arma::mat& survival, double start, double lastSurv, double lastdSurv);
RcppExport SEXP _BuyseTest_calcIntegralScore_cpp(SEXP survivalSEXP, SEXP startSEXP, SEXP lastSurvSEXP, SEXP lastdSurvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type survival(survivalSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type lastSurv(lastSurvSEXP);
    Rcpp::traits::input_parameter< double >::type lastdSurv(lastdSurvSEXP);
    rcpp_result_gen = Rcpp::wrap(calcIntegralScore_cpp(survival, start, lastSurv, lastdSurv));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BuyseTest_GPC_cpp", (DL_FUNC) &_BuyseTest_GPC_cpp, 34},
    {"_BuyseTest_calcIntegralScore_cpp", (DL_FUNC) &_BuyseTest_calcIntegralScore_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_BuyseTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
