### test-iid-prodlim.R --- 
##----------------------------------------------------------------------
## Author: Brice Ozenne
## Created: apr  2 2019 (11:54) 
## Version: 
## Last-Updated: apr  2 2019 (13:17) 
##           By: Brice Ozenne
##     Update #: 8
##----------------------------------------------------------------------
## 
### Commentary: 
## 
### Change Log:
##----------------------------------------------------------------------
## 
### Code:

if(FALSE){
    library(testthat)
    library(BuyseTest)
    library(data.table)
}
context("Check the iid for prodlim")

library(riskRegression)
library(survival)

set.seed(10)
dt <- simBuyseTest(100)


test_that("iid with 1 strata variable", {
    e.prodlim <- prodlim(Hist(eventtime,status)~Treatment, data = dt)
    e.survival <- coxph(Surv(eventtime,status)~strata(Treatment), data = dt, x = TRUE, y = TRUE)

    iid.BT <- iidProdlim(e.prodlim)
    iid.RR <- iidCox(e.survival)
    iid.RR$IFsurvival <- list(t(predictCox(e.survival, newdata = dt[dt$Treatment == "C",][1], times = iid.RR$time[[1]], iid = TRUE)$survival.iid[1,,]),
                              t(predictCox(e.survival, newdata = dt[dt$Treatment == "T",][1], times = iid.RR$time[[2]], iid = TRUE)$survival.iid[1,,]))

    expect_equal(unname(iid.BT$IFhazard[[1]]), unname(iid.RR$IFhazard[[1]]))
    expect_equal(unname(iid.BT$IFhazard[[2]]), unname(iid.RR$IFhazard[[2]]))

    expect_equal(unname(iid.BT$IFcumhazard[[1]]), unname(iid.RR$IFcumhazard[[1]]))
    expect_equal(unname(iid.BT$IFcumhazard[[2]]), unname(iid.RR$IFcumhazard[[2]]))

    expect_equal(unname(iid.BT$IFsurvival[[1]]), unname(iid.RR$IFsurvival[[1]]))
    expect_equal(unname(iid.BT$IFsurvival[[2]]), unname(iid.RR$IFsurvival[[2]]))
})
## profvis::profvis(iidProdlim(e.prodlim))

test_that("iid with 2 strata variables", {
    e.prodlim <- prodlim(Hist(eventtime,status)~Treatment+toxicity, data = dt)
    e.survival <- coxph(Surv(eventtime,status)~strata(Treatment)+strata(toxicity), data = dt, x = TRUE, y = TRUE)

    iid.BT <- iidProdlim(e.prodlim)
    iid.RR <- iidCox(e.survival)
    iid.RR$IFsurvival <- list(t(predictCox(e.survival, newdata = dt[dt$Treatment == "C" & toxicity == 0,][1], times = iid.RR$time[[1]], iid = TRUE)$survival.iid[1,,]),
                              t(predictCox(e.survival, newdata = dt[dt$Treatment == "T" & toxicity == 0,][1], times = iid.RR$time[[2]], iid = TRUE)$survival.iid[1,,]))

    expect_equal(unname(iid.BT$IFhazard[[1]]), unname(iid.RR$IFhazard[[1]]))
    expect_equal(unname(iid.BT$IFhazard[[3]]), unname(iid.RR$IFhazard[[2]]))
    expect_equal(unname(iid.BT$IFhazard[[2]]), unname(iid.RR$IFhazard[[3]]))
    expect_equal(unname(iid.BT$IFhazard[[4]]), unname(iid.RR$IFhazard[[4]]))

    expect_equal(unname(iid.BT$IFcumhazard[[1]]), unname(iid.RR$IFcumhazard[[1]]))
    expect_equal(unname(iid.BT$IFcumhazard[[3]]), unname(iid.RR$IFcumhazard[[2]]))
    expect_equal(unname(iid.BT$IFcumhazard[[2]]), unname(iid.RR$IFcumhazard[[3]]))
    expect_equal(unname(iid.BT$IFcumhazard[[4]]), unname(iid.RR$IFcumhazard[[4]]))

})

######################################################################
### test-iid-prodlim.R ends here