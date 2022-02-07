#include <opencv2/ts.hpp>

#include "algo.hpp"

PERF_TEST(Roberts, ref)
{
    cv::Mat src(1080, 1920, CV_8UC1), dst;

    PERF_SAMPLE_BEGIN()
        roberts_reference(src, dst);
    PERF_SAMPLE_END()

    SANITY_CHECK_NOTHING();
}

PERF_TEST(Roberts, optimized)
{
    cv::Mat src(1080, 1920, CV_8UC1), dst;

    PERF_SAMPLE_BEGIN()
        roberts(src, dst);
    PERF_SAMPLE_END()

    SANITY_CHECK_NOTHING();
}
