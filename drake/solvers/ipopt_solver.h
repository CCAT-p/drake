#pragma once

#include "drake/solvers/mathematical_program.h"

namespace drake {
namespace solvers {

class IpoptSolver : public MathematicalProgramSolverInterface {
 public:
  // This solver is implemented in various pieces depending on if
  // Ipopt was available during compilation.
  bool available() const override;
  SolutionResult Solve(MathematicalProgram& prog) const override;
};

}  // namespace solvers
}  // namespace drake
