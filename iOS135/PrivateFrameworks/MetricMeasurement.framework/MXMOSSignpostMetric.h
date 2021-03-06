/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

@interface MXMOSSignpostMetric : MXMMetric {
    NSDate * _startDate;
    NSDate * _stopDate;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly, copy) MXMInstrument *instrument;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subsystem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (bool)_shouldAlwaysWrapInProxy;
- (bool)_shouldConstructProbe;
- (bool)_shouldNeverWrapInProxy;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubsystem:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)name;
- (id)subsystem;

@end
