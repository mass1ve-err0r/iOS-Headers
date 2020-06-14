//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber;
@protocol HKAxisLabelDataSource;

@interface HKAxisLabelCache : NSObject
{
    id <HKAxisLabelDataSource> _axisLabelDataSource;
    NSNumber *_axisLabelMaximumWidth;
    NSCache *_mainCache;
}

@property(retain, nonatomic) NSCache *mainCache; // @synthesize mainCache=_mainCache;
@property(readonly, nonatomic) NSNumber *axisLabelMaximumWidth; // @synthesize axisLabelMaximumWidth=_axisLabelMaximumWidth;
@property(nonatomic) __weak id <HKAxisLabelDataSource> axisLabelDataSource; // @synthesize axisLabelDataSource=_axisLabelDataSource;
- (void).cxx_destruct;
- (void)_handleTimeChangeNotification:(id)arg1;
- (void)invalidateCache;
- (void)enumerateAxisLabelsForTextInRange:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7 gridlineWidth:(double)arg8 timeScope:(long long)arg9 usingBlock:(CDUnknownBlockType)arg10;
- (id)allAxisLabelsForRange:(id)arg1 isHorizontal:(_Bool)arg2 zoomScale:(double)arg3 timeScope:(long long)arg4;
- (void)dealloc;
- (id)init;

@end

