#ifndef INDOORSLSAM_PERCEPTION_POINT_CLOUD2_H
#define INDOORSLSAM_PERCEPTION_POINT_CLOUD2_H

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

namespace slsam {
using Point2 = pcl::PointXY;
using PointCloud2 = pcl::PointCloud<Point2>;
} // namespace slsam

#endif // INDOORSLSAM_PERCEPTION_POINT_CLOUD2_H