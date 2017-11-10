#include <vsr/vsr.h>
#include <gtest/gtest.h>

TEST(versor, math) {

  using Vec = vsr::euclidean_vector<3, float>;
  using Biv = vsr::euclidean_bivector<3, float>;

  auto v = Vec(1, 2, 3);

  v.rotate(Biv::xy * 0.25);
}
