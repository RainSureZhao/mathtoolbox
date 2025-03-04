#ifndef ACQUISITION_FUNCTIONS_HPP
#define ACQUISITION_FUNCTIONS_HPP

#include <Eigen/Core>
#include <functional>

namespace mathtoolbox
{
    double GetExpectedImprovement(const Eigen::VectorXd&                               x,
                                  const std::function<double(const Eigen::VectorXd&)>& mu,
                                  const std::function<double(const Eigen::VectorXd&)>& sigma,
                                  const Eigen::VectorXd&                               x_best);

    Eigen::VectorXd
    GetExpectedImprovementDerivative(const Eigen::VectorXd&                                        x,
                                     const std::function<double(const Eigen::VectorXd&)>&          mu,
                                     const std::function<double(const Eigen::VectorXd&)>&          sigma,
                                     const Eigen::VectorXd&                                        x_best,
                                     const std::function<Eigen::VectorXd(const Eigen::VectorXd&)>& mu_derivative,
                                     const std::function<Eigen::VectorXd(const Eigen::VectorXd&)>& sigma_derivative);
} // namespace mathtoolbox

#endif /* ACQUISITION_FUNCTIONS_HPP */
