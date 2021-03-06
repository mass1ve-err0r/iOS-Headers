/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    long long  _frameRate;
    ARCircularArray * _mostRecentTimestamps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFrameRate:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldProcessData:(id)arg1;
- (bool)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
