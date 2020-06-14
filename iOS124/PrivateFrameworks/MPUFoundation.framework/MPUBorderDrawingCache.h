//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject
{
    MPUBorderView *_borderView;
    NSCache *_images;
    double _displayScale;
}

@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)_borderView;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)imageForBorderConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

