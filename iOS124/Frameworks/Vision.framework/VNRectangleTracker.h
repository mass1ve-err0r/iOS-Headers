//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTracker.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNRectangleTracker : VNTracker
{
    NSMutableDictionary *_cornerTrackersImpl;
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;
}

+ (id)_trackingRectAroundPoint:(struct CGPoint)arg1 trackingRectSize:(struct CGSize)arg2;
+ (id)trackedCorners;
+ (Class)trackerObservationClass;
- (void).cxx_destruct;
- (id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id *)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;
- (_Bool)isTracking;
- (_Bool)reset:(id *)arg1;
- (id)trackInFrame:(id)arg1 error:(id *)arg2;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

