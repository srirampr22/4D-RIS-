// SPDX-License-Identifier: BSD-2-Clause

#ifndef MAP_CLOUD_GENERATOR_HPP
#define MAP_CLOUD_GENERATOR_HPP

#include <vector>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <rrio/keyframe.hpp>

namespace rrio {

/**
 * @brief this class generates a map point cloud from registered keyframes
 */
class MapCloudGenerator {
public:
  using PointT = pcl::PointXYZI;

  MapCloudGenerator();
  ~MapCloudGenerator();

  /**
   * @brief generates a map point cloud
   * @param keyframes   snapshots of keyframes
   * @param resolution  resolution of generated map
   * @return generated map point cloud
   */
  pcl::PointCloud<PointT>::Ptr generate(const std::vector<KeyFrameSnapshot::Ptr>& keyframes, double resolution) const;
};

}  // namespace rrio

#endif  // MAP_POINTCLOUD_GENERATOR_HPP
