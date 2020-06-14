/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

@interface MXCPUMetric : MXMetric {
    NSMeasurement * _cumulativeCPUTime;
}

@property (readonly) NSMeasurement *cumulativeCPUTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeCPUTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1;
- (id)toDictionary;

@end