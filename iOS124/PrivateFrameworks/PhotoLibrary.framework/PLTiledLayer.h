//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PhotoLibrary/PLTileableLayer-Protocol.h>

@class NSString;

@interface PLTiledLayer : CALayer <PLTileableLayer>
{
    struct CGSize _jpegImageSize;
}

@property(readonly, nonatomic) struct CGSize jpegImageSize; // @synthesize jpegImageSize=_jpegImageSize;
- (void)flushCache;
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2;
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage *)arg2 screenSize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
