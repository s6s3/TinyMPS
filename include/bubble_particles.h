// Copyright (c) 2017 Shota SUGIHARA
// Distributed under the MIT License.
#ifndef MPS_BUBBLE_PARTICLES_H_INCLUDED
#define MPS_BUBBLE_PARTICLES_H_INCLUDED

#include "particles.h"

namespace my_mps{

class BubbleParticles : public tiny_mps::Particles {
 public:
  BubbleParticles(const std::string& path, const tiny_mps::Condition& condition);
  BubbleParticles(const tiny_mps::Particles& other) = delete;
  BubbleParticles& operator=(const tiny_mps::Particles& other) = delete;
  virtual ~BubbleParticles() {};
  void writeVtkFile(const std::string& path, const std::string& title) const;
  void extendStorage(int extra_size);
  void setGhostParticle(int index);
 private:
  Eigen::VectorXd bubble_radius;
  
};

}

#endif // MPS_BUBBLE_PARTICLES_H_INCLUDED