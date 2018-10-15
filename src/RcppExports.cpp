// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// GPC_cpp
List GPC_cpp(const arma::mat& Control, const arma::mat& Treatment, const NumericVector& threshold, const IntegerVector& method, const arma::mat& delta_Control, const arma::mat& delta_Treatment, const int D, const std::vector< arma::uvec >& strataC, const std::vector< arma::uvec >& strataT, const int n_strata, const int n_TTE, const arma::mat& Wscheme, const IntegerVector index_survival_M1, const NumericVector threshold_M1, const std::vector< std::vector< arma::mat > >& list_survTimeC, const std::vector< std::vector< arma::mat > >& list_survTimeT, const std::vector< std::vector< arma::mat > >& list_survJumpC, const std::vector< std::vector< arma::mat > >& list_survJumpT, const std::vector< arma::mat >& list_lastSurv, const int correctionUninf, const bool neutralAsUninf, const bool keepScore);
RcppExport SEXP _BuyseTest_GPC_cpp(SEXP ControlSEXP, SEXP TreatmentSEXP, SEXP thresholdSEXP, SEXP methodSEXP, SEXP delta_ControlSEXP, SEXP delta_TreatmentSEXP, SEXP DSEXP, SEXP strataCSEXP, SEXP strataTSEXP, SEXP n_strataSEXP, SEXP n_TTESEXP, SEXP WschemeSEXP, SEXP index_survival_M1SEXP, SEXP threshold_M1SEXP, SEXP list_survTimeCSEXP, SEXP list_survTimeTSEXP, SEXP list_survJumpCSEXP, SEXP list_survJumpTSEXP, SEXP list_lastSurvSEXP, SEXP correctionUninfSEXP, SEXP neutralAsUninfSEXP, SEXP keepScoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Control(ControlSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Treatment(TreatmentSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type delta_Control(delta_ControlSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type delta_Treatment(delta_TreatmentSEXP);
    Rcpp::traits::input_parameter< const int >::type D(DSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::uvec >& >::type strataC(strataCSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::uvec >& >::type strataT(strataTSEXP);
    Rcpp::traits::input_parameter< const int >::type n_strata(n_strataSEXP);
    Rcpp::traits::input_parameter< const int >::type n_TTE(n_TTESEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wscheme(WschemeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type index_survival_M1(index_survival_M1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type threshold_M1(threshold_M1SEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector< arma::mat > >& >::type list_survTimeC(list_survTimeCSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector< arma::mat > >& >::type list_survTimeT(list_survTimeTSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector< arma::mat > >& >::type list_survJumpC(list_survJumpCSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::vector< arma::mat > >& >::type list_survJumpT(list_survJumpTSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::mat >& >::type list_lastSurv(list_lastSurvSEXP);
    Rcpp::traits::input_parameter< const int >::type correctionUninf(correctionUninfSEXP);
    Rcpp::traits::input_parameter< const bool >::type neutralAsUninf(neutralAsUninfSEXP);
    Rcpp::traits::input_parameter< const bool >::type keepScore(keepScoreSEXP);
    rcpp_result_gen = Rcpp::wrap(GPC_cpp(Control, Treatment, threshold, method, delta_Control, delta_Treatment, D, strataC, strataT, n_strata, n_TTE, Wscheme, index_survival_M1, threshold_M1, list_survTimeC, list_survTimeT, list_survJumpC, list_survJumpT, list_lastSurv, correctionUninf, neutralAsUninf, keepScore));
    return rcpp_result_gen;
END_RCPP
}
// calcIntegralScore_cpp
double calcIntegralScore_cpp(const arma::mat& survival, double start);
RcppExport SEXP _BuyseTest_calcIntegralScore_cpp(SEXP survivalSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type survival(survivalSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(calcIntegralScore_cpp(survival, start));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BuyseTest_GPC_cpp", (DL_FUNC) &_BuyseTest_GPC_cpp, 22},
    {"_BuyseTest_calcIntegralScore_cpp", (DL_FUNC) &_BuyseTest_calcIntegralScore_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_BuyseTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
