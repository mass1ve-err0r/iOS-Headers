//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSDBitmapRenderingQualityInfo : NSObject
{
    int mQuality;
    double mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property(readonly, nonatomic) double canvasScale; // @synthesize canvasScale=mCanvasScale;
@property(readonly, nonatomic) int quality; // @synthesize quality=mQuality;
- (struct CGImage *)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)doneCaching:(id)arg1 forProvider:(id)arg2;
- (double)qualityScaleForSize:(struct CGSize)arg1;
- (Class)imageMapValueClass;
- (void)dealloc;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end

