#ifndef IOU3D_NMS_H
#define IOU3D_NMS_H

#include <torch/serialize/tensor.h>
#include <vector>
#include <cuda.h>
#include <cuda_runtime_api.h>

int boxes_overlap_bev_gpu(at::Tensor boxes_a, at::Tensor boxes_b, at::Tensor ans_overlap);
int boxes_iou_bev_gpu(at::Tensor boxes_a, at::Tensor boxes_b, at::Tensor ans_iou);
/**
 * @brief: 做非极大值抑制
 * @param: boxes,  按的分顺序排列的预测boexs  (N, 7) [x, y, z, dx, dy, dz, heading]
 * @param: keep    与boex[0]长度相同的一个随即数组  需要被改变
 * @param: nms_overlap_thresh 阈值参数此处为0.3
 *      
*/
int nms_gpu(at::Tensor boxes, at::Tensor keep, float nms_overlap_thresh);
int nms_normal_gpu(at::Tensor boxes, at::Tensor keep, float nms_overlap_thresh);

#endif
